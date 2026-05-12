/*
 * XREFs of NvmeDumpFreeStorageDumpInfo @ 0x14019F97C
 * Callers:
 *     NvmeDumpStorageDumpControl @ 0x14019FD40 (NvmeDumpStorageDumpControl.c)
 * Callees:
 *     NvmeDumpFreeDumpAdapterInfo @ 0x14019F718 (NvmeDumpFreeDumpAdapterInfo.c)
 *     NvmeNativeDumpFreeDumpDiskInfo @ 0x14019F868 (NvmeNativeDumpFreeDumpDiskInfo.c)
 *     NvmeNativeDumpFreeDumpDriverInfo @ 0x14019F8A8 (NvmeNativeDumpFreeDumpDriverInfo.c)
 */

__int64 __fastcall NvmeDumpFreeStorageDumpInfo(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v4; // r8
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  PVOID v18; // [rsp+38h] [rbp+10h] BYREF
  PVOID v19; // [rsp+40h] [rbp+18h] BYREF

  v18 = a2;
  v2 = a2 + 1;
  v4 = a2[1];
  if ( *(_QWORD **)(v4 + 8) != a2 + 1 )
    goto LABEL_19;
  v6 = (_QWORD *)a2[2];
  if ( (_QWORD *)*v6 != v2 )
    goto LABEL_19;
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  v7 = (_QWORD *)a2[7];
  if ( v7 )
  {
    a2[7] = 0LL;
    v8 = *(_QWORD **)(a1 + 24);
    v19 = v7;
    while ( v8 != (_QWORD *)(a1 + 24) )
    {
      if ( (_QWORD *)v8[6] == v7 )
        goto LABEL_11;
      v8 = (_QWORD *)*v8;
    }
    v7[7] = 0LL;
    v9 = v7 + 1;
    v10 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
LABEL_19:
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    NvmeDumpFreeDumpAdapterInfo(&v19);
  }
LABEL_11:
  v12 = (_QWORD *)a2[8];
  a2[8] = 0LL;
  v13 = *(_QWORD **)(a1 + 24);
  v19 = v12;
  while ( v13 != (_QWORD *)(a1 + 24) )
  {
    if ( (_QWORD *)v13[7] == v12 )
      goto LABEL_18;
    v13 = (_QWORD *)*v13;
  }
  v14 = v12 + 1;
  v15 = v12[1];
  if ( *(_QWORD **)(v15 + 8) != v12 + 1 )
    goto LABEL_19;
  v16 = (_QWORD *)v12[2];
  if ( (_QWORD *)*v16 != v14 )
    goto LABEL_19;
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  NvmeNativeDumpFreeDumpDriverInfo(&v19);
LABEL_18:
  NvmeNativeDumpFreeDumpDiskInfo(&v18);
  return 0LL;
}
