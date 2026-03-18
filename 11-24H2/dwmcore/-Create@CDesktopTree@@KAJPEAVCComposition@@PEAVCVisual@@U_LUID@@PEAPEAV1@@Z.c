/*
 * XREFs of ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x18028AE08
 * Callers:
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x1802D3488 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2D80 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CDesktopTree@@IEAA@PEAVCComposition@@@Z @ 0x180229A1C (--0CDesktopTree@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2CDesktopTree@@KAPEAX_K@Z @ 0x180275454 (--2CDesktopTree@@KAPEAX_K@Z.c)
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x18028B020 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 *     ?SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z @ 0x18028B15C (-SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CDesktopTree::Create(
        struct CComposition *a1,
        struct CVisual *a2,
        struct _LUID a3,
        struct _LUID **a4)
{
  CDesktopTree *v8; // rax
  CDesktopTree *v9; // rax
  struct _LUID *v10; // rdi
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  CCachedVisualImage *v17; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (CDesktopTree *)CDesktopTree::operator new();
  if ( v8 )
  {
    v9 = CDesktopTree::CDesktopTree(v8, a1);
    v17 = v9;
    v10 = (struct _LUID *)v9;
    if ( v9 )
      CMILRefCountImpl::AddReference((CDesktopTree *)((char *)v9 + 8));
  }
  else
  {
    v10 = 0LL;
    v17 = 0LL;
  }
  v11 = CDesktopTree::Initialize((CDesktopTree *)v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v10[329] = a3;
    CResource::OnPropertyChanged((CResource *)v10);
    v11 = CDesktopTree::SetRoot((CDesktopTree *)v10, a2);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v17 = 0LL;
      v12 = 0;
      *a4 = v10;
      goto LABEL_11;
    }
    v13 = 21LL;
  }
  else
  {
    v13 = 19LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\desktoptree.cpp",
    (const char *)(unsigned int)v11);
LABEL_11:
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
    &v17,
    v14,
    v15);
  return v12;
}
