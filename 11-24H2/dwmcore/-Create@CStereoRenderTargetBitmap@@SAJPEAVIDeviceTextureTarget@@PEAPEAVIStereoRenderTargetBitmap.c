/*
 * XREFs of ?Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802DA884
 * Callers:
 *     ?CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802BD054 (-CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z @ 0x18005BA8C (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z.c)
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18005BC84 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005BED0 (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStereoRenderTargetBitmap::Create(
        struct IDeviceTextureTarget *a1,
        struct IStereoRenderTargetBitmap **a2)
{
  __int64 v3; // rax
  __int64 (__fastcall *v5)(struct IDeviceTextureTarget *, __int64, struct IDeviceTextureTarget **); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  CRenderTargetBitmap *v10; // rax
  CRenderTargetBitmap *v11; // rdi
  struct IRenderTargetBitmap *v12; // rdx
  unsigned int v14; // [rsp+20h] [rbp-10h]
  struct IDeviceTextureTarget *v15; // [rsp+60h] [rbp+30h] BYREF
  struct IRenderTargetBitmap *v16; // [rsp+68h] [rbp+38h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF

  *a2 = 0LL;
  v3 = *(_QWORD *)a1;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  (*(void (__fastcall **)(struct IDeviceTextureTarget *, __int64))(v3 + 208))(a1, 1LL);
  v5 = *(__int64 (__fastcall **)(struct IDeviceTextureTarget *, __int64, struct IDeviceTextureTarget **))(*(_QWORD *)a1 + 136LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v15);
  v6 = v5(a1, 1LL, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    v14 = 22;
    goto LABEL_8;
  }
  (*(void (__fastcall **)(struct IDeviceTextureTarget *, __int64))(*(_QWORD *)v15 + 208LL))(v15, 2LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v16, v8, v9);
  v6 = CRenderTargetBitmap::Create(v15, &v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    v14 = 26;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v14, 0LL);
    goto LABEL_9;
  }
  v10 = (CRenderTargetBitmap *)MIDL_user_allocate(0x98uLL);
  v11 = v10;
  if ( v10 )
  {
    CRenderTargetBitmap::CRenderTargetBitmap(v10, 0LL);
    *((_QWORD *)v11 + 2) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
    *(_QWORD *)v11 = &CStereoRenderTargetBitmap::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
    v12 = v16;
    *((_QWORD *)v11 + 10) = &CStereoRenderTargetBitmap::`vftable'{for `IDeviceResource'};
    *((_QWORD *)v11 + 11) = &CStereoRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
    *((_QWORD *)v11 + 17) = &CStereoRenderTargetBitmap::`vftable';
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      (_QWORD *)v11 + 18,
      (__int64)v12);
    (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v11 + 8LL))(v11);
    CRenderTargetBitmap::Initialize(v11, a1);
    v17 = 0LL;
    *a2 = (struct IStereoRenderTargetBitmap *)(((unsigned __int64)v11 + 136) & -(__int64)(v11 != 0LL));
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Du, 0LL);
  }
LABEL_9:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  return v7;
}
