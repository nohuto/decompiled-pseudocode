/*
 * XREFs of ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1403280A0
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140209BA8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1403270D4 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x1403D44FC (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     ?SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140327D10 (-SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z.c)
 *     SmFpAllocate @ 0x140327D80 (SmFpAllocate.c)
 *     SmFpFree @ 0x140327F20 (SmFpFree.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14032801C (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     SmWorkItemQueue @ 0x140329CD0 (SmWorkItemQueue.c)
 *     KeQueryPriorityThread @ 0x140375500 (KeQueryPriorityThread.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x1403AD66C (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_.c)
 *     MmUnmapReservedMapping @ 0x140411E60 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x140602264 (SmpFpReleaseResource.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(
        unsigned __int64 *a1,
        __int64 a2,
        __int16 a3,
        __int64 a4)
{
  int v4; // r14d
  __int128 *v6; // rdx
  void *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r14
  __int128 v11; // xmm0
  __int128 *v12; // r9
  __int64 v13; // r13
  int v14; // esi
  __int16 v15; // bx
  __int64 v16; // r9
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  struct _MDL *v19; // rbx
  PVOID MappedSystemVa; // rdi
  _DWORD *v21; // r9
  int v23; // ecx
  BOOL v24; // eax
  void *v25; // rax
  __int64 (__fastcall *v26)(struct _EX_RUNDOWN_REF *, unsigned __int64 *, int); // r9
  struct _KTHREAD *CurrentThread; // r10
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // r9
  struct _KTHREAD *v31; // r10
  __int64 v32; // rcx
  unsigned int PriorityThread; // eax
  int v34; // [rsp+38h] [rbp-29h]
  __int128 v35; // [rsp+40h] [rbp-21h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-11h] BYREF
  int v37; // [rsp+58h] [rbp-9h]
  __int16 v38; // [rsp+5Ch] [rbp-5h]
  __int16 v39; // [rsp+5Eh] [rbp-3h]
  __int128 v40; // [rsp+60h] [rbp-1h] BYREF
  __int128 v41; // [rsp+70h] [rbp+Fh]

  v4 = *(_DWORD *)a4 & 7;
  *((_QWORD *)&v40 + 1) = &v40;
  v6 = &v35;
  *(_QWORD *)&v40 = 0LL;
  v34 = v4;
  v8 = 0LL;
  *((_QWORD *)&v35 + 1) = &v35;
  v9 = 0LL;
  *(_QWORD *)&v35 = 0LL;
  v41 = 0LL;
  if ( v4 == 2 && (v23 = *(_DWORD *)(a2 + 2000), v9 = *(_QWORD *)(a4 + 16), (v23 & 2) != 0) )
  {
    v24 = 0;
    if ( (v23 & 1) != 0 )
      v24 = *(_DWORD *)(v9 + 40) <= 0x1000u;
    v10 = (__int64)a1;
    v13 = a2 + 1704;
    v25 = SmFpAllocate((volatile LONG *)(a2 + 1704), 5, (__int64)a1, v9, v24);
    v6 = (__int128 *)*((_QWORD *)&v35 + 1);
    v8 = v25;
    if ( !v25 )
    {
      v12 = (__int128 *)v35;
      v14 = -1073741670;
      goto LABEL_8;
    }
  }
  else
  {
    v10 = (__int64)a1;
  }
  *(_QWORD *)a4 = *(_DWORD *)a4 & 7 | ((*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
  *(_QWORD *)v6 = a4 | *(_DWORD *)v6 & 7;
  v6 = (__int128 *)a4;
  *((_QWORD *)&v35 + 1) = a4;
  if ( (__int128 *)a4 == &v35 )
  {
    v12 = (__int128 *)v35;
  }
  else
  {
    v11 = v35;
    v6 = &v35;
    *(_QWORD *)&v35 = 0LL;
    *((_QWORD *)&v35 + 1) = &v35;
    v12 = 0LL;
    v40 = v11;
  }
  if ( v8 )
    *(_QWORD *)&v41 = v9;
  *((_QWORD *)&v41 + 1) = v10;
  v13 = a2 + 1704;
  v14 = 0;
LABEL_8:
  while ( v6 != &v35 )
  {
    *(_QWORD *)&v35 = *(_QWORD *)v12 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v12 == v6 )
    {
      *(_QWORD *)&v35 = 0LL;
      *((_QWORD *)&v35 + 1) = &v35;
    }
    else
    {
      *(_QWORD *)v6 = *(_QWORD *)v6 & 7LL | (8LL * (*(_QWORD *)v6 >> 3) - 8);
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a2, v12, v10);
    v6 = (__int128 *)*((_QWORD *)&v35 + 1);
    v12 = (__int128 *)v35;
  }
  if ( v14 >= 0 )
  {
    if ( v34 == 2 )
    {
      v26 = *(__int64 (__fastcall **)(struct _EX_RUNDOWN_REF *, unsigned __int64 *, int))(a2 + 2008);
      if ( v26 )
      {
        v15 = a3;
        v36 = *a1;
        v37 = *(_DWORD *)(a4 + 24);
        v39 = 0;
        v38 = a3;
        if ( v26 == SmpStoreMgrCallback )
          SmpStoreMgrCallback((struct _EX_RUNDOWN_REF *)a2, &v36, 5);
        else
          guard_dispatch_icall_no_overrides(a2, &v36);
      }
      else
      {
        v15 = a3;
      }
      CurrentThread = KeGetCurrentThread();
      v28 = *(_QWORD *)(a2 + 8 * ((unsigned __int64)(v15 & 0x3FF) >> 5));
      if ( v28 )
        v29 = v28 + 40LL * (v15 & 0x1F);
      else
        v29 = 0LL;
      if ( (*(_BYTE *)(*(_QWORD *)v29 + 6837LL) & 4) != 0
        && (*(_DWORD *)(a4 + 8) & 0x4000000) != 0
        && (int)PsGetIoPriorityThread((__int64)CurrentThread) >= 2 )
      {
        if ( *((__int128 **)&v40 + 1) != &v40 )
        {
          v32 = v40;
          *(_QWORD *)&v40 = *(_QWORD *)v40 & 0xFFFFFFFFFFFFFFF8uLL;
          if ( v32 == *((_QWORD *)&v40 + 1) )
          {
            *(_QWORD *)&v40 = 0LL;
            *((_QWORD *)&v40 + 1) = &v40;
          }
          else
          {
            **((_QWORD **)&v40 + 1) = **((_QWORD **)&v40 + 1) & 7LL | (8LL * (**((_QWORD **)&v40 + 1) >> 3) - 8);
          }
        }
        *(_OWORD *)(a4 + 40) = 0LL;
        *(_OWORD *)(a4 + 56) = 0LL;
        *(_OWORD *)(a4 + 72) = 0LL;
        *(_QWORD *)(a4 + 72) = v30;
        *(_QWORD *)(a4 + 80) = a2 + 464;
        PriorityThread = KeQueryPriorityThread(v31);
        SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(a2, a2 + 464, a4 + 40, PriorityThread);
        goto LABEL_22;
      }
    }
    else
    {
      v15 = a3;
    }
    if ( *((__int128 **)&v40 + 1) == &v40 )
    {
      v16 = 0LL;
    }
    else
    {
      v16 = v40;
      *(_QWORD *)&v40 = *(_QWORD *)v40 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v16 == *((_QWORD *)&v40 + 1) )
      {
        *(_QWORD *)&v40 = 0LL;
        *((_QWORD *)&v40 + 1) = &v40;
      }
      else
      {
        **((_QWORD **)&v40 + 1) = **((_QWORD **)&v40 + 1) & 7LL | (8LL * (**((_QWORD **)&v40 + 1) >> 3) - 8);
      }
    }
    v17 = *(_QWORD *)(a2 + 8 * ((unsigned __int64)(v15 & 0x3FF) >> 5));
    if ( v17 )
      v18 = (_QWORD *)(v17 + 40LL * (v15 & 0x1F));
    else
      v18 = 0LL;
    SmWorkItemQueue(*v18, v16, 0LL);
LABEL_22:
    v19 = 0LL;
    v14 = 0;
    *(_QWORD *)&v41 = 0LL;
    goto LABEL_23;
  }
  v19 = (struct _MDL *)v41;
LABEL_23:
  if ( v19 )
  {
    MappedSystemVa = v19->MappedSystemVa;
    if ( *(_QWORD *)(v13 + 112) == -1LL && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)v13) )
    {
      MmUnmapReservedMapping(MappedSystemVa, 0x6D526D73u, v19);
      if ( !*(_BYTE *)(v13 + 94) )
      {
        _InterlockedExchange64((volatile __int64 *)(v13 + 112), 0LL);
        KeSetEvent((PRKEVENT)(v13 + 8), 0, 0);
      }
    }
    else
    {
      MmUnmapLockedPages(MappedSystemVa, v19);
    }
  }
  while ( *((__int128 **)&v40 + 1) != &v40 )
  {
    v21 = (_DWORD *)v40;
    *(_QWORD *)&v40 = *(_QWORD *)v40 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v21 == *((_DWORD **)&v40 + 1) )
    {
      *(_QWORD *)&v40 = 0LL;
      *((_QWORD *)&v40 + 1) = &v40;
    }
    else
    {
      **((_QWORD **)&v40 + 1) = **((_QWORD **)&v40 + 1) & 7LL | (8LL * (**((_QWORD **)&v40 + 1) >> 3) - 8);
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a2, v21, -1LL);
  }
  return (unsigned int)v14;
}
