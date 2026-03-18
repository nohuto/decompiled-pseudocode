/*
 * XREFs of ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x180284150
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x180188D04 (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x180188E50 (-HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x18018A5E0 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802038FC (-reset@-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x1802330FC (-OnSwapChainCreated@COverlayContext@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ @ 0x1802781F0 (-ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ.c)
 *     ??1?$out_param_t@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18028412C (--1-$out_param_t@V-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_poli.c)
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacyStereoSwapChain@@@Z @ 0x1802B9C2C (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyStereoRenderTarget::EnsureSwapChain(CLegacyStereoRenderTarget *this)
{
  __int64 *v1; // r15
  __int64 v3; // rcx
  bool v4; // bl
  int v5; // eax
  unsigned int DXGIOutput; // esi
  unsigned int v7; // edx
  _QWORD *v8; // r14
  int Device; // eax
  __int16 v10; // cx
  char v11; // al
  struct IDXGIOutput *v12; // rcx
  __int64 *v13; // r14
  __int64 v14; // r14
  int v15; // r9d
  unsigned int v17; // [rsp+28h] [rbp-E0h]
  struct CD3DDevice *v18; // [rsp+48h] [rbp-C0h] BYREF
  struct IDXGIOutput *v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  char *v21; // [rsp+60h] [rbp-A8h] BYREF
  struct IDXGIOutputDWM *v22; // [rsp+68h] [rbp-A0h] BYREF
  char v23; // [rsp+70h] [rbp-98h]
  _BYTE v24[28]; // [rsp+78h] [rbp-90h] BYREF
  int v25; // [rsp+94h] [rbp-74h]
  int v26; // [rsp+98h] [rbp-70h]
  int v27; // [rsp+E4h] [rbp-24h]

  v1 = (__int64 *)((char *)this + 200);
  v3 = *((_QWORD *)this + 25);
  v4 = 0;
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 24) + 24LL))(v3 + 24);
    DXGIOutput = v5;
    if ( v5 >= 0 )
      return DXGIOutput;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032B9E8, 3u, v5, 0x1Au, 0LL);
    goto LABEL_25;
  }
  v7 = *((_DWORD *)this + 8274);
  v8 = (_QWORD *)((char *)this + 192);
  v21 = (char *)this + 192;
  v19 = 0LL;
  v18 = 0LL;
  v22 = 0LL;
  v23 = 1;
  DXGIOutput = CDisplayManager::GetDXGIOutput(0LL, v7, &v22);
  wil::details::out_param_t<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>((__int64)&v21);
  if ( (DXGIOutput & 0x80000000) != 0 )
  {
    v15 = DXGIOutput;
    v17 = 36;
    goto LABEL_24;
  }
  memset_0(v24, 0, 0xC8uLL);
  Device = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v8 + 32LL))(*v8, v24);
  DXGIOutput = Device;
  if ( Device < 0 )
  {
    v17 = 39;
    goto LABEL_18;
  }
  v10 = v27;
  *((_DWORD *)this + 30) = v25;
  *((_DWORD *)this + 31) = v26;
  v11 = HIBYTE(v10) & 1;
  *((_BYTE *)this + 33514) = (v10 & 8) != 0;
  v12 = v19;
  *((_BYTE *)this + 33513) = v11;
  *((_BYTE *)this + 33515) = 0;
  if ( v12 )
    ((void (__fastcall *)(struct IDXGIOutput *))v12->lpVtbl->Release)(v12);
  Device = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct IDXGIOutput **))*v8)(
             *v8,
             &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa,
             &v19);
  DXGIOutput = Device;
  if ( Device < 0 )
  {
    v17 = 49;
    goto LABEL_18;
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v18);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)((char *)this + 33104), &v18);
  DXGIOutput = Device;
  if ( Device < 0 )
  {
    v17 = 51;
    goto LABEL_18;
  }
  v13 = (__int64 *)((char *)this + 33520);
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::reset((__int64 *)this + 4190);
  Device = CD3DDevice::CreateLegacyStereoSwapChain(
             v18,
             v19,
             (const struct D2D_SIZE_U *)this + 15,
             (CLegacyStereoRenderTarget *)((char *)this + 128),
             (CLegacyStereoRenderTarget *)((char *)this + 33104),
             *((_DWORD *)this + 8275),
             (struct CLegacyStereoSwapChain **)this + 4190);
  DXGIOutput = Device;
  if ( Device < 0 )
  {
    v17 = 58;
    goto LABEL_18;
  }
  wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=(v1, *v13);
  CTargetStats::Reset(
    (CLegacyStereoRenderTarget *)((char *)this + 33128),
    *((_DWORD *)this + 8274),
    (struct IOverlaySwapChain *)((*v13 + 24) & -(__int64)(*v13 != 0)));
  COverlayContext::OnSwapChainCreated((CLegacyStereoRenderTarget *)((char *)this + 216));
  Device = CLegacyRenderTarget::HandleDDAArrivalOrDeparture((CLegacyStereoRenderTarget *)((char *)this + 160));
  DXGIOutput = Device;
  if ( Device < 0 )
  {
    v17 = 66;
LABEL_18:
    v15 = Device;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032B9E8, 3u, v15, v17, 0LL);
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v18);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
LABEL_25:
    if ( DXGIOutput == -2003304306 && *((_BYTE *)this + 33515) )
      *((_BYTE *)this + 33515) = 0;
    CLegacyStereoRenderTarget::ReleaseSwapChain((CLegacyStereoRenderTarget *)((char *)this + 160));
    return DXGIOutput;
  }
  *((_BYTE *)this + 33512) = 1;
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30768);
  v14 = *v13;
  if ( *(_QWORD *)(v14 + 288) )
  {
    v20 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v20);
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v14 + 288))(
           *(_QWORD *)(v14 + 288),
           &GUID_790a45f7_0d42_4876_983a_0a55cfe6f4aa,
           &v20) >= 0 )
      v4 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 184LL))(v20) != 0;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
  }
  *((_BYTE *)this + 33528) = v4;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  return DXGIOutput;
}
