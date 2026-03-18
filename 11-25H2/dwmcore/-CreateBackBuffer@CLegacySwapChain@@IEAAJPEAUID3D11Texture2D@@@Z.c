/*
 * XREFs of ?CreateBackBuffer@CLegacySwapChain@@IEAAJPEAUID3D11Texture2D@@@Z @ 0x1801C6C34
 * Callers:
 *     ?ResetBuffers@CLegacySwapChain@@MEAAJXZ @ 0x1801C6190 (-ResetBuffers@CLegacySwapChain@@MEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1801C8224 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::CreateBackBuffer(CLegacySwapChain *this, struct ID3D11Texture2D *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r14
  int DeviceTextureTarget; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  char v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_QWORD *)this + 8);
  v3 = (_QWORD *)((char *)this + 296);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 37);
  v10 = 1;
  DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(
                          v2,
                          a2,
                          *((unsigned int *)this + 24),
                          *((unsigned int *)this + 25),
                          *((_DWORD *)this + 28),
                          *((_DWORD *)this + 30),
                          v10,
                          v3);
  v8 = DeviceTextureTarget;
  if ( DeviceTextureTarget < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
      (const char *)(unsigned int)DeviceTextureTarget);
    return v8;
  }
  else
  {
    LOBYTE(v7) = *((_BYTE *)this + 124);
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 216LL))(*v3, v7);
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v3 + 72LL))(
      *v3,
      ((unsigned __int64)this + 280) & -(__int64)(this != 0LL));
    return 0LL;
  }
}
