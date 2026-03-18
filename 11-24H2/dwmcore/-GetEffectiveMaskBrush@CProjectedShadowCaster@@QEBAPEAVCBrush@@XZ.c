/*
 * XREFs of ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ @ 0x180168620
 * Callers:
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x1801685A4 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801D2F10 (-ComputeShadowColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x1801D30B0 (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18021DC60 (-NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x18028F2E8 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

struct CBrush *__fastcall CProjectedShadowCaster::GetEffectiveMaskBrush(CProjectedShadowCaster *this)
{
  struct CBrush *result; // rax

  result = (struct CBrush *)*((_QWORD *)this + 17);
  if ( !result )
    return *(struct CBrush **)(*((_QWORD *)this + 3) + 728LL);
  return result;
}
