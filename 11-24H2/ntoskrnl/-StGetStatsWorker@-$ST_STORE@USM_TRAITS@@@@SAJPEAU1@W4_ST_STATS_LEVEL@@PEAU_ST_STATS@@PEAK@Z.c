/*
 * XREFs of ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140377594
 * Callers:
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x14020DEDC (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404F66C8 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 *     ?StCopyIoStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_IO_STATS@@PEAU_ST_IO_COUNTS@@@Z @ 0x1406090DC (-StCopyIoStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_IO_STATS@@PEAU_ST_IO_COUNTS@@@Z.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x140609E6C (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 *     StLcBucketsCopy @ 0x14060B6C0 (StLcBucketsCopy.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StGetStatsWorker(__int64 a1, int a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // r12d
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  ULONG v15; // eax
  __int64 v16; // r9
  _DWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  ULONG v19; // eax
  __int64 v20; // r8
  _DWORD *v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 result; // rax
  __int64 v24; // rdx
  _WORD *v25; // rcx
  unsigned __int64 v26; // rdx
  _WORD *v27; // r9
  int v28; // ecx
  unsigned int v29; // eax
  int v30; // eax
  unsigned __int64 v31; // rdi
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  __int64 v34; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v35; // [rsp+78h] [rbp+20h]

  v35 = a4;
  v34 = 0LL;
  v4 = 0;
  if ( a2 >= 4 )
    return 3221225485LL;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v8 = 1536;
        break;
      case 2:
        v8 = ((a3 + 1537) & 0xFFFFFFFE) + 4 * *(_DWORD *)(a1 + 12) - a3;
        break;
      case 3:
        v28 = *(_DWORD *)(a1 + 12);
        v29 = *(_DWORD *)(a1 + 888) + 1;
        if ( v29 > 0x200 )
          v29 = 512;
        v4 = v28 * ((v29 + 7) >> 3);
        v8 = v4 + ((((a3 + 1537) & 0xFFFFFFFE) + 4 * v28 + 7) & 0xFFFFFFF8) - a3 + 12;
        break;
      default:
        v8 = -1;
        break;
    }
  }
  else
  {
    v8 = 188;
  }
  if ( *a4 < v8 )
  {
    *a4 = v8;
    return 3221225507LL;
  }
  else
  {
    *(_BYTE *)a3 = 11;
    v9 = *(_DWORD *)a3 ^ ((unsigned __int16)*(_DWORD *)a3 ^ (unsigned __int16)((_WORD)a2 << 8)) & 0xF00;
    *(_DWORD *)a3 = v9;
    v10 = v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)a1 << 12)) & 0xF000;
    *(_DWORD *)a3 = v10;
    v11 = v10 ^ (v10 ^ (*(_DWORD *)a1 << 8)) & 0x10000;
    *(_DWORD *)a3 = v11;
    v12 = v11 ^ (v11 ^ (*(_DWORD *)a1 << 7)) & 0x20000;
    *(_DWORD *)a3 = v12;
    v13 = v12 ^ (v12 ^ (*(_DWORD *)(a1 + 4888) << 21)) & 0x3FFC0000;
    *(_DWORD *)a3 = v13;
    v14 = v13 ^ (*(_DWORD *)(a1 + 856) << 13);
    *(_DWORD *)(a3 + 4) = v8;
    *(_DWORD *)a3 = v13 ^ v14 & 0x40000000;
    *(_WORD *)(a3 + 8) = *(_WORD *)(a1 + 4832);
    *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(a1 + 936) + *(_DWORD *)(a1 + 3272);
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a3 + 24) = 16;
    memset_0((void *)(a3 + 28), 0, 0x50uLL);
    *(_DWORD *)(a3 + 28) = *(_DWORD *)(a1 + 936);
    *(_DWORD *)(a3 + 32) = *(_DWORD *)(a1 + 88);
    *(_DWORD *)(a3 + 36) = *(_DWORD *)(a1 + 152);
    v15 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 920));
    v16 = a1 + 80 - (a3 + 28);
    *(_DWORD *)(a3 + 40) = *(_DWORD *)(a1 + 920) - v15;
    v17 = (_DWORD *)(a3 + 44);
    v18 = (-(__int64)((unsigned __int8)*(_DWORD *)(a1 + 856) != 0) & 0xFFFFFFFFFFFFFFF9uLL) + 8;
    do
    {
      *v17 = *(_DWORD *)((char *)v17 + v16 + 2192);
      v17[1] = *(_DWORD *)((char *)v17 + v16 + 2196);
      v17 += 2;
      --v18;
    }
    while ( v18 );
    memset_0((void *)(a3 + 108), 0, 0x50uLL);
    *(_DWORD *)(a3 + 108) = *(_DWORD *)(a1 + 3272);
    *(_DWORD *)(a3 + 112) = *(_DWORD *)(a1 + 2424);
    v19 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 3256));
    v20 = a1 + 2416 - (a3 + 108);
    *(_DWORD *)(a3 + 120) = *(_DWORD *)(a1 + 3256) - v19;
    v21 = (_DWORD *)(a3 + 124);
    v22 = (-(__int64)((unsigned __int8)*(_DWORD *)(a1 + 3192) != 0) & 0xFFFFFFFFFFFFFFF9uLL) + 8;
    do
    {
      *v21 = *(_DWORD *)((char *)v21 + v20 + 2192);
      v21[1] = *(_DWORD *)((char *)v21 + v20 + 2196);
      v21 += 2;
      --v22;
    }
    while ( v22 );
    if ( !a2 )
      goto LABEL_10;
    ST_STORE<SM_TRAITS>::StCopyIoStats(a3 + 188, a1 + 5072);
    StLcBucketsCopy(a3 + 1472, v24, *(_QWORD *)(a1 + 6392), *(unsigned int *)(a1 + 6384));
    if ( a2 == 1 )
      goto LABEL_10;
    v25 = *(_WORD **)(a1 + 56);
    v26 = (a3 + 1537) & 0xFFFFFFFFFFFFFFFEuLL;
    v27 = &v25[*(unsigned int *)(a1 + 12)];
    while ( v25 < v27 )
    {
      *(_WORD *)v26 = *v25 & 0x1FFF;
      if ( *(_BYTE *)(a1 + 856) )
        LOBYTE(v30) = 0;
      else
        v30 = (unsigned __int16)*v25 >> 13;
      ++v25;
      *(_BYTE *)(v26 + 2) = v30;
      v26 += 4LL;
    }
    if ( a2 == 2 )
      goto LABEL_10;
    v31 = (((a3 + 1537) & 0xFFFFFFFFFFFFFFFEuLL) + 4LL * *(unsigned int *)(a3 + 20) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    memset_0((void *)(v31 + 12), 0, v4);
    v32 = *(_DWORD *)(a1 + 8) >> 9;
    if ( v32 <= 0x10 )
      v32 = 16;
    *(_DWORD *)(v31 + 8) = v32;
    v33 = v32 >> 4;
    result = ST_STORE<SM_TRAITS>::StDmGetStatsBitmap(a1 + 80, v33, v31 + 12, &v34);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)v31 = v34;
      result = ST_STORE<SM_TRAITS>::StDmGetStatsBitmap(a1 + 2416, v33, v31 + 12, &v34);
      if ( (int)result >= 0 )
      {
LABEL_10:
        *v35 = v8;
        return 0LL;
      }
    }
  }
  return result;
}
