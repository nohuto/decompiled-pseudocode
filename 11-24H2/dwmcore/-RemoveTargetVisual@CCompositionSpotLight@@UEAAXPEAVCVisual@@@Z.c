/*
 * XREFs of ?RemoveTargetVisual@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x1802988F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x18019EB44 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 */

void __fastcall CCompositionSpotLight::RemoveTargetVisual(CCompositionSpotLight *this, struct CVisual *a2)
{
  struct CVisual *v3; // [rsp+30h] [rbp+8h] BYREF
  struct CVisual *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = a2;
  DynArray<CChannelContext *,1>::Remove((__int64 *)this + 11, &v3);
  DynArray<CChannelContext *,1>::Remove((__int64 *)this + 32, &v4);
}
