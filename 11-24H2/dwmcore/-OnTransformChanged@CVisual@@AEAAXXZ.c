/*
 * XREFs of ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x1801343C8
 * Callers:
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180133470 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1801F013C (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 * Callees:
 *     ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180266EC0 (-InvalidateWorldTransform@CTreeData@@IEAAXXZ.c)
 */

void __fastcall CVisual::OnTransformChanged(CVisual *this)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  _BYTE *v4; // rdx
  unsigned int i; // eax
  _QWORD ***v6; // rdi
  _QWORD **v7; // rdi
  _QWORD *j; // rbx

  CTreeData::InvalidateWorldTransform((CVisual *)((char *)this + 328));
  v2 = *((_QWORD *)this + 29);
  if ( *(int *)v2 < 0 )
  {
    v3 = *(unsigned int *)(v2 + 4);
    v4 = (_BYTE *)(v2 + 8);
    for ( i = 0; i < (unsigned int)v3; ++v4 )
    {
      if ( *v4 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v3 )
      v6 = 0LL;
    else
      v6 = (_QWORD ***)(v3 + 15 + v2 + 8LL * i - (((_BYTE)v3 + 15) & 7));
    v7 = *v6;
    if ( v7 )
    {
      for ( j = *v7; j != v7; j = (_QWORD *)*j )
        CTreeData::InvalidateWorldTransform((CTreeData *)(j - 44));
    }
  }
}
