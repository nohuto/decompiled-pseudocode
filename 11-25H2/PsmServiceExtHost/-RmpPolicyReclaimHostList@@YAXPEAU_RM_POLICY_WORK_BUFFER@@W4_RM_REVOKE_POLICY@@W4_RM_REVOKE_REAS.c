/*
 * XREFs of ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18006CA20
 * Callers:
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18000F3F4 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008DAD8 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 * Callees:
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x180003F68 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180066D84 (-RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATI.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180070D04 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPolicyReclaimHostList(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // r8d
  _BYTE v14[24]; // [rsp+20h] [rbp-48h] BYREF

  result = 0LL;
  v5 = 0LL;
  memset(v14, 0, sizeof(v14));
  if ( *(_DWORD *)(a1 + 40) )
  {
    do
    {
      v10 = *(_QWORD *)(a1 + 8);
      v11 = *(_QWORD *)(v10 + 24 * v5 + 8);
      if ( *(_DWORD *)(v10 + 24 * v5 + 16) == 1 )
      {
        v12 = *(_QWORD *)(v10 + 24 * v5);
        v13 = *(_DWORD *)(v10 + 24 * v5 + 20) & 1;
        *(_OWORD *)&v14[8] = 0LL;
        if ( v13 )
          v12 = -1LL;
        *(_QWORD *)v14 = v12;
        *(_DWORD *)&v14[16] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) & 0xFFFFFFF8 | (4 * v13) | (*(_DWORD *)(v11 + 1268) >> 4) & 1;
        result = RmpActivityHostDecommitOfferedMemory(
                   (struct _RM_ACTIVITY_HOST *)v11,
                   (struct _RM_OFFERED_DECOMMIT_INFO *)v14);
      }
      else
      {
        if ( a4 )
          RmpActivityHostAddToRemediationGroup(*(struct _RM_ACTIVITY_HOST **)(v10 + 24 * v5 + 8), a4);
        result = RmpActivityHostRevokeResourceSets(v11, a2, a3);
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *(_DWORD *)(a1 + 40) );
  }
  return result;
}
