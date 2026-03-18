/*
 * XREFs of ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1800BFAAC
 * Callers:
 *     ??_GCCaptureRenderTarget@@MEAAPEAXI@Z @ 0x1800BFA60 (--_GCCaptureRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ @ 0x18028E2B0 (--1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x1800BFD48 (-RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?ResetBuffers@CCaptureRenderTarget@@IEAAXXZ @ 0x1800FE7E8 (-ResetBuffers@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@YAXPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV12@AEAV?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x1800FEA94 (--$_Destroy_range@V-$allocator@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1800FF238 (-ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800FFFEC (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1801011AC (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801F9120 (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAXPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x18022C758 (--$_Destroy_range@V-$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@.c)
 */

void __fastcall CCaptureRenderTarget::~CCaptureRenderTarget(CCaptureRenderTarget *this)
{
  CCaptureController *v2; // rcx
  CComposition *v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *v7; // rcx

  *(_QWORD *)this = &CCaptureRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CCaptureRenderTarget::`vftable'{for `IRenderTarget'};
  *((_QWORD *)this + 342) = &CCaptureRenderTarget::`vftable';
  v2 = (CCaptureController *)*((_QWORD *)this + 345);
  *((_QWORD *)this + 345) = 0LL;
  if ( v2 )
    CCaptureController::RemoveRenderTarget(v2, this);
  CCaptureRenderTarget::ReleaseFlipResources(this);
  CCaptureRenderTarget::ResetBuffers(this);
  CComposition::RemoveCursorVisualListener(v3, this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 394);
  v4 = (_QWORD *)*((_QWORD *)this + 390);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 392) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 390) = 0LL;
    *((_QWORD *)this + 391) = 0LL;
    *((_QWORD *)this + 392) = 0LL;
  }
  v5 = *((_QWORD *)this + 387);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>>(
      v5,
      *((_QWORD *)this + 388));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 387),
      (*((_QWORD *)this + 389) - *((_QWORD *)this + 387)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 387) = 0LL;
    *((_QWORD *)this + 388) = 0LL;
    *((_QWORD *)this + 389) = 0LL;
  }
  v6 = *((_QWORD *)this + 384);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>>(
      v6,
      *((_QWORD *)this + 385));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 384),
      (*((_QWORD *)this + 386) - *((_QWORD *)this + 384)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 384) = 0LL;
    *((_QWORD *)this + 385) = 0LL;
    *((_QWORD *)this + 386) = 0LL;
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy((char *)this + 3048);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((char *)this + 3040);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 379);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 378);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((char *)this + 3016);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 375);
  v7 = (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)*((_QWORD *)this + 371);
  if ( v7 )
  {
    std::_Destroy_range<std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>(v7);
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 371),
      8 * ((__int64)(*((_QWORD *)this + 373) - *((_QWORD *)this + 371)) >> 3));
    *((_QWORD *)this + 371) = 0LL;
    *((_QWORD *)this + 372) = 0LL;
    *((_QWORD *)this + 373) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 370);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>((char *)this + 2744);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
