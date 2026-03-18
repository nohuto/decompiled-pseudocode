/*
 * XREFs of RtlIsPatchMachineApplicable @ 0x14081F62C
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x1407E1334 (MiApplyHotPatchToDriver.c)
 *     MiHotPatchProcess @ 0x1407E2E80 (MiHotPatchProcess.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A1DD10 (MiFindProcessImageHotPatchRecord.c)
 *     MiFindHotPatchRecord @ 0x140A5618C (MiFindHotPatchRecord.c)
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
