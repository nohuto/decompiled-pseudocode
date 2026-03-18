/*
 * XREFs of ?Initialize@CTextVisual@@MEAAJXZ @ 0x1802A7D00
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180037BE0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTextVisual::Initialize(CTextVisual *this)
{
  _DWORD *v2; // rbx
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !(*(unsigned __int8 (__fastcall **)(CTextVisual *))(*(_QWORD *)this + 256LL))(this) )
  {
    v2 = DefaultHeap::AllocClear(0x50uLL);
    if ( !v2 )
      ModuleFailFastForHRESULT(0x8007000E, retaddr);
    v3 = *((_QWORD *)this + 3);
    v2[2] = 0;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 3) = v3;
    *((_QWORD *)v2 + 4) = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
    v2[10] = 0;
    *(_QWORD *)v2 = &CTextVisualContent::`vftable';
    *((_QWORD *)v2 + 9) = this;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 2));
    v4 = CVisual::SetContent(this, (struct CContent *)v2);
    v7 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x19,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisual.cpp",
        (const char *)(unsigned int)v4);
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CCachedVisualImage *)v2, v8, v9);
      return v7;
    }
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CCachedVisualImage *)v2, v5, v6);
  }
  return 0LL;
}
