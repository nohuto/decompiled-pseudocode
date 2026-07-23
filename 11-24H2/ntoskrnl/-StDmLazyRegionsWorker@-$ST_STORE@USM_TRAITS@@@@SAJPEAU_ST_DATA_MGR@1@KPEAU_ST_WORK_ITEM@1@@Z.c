/*
 * XREFs of ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14048FB20
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140378D1C (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14048F854 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1402F6AF8 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1402F6CB0 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x1402F6CE8 (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402F7A24 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x1402F7A7C (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     SmWorkQueueGetDepth @ 0x14044004C (SmWorkQueueGetDepth.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404ACE98 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(__int64 a1, char a2, unsigned __int64 a3)
{
  int v5; // r13d
  int v6; // r12d
  unsigned int v7; // esi
  char v8; // di
  unsigned int v9; // r10d
  unsigned int v10; // r8d
  __int64 v11; // rbx
  unsigned __int64 v12; // r11
  _DWORD *v13; // rdx
  int v14; // r9d
  _DWORD *i; // rax
  unsigned int v16; // r9d
  __int64 v17; // rcx
  unsigned __int64 j; // rax
  unsigned int *v19; // rax
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  __int64 *v22; // rax
  __int64 *v23; // r14
  int v24; // ecx
  __int16 v26; // ax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  void *v30; // rbx
  __int64 v31; // rcx
  char v32; // [rsp+88h] [rbp+10h]
  int v33; // [rsp+90h] [rbp+18h]
  unsigned int v34; // [rsp+98h] [rbp+20h]

  v33 = *(_DWORD *)(a1 + 784);
  v5 = 0;
  v6 = 0;
  if ( a3 )
  {
    _InterlockedAnd16((volatile signed __int16 *)(a3 + 12), 0xFFFEu);
    *(_WORD *)(a3 + 14) &= ~1u;
  }
  v7 = 0;
  v8 = a2 & 1;
  v32 = a2 & 1;
LABEL_4:
  v9 = *(_DWORD *)(a1 + 840);
  if ( v9 > v7 )
  {
    v10 = 0;
    v11 = *(_QWORD *)(a1 + 848);
    v12 = v11 + 4 * ((unsigned __int64)(v9 - 1) >> 5);
    v13 = (_DWORD *)(v11 + 4 * ((unsigned __int64)v7 >> 5));
    v14 = ((1 << (v7 & 0x1F)) - 1) | *v13;
    for ( i = v13 + 1; ; ++i )
    {
      v16 = ~v14;
      if ( v16 )
        break;
      if ( (unsigned __int64)i > v12 )
        goto LABEL_22;
      v14 = *++v13;
    }
    _BitScanForward64((unsigned __int64 *)&v17, v16);
    v7 = v17 + 32 * (((__int64)v13 - v11) >> 2);
    if ( v7 > v9 )
    {
LABEL_22:
      v7 = *(_DWORD *)(a1 + 840);
      goto LABEL_18;
    }
    for ( j = ~(v16 | ((1 << v17) - 1)); ; j = *v19 )
    {
      if ( (_DWORD)j )
      {
        _BitScanForward64(&j, j);
        goto LABEL_15;
      }
      v19 = v13 + 1;
      if ( (unsigned __int64)(v13 + 1) > v12 )
        break;
      ++v13;
    }
    LODWORD(j) = 32;
LABEL_15:
    v20 = j + 32 * (((__int64)v13 - v11) >> 2);
    if ( v20 > v9 )
      v20 = *(_DWORD *)(a1 + 840);
    v10 = v20 - v7;
LABEL_18:
    if ( v10 )
    {
      v21 = v7 + v10;
      v22 = (__int64 *)(a1 + 800);
      v34 = v7 + v10;
      v23 = (__int64 *)(a1 + 800);
      while ( 1 )
      {
        if ( v7 >= v21 )
          goto LABEL_4;
        if ( (++v6 & 0xF) == 0 )
        {
          v23 = v22;
          if ( a3 )
          {
            v23 = (__int64 *)(a1 + 800);
            if ( (unsigned int)SmWorkQueueGetDepth(
                                 *(_DWORD **)(a1 + 800),
                                 *(_BYTE *)(*(_QWORD *)(a1 + 800) + 6838LL) == 0) )
            {
              v24 = 1;
              v5 = 1;
              goto LABEL_30;
            }
          }
        }
        if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v7) != 8 )
        {
          ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, v27, 0LL);
          v23 = (__int64 *)(a1 + 800);
          goto LABEL_43;
        }
        v28 = *v23;
        if ( (*(_WORD *)(*(_QWORD *)(a1 + 1416) + 2LL * v7) & 0x1FFF) != 0 )
        {
          if ( SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(v28, v7)
            && SMKM_STORE<SM_TRAITS>::SmStMapRegion(v31, v7, 0, v33, 8) == 3 )
          {
LABEL_38:
            v5 = 1;
            goto LABEL_43;
          }
        }
        else if ( (*(_BYTE *)(v28 + 6837) & 4) != 0 )
        {
          if ( (int)SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(v28, v7, v8 | 2u) < 0 )
            goto LABEL_38;
        }
        else
        {
          v29 = *(_QWORD *)(v28 + 7024);
          v30 = (void *)(*(_QWORD *)(v29 + 8LL * v7) & 0xFFFFFFFFFFFFFFF8uLL);
          MiFreePagesFromMdl((ULONG_PTR)v30, 0, 0, 0);
          ExFreePoolWithTag(v30, 0);
          *(_QWORD *)(v29 + 8LL * v7) = 0LL;
          v8 = v32;
        }
        ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, v7, 0LL);
LABEL_43:
        v21 = v34;
        v22 = (__int64 *)(a1 + 800);
        ++v7;
      }
    }
  }
  v24 = 0;
  if ( a3 )
  {
LABEL_30:
    v26 = *(_WORD *)(a3 + 12) & 1;
    if ( v26 || v5 )
    {
      if ( v24 )
        *(_WORD *)(a3 + 14) |= 1u;
      if ( !v26 )
        ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a3);
    }
  }
  return 0LL;
}
