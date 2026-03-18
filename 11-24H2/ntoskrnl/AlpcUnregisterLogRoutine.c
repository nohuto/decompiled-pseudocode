/*
 * XREFs of AlpcUnregisterLogRoutine @ 0x1407426A4
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1408E9BB0 (EtwpDisableKernelTrace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 AlpcUnregisterLogRoutine()
{
  unsigned int v0; // edi
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rbx
  __int64 (__fastcall **i)(__int64, int); // rcx
  __int64 (__fastcall *v5)(__int64, int); // rax
  __int64 (__fastcall ***v6)(__int64, int); // rdx

  v0 = -1073741275;
  v1 = KeAbPreAcquire((__int64)&AlpcpLogLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpLogLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&AlpcpLogLock, (__int64)v1, (__int64)&AlpcpLogLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  for ( i = (__int64 (__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
        i != (__int64 (__fastcall **)(__int64, int))&AlpcpLogCallbackListHead;
        i = (__int64 (__fastcall **)(__int64, int))*i )
  {
    v5 = *i;
    if ( i[2] == EtwpTraceALPC )
    {
      if ( *((__int64 (__fastcall ***)(__int64, int))v5 + 1) != i
        || (v6 = (__int64 (__fastcall ***)(__int64, int))i[1], *v6 != i) )
      {
        __fastfail(3u);
      }
      *v6 = (__int64 (__fastcall **)(__int64, int))v5;
      *((_QWORD *)v5 + 1) = v6;
      ExFreePoolWithTag(i, 0);
      v0 = 0;
      break;
    }
  }
  AlpcpLogEnabled = AlpcpLogCallbackListHead != &AlpcpLogCallbackListHead;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v0;
}
