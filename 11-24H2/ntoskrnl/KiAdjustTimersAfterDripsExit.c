/*
 * XREFs of KiAdjustTimersAfterDripsExit @ 0x1405B76D8
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1405B6F84 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KiSelectActiveTimerTable @ 0x1404362A0 (KiSelectActiveTimerTable.c)
 *     KiAdjustTimerDueTimes @ 0x1404E0430 (KiAdjustTimerDueTimes.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiAdjustTimersAfterDripsExit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 active; // rdi
  __int64 v4; // r9
  unsigned __int8 CurrentIrql; // bl
  char v6; // [rsp+20h] [rbp-30h] BYREF
  __int16 v7; // [rsp+21h] [rbp-2Fh]
  char v8; // [rsp+23h] [rbp-2Dh]
  int v9; // [rsp+24h] [rbp-2Ch]
  __int128 v10; // [rsp+28h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-18h]
  char v12; // [rsp+40h] [rbp-10h]
  int v13; // [rsp+41h] [rbp-Fh]

  v7 = 0;
  v8 = 0;
  v11 = 0LL;
  v13 = 0;
  if ( KiSerializeTimerExpiration )
  {
    v2 = a2 - KiClockTimerOneShotStartTime;
    v11 = v2;
    if ( v2 > 10000000LL * (unsigned int)KeTimerRebaseThresholdOnDripsExit )
    {
      KiAccumulatedDeepSleepTimerRebasing += v2;
      *(_QWORD *)(MmWriteableSharedUserData + 944) += v2;
      if ( MEMORY[0xFFFFF780000003B0] < 0 )
        __fastfail(5u);
      v11 = -v11;
      v6 = 1;
      v9 = 0;
      v10 = 0LL;
      v12 = 1;
      active = KiSelectActiveTimerTable(a1, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      KiAdjustTimerDueTimes((__int64)KeGetCurrentPrcb(), active, (__int64)&v6, v4);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
}
