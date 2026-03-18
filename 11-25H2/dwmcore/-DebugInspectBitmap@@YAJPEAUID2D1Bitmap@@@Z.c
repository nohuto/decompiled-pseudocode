/*
 * XREFs of ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x1802B7CBC
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1802B8378 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DebugInspectBitmap(__int64 (__fastcall ***a1)(struct ID2D1Bitmap *, GUID *, __int64 **))
{
  __int64 (__fastcall **v1)(struct ID2D1Bitmap *, GUID *, __int64 **); // rax
  __int64 (__fastcall *v3)(struct ID2D1Bitmap *, GUID *, __int64 **); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct ID3D11Texture2D *v12; // [rsp+40h] [rbp+20h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct ID3D11Texture2D **); // [rsp+48h] [rbp+28h] BYREF
  __int64 *v14; // [rsp+50h] [rbp+30h] BYREF

  v1 = *a1;
  v14 = 0LL;
  v3 = *v1;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v14);
  v4 = v3((struct ID2D1Bitmap *)a1, &GUID_a898a84c_3873_4588_b08b_ebbf978df041, &v14);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = *v14;
    v13 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **)))(v6 + 104))(
           v14,
           &v13);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v12 = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v12);
      v8 = (**v13)(v13, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v12);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v8 = DebugInspectTexture(v12, 0);
        v5 = v8;
        if ( v8 >= 0 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
          v5 = 0;
          goto LABEL_12;
        }
        v9 = 189LL;
      }
      else
      {
        v9 = 187LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v8);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v7);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_12:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return v5;
}
