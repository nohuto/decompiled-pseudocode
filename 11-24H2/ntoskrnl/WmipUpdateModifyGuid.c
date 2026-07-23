/*
 * XREFs of WmipUpdateModifyGuid @ 0x1407A5FF8
 * Callers:
 *     WmipUpdateDataSource @ 0x1409AF500 (WmipUpdateDataSource.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WmipIsEqualInstanceSets @ 0x1407A5E78 (WmipIsEqualInstanceSets.c)
 *     WmipUpdateAddGuid @ 0x1407A5F20 (WmipUpdateAddGuid.c)
 *     WmipAllocEntry @ 0x1409B04E8 (WmipAllocEntry.c)
 *     WmipBuildInstanceSet @ 0x1409B053C (WmipBuildInstanceSet.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 *     WmipFindISInDSByGuid @ 0x140AA3FE8 (WmipFindISInDSByGuid.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipUpdateModifyGuid(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  unsigned int v9; // esi
  __int64 ISInDSByGuid; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int128 v13; // xmm0
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // ebp
  void *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v21; // [rsp+30h] [rbp-E8h]
  __int128 v22; // [rsp+40h] [rbp-D8h]
  __int128 v23; // [rsp+50h] [rbp-C8h]
  __int128 v24; // [rsp+60h] [rbp-B8h]
  __int128 v25; // [rsp+70h] [rbp-A8h]
  __int64 v26; // [rsp+90h] [rbp-88h] BYREF
  PVOID P[2]; // [rsp+E0h] [rbp-38h]

  memset_0(&v26, 0, 0x60uLL);
  v9 = 0;
  *a5 = 0LL;
  ISInDSByGuid = WmipFindISInDSByGuid(a1, a2);
  if ( ISInDSByGuid )
  {
    v11 = WmipAllocEntry(&WmipISChunkInfo);
    v12 = v11;
    if ( v11
      && (int)WmipBuildInstanceSet(a2, a3, a4, v11, *(_DWORD *)(a1 + 56)) >= 0
      && !WmipIsEqualInstanceSets(ISInDSByGuid, v12) )
    {
      v21 = *(_OWORD *)ISInDSByGuid;
      v22 = *(_OWORD *)(ISInDSByGuid + 16);
      v23 = *(_OWORD *)(ISInDSByGuid + 32);
      v24 = *(_OWORD *)(ISInDSByGuid + 48);
      v25 = *(_OWORD *)(ISInDSByGuid + 64);
      v13 = *(_OWORD *)(ISInDSByGuid + 80);
      *(_QWORD *)(ISInDSByGuid + 88) = 0LL;
      v14 = *(_QWORD *)ISInDSByGuid;
      *(_OWORD *)P = v13;
      if ( *(_QWORD *)(v14 + 8) != ISInDSByGuid )
        goto LABEL_20;
      v15 = *(_QWORD **)(ISInDSByGuid + 8);
      if ( *v15 != ISInDSByGuid )
        goto LABEL_20;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = WmipBuildInstanceSet(a2, a3, a4, ISInDSByGuid, *(_DWORD *)(a1 + 56));
      if ( v16 < 0 )
      {
        v17 = *(void **)(ISInDSByGuid + 88);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        *(_OWORD *)ISInDSByGuid = v21;
        *(_OWORD *)(ISInDSByGuid + 16) = v22;
        *(_OWORD *)(ISInDSByGuid + 32) = v23;
        *(_OWORD *)(ISInDSByGuid + 48) = v24;
        *(_OWORD *)(ISInDSByGuid + 64) = v25;
        *(_OWORD *)(ISInDSByGuid + 80) = v13;
      }
      v18 = *(_QWORD *)(ISInDSByGuid + 56) + 56LL;
      v19 = *(_QWORD *)v18;
      if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18 )
LABEL_20:
        __fastfail(3u);
      *(_QWORD *)ISInDSByGuid = v19;
      *(_QWORD *)(ISInDSByGuid + 8) = v18;
      *(_QWORD *)(v19 + 8) = ISInDSByGuid;
      *(_QWORD *)v18 = ISInDSByGuid;
      if ( v16 >= 0 )
      {
        if ( P[1] )
          ExFreePoolWithTag(P[1], 0);
        *a5 = ISInDSByGuid;
        v9 = 2;
      }
    }
    WmipUnreferenceEntry(&WmipISChunkInfo, ISInDSByGuid);
    if ( v12 )
      WmipUnreferenceEntry(&WmipISChunkInfo, v12);
  }
  else
  {
    return WmipUpdateAddGuid(a1, a2, a3, a4, a5);
  }
  return v9;
}
