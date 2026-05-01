/*
 * XREFs of ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180023360
 * Callers:
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x180003F78 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x1800228D0 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180024340 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180070B04 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KKPEA_K3@Z @ 0x180023660 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KKPEA_K3@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180023830 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryCommit(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  const wchar_t *v8; // rbx
  __int64 result; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  int v18; // eax
  _DWORD v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  void *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]
  __int64 *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  const wchar_t *v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+ECh] [rbp-14h]
  _DWORD *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v8 = (const wchar_t *)((char *)a1 + 88);
  result = ModernResourceEnforcer::QueryCurrentMemoryUsage(
             *(ModernResourceEnforcer **)(*((_QWORD *)a1 + 6) + 40LL),
             (const unsigned __int16 *)a1 + 44,
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 552),
             *((_DWORD *)a1 + 155),
             *((_DWORD *)a1 + 156),
             *((_QWORD *)a1 + 4),
             *((_BYTE *)a1 + 656) != 0 ? 4 : 0,
             &v21,
             &v22);
  if ( (int)result >= 0 )
  {
    if ( (int)RmpActivityHostQueryCommitDebt(a1, &v20) >= 0 )
    {
      v10 = v20;
    }
    else
    {
      v10 = 0LL;
      v20 = 0LL;
    }
    v11 = v21;
    v12 = v21;
    if ( v10 < v21 )
      v12 = v10;
    v13 = v21 - v12;
    if ( v21 && v13 <= 1 )
      v13 = 1LL;
    v14 = v22;
    v15 = v22 + v13;
    if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
    {
      v19[0] = *((_DWORD *)a1 + 156);
      v27 = *((_QWORD *)a1 + 4);
      v46 = &v23;
      v44 = &v24;
      v42 = &v25;
      v40 = &v26;
      v38 = v19;
      v23 = v10;
      v24 = v22;
      v25 = v21;
      v26 = v22 + v13;
      v47 = 8LL;
      v45 = 8LL;
      v43 = 8LL;
      v41 = 8LL;
      v39 = 4LL;
      if ( v8 )
      {
        v16 = -1LL;
        while ( v8[++v16] != 0 )
          ;
        v18 = 2 * v16 + 2;
      }
      else
      {
        v8 = &word_1800C1FFC;
        v18 = 2;
      }
      v36 = v18;
      v35 = v8;
      v33 = &v27;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E8280;
      v37 = 0;
      v34 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800E8280;
      v30 = &unk_1800D87F7;
      UserData.Reserved = 2;
      v31 = 150;
      v32 = 1;
      v19[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
      v11 = v21;
      v14 = v22;
    }
    if ( a2 )
      *a2 = v13;
    if ( a3 )
      *a3 = v14 + v11;
    if ( a4 )
      *a4 = v15;
    return 0LL;
  }
  return result;
}
