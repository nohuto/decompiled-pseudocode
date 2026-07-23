/*
 * XREFs of AlpcUnregisterLogRoutine @ 0x1407405D4
 * Callers:
 *     EtwpDisableKernelTrace @ 0x14085B3E0 (EtwpDisableKernelTrace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 AlpcUnregisterLogRoutine()
{
  unsigned int v0; // edi
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rbx
  __int64 (__fastcall **i)(__int64, int); // rcx
  __int64 (__fastcall *v5)(__int64, int); // rax
  __int64 (__fastcall ***v6)(__int64, int); // rdx

  v0 = -1073741275;
  v1 = (char *)KeAbPreAcquire((__int64)&AlpcpLogLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpLogLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&AlpcpLogLock, v1, (__int64)&AlpcpLogLock);
  if ( v3 )
    v3[10] = 1;
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
