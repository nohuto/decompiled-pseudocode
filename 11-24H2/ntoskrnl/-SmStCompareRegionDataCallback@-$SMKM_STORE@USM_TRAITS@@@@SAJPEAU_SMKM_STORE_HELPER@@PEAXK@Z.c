/*
 * XREFs of ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1402F6D30
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140381398 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402F85D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402F8C30 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140432EDC (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140608EEC (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x140608F88 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 *     ?StRegionAccessExceptionFilter@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAJ@Z @ 0x14060ADB8 (-StRegionAccessExceptionFilter@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(
        __int64 a1,
        unsigned __int16 *a2,
        int a3,
        int a4)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  int v7; // esi
  __int64 v8; // rcx
  unsigned __int64 v9; // r15
  unsigned int *v10; // r13
  unsigned int *v11; // rax
  unsigned __int64 v12; // rax
  char *j; // r12
  unsigned int k; // ecx
  int v15; // eax
  unsigned __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-C8h]
  unsigned int v19; // [rsp+40h] [rbp-A8h]
  unsigned __int64 Buf2; // [rsp+58h] [rbp-90h]
  void *Buf1; // [rsp+60h] [rbp-88h]
  unsigned __int64 v22; // [rsp+68h] [rbp-80h]
  unsigned int *i; // [rsp+70h] [rbp-78h]
  _QWORD v24[13]; // [rsp+80h] [rbp-68h]
  unsigned int v25; // [rsp+F0h] [rbp+8h]

  v5 = 0LL;
  v6 = a1 - 7040;
  v7 = 0;
  if ( a3 )
  {
    ExFreePoolWithTag(a2, 0);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 7444));
    v8 = *(unsigned int *)a2;
    if ( (*(_BYTE *)(v6 + 6837) & 4) == 0 )
    {
      v9 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v6 + 7024) + 8 * v8) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      goto LABEL_4;
    }
    v9 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v6, v8, 0, a4, 64);
    if ( v9 > 4 )
    {
LABEL_4:
      v10 = (unsigned int *)(a2 + 4);
      v11 = (unsigned int *)((char *)a2 + a2[3]);
      for ( i = v11; ; v11 = i )
      {
        if ( v10 >= v11 )
        {
          v19 = 0;
          goto LABEL_33;
        }
        Buf1 = (void *)(v9 + *v10);
        *((_BYTE *)v10 + 7) = 16;
        v12 = (unsigned __int64)&v10[2 * *((unsigned __int8 *)v10 + 6) + 2];
        v22 = v12;
        for ( j = (char *)(v10 + 2); (unsigned __int64)j < v12; j += 8 )
        {
          if ( v5 )
          {
            if ( v7 == *(_DWORD *)j )
              goto LABEL_10;
            if ( v5 != v9 )
            {
              if ( (*(_BYTE *)(v6 + 6837) & 4) != 0 )
                SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, v7, a3, a4, v18, 8);
              else
                SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(v6, v7, a3, a4, v18, 8);
            }
          }
          v7 = *(_DWORD *)j;
          if ( *(_DWORD *)j == *(_DWORD *)a2 )
          {
            v5 = v9;
          }
          else
          {
            if ( (*(_BYTE *)(v6 + 6837) & 4) != 0 )
              v16 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v6, v7, 0, a4, 64);
            else
              v16 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v6, v7, 0, a4, 64);
            v5 = v16;
            if ( v16 <= 4 )
              goto LABEL_31;
          }
LABEL_10:
          Buf2 = v5 + *((unsigned int *)j + 1);
          v24[0] = 0LL;
          v24[2] = 0LL;
          v24[1] = (Buf2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          v25 = (*((unsigned __int16 *)v10 + 2) + 4095 + (Buf2 & 0xFFF)) >> 12;
          if ( (int)MmQueryVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 16 * v25, 0LL, 0) < 0 )
          {
            v15 = 2;
          }
          else
          {
            for ( k = 0; ; ++k )
            {
              if ( k >= v25 )
              {
                v15 = 1;
                goto LABEL_16;
              }
              if ( (v24[2 * k] & 1) == 0 && (v24[2 * k] & 0xC00000LL) != 0x400000 )
                break;
            }
            v15 = 0;
          }
LABEL_16:
          if ( v15 == 1 )
          {
            if ( !memcmp(Buf1, (const void *)Buf2, *((unsigned __int16 *)v10 + 2)) )
              *((_BYTE *)v10 + 7) = (j - (char *)(v10 + 2)) >> 3;
            if ( *((_BYTE *)v10 + 7) != 16 )
              break;
          }
          v12 = v22;
        }
        v10 += 2 * *((unsigned __int8 *)v10 + 6) + 2;
      }
    }
LABEL_31:
    v19 = -1073741670;
LABEL_33:
    if ( (*(_BYTE *)(v6 + 6837) & 4) != 0 && v9 > 4 )
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, *(_DWORD *)a2, a3, a4, v18, 8);
    if ( v5 > 4 && v5 != v9 )
    {
      if ( (*(_BYTE *)(v6 + 6837) & 4) != 0 )
        SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, v7, a3, a4, v18, 8);
      else
        SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(v6, v7, a3, a4, v18, 8);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 7444));
    return v19;
  }
}
