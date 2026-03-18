/*
 * XREFs of ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x18018AB78
 * Callers:
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x18018AAE4 (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessSetDesktopTree@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_SETDESKTOPTREE@@@Z @ 0x18027EA48 (-ProcessSetDesktopTree@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERT.c)
 *     ?ProcessSetDesktopTree@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_SETDESKTOPTREE@@@Z @ 0x18027F58C (-ProcessSetDesktopTree@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYREN.c)
 *     ?ProcessSetDesktopTree@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_SETDESKTOPTREE@@@Z @ 0x1802805B4 (-ProcessSetDesktopTree@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERT.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x180284C3C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x18018A498 (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vli.c)
 *     ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x18018BA8C (-ReleaseVisualTree@CRenderTarget@@IEAAXXZ.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x18018E67C (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTarget::SetVisualTree(CRenderTarget *this, struct CVisualTree *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi

  if ( a2 != *((struct CVisualTree **)this + 14) )
  {
    CRenderTarget::ReleaseVisualTree(this);
    v4 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = *((_QWORD *)this + 14);
    if ( v5 )
    {
      *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                   (const void **)(v5 + 2448),
                   (__int64)(*(_QWORD *)(v5 + 2456) - *(_QWORD *)(v5 + 2448)) >> 3) = ((unsigned __int64)this + 88) & -(__int64)(this != 0LL);
      *(_BYTE *)(v5 + 2628) = 1;
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(
        (char *)this + 104,
        *(_QWORD *)(*((_QWORD *)this + 14) + 72LL));
    }
    (*(void (__fastcall **)(CRenderTarget *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 12) + 48LL))((char *)this + 96);
  }
}
