/*
 * XREFs of InlineIsEqualGUID @ 0x180023514
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIGraphicsEffectSource@Effects@Graphics@Windows@@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180023400 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIGraphicsEffectSource@.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180023470 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180110C20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakRefe.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall InlineIsEqualGUID(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
