/*
 * XREFs of ObIsDosDeviceLocallyMapped @ 0x1407441D0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ObIsDosDeviceLocallyMapped(int a1, bool *a2)
{
  __int64 v2; // rsi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *v6; // rbp
  signed __int64 *p_Blink; // rbx
  _QWORD *v8; // rdi

  v2 = (unsigned int)(a1 - 1);
  if ( (unsigned int)v2 > 0x19 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentServerSiloGlobals;
  p_Blink = (signed __int64 *)&CurrentServerSiloGlobals[7].Blink;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[7].Blink, 0LL);
  if ( _InterlockedCompareExchange64(p_Blink, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(p_Blink, 0, v8, (__int64)p_Blink);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  *a2 = *((_DWORD *)&v6->Blink + v2 + 1) != 0;
  if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Blink);
  KeAbPostRelease((ULONG_PTR)p_Blink);
  KeLeaveGuardedRegion();
  return 0LL;
}
