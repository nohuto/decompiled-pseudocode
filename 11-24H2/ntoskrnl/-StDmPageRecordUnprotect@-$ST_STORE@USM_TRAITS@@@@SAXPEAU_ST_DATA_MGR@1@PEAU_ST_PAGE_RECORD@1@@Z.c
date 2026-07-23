/*
 * XREFs of ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140381180
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14023016C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14037AAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037F670 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140380A88 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140381398 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140381820 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x140609E6C (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 * Callees:
 *     SmPrepareForFatalHeapCorruption @ 0x14037A040 (SmPrepareForFatalHeapCorruption.c)
 *     ExProtectPoolEx @ 0x140382168 (ExProtectPoolEx.c)
 *     wyhash @ 0x140382B78 (wyhash.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // r9
  unsigned __int64 v8; // r10
  __int64 result; // rax
  unsigned __int64 *v10; // r11
  unsigned __int64 v11; // rcx
  unsigned __int64 *v12; // rax
  unsigned __int64 i; // rsi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // r8d
  void *v21; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  BugCheckParameter4 = 0LL;
  v4 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _BitScanReverse((unsigned int *)&v5, v4);
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 8 * v5 + 192) + 16 * (v4 ^ (unsigned int)(1 << v5)));
  if ( *((_DWORD *)v6 + 3) )
  {
    v19 = wyhash(*v6, 4096LL, 0LL);
    v20 = *((_DWORD *)v6 + 3);
    v21 = (void *)*v6;
    if ( !v19 )
      v19 = 1;
    if ( v19 != v20 )
    {
      SmPrepareForFatalHeapCorruption(v21, (__int64)&BugCheckParameter4, v20, v19, (LONGLONG *)&BugCheckParameter4);
      KeBugCheckEx(0x1C7u, 0LL, *v6, *((unsigned int *)v6 + 3), BugCheckParameter4);
    }
    ExProtectPoolEx(v21, *v6, 4096LL, 4LL);
    *((_DWORD *)v6 + 3) = 0;
  }
  v7 = *(_QWORD *)(a1 + 2296);
  v8 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  *(_QWORD *)(v7 + 112) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  *(_QWORD *)(v7 + 96) = 10000000LL;
  *(_QWORD *)(v7 + 104) = v8 + 300000000;
  result = *(unsigned int *)(v7 + 224);
  if ( (result & 1) == 0 )
  {
    if ( !v8 )
      v8 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    v10 = (unsigned __int64 *)(v7 + 168);
    v11 = -1LL;
    v12 = (unsigned __int64 *)v7;
    for ( i = -1LL; v12 < v10; v12 += 3 )
    {
      v14 = v12[1];
      v15 = v11;
      if ( v14 != -1LL )
      {
        v18 = v12[2];
        if ( v18 < v8 - *(_QWORD *)(v7 + 184) )
          v18 = v8 - *(_QWORD *)(v7 + 184);
        v11 = v18 + *v12;
        if ( v11 >= v15 )
          v11 = v15;
        if ( v14 < i )
          i = v12[1];
      }
    }
    v16 = v8;
    if ( v11 >= v8 )
      v16 = v11;
    v17 = v8;
    if ( i >= v8 )
      v17 = i;
    *v10 = v17;
    if ( v17 == -1LL )
    {
      *(_QWORD *)(v7 + 176) = 0LL;
    }
    else
    {
      v2 = v17 - v8;
      if ( v17 >= v16 )
        v2 = v16 - v8;
      *(_QWORD *)(v7 + 176) = v2;
      if ( !v2 )
      {
        *(_QWORD *)(v7 + 176) = 1LL;
        v2 = 1LL;
      }
    }
    result = *(_QWORD *)(v7 - 6512);
    *(_QWORD *)(result + 7448) = -v2;
  }
  return result;
}
