/*
 * XREFs of ?OnSceneFrameTick@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1802A5E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneSurfaceMaterialInput::OnSceneFrameTick(
        CSceneSurfaceMaterialInput *this,
        struct ISpectreRenderer *a2)
{
  _QWORD *v2; // rsi
  __int64 (__fastcall *v5)(struct ISpectreRenderer *, _QWORD *); // rbx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 8);
  if ( !*((_QWORD *)this + 1) )
  {
    v5 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, _QWORD *))(*(_QWORD *)a2 + 80LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 1);
    v6 = v5(a2, v2);
    if ( v6 < 0 )
    {
      v7 = 202LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spatialsurfacematerialinput.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v2 + 24LL))(
           *v2,
           *((unsigned int *)this + 10),
           *((unsigned int *)this + 11),
           *((unsigned int *)this + 12));
    if ( v6 < 0 )
    {
      v7 = 207LL;
      goto LABEL_4;
    }
    (*(void (__fastcall **)(char *, _QWORD, char *))(*((_QWORD *)this - 9) + 80LL))(
      (char *)this - 72,
      0LL,
      (char *)this - 72);
  }
  return 0LL;
}
