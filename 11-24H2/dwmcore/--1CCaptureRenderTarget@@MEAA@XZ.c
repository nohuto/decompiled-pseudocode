/*
 * XREFs of ??1CCaptureRenderTarget@@MEAA@XZ @ 0x18022010C
 * Callers:
 *     ??_GCCaptureRenderTarget@@MEAAPEAXI@Z @ 0x1802200C0 (--_GCCaptureRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ @ 0x180282CFC (--1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ @ 0x180157E14 (-ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@YAXPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV12@AEAV?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x18015A398 (--$_Destroy_range@V-$allocator@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@.c)
 *     ?ResetBuffers@CCaptureRenderTarget@@IEAAXXZ @ 0x18015A5F0 (-ResetBuffers@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAXPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x18015A6D0 (--$_Destroy_range@V-$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1801A513C (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2D80 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x180220DD4 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 *     ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022FFC4 (-RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 */

void __fastcall CCaptureRenderTarget::~CCaptureRenderTarget(CCaptureRenderTarget *this)
{
  CComposition *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rcx
  void **v6; // rcx
  void **v7; // rcx
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *v8; // rcx

  *(_QWORD *)this = &CCaptureRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CCaptureRenderTarget::`vftable'{for `IRenderTarget'};
  *((_QWORD *)this + 342) = &CCaptureRenderTarget::`vftable';
  CCaptureRenderTarget::SetController(this, 0LL);
  CCaptureRenderTarget::ReleaseFlipResources(this);
  CCaptureRenderTarget::ResetBuffers(this);
  CComposition::RemoveCursorVisualListener(v2, this);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
    (CCachedVisualImage **)this + 396,
    v3,
    v4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 394);
  v5 = (_QWORD *)*((_QWORD *)this + 390);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 392) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 390) = 0LL;
    *((_QWORD *)this + 391) = 0LL;
    *((_QWORD *)this + 392) = 0LL;
  }
  v6 = (void **)*((_QWORD *)this + 387);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>>(
      v6,
      *((void ***)this + 388));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 387),
      (*((_QWORD *)this + 389) - *((_QWORD *)this + 387)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 387) = 0LL;
    *((_QWORD *)this + 388) = 0LL;
    *((_QWORD *)this + 389) = 0LL;
  }
  v7 = (void **)*((_QWORD *)this + 384);
  if ( v7 )
  {
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>>(
      v7,
      *((void ***)this + 385));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 384),
      (*((_QWORD *)this + 386) - *((_QWORD *)this + 384)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 384) = 0LL;
    *((_QWORD *)this + 385) = 0LL;
    *((_QWORD *)this + 386) = 0LL;
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy((_QWORD *)this + 381);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 380);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 379);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 378);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 377);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 375);
  v8 = (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)*((_QWORD *)this + 371);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>(
      v8,
      *((CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair **)this + 372));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 371),
      8 * ((__int64)(*((_QWORD *)this + 373) - *((_QWORD *)this + 371)) >> 3));
    *((_QWORD *)this + 371) = 0LL;
    *((_QWORD *)this + 372) = 0LL;
    *((_QWORD *)this + 373) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 370);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>((CD3DDevice **)this + 343);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
