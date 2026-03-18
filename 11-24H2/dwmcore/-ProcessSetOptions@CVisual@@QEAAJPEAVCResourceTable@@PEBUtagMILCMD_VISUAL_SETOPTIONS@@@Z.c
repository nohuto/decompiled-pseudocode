/*
 * XREFs of ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1801EFFFC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1801F013C (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180266EC0 (-InvalidateWorldTransform@CTreeData@@IEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessSetOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETOPTIONS *a3)
{
  char v4; // cl
  unsigned int v5; // edi
  unsigned __int8 v7; // r9
  char v8; // dl
  unsigned int v9; // edx
  char v10; // r8

  v4 = *((_BYTE *)a3 + 9);
  v5 = 0;
  v7 = *((_BYTE *)this + 105);
  if ( ((v7 >> 6) & 1) != (v4 != 0) )
  {
    v5 = 5;
    *((_BYTE *)this + 105) = v7 & 0xBF | (v4 != 0 ? 0x40 : 0);
    CVisual::OnInnerTransformChanged(this);
    v7 = *((_BYTE *)this + 105);
  }
  v8 = *((_BYTE *)a3 + 11);
  if ( v7 >> 7 != (v8 != 0) )
  {
    *((_BYTE *)this + 105) = v7 & 0x7F | (v8 != 0 ? 0x80 : 0);
    v5 |= 1u;
    v7 = v7 & 0x7F | (v8 != 0 ? 0x80 : 0);
  }
  v9 = *((unsigned __int8 *)this + 106);
  *((_BYTE *)this + 105) = v7 & 0xEF | (*((_BYTE *)a3 + 8) != 0 ? 0x10 : 0);
  v10 = *((_BYTE *)a3 + 10);
  if ( ((v9 >> 3) & 1) != (v10 != 0) )
  {
    *((_BYTE *)this + 106) = v9 & 0xF7 | (v10 != 0 ? 8 : 0);
    if ( v10 )
    {
      CTreeData::InvalidateWorldTransform((CVisual *)((char *)this + 328));
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) &= ~0x1000000u;
      *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) &= ~0x800000u;
      *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) &= ~0x400000u;
      *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) &= ~0x200000u;
    }
    v5 |= 0x10u;
  }
  if ( v5 )
    CVisual::PropagateFlags((__int64)this, v5);
  return 0LL;
}
