/*
 * XREFs of ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x14012E030
 * Callers:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x14012DAC0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x14012DDE0 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CPropertySetMarshaler@DirectComposition@@MEAA_NXZ @ 0x14012DE10 (-SetRemarshalingFlags@CPropertySetMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NXZ @ 0x14012DEA0 (-SetRemarshalingFlags@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CAnimationControllerMarshaler@DirectComposition@@UEAA_NXZ @ 0x14012DFC0 (-SetRemarshalingFlags@CAnimationControllerMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CAnimationTriggerMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022B850 (-SetRemarshalingFlags@CAnimationTriggerMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BB70 (-SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRotateTransform3DMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022BF50 (-SetRemarshalingFlags@CRotateTransform3DMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRotateTransformMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C030 (-SetRemarshalingFlags@CRotateTransformMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CScaleTransform3DMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C0A0 (-SetRemarshalingFlags@CScaleTransform3DMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CScaleTransformMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C170 (-SetRemarshalingFlags@CScaleTransformMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSkewTransformMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C520 (-SetRemarshalingFlags@CSkewTransformMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTransform3DGroupMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C780 (-SetRemarshalingFlags@CTransform3DGroupMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTranslateTransformMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C7D0 (-SetRemarshalingFlags@CTranslateTransformMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CMatrixTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x140230C80 (-SetRemarshalingFlags@CMatrixTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CManipulationTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1402310C0 (-SetRemarshalingFlags@CManipulationTransformMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1402311A0 (-SetRemarshalingFlags@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CDropShadowMarshaler@DirectComposition@@UEAA_NXZ @ 0x140235F10 (-SetRemarshalingFlags@CDropShadowMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProjectedShadowCasterMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238430 (-SetRemarshalingFlags@CProjectedShadowCasterMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238670 (-SetRemarshalingFlags@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProjectedShadowSceneMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402388A0 (-SetRemarshalingFlags@CProjectedShadowSceneMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x14012E080 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(
        DirectComposition::CPropertyChangeResourceMarshaler *this)
{
  char v1; // di
  _DWORD *v2; // rbx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 16) )
    *v2 |= 0x40u;
  if ( DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this) || (*v2 & 0x40) != 0 )
    return 1;
  return v1;
}
