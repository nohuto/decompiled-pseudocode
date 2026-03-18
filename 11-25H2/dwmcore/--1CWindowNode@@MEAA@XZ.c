/*
 * XREFs of ??1CWindowNode@@MEAA@XZ @ 0x1802044FC
 * Callers:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x1802044B0 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1801096A4 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801BEF70 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x180204570 (-DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ.c)
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x180204598 (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowNode::~CWindowNode(CDrawListCache **this)
{
  CDrawListCache *v2; // rcx

  *this = (CDrawListCache *)&CWindowNode::`vftable';
  CWindowNode::DiscardGdiSpriteBitmaps((CWindowNode *)this);
  CWindowNode::DiscardFlipExSurfaces((CWindowNode *)this);
  v2 = this[110];
  if ( v2 )
    (**(void (__fastcall ***)(CDrawListCache *, __int64))v2)(v2, 1LL);
  CPtrArrayBase::Clear((CPtrArrayBase *)(this + 104));
  CPtrArrayBase::Clear((CPtrArrayBase *)(this + 103));
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(this + 102);
  CWindowNodeGeneratedT<CWindowNode,CVisual>::~CWindowNodeGeneratedT<CWindowNode,CVisual>((CVisual *)this);
}
