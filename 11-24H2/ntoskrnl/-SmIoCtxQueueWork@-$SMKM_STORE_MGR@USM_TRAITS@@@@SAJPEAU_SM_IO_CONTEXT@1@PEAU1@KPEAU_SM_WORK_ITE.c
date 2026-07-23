/*
 * XREFs of ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14029F070
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x1402E7434 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1402E8F50 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402F63B8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14027D21C (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     SmWorkItemQueue @ 0x14029F5CC (SmWorkItemQueue.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x1402A1234 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     KeQueryPriorityThread @ 0x1402E24A0 (KeQueryPriorityThread.c)
 *     SmFpAllocate @ 0x1402E96E0 (SmFpAllocate.c)
 *     MmUnmapReservedMapping @ 0x140433320 (MmUnmapReservedMapping.c)
 *     ?SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14044A4B0 (-SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z.c)
 *     SmpFpReleaseResource @ 0x1404F7000 (SmpFpReleaseResource.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(_QWORD *a1, __int64 a2, __int16 a3, __int64 a4)
{
  __int128 *v5; // rdx
  int v6; // r14d
  __int64 v8; // rbx
  __int64 v9; // r13
  _QWORD *v10; // r14
  __int128 v11; // xmm0
  __int128 *v12; // r9
  __int64 v13; // r12
  int v14; // esi
  __int64 v15; // r9
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  struct _MDL *v18; // rbx
  PVOID MappedSystemVa; // rdi
  __int64 v20; // r9
  int v22; // ecx
  BOOL v23; // eax
  __int64 v24; // rax
  __int64 (__fastcall *v25)(_QWORD, _QWORD, _QWORD); // r9
  struct _KTHREAD *CurrentThread; // r10
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // r9
  struct _KTHREAD *v30; // r10
  __int64 v31; // rcx
  KPRIORITY PriorityThread; // eax
  int v33; // [rsp+38h] [rbp-29h]
  __int128 v34; // [rsp+40h] [rbp-21h] BYREF
  __int64 v35; // [rsp+50h] [rbp-11h] BYREF
  int v36; // [rsp+58h] [rbp-9h]
  __int16 v37; // [rsp+5Ch] [rbp-5h]
  __int16 v38; // [rsp+5Eh] [rbp-3h]
  __int128 v39; // [rsp+60h] [rbp-1h] BYREF
  __int128 v40; // [rsp+70h] [rbp+Fh]

  v5 = &v34;
  v6 = *(_DWORD *)a4 & 7;
  *((_QWORD *)&v39 + 1) = &v39;
  *(_QWORD *)&v39 = 0LL;
  v33 = v6;
  v8 = 0LL;
  *((_QWORD *)&v34 + 1) = &v34;
  v9 = 0LL;
  *(_QWORD *)&v34 = 0LL;
  v40 = 0LL;
  if ( v6 == 2 && (v22 = *(_DWORD *)(a2 + 2000), v9 = *(_QWORD *)(a4 + 16), (v22 & 2) != 0) )
  {
    v23 = 0;
    if ( (v22 & 1) != 0 )
      v23 = *(_DWORD *)(v9 + 40) <= 0x1000u;
    v10 = a1;
    v13 = a2 + 1704;
    v24 = SmFpAllocate((PEX_SPIN_LOCK)(a2 + 1704), v23);
    v5 = (__int128 *)*((_QWORD *)&v34 + 1);
    v8 = v24;
    if ( !v24 )
    {
      v12 = (__int128 *)v34;
      v14 = -1073741670;
      goto LABEL_8;
    }
  }
  else
  {
    v10 = a1;
  }
  *(_QWORD *)a4 = *(_DWORD *)a4 & 7 | ((*(_QWORD *)v5 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
  *(_QWORD *)v5 = a4 | *(_DWORD *)v5 & 7;
  v5 = (__int128 *)a4;
  *((_QWORD *)&v34 + 1) = a4;
  if ( (__int128 *)a4 == &v34 )
  {
    v12 = (__int128 *)v34;
  }
  else
  {
    v11 = v34;
    v5 = &v34;
    *(_QWORD *)&v34 = 0LL;
    *((_QWORD *)&v34 + 1) = &v34;
    v12 = 0LL;
    v39 = v11;
  }
  if ( v8 )
    *(_QWORD *)&v40 = v9;
  *((_QWORD *)&v40 + 1) = v10;
  v13 = a2 + 1704;
  v14 = 0;
LABEL_8:
  while ( v5 != &v34 )
  {
    *(_QWORD *)&v34 = *(_QWORD *)v12 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v12 == v5 )
    {
      *(_QWORD *)&v34 = 0LL;
      *((_QWORD *)&v34 + 1) = &v34;
    }
    else
    {
      *(_QWORD *)v5 = *(_QWORD *)v5 & 7LL | (8LL * (*(_QWORD *)v5 >> 3) - 8);
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a2, v12, v10);
    v5 = (__int128 *)*((_QWORD *)&v34 + 1);
    v12 = (__int128 *)v34;
  }
  if ( v14 < 0 )
  {
    v18 = (struct _MDL *)v40;
  }
  else
  {
    if ( v33 != 2 )
      goto LABEL_15;
    v25 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a2 + 2008);
    if ( v25 )
    {
      v38 = 0;
      v37 = a3;
      v35 = *a1;
      v36 = *(_DWORD *)(a4 + 24);
      if ( v25 == SmpStoreMgrCallback )
        SmpStoreMgrCallback(a2, &v35, 5LL);
      else
        guard_dispatch_icall_no_overrides(a2, &v35);
    }
    CurrentThread = KeGetCurrentThread();
    v27 = *(_QWORD *)(a2 + 8 * ((unsigned __int64)(a3 & 0x3FF) >> 5));
    v28 = v27 ? v27 + 40LL * (a3 & 0x1F) : 0LL;
    if ( (*(_BYTE *)(*(_QWORD *)v28 + 6837LL) & 4) != 0
      && (*(_DWORD *)(a4 + 8) & 0x4000000) != 0
      && (int)PsGetIoPriorityThread((__int64)CurrentThread) >= 2 )
    {
      if ( *((__int128 **)&v39 + 1) != &v39 )
      {
        v31 = v39;
        *(_QWORD *)&v39 = *(_QWORD *)v39 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v31 == *((_QWORD *)&v39 + 1) )
        {
          *(_QWORD *)&v39 = 0LL;
          *((_QWORD *)&v39 + 1) = &v39;
        }
        else
        {
          **((_QWORD **)&v39 + 1) = **((_QWORD **)&v39 + 1) & 7LL | (8LL * (**((_QWORD **)&v39 + 1) >> 3) - 8);
        }
      }
      *(_OWORD *)(a4 + 40) = 0LL;
      *(_OWORD *)(a4 + 56) = 0LL;
      *(_OWORD *)(a4 + 72) = 0LL;
      *(_QWORD *)(a4 + 72) = v29;
      *(_QWORD *)(a4 + 80) = a2 + 464;
      PriorityThread = KeQueryPriorityThread(v30);
      SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(a2, a2 + 464, a4 + 40, PriorityThread);
    }
    else
    {
LABEL_15:
      if ( *((__int128 **)&v39 + 1) == &v39 )
      {
        v15 = 0LL;
      }
      else
      {
        v15 = v39;
        *(_QWORD *)&v39 = *(_QWORD *)v39 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v15 == *((_QWORD *)&v39 + 1) )
        {
          *(_QWORD *)&v39 = 0LL;
          *((_QWORD *)&v39 + 1) = &v39;
        }
        else
        {
          **((_QWORD **)&v39 + 1) = **((_QWORD **)&v39 + 1) & 7LL | (8LL * (**((_QWORD **)&v39 + 1) >> 3) - 8);
        }
      }
      v16 = *(_QWORD *)(a2 + 8 * ((unsigned __int64)(a3 & 0x3FF) >> 5));
      if ( v16 )
        v17 = (_QWORD *)(v16 + 40LL * (a3 & 0x1F));
      else
        v17 = 0LL;
      SmWorkItemQueue(*v17, v15, 0LL);
    }
    v18 = 0LL;
    v14 = 0;
    *(_QWORD *)&v40 = 0LL;
  }
  if ( v18 )
  {
    MappedSystemVa = v18->MappedSystemVa;
    if ( *(_QWORD *)(v13 + 112) == -1LL && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)v13) )
    {
      MmUnmapReservedMapping(MappedSystemVa, 0x6D526D73u, v18);
      if ( !*(_BYTE *)(v13 + 94) )
      {
        _InterlockedExchange64((volatile __int64 *)(v13 + 112), 0LL);
        KeSetEvent((PRKEVENT)(v13 + 8), 0, 0);
      }
    }
    else
    {
      MmUnmapLockedPages(MappedSystemVa, v18);
    }
  }
  while ( *((__int128 **)&v39 + 1) != &v39 )
  {
    v20 = v39;
    *(_QWORD *)&v39 = *(_QWORD *)v39 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v20 == *((_QWORD *)&v39 + 1) )
    {
      *(_QWORD *)&v39 = 0LL;
      *((_QWORD *)&v39 + 1) = &v39;
    }
    else
    {
      **((_QWORD **)&v39 + 1) = **((_QWORD **)&v39 + 1) & 7LL | (8LL * (**((_QWORD **)&v39 + 1) >> 3) - 8);
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a2, v20, -1LL);
  }
  return (unsigned int)v14;
}
