/*
 * XREFs of RtlIsPatchMachineApplicable @ 0x14082FB64
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x1407F17A4 (MiApplyHotPatchToDriver.c)
 *     MiHotPatchProcess @ 0x1407F32D8 (MiHotPatchProcess.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A26708 (MiFindProcessImageHotPatchRecord.c)
 *     MiFindHotPatchRecord @ 0x140A4EF38 (MiFindHotPatchRecord.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlIsPatchMachineApplicable(int a1, unsigned int a2)
{
  if ( a1 == 332 )
    return a2 & 1;
  if ( a1 != 34404 )
  {
    if ( a1 != 43620 )
      return 0;
    a2 >>= 2;
    return a2 & 1;
  }
  return (a2 & 2) != 0 || (a2 & 8) != 0;
}
