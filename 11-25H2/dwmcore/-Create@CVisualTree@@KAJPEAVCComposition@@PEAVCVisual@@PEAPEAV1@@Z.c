/*
 * XREFs of ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1802059FC
 * Callers:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180109514 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2CVisualTree@@KAPEAX_K@Z @ 0x180205AB0 (--2CVisualTree@@KAPEAX_K@Z.c)
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x180205AE0 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualTree::Create(struct CComposition *a1, struct CVisual *a2, struct CVisualTree **a3)
{
  CVisualTree *v6; // rax
  CVisualTree *v7; // rax
  struct CVisualTree *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (CVisualTree *)CVisualTree::operator new((unsigned __int64)a1);
  if ( v6 )
  {
    v7 = CVisualTree::CVisualTree(v6, a1, a2);
    v8 = v7;
    if ( v7 )
      (*(void (__fastcall **)(CVisualTree *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = (*(__int64 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v8 + 56LL))(v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualtree.cpp",
      (const char *)(unsigned int)v9);
    if ( v8 )
      (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v8 + 16LL))(v8);
    return v10;
  }
  else
  {
    *a3 = v8;
    return 0LL;
  }
}
