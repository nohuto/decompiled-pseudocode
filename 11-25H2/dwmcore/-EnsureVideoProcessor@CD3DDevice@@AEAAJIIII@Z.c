/*
 * XREFs of ?EnsureVideoProcessor@CD3DDevice@@AEAAJIIII@Z @ 0x180176838
 * Callers:
 *     ?VideoProcessorBlt@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@0II2@Z @ 0x1801764A4 (-VideoProcessorBlt@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::EnsureVideoProcessor(
        CD3DDevice *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 *v5; // r14
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  int v10; // ebx
  __int64 *v12; // rdi
  int v13; // eax
  int v14; // r10d
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 (__fastcall *v21)(__int64, _DWORD *, char *); // rbx
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  _DWORD v24[10]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+D0h] [rbp+28h]

  v5 = (__int64 *)((char *)this + 1040);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v10 = 0;
  if ( !*((_QWORD *)this + 130)
    || a2 > *((_DWORD *)this + 262)
    || a3 > *((_DWORD *)this + 263)
    || a4 > *((_DWORD *)this + 264)
    || a5 > *((_DWORD *)this + 265) )
  {
    v12 = (__int64 *)((char *)this + 1016);
    if ( *((_QWORD *)this + 127)
      || (wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 127),
          v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 69))(
                  *((_QWORD *)this + 69),
                  &GUID_10ec4d5b_975a_4689_b9e4_d0aac30fe333,
                  v12),
          v10 = v13,
          v13 >= 0) )
    {
      if ( *((_QWORD *)this + 128)
        || (wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 128),
            v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 70))(
                    *((_QWORD *)this + 70),
                    &GUID_a7f026da_a5f8_4487_a564_15e34357651e,
                    (char *)this + 1024),
            v14 = v10,
            v10 >= 0) )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 129);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v5);
        v16 = a5;
        v17 = *v12;
        if ( v8 <= *((_DWORD *)this + 262) )
          v8 = *((_DWORD *)this + 262);
        v18 = *((_DWORD *)this + 263);
        v24[3] = v8;
        if ( v7 <= v18 )
          v7 = v18;
        v19 = *((_DWORD *)this + 264);
        v24[4] = v7;
        if ( v6 <= v19 )
          v6 = v19;
        v20 = *((_DWORD *)this + 265);
        v24[7] = v6;
        if ( a5 <= v20 )
          v16 = v20;
        v24[0] = 0;
        v24[9] = 0;
        v24[8] = v16;
        v24[1] = 1;
        v24[2] = 1;
        v24[5] = 1;
        v24[6] = 1;
        v25 = v16;
        v21 = *(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v17 + 80LL);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 129);
        v10 = v21(v17, v24, (char *)this + 1032);
        v14 = v10;
        if ( v10 < 0 )
        {
          v15 = 2089;
        }
        else
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 129) + 72LL))(
                  *((_QWORD *)this + 129),
                  (char *)this + 976);
          v14 = v10;
          if ( v10 < 0 )
          {
            v15 = 2091;
          }
          else
          {
            v22 = *((_QWORD *)this + 127);
            v23 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v22 + 32LL);
            wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v5);
            v10 = v23(v22, *((_QWORD *)this + 129), 0LL, v5);
            v14 = v10;
            if ( v10 >= 0 )
            {
              *((_DWORD *)this + 265) = v25;
              *((_DWORD *)this + 262) = v8;
              *((_DWORD *)this + 263) = v7;
              *((_DWORD *)this + 264) = v6;
              return (unsigned int)v10;
            }
            v15 = 2095;
          }
        }
      }
      else
      {
        v15 = 2066;
      }
    }
    else
    {
      v14 = v13;
      v15 = 2061;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v15, 0LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v5);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 129);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 128);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 127);
    *((_QWORD *)this + 131) = 0LL;
    *((_QWORD *)this + 132) = 0LL;
  }
  return (unsigned int)v10;
}
