/*
 * XREFs of HvpViewMapShrinkStorage @ 0x1407DF59C
 * Callers:
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x140A46B7C (HvFreeHivePartial.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     HvpViewMapFindViewForFileOffset @ 0x140968764 (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x14096CE10 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapFreeView @ 0x140A40FA4 (HvpViewMapFreeView.c)
 */

__int64 **__fastcall HvpViewMapShrinkStorage(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  _RTL_BALANCED_NODE *v5; // r10
  __int64 **result; // rax
  _RTL_BALANCED_NODE *ViewForFileOffset; // rbx
  _RTL_BALANCED_NODE *v8; // rsi
  __int64 v9; // r10
  _RTL_BALANCED_NODE **v10; // rax
  __int64 *v11; // rcx
  __int64 **v12; // [rsp+20h] [rbp-10h] BYREF
  _RTL_BALANCED_NODE *v13; // [rsp+28h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = (unsigned int)(a2 + 4096);
  v5 = (_RTL_BALANCED_NODE *)v3;
  v13 = (_RTL_BALANCED_NODE *)&v12;
  result = (__int64 **)&v12;
  v12 = (__int64 **)&v12;
  if ( v3 < v2 )
  {
    do
    {
      ViewForFileOffset = (_RTL_BALANCED_NODE *)HvpViewMapFindViewForFileOffset(a1, v5);
      v8 = ViewForFileOffset[2].Children[0];
      HvpViewMapMakeViewRangeInvalid(a1, ViewForFileOffset, v9, v8);
      if ( (_RTL_BALANCED_NODE *)ViewForFileOffset[1].ParentValue == ViewForFileOffset[2].Children[0] )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 40), ViewForFileOffset);
        v10 = (_RTL_BALANCED_NODE **)v13;
        if ( (__int64 ***)v13->Children[0] != &v12 )
          goto LABEL_8;
        ViewForFileOffset->Children[1] = v13;
        ViewForFileOffset->Children[0] = (_RTL_BALANCED_NODE *)&v12;
        *v10 = ViewForFileOffset;
        v13 = ViewForFileOffset;
      }
      v5 = v8;
    }
    while ( (__int64)v8 < v2 );
    result = v12;
  }
  *(_QWORD *)(a1 + 8) = v3;
  v11 = *result;
  if ( result[1] != (__int64 *)&v12 )
LABEL_8:
    __fastfail(3u);
  while ( 1 )
  {
    if ( (__int64 **)v11[1] != result )
      goto LABEL_8;
    v12 = (__int64 **)v11;
    v11[1] = (__int64)&v12;
    if ( result == (__int64 **)&v12 )
      return result;
    HvpViewMapFreeView(a1, result);
    result = v12;
    if ( v12[1] != (__int64 *)&v12 )
      goto LABEL_8;
    v11 = *v12;
  }
}
