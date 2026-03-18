/*
 * XREFs of ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1802B8378
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x1802B7CBC (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z @ 0x1802D6860 (-LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x1802B8288 (-DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z.c)
 *     GetStagingTexture @ 0x1802B86C0 (GetStagingTexture.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DebugInspectTexture(struct ID3D11Texture2D *a1, unsigned int a2)
{
  int StagingTexture; // eax
  unsigned int v5; // ebx
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  int v10; // edi
  __int64 v12; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v13; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v14; // [rsp+50h] [rbp-9h] BYREF
  void *v15[2]; // [rsp+58h] [rbp-1h] BYREF
  unsigned int v16[4]; // [rsp+68h] [rbp+Fh] BYREF
  enum DXGI_FORMAT v17[4]; // [rsp+78h] [rbp+1Fh]
  __int64 v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v14 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v14);
  StagingTexture = GetStagingTexture(a1, &v14);
  v5 = StagingTexture;
  if ( StagingTexture >= 0 )
  {
    v6 = v14;
    v18 = 0LL;
    v19 = 0;
    *(_OWORD *)v16 = 0LL;
    *(_OWORD *)v17 = 0LL;
    (*(void (__fastcall **)(__int64 *, unsigned int *))(*v14 + 80))(v14, v16);
    v7 = *v6;
    v13 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 **))(v7 + 24))(v6, &v13);
    v8 = *v13;
    v12 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v8 + 320))(v13, &v12);
    *(_OWORD *)v15 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v12 + 112LL))(
           v12,
           v6,
           a2,
           1LL,
           0,
           v15);
    v10 = v9;
    if ( v9 >= 0 )
    {
      DebugInspectSysMemSurface(v15[0], v16[0], v16[1], v17[0], (unsigned int)v15[1]);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v12 + 120LL))(v12, v6, a2);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v9);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
      v5 = v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)StagingTexture);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return v5;
}
