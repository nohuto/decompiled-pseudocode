/*
 * XREFs of ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F090
 * Callers:
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024218 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180020FB0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPolicyGetDesiredEmptyOptimizationsForHost(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbx
  __int64 PageCount64; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  char *v13; // rax
  unsigned __int64 v14; // rax
  int v15; // edx
  int v16; // edi
  _QWORD v19[7]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  _BYTE v23[72]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v24; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v25; // [rsp+E8h] [rbp-18h]
  _BYTE v26[4]; // [rsp+100h] [rbp+0h] BYREF
  int v27; // [rsp+104h] [rbp+4h]
  int v28; // [rsp+108h] [rbp+8h]
  __int64 v29; // [rsp+118h] [rbp+18h]
  __int64 v30; // [rsp+120h] [rbp+20h]
  __int64 v31; // [rsp+130h] [rbp+30h]
  __int64 v32; // [rsp+140h] [rbp+40h]
  __int64 v33; // [rsp+148h] [rbp+48h]
  char v34[64]; // [rsp+158h] [rbp+58h] BYREF
  char v35; // [rsp+198h] [rbp+98h] BYREF
  __int64 v36; // [rsp+1D8h] [rbp+D8h]

  if ( (*(_BYTE *)(a2 + 1268) & 0x10) != 0 )
  {
    return 0;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 56);
    memset_0(v23, 0, 0x80uLL);
    memset_0(v26, 0, 0xF0uLL);
    v5 = *(_QWORD *)(v4 + 32);
    v27 = -1;
    v28 = -1;
    NtManagePartition(v5, 0LL, 0LL, v26, 240);
    v6 = 0;
    v7 = 0LL;
    v8 = RmpPageSize * v36;
    v9 = RmpPageSize * v31;
    v19[1] = RmpPageSize * v30;
    v19[3] = RmpPageSize * v30 - RmpPageSize * v29;
    v19[4] = 0LL;
    v22 = 0LL;
    v19[0] = RmpPageSize * v36;
    v19[2] = RmpPageSize * v29;
    v19[5] = RmpPageSize * v31;
    PageCount64 = SwGetPageCount64(v34, 0LL, 5LL);
    v11 = 8LL;
    v12 = PageCount64 + v32 + v33;
    v13 = &v35;
    v19[6] = RmpPageSize * v12;
    v20 = v9 - RmpPageSize * v12;
    do
    {
      v7 += *(_QWORD *)v13;
      v13 += 8;
      --v11;
    }
    while ( v11 );
    v21 = v7;
    RmpPolicyComputeUsageLimits(
      (struct _RM_USAGE_LIMIT_SETTINGS *)a1,
      (struct _RM_REMEDIATION_ACTIONS *)(a1 + 56),
      (struct _RM_SYSTEM_MEMORY_METRICS *)v19,
      v8,
      (struct _RM_RESOURCE_USAGE_LIMITS *)v23);
    v14 = v20;
    *(_WORD *)(v4 + 204) = 0;
    if ( (*(_DWORD *)(a1 + 100) && v14 > v25 || v14 > v24) && (*(_DWORD *)(a1 + 104) & 4) == 0 )
    {
      v15 = *(_DWORD *)(a2 + 1456);
      if ( (*(_DWORD *)(a2 + 1268) & 0x10) == 0 && (v15 & 0x200) == 0 )
      {
        v16 = 2 * (*(_DWORD *)(a1 + 104) & 1);
        if ( (v15 & 0x100) == 0 )
          v16 = (2 * (*(_DWORD *)(a1 + 104) & 1)) | (2 * (*(_DWORD *)(a1 + 104) & 2));
        v6 = v16 | 2;
      }
      v6 |= *(_DWORD *)(a2 + 1268) & 0x27;
    }
    return (unsigned int)(*(_DWORD *)(a2 + 1460) & 0x27 | v6);
  }
}
