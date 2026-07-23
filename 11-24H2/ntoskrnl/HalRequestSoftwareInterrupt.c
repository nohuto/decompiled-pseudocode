/*
 * XREFs of HalRequestSoftwareInterrupt @ 0x140369040
 * Callers:
 *     KiEndInterruptCycleAccumulation @ 0x140368D80 (KiEndInterruptCycleAccumulation.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x1403693A0 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140369BE0 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiStartThreadCycleAccumulation @ 0x14036D230 (KiStartThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036D540 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E03C0 (KeQueryTotalCycleTimeThread.c)
 *     SwapContext @ 0x1406B3AE0 (SwapContext.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 */

__int64 __fastcall HalRequestSoftwareInterrupt(char a1)
{
  char v1; // r8
  bool v2; // al
  __int64 v3; // r10
  int v4; // r9d
  bool v5; // r11
  unsigned int v6; // edx
  unsigned int v8; // [rsp+20h] [rbp-28h] BYREF
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
