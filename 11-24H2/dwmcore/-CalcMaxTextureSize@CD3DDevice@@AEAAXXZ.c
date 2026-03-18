/*
 * XREFs of ?CalcMaxTextureSize@CD3DDevice@@AEAAXXZ @ 0x1801BD9B0
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1801BD550 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::CalcMaxTextureSize(CD3DDevice *this)
{
  int v2; // ecx
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, _DWORD *, _QWORD, __int64 *); // rbx
  int v5; // eax
  __int64 v6; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v7[5]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v8; // [rsp+4Ch] [rbp-24h]
  int v9; // [rsp+54h] [rbp-1Ch]
  __int64 v10; // [rsp+58h] [rbp-18h]
  int v11; // [rsp+60h] [rbp-10h]

  if ( *((_QWORD *)this + 71) )
  {
    WarpPalGetDeviceCaps(0LL, (char *)this + 960);
  }
  else
  {
    v2 = *((_DWORD *)this + 154);
    if ( v2 > 37376 )
    {
      if ( v2 == 37632 )
      {
        *((_DWORD *)this + 240) = 4096;
      }
      else
      {
        v5 = 0x4000;
        if ( v2 <= 41216 )
          v5 = 0x2000;
        *((_DWORD *)this + 240) = v5;
      }
    }
    else
    {
      v3 = *((_QWORD *)this + 69);
      v6 = 0LL;
      v7[0] = 2100;
      v7[1] = 1;
      v7[2] = 1;
      v7[3] = 1;
      v7[4] = 61;
      v8 = 1LL;
      v9 = 0;
      v10 = 8LL;
      v11 = 0;
      v4 = *(int (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)v3 + 40LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v6);
      *((_DWORD *)this + 240) = ((v4(v3, v7, 0LL, &v6) >> 31) & 0xFFFFF800) + 4096;
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v6);
    }
  }
}
