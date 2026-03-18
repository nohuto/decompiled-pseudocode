/*
 * XREFs of HalpTimerSwitchToNormalClock @ 0x1405470E4
 * Callers:
 *     HalpTimerClockArm @ 0x1403BC1E0 (HalpTimerClockArm.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055EBC0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpTimerClockArm @ 0x1403BC1E0 (HalpTimerClockArm.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeGetClockTimerResolution @ 0x1405B8F70 (KeGetClockTimerResolution.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerSwitchToNormalClock(char a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 InternalData; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  char v11; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v10) = 0;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  CurrentPrcb = KeGetCurrentPrcb();
  InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
  guard_dispatch_icall_no_overrides(InternalData, v5, v6, v7);
  CurrentPrcb->PendingTickFlags &= ~2u;
  if ( a1 )
  {
    KeGetClockTimerResolution(&v10, &v11, &v9);
    if ( !v9 )
      HalpTimerClockArm(0, (unsigned int)v10, &v10);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
