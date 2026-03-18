/*
 * XREFs of KiAdjustTimersAfterDripsExit @ 0x1405B6284
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1405B5B04 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KiAdjustTimerDueTimes @ 0x1403F908C (KiAdjustTimerDueTimes.c)
 *     KiSelectActiveTimerTable @ 0x140440290 (KiSelectActiveTimerTable.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall KiAdjustTimersAfterDripsExit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 active; // rdi
  unsigned __int8 CurrentIrql; // bl
  char v5; // [rsp+20h] [rbp-30h] BYREF
  __int16 v6; // [rsp+21h] [rbp-2Fh]
  char v7; // [rsp+23h] [rbp-2Dh]
  int v8; // [rsp+24h] [rbp-2Ch]
  __int128 v9; // [rsp+28h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-18h]
  char v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+41h] [rbp-Fh]

  v6 = 0;
  v7 = 0;
  v10 = 0LL;
  v12 = 0;
  if ( KiSerializeTimerExpiration )
  {
    v2 = a2 - KiClockTimerOneShotStartTime;
    v10 = v2;
    if ( v2 > 10000000LL * (unsigned int)KeTimerRebaseThresholdOnDripsExit )
    {
      KiAccumulatedDeepSleepTimerRebasing += v2;
      *(_QWORD *)(MmWriteableSharedUserData + 944) += v2;
      if ( MEMORY[0xFFFFF780000003B0] < 0 )
        __fastfail(5u);
      v10 = -v10;
      v5 = 1;
      v8 = 0;
      v9 = 0LL;
      v11 = 1;
      active = KiSelectActiveTimerTable(a1, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      KiAdjustTimerDueTimes((__int64)KeGetCurrentPrcb(), active, (__int64)&v5);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
}
