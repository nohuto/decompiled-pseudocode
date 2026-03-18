/*
 * XREFs of DeactivateKSTInputProcessingHelper @ 0x140215790
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x140092850 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E47E0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     KSTIOCPDispatcher_Destroy @ 0x14020DB50 (KSTIOCPDispatcher_Destroy.c)
 *     ?DeactivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ @ 0x14021211C (-DeactivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ.c)
 *     CleanupSensorExplicitly @ 0x140212570 (CleanupSensorExplicitly.c)
 *     ?DeactivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ @ 0x14021554C (-DeactivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ.c)
 *     ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x1402155D4 (-ShouldKSTInitializeHidSensor@@YA_NXZ.c)
 *     ApiSetEditionPrepareHidForInputThreadMigration @ 0x14022217C (ApiSetEditionPrepareHidForInputThreadMigration.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 DeactivateKSTInputProcessingHelper()
{
  char v0; // bl
  char v1; // dl
  char v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  char v13; // dl
  char v14; // [rsp+60h] [rbp+8h] BYREF

  v0 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v1 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v1 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v2 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v2 = 0;
  }
  if ( v1 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v1,
      v2,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      18,
      (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
  InputTraceLogging::KST::DeactivateKSTInputProcessingHelper();
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  if ( *(_QWORD *)(W32GetUserSessionState(v3) + 19280) )
  {
    UserSessionState = W32GetUserSessionState(v4);
    IOCPDispatcher::Close(*(HANDLE **)(UserSessionState + 19280), 1);
  }
  CleanupSensorExplicitly(0LL);
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
    && ShouldKSTInitializeHidSensor(v7, v6, v8, v9) )
  {
    ApiSetEditionPrepareHidForInputThreadMigration();
  }
  if ( !v14 )
    UserSessionSwitchLeaveCritWithNonPaged();
  KSTIOCPDispatcher_Destroy(v7);
  InputTraceLogging::KST::DeactivateKSTInputProcessing();
  v11 = W32GetUserSessionState(v10);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 3112) + 8LL))(*(_QWORD *)(v11 + 3112));
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (result = *((unsigned int *)WPP_GLOBAL_Control + 11), (result & 2) == 0)
    || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v13 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v0 = 0;
  if ( v13 || v0 )
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v13,
             v0,
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             5,
             2,
             19,
             (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
  return result;
}
