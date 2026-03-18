/*
 * XREFs of AlpcRegisterLogRoutine @ 0x14073655C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1408DA1EC (EtwpEnableKernelTrace.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 AlpcRegisterLogRoutine()
{
  __int64 Pool2; // rax
  unsigned int v1; // edi
  _QWORD *v2; // rbx
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rsi
  __int64 (__fastcall **i)(__int64, int); // rax
  _QWORD *v8; // rax

  Pool2 = ExAllocatePool2(0x100uLL);
  v1 = 0;
  v2 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 16) = EtwpTraceALPC;
  v4 = KeAbPreAcquire((__int64)&AlpcpLogLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpLogLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&AlpcpLogLock, v4, (__int64)&AlpcpLogLock);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  for ( i = (__int64 (__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
        i != (__int64 (__fastcall **)(__int64, int))&AlpcpLogCallbackListHead;
        i = (__int64 (__fastcall **)(__int64, int))*i )
  {
    if ( i[2] == EtwpTraceALPC )
    {
      ExFreePoolWithTag(v2, 0);
      v1 = -1073740008;
      goto LABEL_15;
    }
  }
  v8 = off_140E07478;
  if ( *off_140E07478 != (_UNKNOWN *)&AlpcpLogCallbackListHead )
    __fastfail(3u);
  *v2 = &AlpcpLogCallbackListHead;
  v2[1] = v8;
  *v8 = v2;
  off_140E07478 = (_UNKNOWN **)v2;
  AlpcpLogEnabled = 1;
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v1;
}
