/*
 * XREFs of ?ResetBackBuffer@CCompSwapChain@@IEAAJXZ @ 0x1802D1300
 * Callers:
 *     ?Initialize@CCompSwapChain@@IEAAJXZ @ 0x1802D0D88 (-Initialize@CCompSwapChain@@IEAAJXZ.c)
 *     ?NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802D0FA0 (-NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1801C8224 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompSwapChain::ResetBackBuffer(CCompSwapChain *this)
{
  __int64 *v2; // r14
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // r15
  __int64 (__fastcall *v6)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rbx
  int DeviceTextureTarget; // eax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, char *); // [rsp+60h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 80);
  v3 = *((_QWORD *)this + 10);
  v4 = (unsigned __int64)this + 48;
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 80LL))(
      v3,
      v4 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    v13 = 0LL;
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v5 + 72LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v13);
    v7 = v6(v5, 0LL, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v13);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, v7, 0x181u, 0LL);
    }
    else
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 11);
      v9 = (**v13)(v13, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, (char *)this + 88);
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, v9, 0x183u, 0LL);
      }
      else
      {
        v10 = *((_QWORD *)this + 7);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
        DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(
                                v10,
                                (__int64)v13,
                                *((_DWORD *)this + 28),
                                *((_DWORD *)this + 29),
                                *((_DWORD *)this + 32),
                                *((_DWORD *)this + 34),
                                1,
                                (unsigned __int64 *)v2);
        v8 = DeviceTextureTarget;
        if ( DeviceTextureTarget < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, DeviceTextureTarget, 0x18Bu, 0LL);
        else
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v2 + 72LL))(*v2, v4 & -(__int64)(this != 0LL));
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, -2003304307, 0x191u, 0LL);
  }
  return v8;
}
