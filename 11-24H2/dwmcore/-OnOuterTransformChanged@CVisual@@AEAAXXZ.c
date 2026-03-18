/*
 * XREFs of ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800BEE54
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x180093620 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x1800BE380 (-ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z.c)
 *     ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z @ 0x1800BE8B8 (-ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z.c)
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x1800BF2C0 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x1801328E4 (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x180181100 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180182A8C (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1801CB59C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x1801D78F4 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1802001D8 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 * Callees:
 *     ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180266EC0 (-InvalidateWorldTransform@CTreeData@@IEAAXXZ.c)
 */

void __fastcall CVisual::OnOuterTransformChanged(CVisual *this)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  _BYTE *v4; // rdx
  unsigned int i; // eax
  _QWORD ***v6; // rdi
  _QWORD **v7; // rdi
  _QWORD *j; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  unsigned int k; // eax
  _QWORD ***v13; // rcx
  _QWORD **v14; // rcx
  _QWORD *m; // rax

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
  *((_BYTE *)this + 465) = 1;
  v9 = *((_QWORD *)this + 29);
  if ( *(int *)v9 < 0 )
  {
    v10 = *(unsigned int *)(v9 + 4);
    v11 = (_BYTE *)(v9 + 8);
    for ( k = 0; k < (unsigned int)v10; ++v11 )
    {
      if ( *v11 == 1 )
        break;
      ++k;
    }
    if ( k >= (unsigned int)v10 )
      v13 = 0LL;
    else
      v13 = (_QWORD ***)(v10 + 15 + v9 + 8LL * k - (((_BYTE)v10 + 15) & 7));
    v14 = *v13;
    if ( v14 )
    {
      for ( m = *v14; m != v14; m = (_QWORD *)*m )
        *((_BYTE *)m - 215) = 1;
    }
  }
}
