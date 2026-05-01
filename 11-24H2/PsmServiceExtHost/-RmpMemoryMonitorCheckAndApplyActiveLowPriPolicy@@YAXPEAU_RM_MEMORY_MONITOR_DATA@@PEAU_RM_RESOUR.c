/*
 * XREFs of ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008F0DC
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001F430 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180003454 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18000F374 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x1800100E0 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18001FBE0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180020D60 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180021770 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1800367D4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18005F020 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

void __fastcall RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_RESOURCE_USAGE_LIMITS *a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // r8d
  int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  _QWORD v26[3]; // [rsp+40h] [rbp-99h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-81h] BYREF
  _BYTE v28[16]; // [rsp+60h] [rbp-79h] BYREF
  __int64 v29; // [rsp+70h] [rbp-69h]
  _BYTE v30[16]; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-19h]
  int v32; // [rsp+140h] [rbp+67h] BYREF
  __int64 v33; // [rsp+150h] [rbp+77h] BYREF
  __int64 v34; // [rsp+158h] [rbp+7Fh] BYREF

  memset_0(v28, 0, 0x50uLL);
  memset_0(v30, 0, 0x50uLL);
  v4 = *(_QWORD *)a1;
  v5 = 0LL;
  v32 = 0;
  v6 = *(_QWORD *)(v4 + 24);
  v26[1] = v26;
  v26[0] = v26;
  v26[2] = *((_QWORD *)a1 + 4);
  RmpPolicyPrepareToCheckMetrics((struct _RM_PARTITION *)v4, (struct _RM_POLICY *)(v6 + 400), a2, 0LL);
  RmpAcquireGlobalLock();
  v7 = *(_QWORD *)a1;
  *(_WORD *)(v7 + 204) = 0;
  RmpPolicyPopulateActivityHostMetrics(
    v4,
    *(_DWORD *)(v6 + 516),
    (char **)(v7 + 160),
    3u,
    (unsigned __int8 (__fastcall *)(__int64, __int64))RmpMemoryMonitorActiveLowPriFilterCallback,
    0LL);
  if ( *(_DWORD *)(v7 + 196) )
  {
    v10 = *(_QWORD **)(v7 + 160);
    v11 = *(unsigned int *)(v7 + 196);
    do
    {
      v5 += *v10;
      v10 += 8;
      --v11;
    }
    while ( v11 );
    if ( v5 >= *((_QWORD *)a2 + 12) )
    {
      v15 = dword_1800E8278;
      if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
      {
        LODWORD(v33) = v17;
        v34 = v18;
        v27 = v5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v16,
          (__int64)&unk_1800DA63C,
          v17,
          v18,
          (__int64)&v27,
          (__int64)&v34,
          (__int64)&v33);
        v15 = dword_1800E8278;
      }
      if ( v15 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
        RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v4, (struct _RM_SYSTEM_MEMORY_METRICS *)v30);
      RmpMemoryMonitorGenerateHostListAndRevoke(v4, v8, *((_QWORD *)a2 + 12) - v5, 1u, 5u, (__int64)v26);
      RmpReleaseGlobalLock();
      RmpMemoryMonitorWaitForEvents(a1, 13, *((_DWORD *)a1 + 18), (enum _RM_MEMORY_MONITOR_EVENT *)&v32);
      if ( dword_1800E8278 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
      {
        if ( v21 )
        {
          if ( v20 > 4 && tlgKeywordOn(v19, 0x200000000001LL) )
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
              v25,
              byte_1800DA159);
        }
        else
        {
          RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v4, (struct _RM_SYSTEM_MEMORY_METRICS *)v28);
          if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 0x200000000001LL) )
          {
            v33 = v29;
            v34 = v31;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              v22,
              byte_1800DA307,
              v23,
              v24,
              (__int64)&v32,
              (__int64)&v34,
              (__int64)&v33);
          }
        }
      }
      RmpAcquireGlobalLock();
    }
    else if ( (unsigned int)dword_1800E8278 > 5 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
    {
      v32 = v13;
      v33 = v14;
      v34 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v12,
        (__int64)&unk_1800DA3BE,
        v13,
        v14,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32);
    }
  }
  else if ( (unsigned int)dword_1800E8278 > 5 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
  {
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v9,
      byte_1800DA570);
  }
  RmpActivityHostCleanupRemediationGroup((struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v26);
  RmpReleaseGlobalLock();
}
