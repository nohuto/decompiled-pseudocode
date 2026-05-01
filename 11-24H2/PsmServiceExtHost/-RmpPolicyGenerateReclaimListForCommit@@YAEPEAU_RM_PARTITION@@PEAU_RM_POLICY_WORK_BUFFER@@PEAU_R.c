/*
 * XREFs of ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18000F448
 * Callers:
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18000F374 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180010A90 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x18005E2EC (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 * Callees:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002A060 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyGetActiveSessionCount@@YAKPEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x180063A18 (-RmpPolicyGetActiveSessionCount@@YAKPEAU_RM_POLICY_WORK_BUFFER@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

bool __fastcall RmpPolicyGenerateReclaimListForCommit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  unsigned __int64 v9; // r15
  int v10; // r13d
  unsigned int v11; // r8d
  int v12; // eax
  rsize_t v13; // rdx
  __int64 v14; // rax
  int v15; // edx
  int v16; // eax
  int v17; // r13d
  unsigned int v18; // r14d
  unsigned __int64 v19; // rbx
  __int64 v20; // rdi
  bool result; // al
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned int ActiveSessionCount; // eax
  int v28; // edx
  unsigned __int64 v29; // r9
  __int64 v30; // r10
  _DWORD *v31; // rcx
  int v32; // [rsp+30h] [rbp-30h]
  unsigned int v33; // [rsp+34h] [rbp-2Ch]
  int v34; // [rsp+38h] [rbp-28h]
  __int64 Context; // [rsp+40h] [rbp-20h] BYREF
  int v36; // [rsp+48h] [rbp-18h]
  int v37; // [rsp+4Ch] [rbp-14h]
  unsigned int v38; // [rsp+50h] [rbp-10h]
  char v39; // [rsp+54h] [rbp-Ch]
  __int16 v40; // [rsp+55h] [rbp-Bh]
  char v41; // [rsp+57h] [rbp-9h]
  int v42; // [rsp+A8h] [rbp+48h]
  unsigned int v44; // [rsp+B8h] [rbp+58h]

  v9 = 0LL;
  v33 = 0;
  if ( !*(_DWORD *)(a2 + 36) )
    goto LABEL_15;
  v10 = a6;
  memset_0(*(void **)(a2 + 8), 0, 24LL * *(unsigned int *)(a2 + 32));
  if ( a6 == 1 )
  {
    v11 = 0;
  }
  else
  {
    ActiveSessionCount = RmpPolicyGetActiveSessionCount((struct _RM_POLICY_WORK_BUFFER *)a2);
    v28 = 0;
    v29 = 0LL;
    v11 = -1;
    if ( 5 * (unsigned __int64)ActiveSessionCount <= 0xFFFFFFFF )
      v11 = 5 * ActiveSessionCount;
    if ( *(_DWORD *)(a2 + 36) )
    {
      v30 = *(unsigned int *)(a2 + 36);
      v31 = (_DWORD *)(*(_QWORD *)a2 + 56LL);
      do
      {
        v29 += *((_QWORD *)v31 - 2);
        if ( *v31 > *(_DWORD *)(*(_QWORD *)(a1 + 24) + 520LL) && *(char *)(*((_QWORD *)v31 - 1) + 1184LL) < 0 )
          ++v28;
        v31 += 16;
        --v30;
      }
      while ( v30 );
    }
    if ( v11 < *(_DWORD *)(a1 + 212) && v28 )
    {
      v12 = 0;
      goto LABEL_5;
    }
    if ( v29 >= a4 )
    {
      v12 = 1;
      v10 = 0;
      goto LABEL_5;
    }
  }
  v12 = 2;
LABEL_5:
  v13 = *(unsigned int *)(a2 + 36);
  v37 = v12;
  v14 = *(_QWORD *)(a1 + 24);
  v40 = 0;
  v41 = 0;
  v38 = v11;
  Context = a2;
  v36 = v10;
  v39 = *(_BYTE *)(v14 + 512);
  qsort_s(*(void **)a2, v13, 0x40uLL, RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk, &Context);
  v15 = v36;
  v34 = v37;
  v42 = v36;
  switch ( v37 )
  {
    case 0:
      v16 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 520LL);
      goto LABEL_9;
    case 1:
      v16 = a5;
      v17 = 1;
      goto LABEL_10;
    case 2:
      v16 = a5;
LABEL_9:
      v17 = 0;
LABEL_10:
      v18 = 0;
      v44 = *(_DWORD *)(a1 + 212);
      v32 = v16;
      while ( 1 )
      {
        if ( v18 >= *(_DWORD *)(a2 + 36) || a4 <= v9 )
          goto LABEL_15;
        v19 = *(_QWORD *)a2 + ((unsigned __int64)v18 << 6);
        v20 = *(_QWORD *)(v19 + 48);
        if ( v20 != a3 )
          break;
LABEL_20:
        v16 = v32;
        ++v18;
      }
      if ( *(_DWORD *)(v19 + 56) <= v16 )
        break;
      if ( v15 == 1 )
      {
        if ( (*(_BYTE *)(v20 + 1184) & 0x10) == 0 )
          break;
      }
      else if ( (unsigned int)(v15 - 2) >= 2 )
      {
LABEL_21:
        RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v20);
        v22 = *(_QWORD *)(a2 + 8);
        v23 = 3LL * v33++;
        *(_QWORD *)(v22 + 8 * v23 + 8) = v20;
        if ( v34 == 2 )
        {
          if ( v42 != 1 && v9 + *(_QWORD *)(v19 + 40) >= a4 )
          {
            *(_DWORD *)(v22 + 8 * v23 + 16) = 1;
            v24 = a4 - v9;
            v9 = a4;
            *(_QWORD *)(v22 + 8 * v23) = v24;
            break;
          }
        }
        else if ( v34 == 1 )
        {
          *(_DWORD *)(v22 + 8 * v23 + 20) |= 1u;
        }
        *(_DWORD *)(v22 + 8 * v23 + 16) = v17;
        if ( !v37 )
          goto LABEL_30;
        if ( v37 == 1 )
        {
          v25 = *(_QWORD *)(v19 + 40);
          goto LABEL_31;
        }
        if ( v37 != 2 )
          v25 = 0LL;
        else
LABEL_30:
          v25 = *(_QWORD *)v19;
LABEL_31:
        v26 = v44;
        v9 += v25;
        *(_QWORD *)(v22 + 8 * v23) = v25;
        if ( !v17 && *(char *)(v20 + 1184) < 0 )
          v26 = --v44;
        if ( !v34 && v26 <= v38 )
          break;
        goto LABEL_19;
      }
      if ( !RmpActivityHostIsRevocable(*(struct _RM_ACTIVITY_HOST **)(v19 + 48)) )
      {
LABEL_19:
        v15 = v42;
        goto LABEL_20;
      }
      goto LABEL_21;
  }
LABEL_15:
  result = v9 >= a4;
  *(_DWORD *)(a2 + 40) = v33;
  return result;
}
