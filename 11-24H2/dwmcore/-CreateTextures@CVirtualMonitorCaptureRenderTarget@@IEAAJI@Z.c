/*
 * XREFs of ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z @ 0x180282D80
 * Callers:
 *     ?ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA@@@Z @ 0x180282FA4 (-ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRT.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x180158D0C (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 *     ?push_back@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x180225C60 (-push_back@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::CreateTextures(
        CVirtualMonitorCaptureRenderTarget *this,
        unsigned int a2)
{
  unsigned int v4; // ebx
  struct CD3DDevice *D3DDeviceNoRef; // rax
  __int64 *v6; // r14
  unsigned int i; // edi
  int v8; // eax
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64 *, _DWORD *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+38h] [rbp-19h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-11h] BYREF
  void *v18; // [rsp+48h] [rbp-9h] BYREF
  void *v19; // [rsp+50h] [rbp-1h] BYREF
  _DWORD v20[12]; // [rsp+58h] [rbp+7h] BYREF

  v4 = 0;
  *((_QWORD *)this + 344) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(*((_QWORD *)this + 3)
                                                                                                + 664LL)
                                                                                  + 40LL))(
                                         *(_QWORD *)(*((_QWORD *)this + 3) + 664LL),
                                         &v18);
  D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef(this);
  if ( D3DDeviceNoRef )
  {
    v6 = (__int64 *)*((_QWORD *)D3DDeviceNoRef + 69);
    for ( i = 0; ; ++i )
    {
      if ( i >= a2 )
        return v4;
      v8 = *((_DWORD *)this + 799);
      v17 = 0LL;
      v19 = 0LL;
      v16 = 0LL;
      v20[6] = 0;
      v20[7] = 0;
      v20[9] = 0;
      v20[0] = v8;
      v20[1] = *((_DWORD *)this + 800);
      v9 = *v6;
      v20[2] = 1;
      v20[3] = 1;
      v20[4] = 87;
      v10 = *(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v9 + 40);
      v20[5] = 1;
      v20[8] = 40;
      v20[10] = 2050;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v17);
      v11 = v10(v6, v20, 0LL, &v17);
      v4 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x90u, 0LL);
        goto LABEL_13;
      }
      v12 = v16;
      v16 = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v13 = (**v17)(v17, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, &v16);
      v4 = v13;
      if ( v13 < 0 )
        break;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v16 + 104LL))(
              v16,
              0LL,
              0x10000000LL,
              0LL,
              &v19);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x93u, 0LL);
LABEL_13:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
        return v4;
      }
      v18 = v19;
      std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::push_back(
        (void ***)this + 384,
        &v18);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v18);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x92u, 0LL);
    goto LABEL_13;
  }
  return v4;
}
