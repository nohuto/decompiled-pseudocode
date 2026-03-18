/*
 * XREFs of ?Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z @ 0x1802D17C8
 * Callers:
 *     ?Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802D15D4 (-Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1801C8224 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDASwapChain::Initialize(CDDASwapChain *this, struct CD3DDevice *a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int DeviceTextureTarget; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 7);
  v11 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v2 + 72LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v11);
  DeviceTextureTarget = v5(v2, 0LL, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v11);
  v7 = DeviceTextureTarget;
  if ( DeviceTextureTarget >= 0 )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 8);
    DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(
                            (__int64)a2,
                            v11,
                            *((_DWORD *)this + 19),
                            *((_DWORD *)this + 20),
                            *((_DWORD *)this + 23),
                            *((_DWORD *)this + 25),
                            1,
                            (unsigned __int64 *)this + 8);
    v7 = DeviceTextureTarget;
    if ( DeviceTextureTarget >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 8) + 72LL))(
        *((_QWORD *)this + 8),
        ((unsigned __int64)this + 48) & -(__int64)(this != 0LL));
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 54LL;
  }
  else
  {
    v8 = 45LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddaswapchain.cpp",
    (const char *)(unsigned int)DeviceTextureTarget);
LABEL_7:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
  return v7;
}
