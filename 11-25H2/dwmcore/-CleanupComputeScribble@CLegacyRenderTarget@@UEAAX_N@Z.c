/*
 * XREFs of ?CleanupComputeScribble@CLegacyRenderTarget@@UEAAX_N@Z @ 0x180280D60
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMInkDeviceLost@@@details@wil@@QEAA_NXZ @ 0x1802507EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMInkDeviceLost@@@details@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::CleanupComputeScribble(CLegacyRenderTarget *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMInkDeviceLost>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_DWMInkDeviceLost>::GetImpl'::`2'::impl) )
  {
    v5 = *((_QWORD *)this + 5);
    if ( v5 )
    {
      LOBYTE(v4) = a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v5 + 256) + 48LL))(v5 + 256, v4);
    }
  }
}
