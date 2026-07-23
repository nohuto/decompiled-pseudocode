/*
 * XREFs of HvSnapshotHiveToOffsetArray @ 0x140BBB508
 * Callers:
 *     CmDumpKeyToFile @ 0x1407CD274 (CmDumpKeyToFile.c)
 *     CmpFlushBackupHive @ 0x1407DC808 (CmpFlushBackupHive.c)
 *     CmpDumpKeyToBuffer @ 0x140BBB130 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BBB770 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140BBB790 (HvpMapEntryReleaseBinAddress.c)
 *     HvpHeaderCheckSum @ 0x140BBB7A0 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvSnapshotHiveToOffsetArray(__int64 a1, int a2, __int64 a3)
{
  const void *v3; // r11
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // r10d
  __int64 CellMap; // rax
  __int64 v10; // rcx
  _DWORD *BinAddress; // rax
  __int64 v12; // rdx
  int v13; // r10d
  __int64 v14; // rcx
  unsigned int v15; // ebp
  _DWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // r9
  unsigned int v19; // r15d
  unsigned int v20; // r12d
  unsigned int v21; // edi
  unsigned int *v22; // rdx
  unsigned int v23; // r10d
  unsigned int v24; // eax
  int v25; // esi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int *v30; // rsi
  unsigned int v31; // r10d
  size_t v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  size_t v36; // [rsp+20h] [rbp-48h]
  unsigned int v37; // [rsp+70h] [rbp+8h]
  int v38; // [rsp+78h] [rbp+10h] BYREF
  unsigned int *v39; // [rsp+88h] [rbp+20h]

  v38 = a2;
  v3 = *(const void **)(a1 + 64);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 280);
  v6 = 0;
  LOWORD(v38) = 0;
  while ( v6 < v5 )
  {
    CellMap = HvpGetCellMap(a1, v6);
    BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v10, CellMap, &v38);
    if ( *BinAddress != 1852400232 )
      return (unsigned int)-1073741492;
    if ( BinAddress[1] != v13 )
      return (unsigned int)-1073741492;
    v14 = (unsigned int)BinAddress[2];
    if ( (int)v14 + v13 > v5 || (v14 & 0xFFF) != 0 )
      return (unsigned int)-1073741492;
    HvpMapEntryReleaseBinAddress(v14, v12, &v38);
  }
  v15 = 4096;
  memmove(*(void **)(a3 + 8), v3, 0x1000uLL);
  v16 = *(_DWORD **)(a3 + 8);
  v16[2] = v16[1];
  v16[10] = v5;
  v17 = HvpHeaderCheckSum(v16);
  *(_DWORD *)(v18 + 508) = v17;
  v19 = 0;
  v20 = *(_DWORD *)(a3 + 16);
  v21 = 0;
  v22 = 0LL;
  v39 = 0LL;
  v23 = 0;
  v37 = 0;
  while ( v19 < *(_DWORD *)(a1 + 280) )
  {
    if ( v15 == v20 )
    {
      ++v23;
      v15 = 0;
      v37 = v23;
      v20 = *(_DWORD *)(a3 + 24LL * v23 + 16);
    }
    if ( v21 )
    {
      v24 = v21;
      if ( v21 > v20 )
        v24 = v20;
      v25 = v24;
      memmove(*(void **)(a3 + 24LL * v23 + 8), v22, v24);
      v21 -= v25;
      if ( !v21 )
        HvpMapEntryReleaseBinAddress(v27, v26, &v38);
    }
    else
    {
      v28 = HvpGetCellMap(a1, v19);
      if ( !v28 )
        return (unsigned int)-1073741275;
      v30 = (unsigned int *)HvpMapEntryGetBinAddress(v29, v28, &v38);
      v39 = v30;
      v32 = v30[2];
      v21 = v20 - v15 < (unsigned int)v32 ? v30[2] - (v20 - v15) : 0;
      if ( (unsigned int)v32 > v20 - v15 )
        v32 = v20 - v15;
      v36 = v32;
      memmove((void *)(*(_QWORD *)(a3 + 24LL * v31 + 8) + v15), v30, v32);
      if ( v21 )
        v39 = (unsigned int *)((char *)v30 + v36);
      else
        HvpMapEntryReleaseBinAddress(v34, v33, &v38);
      v25 = v36;
    }
    v23 = v37;
    v15 += v25;
    v22 = v39;
    v19 += v25;
  }
  return v4;
}
