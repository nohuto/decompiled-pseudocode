/*
 * XREFs of ?Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802E3B24
 * Callers:
 *     ?CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802C66B4 (-CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z @ 0x180042E74 (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z.c)
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x180043074 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18004312C (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStereoRenderTargetBitmap::Create(
        struct IDeviceTextureTarget *a1,
        struct IStereoRenderTargetBitmap **a2)
{
  __int64 v3; // rax
  __int64 (__fastcall *v5)(struct IDeviceTextureTarget *, __int64, struct IDeviceTextureTarget **); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  CRenderTargetBitmap *v8; // rax
  CRenderTargetBitmap *v9; // rdi
  struct IRenderTargetBitmap *v10; // rdx
  unsigned int v12; // [rsp+20h] [rbp-10h]
  struct IDeviceTextureTarget *v13; // [rsp+60h] [rbp+30h] BYREF
  struct IRenderTargetBitmap *v14; // [rsp+68h] [rbp+38h] BYREF
  __int64 v15; // [rsp+70h] [rbp+40h] BYREF

  *a2 = 0LL;
  v3 = *(_QWORD *)a1;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  (*(void (__fastcall **)(struct IDeviceTextureTarget *, __int64))(v3 + 208))(a1, 1LL);
  v5 = *(__int64 (__fastcall **)(struct IDeviceTextureTarget *, __int64, struct IDeviceTextureTarget **))(*(_QWORD *)a1 + 136LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v13);
  v6 = v5(a1, 1LL, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 22;
    goto LABEL_8;
  }
  (*(void (__fastcall **)(struct IDeviceTextureTarget *, __int64))(*(_QWORD *)v13 + 208LL))(v13, 2LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v14);
  v6 = CRenderTargetBitmap::Create(v13, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 26;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v12, 0LL);
    goto LABEL_9;
  }
  v8 = (CRenderTargetBitmap *)MIDL_user_allocate(0x98uLL);
  v9 = v8;
  if ( v8 )
  {
    CRenderTargetBitmap::CRenderTargetBitmap(v8, 0LL);
    *((_QWORD *)v9 + 2) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
    *(_QWORD *)v9 = &CStereoRenderTargetBitmap::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
    v10 = v14;
    *((_QWORD *)v9 + 10) = &CStereoRenderTargetBitmap::`vftable'{for `IDeviceResource'};
    *((_QWORD *)v9 + 11) = &CStereoRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
    *((_QWORD *)v9 + 17) = &CStereoRenderTargetBitmap::`vftable';
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      (_QWORD *)v9 + 18,
      (__int64)v10);
    (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v9 + 8LL))(v9);
    CRenderTargetBitmap::Initialize(v9, a1);
    v15 = 0LL;
    *a2 = (struct IStereoRenderTargetBitmap *)(((unsigned __int64)v9 + 136) & -(__int64)(v9 != 0LL));
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Du, 0LL);
  }
LABEL_9:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  return v7;
}
