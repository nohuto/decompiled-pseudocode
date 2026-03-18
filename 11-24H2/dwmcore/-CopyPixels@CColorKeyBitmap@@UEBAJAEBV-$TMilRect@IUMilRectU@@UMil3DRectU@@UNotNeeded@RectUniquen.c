/*
 * XREFs of ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802DAF00
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x180025A28 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorKeyBitmap::CopyPixels(
        __int64 *a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  __int64 v6; // rax
  __int64 (__fastcall *v9)(__int64 *, _DWORD *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  unsigned __int8 *Src; // rsi
  unsigned int v15; // r14d
  unsigned int v16; // r15d
  unsigned int v17; // edi
  unsigned int v18; // ebx
  __int32 *v19; // rax
  int v20; // eax
  __int64 v22; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-29h] BYREF
  unsigned int v24; // [rsp+5Ch] [rbp-25h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-21h]
  unsigned __int8 *v26; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int8 *v27; // [rsp+70h] [rbp-11h]
  _BYTE v28[16]; // [rsp+78h] [rbp-9h] BYREF

  v27 = a5;
  v6 = *a1;
  v25 = a4;
  v22 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64 *, _DWORD *, __int64 *))(v6 + 72);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v22);
  v10 = v9(a1, a2, &v22);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x6Du, 0LL);
  }
  else
  {
    v24 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 40LL))(v22, &v24);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x70u, 0LL);
    }
    else
    {
      v26 = 0LL;
      v23 = 0;
      v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v22 + 48LL))(
              v22,
              &v23,
              &v26);
      v11 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x74u, 0LL);
      }
      else
      {
        Src = v26;
        v15 = v23;
        v16 = v24;
        v17 = a2[3] - a2[1];
        v18 = a2[2] - *a2;
        v19 = (__int32 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v22 + 24LL))(v22, v28);
        v20 = CBitmap::CopyPixelsHelper(*v19, v18, v17, v16, v15, Src, a3, v25, v27);
        v11 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x7Fu, 0LL);
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
  return v11;
}
