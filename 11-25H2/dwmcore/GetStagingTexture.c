/*
 * XREFs of GetStagingTexture @ 0x1802B86C0
 * Callers:
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1802B8378 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180236804 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GetStagingTexture(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int128 *, _QWORD, __int64 *); // rdi
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+48h] [rbp-38h] BYREF
  __int128 v18; // [rsp+58h] [rbp-28h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v19 = 0LL;
  v20 = 0;
  v3 = *(_QWORD *)a1;
  v17 = 0LL;
  v18 = 0LL;
  (*(void (__fastcall **)(__int64, __int128 *))(v3 + 80))(a1, &v17);
  if ( HIDWORD(v18) == 3 )
  {
    *a2 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  else
  {
    v6 = *(_QWORD *)a1;
    v15 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 **))(v6 + 24))(a1, &v15);
    v7 = *v15;
    v16 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v7 + 320))(v15, &v16);
    v8 = (__int64)v15;
    v14 = 0LL;
    v19 = 0x2000000000000LL;
    v20 = 0;
    HIDWORD(v18) = 3;
    v9 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64 *))(*v15 + 40);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v14);
    v10 = v9(v8, &v17, 0LL, &v14);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, const GUID *, __int64, const char *))(*(_QWORD *)v14 + 40LL))(
              v14,
              &WKPDID_D3DDebugObjectName,
              25LL,
              "DWM Temp Readback (debug)");
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x87,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
          (const char *)(unsigned int)v12);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 376LL))(v16, v14, a1);
      v13 = v14;
      v14 = 0LL;
      v11 = 0;
      *a2 = v13;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v10);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
    return v11;
  }
}
