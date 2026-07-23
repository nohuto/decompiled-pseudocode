/*
 * XREFs of ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14022FD60
 * Callers:
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14022FA80 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiStoreModifiedWriteComplete @ 0x1402DD72C (MiStoreModifiedWriteComplete.c)
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1402E7368 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402E7EB8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmEvictComplete @ 0x1402EA434 (SmEvictComplete.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14033E9F0 (SmAcquireReleaseResAvailForRead.c)
 *     MmUnmapReservedMapping @ 0x140433320 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x1404F7000 (SmpFpReleaseResource.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete(int *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rdi
  int v5; // r10d
  unsigned int v8; // r14d
  __int64 v9; // rbp
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // r15
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  void *v21; // r12
  int v22; // eax
  int v23; // eax

  v4 = *((_QWORD *)a1 + 4);
  v5 = a3;
  v8 = 1;
  if ( v4 <= 1 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)v4;
  v10 = *a1;
  v11 = *a1 & 7;
  v12 = *(_DWORD *)(a3 + 6832) & 0x3FF;
  if ( (v11 & 0xFFFFFFFD) != 0 )
  {
    v13 = 0LL;
    v14 = 0LL;
  }
  else
  {
    v13 = *((_QWORD *)a1 + 2);
    v14 = *(_DWORD *)(v13 + 40) >> 12;
    if ( v11 == 2 )
    {
      *(_QWORD *)(v4 + 8) = 0LL;
      v10 = *a1;
    }
  }
  v15 = v10 & 7;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v18 = v16 - 1;
      if ( !v18 )
      {
        v19 = a1[2];
        v20 = *((_QWORD *)a1 + 4);
        if ( (_BYTE)v19 )
        {
          *(_WORD *)(v20 + 8) = (unsigned __int8)v19;
          if ( (*(_BYTE *)(a2 + 2000) & 8) != 0 )
            a4 = 0;
        }
        *(_DWORD *)v20 = a4;
        if ( (*(_DWORD *)(a2 + 2000) & 0x10) != 0 )
          SmAcquireReleaseResAvailForRead(a2, v4, v14, 1LL);
        goto LABEL_13;
      }
      v22 = v18 - 1;
      if ( !v22 )
      {
        *(_DWORD *)v4 = a4;
        *(_QWORD *)(v4 + 8) = (unsigned int)a1[3];
        goto LABEL_13;
      }
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 != 1 )
          goto LABEL_13;
      }
      else if ( (a1[2] & 7) == 0 )
      {
        return 0;
      }
      *(_DWORD *)v4 = a4;
      *(_QWORD *)(v4 + 8) = 0LL;
      goto LABEL_13;
    }
    if ( (a1[4] & 1) != 0 )
      return 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(a2, a1 + 2, (unsigned int)a1[3], v12);
    SmEvictComplete(a2, a1 + 2, (unsigned int)a1[3]);
    *(_DWORD *)v4 = 0;
  }
  else
  {
    SMKM_STORE_MGR<SM_TRAITS>::SmProcessAddCompletion(a2, (_DWORD)a1, v14, v5, a4);
  }
LABEL_13:
  if ( v13 )
  {
    if ( (*(_BYTE *)(v13 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)v13, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( (*a1 & 7) == 2 && (*(_DWORD *)(a2 + 2000) & 2) != 0 )
    {
      v21 = *(void **)(v13 + 24);
      if ( *(_QWORD *)(a2 + 1816) == v4 && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)(a2 + 1704)) )
      {
        MmUnmapReservedMapping(v21, 0x6D526D73u, (PMDL)v13);
        if ( !*(_BYTE *)(a2 + 1798) )
        {
          _InterlockedExchange64((volatile __int64 *)(a2 + 1816), 0LL);
          KeSetEvent((PRKEVENT)(a2 + 1712), 0, 0);
        }
      }
      else
      {
        MmUnmapLockedPages(v21, (PMDL)v13);
      }
    }
  }
  if ( v9 )
  {
    if ( (*a1 & 7) != 0 )
    {
      if ( (*a1 & 7) == 2 )
        *(_QWORD *)(v4 + 8) = (unsigned __int16)*(_QWORD *)(v4 + 8);
    }
    else
    {
      *(_QWORD *)(v4 + 8) = 0LL;
    }
    if ( v9 < 0 )
      KeSetEvent((PRKEVENT)v9, 1, 0);
    else
      MiStoreModifiedWriteComplete((PSLIST_ENTRY)(v9 | 0x8000000000000000uLL));
  }
  return v8;
}
