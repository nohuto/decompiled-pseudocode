/*
 * XREFs of ?UpdateInterpolationMode@CCommonRenderingEffect@@UEAAXW4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800E0B00
 * Callers:
 *     <none>
 * Callees:
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800E0B30 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 */

void __fastcall CCommonRenderingEffect::UpdateInterpolationMode(CCommonRenderingEffect *this, unsigned int a2)
{
  char v2; // al
  __int64 v3; // r8

  v2 = InterpolationMode::FromD2D1InterpolationMode(a2);
  *(_BYTE *)(v3 + 64) = v2;
  *(_BYTE *)(v3 + 67) = v2;
}
