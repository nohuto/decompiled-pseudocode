/*
 * XREFs of KeWriteProtectProcessorState @ 0x140B587C0
 * Callers:
 *     MakeGdtReadOnly @ 0x140537688 (MakeGdtReadOnly.c)
 *     KiDynamicProcessorInitialization @ 0x1405B3EBC (KiDynamicProcessorInitialization.c)
 * Callees:
 *     MmSetPageProtection @ 0x1404D0140 (MmSetPageProtection.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     VslFinishStartSecureProcessor @ 0x14058A25C (VslFinishStartSecureProcessor.c)
 *     KiShadowProcessorAllocation @ 0x140B5CA8C (KiShadowProcessorAllocation.c)
 */

char __fastcall KeWriteProtectProcessorState(__int64 *a1)
{
  __int64 v1; // rsi
  bool v3; // bl
  int v4; // eax

  v1 = *a1;
  v3 = VslVsmEnabled != 0;
  LOBYTE(v4) = MmSetPageProtection(a1[7], 4096LL, 2u);
  if ( v3 )
  {
    LOBYTE(v4) = MmSetPageProtection(v1 & 0xFFFFFFFFFFFFF000uLL, 4096LL, 2u);
    if ( KiKvaShadow )
      LOBYTE(v4) = MmSetPageProtection(a1[1], 4096LL, 2u);
  }
  if ( !*((_DWORD *)a1 + 105) )
  {
    v4 = KiShadowProcessorAllocation(a1 + 48, v1 - 12208, 0LL);
    if ( !v4 )
      KeBugCheck(0x7Du);
  }
  if ( VslVsmEnabled )
    LOBYTE(v4) = VslFinishStartSecureProcessor((__int64)(a1 + 48), (struct _MDL *)a1[4648]);
  return v4;
}
