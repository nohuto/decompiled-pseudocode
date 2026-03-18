/*
 * XREFs of ?Optimize@CTreeDirty@@QEAAXXZ @ 0x180097060
 * Callers:
 *     ?EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z @ 0x180096BA0 (-EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z.c)
 * Callees:
 *     ?SetFullDirty@CTreeDirty@@QEAAXXZ @ 0x180096EA4 (-SetFullDirty@CTreeDirty@@QEAAXXZ.c)
 *     ?Merge@CTreeDirty@@AEAAXII@Z @ 0x1802491C0 (-Merge@CTreeDirty@@AEAAXII@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x18024945C (-EnsureWeights@-$CRectangleCollection@$07@@AEAAXXZ.c)
 *     ?SetRedrawRects@CTreeDirty@@AEAAXXZ @ 0x180272BFC (-SetRedrawRects@CTreeDirty@@AEAAXXZ.c)
 */

void __fastcall CTreeDirty::Optimize(CTreeDirty *this)
{
  bool v2; // zf
  unsigned int i; // r8d
  unsigned int j; // edx

  if ( !*((_BYTE *)this + 2324) )
  {
LABEL_8:
    CRectangleCollection<8>::EnsureWeights((char *)this + 16);
    for ( i = 1; i < *((_DWORD *)this + 4); ++i )
    {
      for ( j = 0; j < i; ++j )
      {
        if ( *((float *)this + 2 * j + 2 * ((i * (i - 1)) >> 1) + 42) < 0.5 )
        {
          CTreeDirty::Merge(this, j, i);
          goto LABEL_8;
        }
      }
    }
  }
  v2 = *((_BYTE *)this + 2327) == 0;
  *((_BYTE *)this + 2325) = 1;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 2328) )
    {
      CTreeDirty::SetFullDirty(this);
      *((_BYTE *)this + 2328) = 0;
    }
  }
  else
  {
    CTreeDirty::SetRedrawRects(this);
    CTreeDirty::SetFullDirty(this);
    *(_WORD *)((char *)this + 2327) = 0;
  }
  if ( g_pComposition )
    *((_QWORD *)this + 1) = *((_QWORD *)g_pComposition + 111);
  else
    *((_QWORD *)this + 1) = 0LL;
}
