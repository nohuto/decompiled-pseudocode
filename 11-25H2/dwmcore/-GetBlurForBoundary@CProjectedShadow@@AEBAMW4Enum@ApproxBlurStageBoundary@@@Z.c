/*
 * XREFs of ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x180231510
 * Callers:
 *     ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x18011B3C0 (-ComputeShadowColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x18011C3F0 (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801A05AC (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CProjectedShadow::GetBlurForBoundary(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx

  if ( !a2 )
    return *(float *)(a1 + 384) * 0.5;
  v2 = a2 - 1;
  if ( !v2 )
    return *(float *)(a1 + 384);
  v3 = v2 - 1;
  if ( !v3 )
    return *(float *)(a1 + 384) + *(float *)(a1 + 384);
  if ( v3 == 1 )
    return *(float *)(a1 + 384) * 3.0;
  return 0.0;
}
