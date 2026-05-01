/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x180003F68
 * Callers:
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180003C40 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800243C0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18006CA20 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 * Callees:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180005180 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x1800233E0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18005AC1C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemory(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_OFFERED_DECOMMIT_INFO *a2)
{
  int v2; // ebx
  unsigned __int64 v3; // rsi
  int v4; // ebx
  bool v5; // zf
  unsigned int v8; // edx
  int (*v9)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // r9
  int v10; // r15d
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  bool v15; // al
  __int64 v16; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+38h] BYREF
  unsigned __int64 v18; // [rsp+90h] [rbp+40h] BYREF
  __int64 v19; // [rsp+98h] [rbp+48h] BYREF

  v2 = *((_DWORD *)a2 + 4);
  v3 = 0LL;
  v17 = 0LL;
  v4 = v2 & 2;
  v5 = (*((_BYTE *)a2 + 16) & 1) == 0;
  v18 = 0LL;
  if ( v5 )
  {
    v8 = 0x2000;
    v9 = (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostDecommitOfferedMemoryDxgCallback;
  }
  else
  {
    if ( v4 )
      RmpAcquireGlobalLock();
    RmpActivityHostQueryCommit(a1, 0LL, 0LL, &v18);
    if ( v4 )
      RmpReleaseGlobalLock();
    v3 = v18;
    v9 = RmpActivityHostDecommitOfferedMemoryCommitSaveCallback;
    v8 = 8193;
  }
  v10 = RmHamHostActOnProcesses(a1, v8, 0, v9, a2);
  if ( v10 >= 0 )
  {
    if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
    {
      if ( v4 )
        RmpAcquireGlobalLock();
      v10 = RmpActivityHostQueryCommit(a1, 0LL, 0LL, &v17);
      if ( v4 )
        RmpReleaseGlobalLock();
      if ( v10 >= 0 && v3 >= v17 )
      {
        v5 = (*((_BYTE *)a2 + 16) & 4) == 0;
        *((_QWORD *)a2 + 1) = v3 - v17;
        if ( !v5 )
          *((_DWORD *)a1 + 316) |= 4u;
      }
    }
    if ( v4 )
      RmpAcquireGlobalLock();
    *((_QWORD *)a1 + 154) += *((_QWORD *)a2 + 1);
    if ( v4 )
      RmpReleaseGlobalLock();
  }
  if ( (unsigned int)dword_1800E7278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E7278, 25LL) )
  {
    v15 = (*((_DWORD *)a2 + 4) & 2) != 0;
    LODWORD(v18) = v10;
    LOBYTE(v17) = v15;
    v19 = *((_QWORD *)a2 + 1);
    v16 = *((_QWORD *)a1 + 4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v12,
      (unsigned int)&unk_1800D7448,
      v13,
      v14,
      (__int64)&v18,
      (__int64)&v16,
      (__int64)&v19,
      (__int64)&v17);
  }
  return (unsigned int)v10;
}
