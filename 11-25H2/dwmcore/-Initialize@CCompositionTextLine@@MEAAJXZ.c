/*
 * XREFs of ?Initialize@CCompositionTextLine@@MEAAJXZ @ 0x1802A2AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Create@CClipBrush@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18029F53C (-Create@CClipBrush@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionTextLine::Initialize(struct CComposition **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  struct CResource *v5; // rsi
  struct CComposition *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CResource *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v9);
  v2 = CClipBrush::Create(this[3], &v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 13LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiontextline.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_9;
  }
  v5 = v9;
  v2 = CResource::RegisterNotifier((CResource *)this, v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 15LL;
    goto LABEL_5;
  }
  v6 = this[14];
  v9 = 0LL;
  this[14] = v5;
  if ( v6 )
    (*(void (__fastcall **)(struct CComposition *))(*(_QWORD *)v6 + 16LL))(v6);
  v3 = 0;
LABEL_9:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v9);
  return v3;
}
