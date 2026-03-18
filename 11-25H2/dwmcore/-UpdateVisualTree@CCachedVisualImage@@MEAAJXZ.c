/*
 * XREFs of ?UpdateVisualTree@CCachedVisualImage@@MEAAJXZ @ 0x18013ABA0
 * Callers:
 *     ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x1802990AC (-Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180109514 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 */

__int64 __fastcall CCachedVisualImage::UpdateVisualTree(CCachedVisualImage *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rcx
  CVisual *v4; // rdi
  int VisualTree; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 176);
  v3 = *((_QWORD *)this + 22);
  if ( v3 && *(_QWORD *)(v3 + 72) != *((_QWORD *)this + 17) )
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  if ( *v1 )
    return 0LL;
  v4 = (CVisual *)*((_QWORD *)this + 17);
  if ( !v4 )
    return 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  VisualTree = CVisual::GetVisualTree(v4, (struct CVisualTree **)v1);
  v6 = VisualTree;
  if ( VisualTree >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2DD,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
    (const char *)(unsigned int)VisualTree);
  return v6;
}
