/*
 * XREFs of ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180012350
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180012950 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800032BC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180010248 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAVResourceSet@ExecutionModel@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x180010304 (-RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x1800103E8 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180012E28 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??0?$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V?$allocator@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@@utl@@@utl@@QEAA@XZ @ 0x180012E4C (--0-$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V-$allocator@UExte.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180020D60 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180023830 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18002B864 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x18005E2EC (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180073888 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008DF38 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18008E00C (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ProcessPendingRequestList(struct _RM_PARTITION *a1, void *a2)
{
  struct _EVENT_DATA_DESCRIPTOR v2; // xmm0
  _QWORD *v4; // rdi
  char *v5; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rdx
  struct _RM_ACTIVITY_HOST *v13; // r8
  int v14; // r14d
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  bool v18; // si
  unsigned int v19; // edx
  int v20; // eax
  bool v21[8]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-88h] BYREF
  __int64 v25; // [rsp+90h] [rbp-78h] BYREF
  __int64 v26; // [rsp+98h] [rbp-70h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v28; // [rsp+A8h] [rbp-60h] BYREF
  void *Block[3]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v30; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v31; // [rsp+D8h] [rbp-30h]
  __int128 v32; // [rsp+E8h] [rbp-20h]
  __int128 v33; // [rsp+F8h] [rbp-10h]
  __int128 v34; // [rsp+108h] [rbp+0h]
  struct _EVENT_DATA_DESCRIPTOR v35[8]; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+1A8h] [rbp+A0h]
  __int64 v38; // [rsp+1B8h] [rbp+B0h]

  v2 = 0LL;
  v22 = 0LL;
  v21[0] = 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  memset(v35, 0, sizeof(v35));
  *(double *)&v2.Ptr = utl::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>(Block);
  v21[1] = 0;
  v4 = (_QWORD *)((char *)a1 + 216);
  v38 = 0LL;
  UserData = v2;
  v37 = v2;
  if ( (_QWORD *)*v4 != v4 )
  {
    if ( (unsigned int)dword_1800E8278 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800E8278, 1LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (__int64)&dword_1800E8278,
        byte_1800D98F8);
    v9 = *((_QWORD *)a1 + 3);
    RmpPolicyPrepareToCheckMetrics(
      a1,
      (struct _RM_POLICY *)(v9 + 400),
      (struct _RM_RESOURCE_USAGE_LIMITS *)v35,
      (struct _RM_SYSTEM_MEMORY_METRICS *)&v30);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 3536) + 32LL);
    while ( (_QWORD *)*v4 != v4 )
    {
      v11 = *(_QWORD *)(*v4 - 16LL);
      v22 = 0LL;
      if ( !RmpResourceSetIsCommitSaveEligible((const struct ExecutionModel::_ResourceSetInfo *)(v11 + 1336)) )
        RmpActivityHostQueryCommitDebt(v13, &v22);
      v14 = RmpResourceCheckDestroyPartitionForAcquire(
              *(struct _RM_RESOURCE_SET **)(v11 + 1312),
              v12,
              (unsigned int)v13);
      if ( (unsigned int)dword_1800E8278 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800E8278, 1LL) )
      {
        v17 = *(_QWORD *)(v11 + 1720);
        v25 = *(_QWORD *)(v10 + 128);
        v26 = *(_QWORD *)(v11 + 128);
        v27 = *((_QWORD *)&v31 + 1);
        v28 = v22;
        *(_QWORD *)&EventDescriptor.Id = *(_QWORD *)(v11 + 104);
        v23 = v17;
        v21[2] = v14;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v17,
          (__int64)&unk_1800D9A4B,
          v15,
          v16,
          (__int64)&EventDescriptor,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v21[2],
          (__int64)&v23);
      }
      RmpPolicyInitializeRevokeContext(*(_QWORD *)(*(_QWORD *)(v11 + 1320) + 56LL), (__int64)Block, v11, &UserData);
      if ( ExecutionModel::ResourceSet::EvaluateResourceRequest(
             (ExecutionModel::ResourceSet *)v11,
             v22,
             (struct _RM_RESOURCE_USAGE_LIMITS *)v35,
             (struct _RM_SYSTEM_MEMORY_METRICS *)&v30,
             (struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)&UserData,
             v21,
             &v21[1]) < 0 )
        break;
      v18 = v21[1];
      v19 = !v21[0] && !v21[1];
      ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)v11, v19, v14 == 0);
      if ( v21[0] || v18 || v14 )
      {
        RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)&UserData);
        break;
      }
      v20 = *(_DWORD *)(v11 + 1332);
      if ( (v20 & 4) == 0 )
        *(_DWORD *)(v11 + 1332) = v20 | 4;
      ExecutionModel::ResourceSet::CompleteAcquire((ExecutionModel::ResourceSet *)v11, 1u);
    }
  }
  if ( (unsigned int)dword_1800E8278 > 5 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
  {
    *(_DWORD *)&EventDescriptor.Level = 517;
    UserData.Ptr = (ULONGLONG)off_1800E8280;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800E8280;
    v37.Ptr = (ULONGLONG)&unk_1800D9A34;
    UserData.Reserved = 2;
    *(_QWORD *)&v37.Size = 0x100000016LL;
    LODWORD(v23) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  while ( 1 )
  {
    v5 = (char *)Block[0];
    if ( Block[0] == Block )
      break;
    v7 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v8 = *(_QWORD *)Block[0];
    *v7 = *(_QWORD *)Block[0];
    *(_QWORD *)(v8 + 8) = v7;
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(v5 + 16);
    operator delete(v5);
  }
  return 0LL;
}
