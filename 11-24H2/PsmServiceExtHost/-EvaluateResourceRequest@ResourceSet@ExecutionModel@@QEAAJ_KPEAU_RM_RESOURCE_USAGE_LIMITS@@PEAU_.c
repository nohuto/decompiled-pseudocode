/*
 * XREFs of ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x18005E2EC
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180012350 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18000F448 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180011E3C (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180012E00 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002BC04 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18005EBFC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180073888 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180073894 (--_U@YAPEAX_K@Z.c)
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18008DEE4 (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::EvaluateResourceRequest(
        ExecutionModel::ResourceSet *this,
        __int64 a2,
        struct _RM_RESOURCE_USAGE_LIMITS *a3,
        struct _RM_SYSTEM_MEMORY_METRICS *a4,
        struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *a5,
        bool *a6,
        bool *a7)
{
  struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *v7; // rbp
  char v8; // bl
  struct _RM_RESOURCE_USAGE_LIMITS *v10; // r9
  _QWORD *v13; // r13
  ExecutionModel::_ResourceInfo *v14; // rax
  ExecutionModel::_ResourceInfo *v15; // rsi
  __int64 v16; // xmm0_8
  int v17; // ebx
  int v18; // esi
  int v19; // eax
  bool *v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  unsigned int v23; // r13d
  __int64 v24; // rsi
  __int64 v25; // rcx
  bool v26; // al
  bool *v27; // r9
  bool *v28; // r14
  __int64 v29; // rsi
  int v30; // ebp
  _QWORD *i; // rax
  __int64 v32; // r10
  _QWORD *k; // rax
  __int64 v34; // r10
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // r14
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // r9
  int v44; // ebx
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // r9
  __int64 j; // r8
  unsigned __int64 v48; // r11
  __int64 v49; // rcx
  __int64 m; // r8
  unsigned __int64 v51; // r11
  __int64 v52; // rcx
  __int64 v53; // [rsp+50h] [rbp-48h]
  __int64 v54; // [rsp+A0h] [rbp+8h] BYREF
  struct _RM_RESOURCE_USAGE_LIMITS *v55; // [rsp+B0h] [rbp+18h]

  v55 = a3;
  v7 = a5;
  v8 = 0;
  LOBYTE(a5) = 0;
  v10 = a3;
  v13 = (_QWORD *)*((_QWORD *)v7 + 1);
  LOBYTE(v54) = 0;
  if ( *((_DWORD *)this + 366) == 2 )
  {
    v53 = *((_QWORD *)this + 8);
    v14 = (ExecutionModel::_ResourceInfo *)operator new[](0x18uLL);
    v15 = v14;
    if ( !v14 )
    {
      v18 = -2147024882;
      goto LABEL_8;
    }
    ExecutionModel::_ResourceInfo::_ResourceInfo(v14);
    v16 = *((_QWORD *)this + 185);
    *(_OWORD *)v15 = *(_OWORD *)((char *)this + 1464);
    *((_QWORD *)v15 + 2) = v16;
    v17 = ExecutionModel::BaseResourceSet::RecursiveVisit(v53, 0, 1u, (__int64)v15, 0, 1, &a5, &v54, v13, 0LL);
    operator delete(v15);
    v18 = 0;
    if ( v17 < 0 )
      v18 = v17;
    if ( v18 >= 0 )
    {
      if ( (_BYTE)v54 )
      {
        v8 = (char)a5;
        if ( !(_BYTE)a5 )
        {
LABEL_8:
          v19 = 0;
LABEL_9:
          v10 = v55;
          goto LABEL_10;
        }
      }
      else
      {
        if ( *((_QWORD *)this + 184) > *(_QWORD *)(*((_QWORD *)this + 3) + 40LL) )
        {
          v8 = 0;
          v18 = -2147220992;
          goto LABEL_8;
        }
        v8 = 1;
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64)v13);
      }
      v19 = 2;
      goto LABEL_9;
    }
    v8 = (char)a5;
    goto LABEL_8;
  }
  v19 = 0;
  v18 = 0;
LABEL_10:
  v20 = a6;
  *((_DWORD *)v7 + 8) = v19;
  *v20 = v8;
  if ( v18 < 0 )
    return (unsigned int)v18;
  v21 = *((_QWORD *)this + 181);
  v22 = -1LL;
  if ( v21 != -1LL && a2 != -1 )
  {
    v22 = v21 + a2;
    if ( v21 + a2 < v21 )
      return (unsigned int)-805306219;
  }
  v23 = *((_DWORD *)this + 336);
  a5 = (struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)*((_QWORD *)this + 165);
  v24 = *((_QWORD *)a5 + 7) + 160LL;
  v25 = *(_QWORD *)(*((_QWORD *)this + 3) + 128LL);
  v54 = v25;
  if ( !v22 )
    goto LABEL_13;
  v36 = v22 + *((_QWORD *)a4 + 2);
  if ( v36 + 1 < v22 )
  {
    *(_DWORD *)(v24 + 40) = 0;
LABEL_52:
    v18 = -2147220992;
    *a7 = 0;
    return (unsigned int)v18;
  }
  if ( *((_QWORD *)a4 + 1) < v22 && *((char *)this + 1378) >= 0 )
    goto LABEL_52;
  v37 = *((_QWORD *)v10 + 6);
  if ( (int)RmpEmPriorityCompare(v23, *(unsigned int *)(v25 + 516), v36, v10) >= 0 )
    v40 = v37;
  else
    v40 = *(_QWORD *)(v39 + 32);
  if ( v38 >= v37 || v38 >= v40 )
  {
    RmpPolicyEnsureMetricsForAcquire(*((struct _RM_PARTITION **)v7 + 2), a4);
    if ( (int)RmpEmPriorityCompare(v23, *(unsigned int *)(v54 + 516), v41, v42) < 0 )
    {
      v43 = v22 + *((_QWORD *)a4 + 2) - *((_QWORD *)a4 + 4);
      if ( v43 >= v40 )
      {
        v44 = 1;
        v45 = v43 - v40;
LABEL_50:
        RmpPolicyGenerateReclaimListForCommit(*((_QWORD *)v7 + 2), v24, (__int64)a5, v45, v23, v44);
        v26 = 1;
        *((_DWORD *)v7 + 9) = v44;
        goto LABEL_14;
      }
    }
    v46 = v22 + *((_QWORD *)a4 + 2);
    if ( v46 >= v37 )
    {
      v44 = 2;
      v45 = v46 - v37 + 1;
      goto LABEL_50;
    }
  }
LABEL_13:
  v26 = 0;
  *((_DWORD *)v7 + 9) = 0;
  *(_DWORD *)(v24 + 40) = 0;
LABEL_14:
  v27 = a7;
  v28 = a6;
  *a7 = v26;
  if ( *v28 )
  {
    *(_DWORD *)(v24 + 40) = 0;
    *((_DWORD *)v7 + 9) = 0;
    *v27 = 0;
  }
  else if ( !v26 )
  {
    v29 = *((_QWORD *)this + 8);
    v30 = *((_DWORD *)this + 336);
    for ( i = *(_QWORD **)(v29 + 40); i != (_QWORD *)(v29 + 40); i = (_QWORD *)*i )
    {
      v32 = i[2];
      if ( *(_DWORD *)(v32 + 1280) == 1 && *(_DWORD *)(v32 + 1288) < v30 )
      {
        for ( j = 0LL; !(_DWORD)j; j = 1LL )
        {
          if ( *((_QWORD *)this + 3 * j + 184) )
          {
            v48 = *((unsigned int *)this + 6 * j + 366);
            if ( *(_QWORD *)(v32 + 24LL * (int)v48 + 80) )
            {
              v49 = *(_QWORD *)(v29 + 1272);
              if ( !_bittest64(&v49, v48) )
              {
                *v28 = 1;
                return 0;
              }
            }
          }
        }
      }
    }
    if ( !*v27 )
    {
      for ( k = *(_QWORD **)(v29 + 40); k != (_QWORD *)(v29 + 40); k = (_QWORD *)*k )
      {
        v34 = k[2];
        if ( *(_DWORD *)(v34 + 1280) == 1 && *(_DWORD *)(v34 + 1288) < v30 )
        {
          for ( m = 0LL; !(_DWORD)m; m = 1LL )
          {
            if ( *((_QWORD *)this + 3 * m + 181) )
            {
              v51 = *((unsigned int *)this + 6 * m + 360);
              if ( *(_QWORD *)(v34 + 24LL * (int)v51 + 80) )
              {
                v52 = *(_QWORD *)(v29 + 1272);
                if ( !_bittest64(&v52, v51) )
                {
                  *v27 = 1;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
