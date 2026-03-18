/*
 * XREFs of ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x180158BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x180158D0C (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180158D2C (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1801594EC (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NXZ @ 0x180244CF8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::CheckOcclusionState(CCaptureRenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  char v4; // si
  struct CD3DDevice *D3DDeviceNoRef; // r14
  __int64 v6; // rcx
  char v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v2 = 142213121;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45522024>::GetImpl'::`2'::impl)
    || (v3 = *((_QWORD *)this + 333)) == 0
    || *(_QWORD *)(v3 + 128) == *(_QWORD *)(v3 + 136) )
  {
    if ( !*((_BYTE *)this + 3064) || (v4 = 1, *((_DWORD *)g_pComposition + 1615)) )
      v4 = 0;
    D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef((CCaptureRenderTarget *)((char *)this - 96));
    if ( !v4 )
    {
      v6 = *((_QWORD *)this + 366);
      if ( v6 )
      {
        if ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 24LL))(v6, &v8) >= 0
          && v8
          && D3DDeviceNoRef
          && *((_QWORD *)this + 2)
          && *((_QWORD *)this + 373) != *((_QWORD *)this + 372)
          && *((_QWORD *)this + 366)
          && *((_BYTE *)this + 2845)
          && (int)CCaptureRenderTarget::EnsureResources((CCaptureRenderTarget *)((char *)this - 96), D3DDeviceNoRef) >= 0
          && (int)CCaptureRenderTarget::GetNextBufferIndexAvailable((CCaptureRenderTarget *)((char *)this - 96)) >= 0 )
        {
          return 0;
        }
      }
    }
  }
  return v2;
}
