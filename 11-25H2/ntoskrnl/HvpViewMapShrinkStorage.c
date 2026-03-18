/*
 * XREFs of HvpViewMapShrinkStorage @ 0x1407CF774
 * Callers:
 *     HvpAddBin @ 0x1409F795C (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x140A4CAE0 (HvFreeHivePartial.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     HvpViewMapFindViewForFileOffset @ 0x140881C24 (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140A40614 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapFreeView @ 0x140A46244 (HvpViewMapFreeView.c)
 */

__int64 **__fastcall HvpViewMapShrinkStorage(__int64 a1, int a2)
{
  signed __int64 v2; // r15
  signed __int64 v3; // r14
  signed __int64 v5; // r10
  __int64 **result; // rax
  unsigned __int64 *ViewForFileOffset; // rbx
  signed __int64 v8; // rsi
  __int64 v9; // r10
  unsigned __int64 **v10; // rax
  __int64 *v11; // rcx
  __int64 **v12; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 *v13; // [rsp+28h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = (unsigned int)(a2 + 4096);
  v5 = v3;
  v13 = (unsigned __int64 *)&v12;
  result = (__int64 **)&v12;
  v12 = (__int64 **)&v12;
  if ( v3 < v2 )
  {
    do
    {
      ViewForFileOffset = (unsigned __int64 *)HvpViewMapFindViewForFileOffset(a1, v5);
      v8 = ViewForFileOffset[6];
      HvpViewMapMakeViewRangeInvalid(a1, ViewForFileOffset, v9, v8);
      if ( ViewForFileOffset[5] == ViewForFileOffset[6] )
      {
        RtlRbRemoveNode(a1 + 40, ViewForFileOffset);
        v10 = (unsigned __int64 **)v13;
        if ( (__int64 ***)*v13 != &v12 )
          goto LABEL_8;
        ViewForFileOffset[1] = (unsigned __int64)v13;
        *ViewForFileOffset = (unsigned __int64)&v12;
        *v10 = ViewForFileOffset;
        v13 = ViewForFileOffset;
      }
      v5 = v8;
    }
    while ( v8 < v2 );
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
