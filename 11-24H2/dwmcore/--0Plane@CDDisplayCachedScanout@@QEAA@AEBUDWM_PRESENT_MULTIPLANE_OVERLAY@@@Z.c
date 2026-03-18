/*
 * XREFs of ??0Plane@CDDisplayCachedScanout@@QEAA@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x18006890C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAPEAUPlane@CDDisplayCachedScanout@@QEAU23@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180068690 (--$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@UPlane@CDDisplayCachedScano.c)
 *     ?Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180068B68 (-Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Cor.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x180212E08 (--4-$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags@@@details@wil@@QEAA_NXZ @ 0x1802CE0FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags@@@detai.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CDDisplayCachedScanout::Plane *__fastcall CDDisplayCachedScanout::Plane::Plane(
        CDDisplayCachedScanout::Plane *this,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a2)
{
  int v2; // esi
  __int64 *v3; // r14
  _DWORD *v4; // r15
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = 0;
  v3 = (__int64 *)((char *)this + 8);
  *(_DWORD *)this = 0;
  v4 = (_DWORD *)((char *)this + 16);
  *((_BYTE *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *(_OWORD *)((char *)this + 20) = 0LL;
  *(_OWORD *)((char *)this + 36) = 0LL;
  *(_OWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *(_QWORD *)((char *)this + 76) = 1LL;
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags>::GetImpl'::`2'::impl) )
  {
    if ( *((_BYTE *)this + 4) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)a2 + 1) + 48LL))(*((_QWORD *)a2 + 1), v4);
      wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurface,wil::err_returncode_policy>::operator=(v3, v7);
      *(_OWORD *)((char *)this + 20) = *(_OWORD *)((char *)a2 + 20);
      *(_OWORD *)((char *)this + 36) = *(_OWORD *)((char *)a2 + 36);
      *(_OWORD *)((char *)this + 52) = *(_OWORD *)((char *)a2 + 52);
      *((_DWORD *)this + 17) = *((_DWORD *)a2 + 18);
      *((_DWORD *)this + 18) = *((_DWORD *)a2 + 23);
      *((_DWORD *)this + 19) = *((_DWORD *)a2 + 17);
      v2 = *((_DWORD *)a2 + 4);
    }
    else
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v3);
      *v4 = 0;
      *(_QWORD *)((char *)this + 68) = 0LL;
      *(_OWORD *)((char *)this + 20) = 0LL;
      *((_DWORD *)this + 19) = 1;
      *(_OWORD *)((char *)this + 36) = 0LL;
      *(_OWORD *)((char *)this + 52) = 0LL;
    }
    *((_DWORD *)this + 20) = v2;
  }
  else
  {
    if ( *((_BYTE *)this + 4) )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)a2 + 1) + 48LL))(*((_QWORD *)a2 + 1), v4);
      wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurface,wil::err_returncode_policy>::operator=(v3, v8);
    }
    else
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v3);
      *v4 = 0;
    }
    *(_OWORD *)((char *)this + 20) = *(_OWORD *)((char *)a2 + 20);
    *(_OWORD *)((char *)this + 36) = *(_OWORD *)((char *)a2 + 36);
    *(_OWORD *)((char *)this + 52) = *(_OWORD *)((char *)a2 + 52);
    *((_DWORD *)this + 17) = *((_DWORD *)a2 + 18);
    *((_DWORD *)this + 18) = *((_DWORD *)a2 + 23);
  }
  return this;
}
