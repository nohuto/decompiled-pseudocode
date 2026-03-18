/*
 * XREFs of ??1CWindowNode@@MEAA@XZ @ 0x1800489BC
 * Callers:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180048970 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x180039B94 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x180048A30 (-DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180048A58 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x180048A78 (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowNode::~CWindowNode(CWindowNode *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CWindowNode::`vftable';
  CWindowNode::DiscardGdiSpriteBitmaps(this);
  CWindowNode::DiscardFlipExSurfaces(this);
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 111);
  if ( v2 )
    (**v2)(v2, 1LL);
  CPtrArrayBase::Clear((CWindowNode *)((char *)this + 840));
  CPtrArrayBase::Clear((CWindowNode *)((char *)this + 832));
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>((char *)this + 824);
  CWindowNodeGeneratedT<CWindowNode,CVisual>::~CWindowNodeGeneratedT<CWindowNode,CVisual>(this);
}
