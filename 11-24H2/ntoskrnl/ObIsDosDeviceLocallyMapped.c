/*
 * XREFs of ObIsDosDeviceLocallyMapped @ 0x140742100
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 */

__int64 __fastcall ObIsDosDeviceLocallyMapped(int a1, bool *a2)
{
  __int64 v2; // rsi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *v6; // rbp
  signed __int64 *p_Blink; // rbx
  char *v8; // rdi

  v2 = (unsigned int)(a1 - 1);
  if ( (unsigned int)v2 > 0x19 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentServerSiloGlobals;
  p_Blink = (signed __int64 *)&CurrentServerSiloGlobals[7].Blink;
  --CurrentThread->SpecialApcDisable;
  v8 = (char *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[7].Blink, 0LL);
  if ( _InterlockedCompareExchange64(p_Blink, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(p_Blink, 0, v8, (__int64)p_Blink);
  if ( v8 )
    v8[10] = 1;
  *a2 = *((_DWORD *)&v6->Blink + v2 + 1) != 0;
  if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Blink);
  KeAbPostRelease((ULONG_PTR)p_Blink);
  KeLeaveGuardedRegion();
  return 0LL;
}
