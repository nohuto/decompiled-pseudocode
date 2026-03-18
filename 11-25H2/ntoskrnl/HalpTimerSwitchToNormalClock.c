/*
 * XREFs of HalpTimerSwitchToNormalClock @ 0x1405447F4
 * Callers:
 *     HalpTimerClockArm @ 0x14028F320 (HalpTimerClockArm.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055C2C0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpTimerClockArm @ 0x14028F320 (HalpTimerClockArm.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeGetClockTimerResolution @ 0x1405B5130 (KeGetClockTimerResolution.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerSwitchToNormalClock(char a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 InternalData; // rax
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v7) = 0;
  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  CurrentPrcb = KeGetCurrentPrcb();
  InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
  guard_dispatch_icall_no_overrides(InternalData);
  CurrentPrcb->PendingTickFlags &= ~2u;
  if ( a1 )
  {
    KeGetClockTimerResolution(&v7, &v8, &v6);
    if ( !v6 )
      HalpTimerClockArm(0, (unsigned int)v7, &v7);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
