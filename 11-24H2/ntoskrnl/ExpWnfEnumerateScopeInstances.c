/*
 * XREFs of ExpWnfEnumerateScopeInstances @ 0x140A60D58
 * Callers:
 *     NtDeleteWnfStateName @ 0x140900ED0 (NtDeleteWnfStateName.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExpWnfEnumerateScopeInstances(unsigned int a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v4; // rbp
  __int64 v5; // rax
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v7; // rdx
  signed __int64 *v8; // rdi
  struct _EX_RUNDOWN_REF **v9; // r14
  char *v10; // rbx
  struct _EX_RUNDOWN_REF *Count; // rbx

  v2 = a1;
  v4 = 0LL;
  if ( a1 - 4 > 1 )
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  }
  else
  {
    v5 = PdcCreateWatchdogAroundClientCall();
    CurrentServerSiloGlobals = PsGetServerSiloGlobals(v5);
  }
  v7 = CurrentServerSiloGlobals[110];
  if ( !v7 )
    return 0LL;
  v8 = (signed __int64 *)(v7 + 8 * (3 * v2 + 4));
  v9 = (struct _EX_RUNDOWN_REF **)(v7 + 8 * (3 * v2 + 5));
  v10 = (char *)KeAbPreAcquire((__int64)v8, 0LL);
  if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v8, 0, v10, (__int64)v8);
  if ( v10 )
    v10[10] = 1;
  if ( !a2 || (Count = (struct _EX_RUNDOWN_REF *)a2[4].Count) == 0LL )
    Count = *v9;
  while ( Count != (struct _EX_RUNDOWN_REF *)v9 )
  {
    v4 = Count - 4;
    if ( ExAcquireRundownProtection_0(Count - 3) )
      break;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    v4 = 0LL;
  }
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  if ( a2 )
    ExReleaseRundownProtection_0(a2 + 1);
  return v4;
}
