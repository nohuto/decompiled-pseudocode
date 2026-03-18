/*
 * XREFs of ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x180100414
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1800C38AC (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?ResetBuffers@CCaptureRenderTarget@@IEAAXXZ @ 0x1800FE7E8 (-ResetBuffers@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1800FF238 (-ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x180233774 (-ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 *     ?NotifyInvalidResource@CCaptureRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802828E0 (-NotifyInvalidResource@CCaptureRenderTarget@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA@@@Z @ 0x18028E558 (-ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRT.c)
 *     ?ProcessBoundsInMonitor@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BOUNDSINMONITOR@@@Z @ 0x18028E6BC (-ProcessBoundsInMonitor@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILC.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180100540 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180100E78 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 *     ??$_Destroy_range@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAXPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x18022C758 (--$_Destroy_range@V-$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCaptureRenderTarget::ReleaseRenderingResources(CCaptureRenderTarget *this)
{
  __int64 v2; // rcx
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // r8

  (*(void (__fastcall **)(CCaptureRenderTarget *))(*(_QWORD *)this + 264LL))(this);
  std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 3096);
  if ( *((_QWORD *)this + 378) )
  {
    v4 = 0;
    if ( (__int64)(*((_QWORD *)this + 382) - *((_QWORD *)this + 381)) >> 3 )
    {
      v5 = 0LL;
      do
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 378) + 56LL))(
          *((_QWORD *)this + 378),
          *(_QWORD *)(*((_QWORD *)this + 384) + 8 * v5));
        v5 = ++v4;
      }
      while ( v4 < (unsigned __int64)((__int64)(*((_QWORD *)this + 382) - *((_QWORD *)this + 381)) >> 3) );
    }
  }
  if ( *((_QWORD *)this + 381) != *((_QWORD *)this + 382) )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>();
    *((_QWORD *)this + 382) = *((_QWORD *)this + 381);
  }
  v2 = *((_QWORD *)this + 371);
  if ( 0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)this + 372) - v2) >> 3) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 8) + 80LL))(
      *(_QWORD *)(v2 + 8),
      ((unsigned __int64)this + 2736) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    v3 = (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)*((_QWORD *)this + 371);
    if ( v3 != *((CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair **)this + 372) )
    {
      std::_Destroy_range<std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>(v3);
      *((_QWORD *)this + 372) = *((_QWORD *)this + 371);
    }
  }
  *((_DWORD *)this + 748) = -1;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 375);
  *((_QWORD *)this + 376) = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((CD3DDevice **)this + 343);
}
