/*
 * XREFs of ?RemoveExcludedTargetVisual@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x18028F680
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x18019EB44 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 */

void __fastcall CCompositionLight::RemoveExcludedTargetVisual(CCompositionLight *this, struct CVisual *a2)
{
  struct CVisual *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  DynArray<CChannelContext *,1>::Remove((__int64 *)this + 16, &v2);
}
