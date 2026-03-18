/*
 * XREFs of HalRequestSoftwareInterrupt @ 0x14028F270
 * Callers:
 *     KeUpdateTotalCyclesCurrentThread @ 0x14028E760 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiEndInterruptCycleAccumulation @ 0x14028EFB0 (KiEndInterruptCycleAccumulation.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140318A40 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiStartThreadCycleAccumulation @ 0x14031AC90 (KiStartThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E5570 (KeQueryTotalCycleTimeThread.c)
 *     SwapContext @ 0x1406A7870 (SwapContext.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 */

__int64 __fastcall HalRequestSoftwareInterrupt(char a1)
{
  char v1; // r8
  bool v2; // al
  __int64 v3; // r10
  int v4; // r9d
  bool v5; // r11
  unsigned int v6; // edx
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+24h] [rbp-24h]

  v1 = a1;
  v9 = 0LL;
  if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
  {
    if ( (unsigned __int8)(a1 - 1) > 1u )
      goto LABEL_8;
    v2 = HalpDisableInterrupts();
    v4 = *(_DWORD *)(v3 + 168);
    v5 = v2;
    *(_DWORD *)(v3 + 168) = v4 | (1 << v1);
    if ( !v4 )
      __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
    if ( v5 )
      _enable();
  }
  if ( v1 == 1 )
  {
    v6 = 31;
    goto LABEL_9;
  }
LABEL_8:
  v6 = 47;
LABEL_9:
  v8 = 5;
  return HalpInterruptSendIpi(&v8, v6);
}
