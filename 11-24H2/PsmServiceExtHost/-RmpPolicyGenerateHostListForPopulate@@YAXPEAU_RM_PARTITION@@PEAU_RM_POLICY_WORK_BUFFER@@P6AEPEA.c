/*
 * XREFs of ?RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z3@Z @ 0x18000FCF0
 * Callers:
 *     ?RmpOfferLazyDecommitQueuePartitionHosts@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FBB0 (-RmpOfferLazyDecommitQueuePartitionHosts@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180012E64 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180060E54 (-HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x1800639BC (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpPolicyGenerateHostListForPopulate(
        struct _RM_PARTITION *a1,
        struct _RM_POLICY_WORK_BUFFER *a2,
        unsigned __int8 (__fastcall *a3)(__int64, void *),
        void *a4)
{
  size_t v7; // r8
  __int64 v9; // r15
  __int64 *i; // rdx
  __int64 *v11; // rbx
  __int64 v12; // rbx
  signed __int64 v13; // rax
  bool v14; // cc
  signed __int64 v15; // rax
  __int64 *v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  signed __int64 v19; // rax
  signed __int64 v20; // rax
  int v21; // ecx
  int v22; // ecx
  void *v23; // rcx
  int v24; // ecx
  int v25; // ecx
  void *v26; // rcx
  struct _RM_PARTITION *v27; // rcx
  struct _RM_PARTITION *v28; // rcx
  __int64 *v29; // [rsp+30h] [rbp-38h]
  __int64 *v30; // [rsp+38h] [rbp-30h]

  v7 = (unsigned __int64)*((unsigned int *)a2 + 8) << 6;
  *((_DWORD *)a2 + 9) = 0;
  memset_0(*(void **)a2, 0, v7);
  v9 = *((_QWORD *)a1 + 3) + 16LL;
  RtlAcquireSRWLockShared(*((_QWORD *)a1 + 3) + 32LL);
  i = *(__int64 **)(v9 + 8);
  v11 = i;
  v30 = i;
  if ( !i )
    goto LABEL_5;
  if ( (*i & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    i = *(__int64 **)(v9 + 8);
  v12 = *v11;
  if ( (v12 & 1) == 0 )
  {
LABEL_9:
    v29 = (__int64 *)v12;
    if ( v12 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 16)) <= 1 )
LABEL_25:
        __fastfail(0xEu);
      while ( 1 )
      {
        if ( *(struct _RM_PARTITION **)(v12 + 56) == a1 )
        {
          if ( !a3 || a3(v12, a4) )
          {
            v17 = *(_QWORD *)a2;
            v18 = (unsigned __int64)*((unsigned int *)a2 + 9) << 6;
            *(_QWORD *)(v18 + v17) = 0LL;
            *(_QWORD *)(v18 + v17 + 8) = 0LL;
            *(_QWORD *)(v18 + v17 + 16) = 0LL;
            *(_QWORD *)(v18 + v17 + 24) = 0LL;
            *(_QWORD *)(v18 + v17 + 32) = 0LL;
            *(_QWORD *)(v18 + v17 + 40) = 0LL;
            *(_QWORD *)(v18 + v17 + 56) = 0LL;
            *(_QWORD *)(v18 + v17 + 48) = v12;
            ++*((_DWORD *)a2 + 9);
            v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 16), 0xFFFFFFFFFFFFFFFFuLL);
            v14 = v19 <= 1;
            v20 = v19 - 1;
            if ( v14 )
            {
              if ( v20 )
                goto LABEL_38;
              v21 = *(_DWORD *)(v12 + 40);
              if ( v21 != 3 )
              {
                if ( v21 )
                {
                  v22 = v21 - 1;
                  if ( v22 )
                  {
                    if ( v22 == 1 && !*(_DWORD *)(v12 + 96) && !*(_DWORD *)(v12 + 100) )
                      NtDeleteWnfStateName(v12 + 96, i);
                  }
                  else
                  {
                    v23 = *(void **)(v12 + 56);
                    if ( v23 )
                      NtClose(v23);
                  }
                }
                else
                {
                  RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(v12 + 1320));
                  v28 = *(struct _RM_PARTITION **)(v12 + 56);
                  if ( v28 )
                    RmpPartitionRelease(v28);
                  HampHostCleanup((struct _RM_HAM_ACTIVITY_HOST *)(v12 + 64));
                }
              }
              HampFreeHeap((void *)v12);
            }
          }
          else
          {
            v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 16), 0xFFFFFFFFFFFFFFFFuLL);
            v14 = v13 <= 1;
            v15 = v13 - 1;
            if ( v14 )
            {
              if ( v15 )
LABEL_38:
                __fastfail(0xEu);
              v24 = *(_DWORD *)(v12 + 40);
              if ( v24 != 3 )
              {
                if ( v24 )
                {
                  v25 = v24 - 1;
                  if ( v25 )
                  {
                    if ( v25 == 1 && !*(_DWORD *)(v12 + 96) && !*(_DWORD *)(v12 + 100) )
                      NtDeleteWnfStateName(v12 + 96, i);
                  }
                  else
                  {
                    v26 = *(void **)(v12 + 56);
                    if ( v26 )
                      NtClose(v26);
                  }
                }
                else
                {
                  RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(v12 + 1320));
                  v27 = *(struct _RM_PARTITION **)(v12 + 56);
                  if ( v27 )
                    RmpPartitionRelease(v27);
                  HampHostCleanup((struct _RM_HAM_ACTIVITY_HOST *)(v12 + 64));
                }
              }
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v12);
            }
          }
        }
        else
        {
          RmpObjectRelease((PVOID)v12);
        }
        v16 = v29;
        if ( !v29 )
          goto LABEL_19;
        if ( (*v29 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v16 = v29;
        v12 = *v16;
        if ( (v12 & 1) != 0 )
        {
LABEL_19:
          for ( i = v30 + 1; ; ++i )
          {
            if ( (unsigned __int64)i >= *(_QWORD *)(v9 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v9 + 4) >> 5) )
              goto LABEL_35;
            v12 = *i;
            if ( (*i & 1) == 0 )
              break;
          }
          v30 = i;
        }
        v29 = (__int64 *)v12;
        if ( !v12 )
          break;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 16)) <= 1 )
          goto LABEL_25;
      }
    }
  }
  else
  {
LABEL_5:
    for ( ++i; (unsigned __int64)i < *(_QWORD *)(v9 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v9 + 4) >> 5); ++i )
    {
      if ( (*(_BYTE *)i & 1) == 0 )
      {
        _mm_lfence();
        v12 = *i;
        v30 = i;
        goto LABEL_9;
      }
    }
  }
LABEL_35:
  RtlReleaseSRWLockShared(v9 + 16);
}
