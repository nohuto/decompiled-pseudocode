/*
 * XREFs of HvpViewMapPromoteRangeToMapping @ 0x14088274C
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x1408820A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpAddBin @ 0x1409F795C (HvpAddBin.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     CmSiGetMemoryAllocationGranularity @ 0x1404A82FC (CmSiGetMemoryAllocationGranularity.c)
 *     HvpViewMapMigrateCOWData @ 0x1407CF564 (HvpViewMapMigrateCOWData.c)
 *     HvpViewMapFindViewForFileOffset @ 0x140881C24 (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140883560 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x140884E10 (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140A40614 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapFreeView @ 0x140A46244 (HvpViewMapFreeView.c)
 */

__int64 __fastcall HvpViewMapPromoteRangeToMapping(ULONG_PTR a1, int a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // r13
  _RTL_BALANCED_NODE *v6; // r15
  _RTL_BALANCED_NODE *ViewForFileOffset; // rax
  _QWORD *v8; // r9
  _RTL_BALANCED_NODE *v9; // rdi
  int ViewRangeValid; // ebx
  __int64 MemoryAllocationGranularity; // rax
  int v13; // eax
  PRTL_BALANCED_NODE v14; // rsi
  __int64 i; // rdx
  _RTL_BALANCED_NODE *v16; // rbx
  __int64 j; // rax
  _RTL_BALANCED_NODE **v18; // rax
  _RTL_BALANCED_NODE **v19; // rax
  _RTL_RB_TREE *v20; // rcx
  unsigned __int64 v21; // rdx
  BOOLEAN v22; // r8
  unsigned __int64 v23; // rax
  __int64 **v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // r12
  _RTL_BALANCED_NODE *v28; // r12
  PRTL_RB_TREE v29; // r9
  _RTL_BALANCED_NODE **v30; // rax
  PRTL_BALANCED_NODE Node; // [rsp+30h] [rbp-20h] BYREF
  __int64 **v32; // [rsp+38h] [rbp-18h] BYREF
  _RTL_BALANCED_NODE *v33; // [rsp+40h] [rbp-10h]

  Node = 0LL;
  v4 = (unsigned int)(a2 + 4096);
  v33 = (_RTL_BALANCED_NODE *)&v32;
  v32 = (__int64 **)&v32;
  v6 = (_RTL_BALANCED_NODE *)(v4 + a3);
  ViewForFileOffset = (_RTL_BALANCED_NODE *)HvpViewMapFindViewForFileOffset(a1, v4);
  v9 = ViewForFileOffset;
  if ( (__int64)ViewForFileOffset[2].Children[0] >= (__int64)v6 )
  {
    *v8 = v4 + (char *)ViewForFileOffset[2].Children[1] - (char *)ViewForFileOffset[1].Children[0];
    return 0;
  }
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v13 = HvpViewMapCreateView(a1, v4 & -MemoryAllocationGranularity, v6, &Node);
  v14 = Node;
  ViewRangeValid = v13;
  if ( v13 >= 0 )
  {
    ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, (_DWORD)Node, v4, (_DWORD)v6, 0);
    if ( ViewRangeValid >= 0 )
    {
      for ( i = v4; i < (__int64)v6; i = v27[6] )
      {
        v27 = (_QWORD *)HvpViewMapFindViewForFileOffset(a1, i);
        ViewRangeValid = HvpViewMapMigrateCOWData(a1, v14, v27);
        if ( ViewRangeValid < 0 )
          goto LABEL_28;
      }
      v16 = (_RTL_BALANCED_NODE *)HvpViewMapFindViewForFileOffset(a1, (__int64)&v6[-1].ParentValue + 7);
      for ( j = (__int64)v9[2].Children[0]; j < (signed __int64)v16[1].ParentValue; j = (__int64)v28[2].Children[0] )
      {
        v28 = (_RTL_BALANCED_NODE *)HvpViewMapFindViewForFileOffset(a1, j);
        RtlRbRemoveNode(v29, v28);
        v30 = (_RTL_BALANCED_NODE **)v33;
        if ( (__int64 ***)v33->Children[0] != &v32 )
          goto LABEL_12;
        v28->Children[1] = v33;
        v28->Children[0] = (_RTL_BALANCED_NODE *)&v32;
        *v30 = v28;
        v33 = v28;
      }
      if ( v9[1].ParentValue == v4 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 40), v9);
        v18 = (_RTL_BALANCED_NODE **)v33;
        if ( (__int64 ***)v33->Children[0] != &v32 )
          goto LABEL_12;
        v9->Children[1] = v33;
        v9->Children[0] = (_RTL_BALANCED_NODE *)&v32;
        *v18 = v9;
        v33 = v9;
      }
      else
      {
        HvpViewMapMakeViewRangeInvalid(a1, v9, v4, v9[2].Children[0]);
      }
      if ( v16[2].Children[0] == v6 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 40), v16);
        v19 = (_RTL_BALANCED_NODE **)v33;
        if ( (__int64 ***)v33->Children[0] != &v32 )
          goto LABEL_12;
        v16->Children[1] = v33;
        v16->Children[0] = (_RTL_BALANCED_NODE *)&v32;
        *v19 = v16;
        v33 = v16;
      }
      else
      {
        HvpViewMapMakeViewRangeInvalid(a1, v16, v16[1].ParentValue, v6);
      }
      v20 = (_RTL_RB_TREE *)(a1 + 40);
      v21 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 && v21 )
        v21 ^= (unsigned __int64)v20;
      v22 = 0;
      if ( v21 )
      {
        while ( 1 )
        {
          if ( (signed __int64)v14[1].ParentValue < *(_QWORD *)(v21 + 40) )
          {
            v23 = *(_QWORD *)v21;
            if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_39;
              v23 ^= v21;
            }
            if ( !v23 )
            {
LABEL_39:
              v22 = 0;
              break;
            }
          }
          else
          {
            v23 = *(_QWORD *)(v21 + 8);
            if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_23;
              v23 ^= v21;
            }
            if ( !v23 )
            {
LABEL_23:
              v22 = 1;
              break;
            }
          }
          v21 = v23;
        }
      }
      RtlRbInsertNodeEx(v20, (PRTL_BALANCED_NODE)v21, v22, v14);
      v24 = v32;
      v25 = *v32;
      if ( v32[1] == (__int64 *)&v32 )
      {
        while ( 1 )
        {
          if ( (__int64 **)v25[1] != v24 )
            goto LABEL_12;
          v32 = (__int64 **)v25;
          v25[1] = (__int64)&v32;
          if ( v24 == (__int64 **)&v32 )
            break;
          HvpViewMapFreeView(a1, v24);
          v24 = v32;
          if ( v32[1] != (__int64 *)&v32 )
            goto LABEL_12;
          v25 = *v32;
        }
        ViewRangeValid = 0;
        v26 = v4 + (char *)v14[2].Children[1] - (char *)v14[1].Children[0];
        v14 = 0LL;
        *a4 = v26;
        goto LABEL_28;
      }
LABEL_12:
      __fastfail(3u);
    }
  }
LABEL_28:
  if ( v14 )
    HvpViewMapFreeView(a1, v14);
  return (unsigned int)ViewRangeValid;
}
