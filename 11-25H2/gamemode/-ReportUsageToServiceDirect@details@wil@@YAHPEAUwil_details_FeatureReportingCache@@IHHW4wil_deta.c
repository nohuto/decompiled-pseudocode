/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18000C6B0
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000C564 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18000AF4C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x18000E2E4 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v12; // rax
  __m128i v13; // xmm1
  unsigned int v14; // ebp
  __int64 v15; // r8
  void (__fastcall *v16)(_QWORD, _QWORD, __int64, _QWORD); // rax
  void (__fastcall *v17)(__int64 *, void (__fastcall *)(void *), __int64); // rax
  __int64 v18; // rdx
  void (__fastcall *v19)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __m128i v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+50h] [rbp-38h]
  __int64 v23; // [rsp+58h] [rbp-30h] BYREF

  v12 = wil_details_FeatureReporting_RecordUsageInCache(&v23, a1, a5);
  v13 = *(__m128i *)v12;
  v21 = *(__m128i *)v12;
  v22 = *(_QWORD *)(v12 + 16);
  v14 = 1;
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
  {
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1LL);
    v13 = v21;
  }
  if ( _mm_cvtsi128_si32(v13) )
  {
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      a2,
      a1);
    v13 = v21;
  }
  v15 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v13, 4));
  if ( (_DWORD)v15 )
  {
    v16 = (void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v16 = (void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v16(a2, (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v13, 8)), v15, 0LL);
    }
  }
  if ( !(_DWORD)v22 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( !qword_180016320 )
    {
      qword_180016320 = 0LL;
      v17 = (void (__fastcall *)(__int64 *, void (__fastcall *)(void *), __int64))g_wil_details_internalSubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v17 = (void (__fastcall *)(__int64 *, void (__fastcall *)(void *), __int64))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        v17(&qword_180016320, _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_, -1LL);
      }
    }
    ReleaseSRWLockExclusive(&SRWLock);
  }
  if ( a3 )
  {
    v18 = a5;
    LODWORD(v18) = a5 | 0x80000000;
    if ( !a4 )
      v18 = a5;
    v19 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v19 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v19(a2, v18, 0LL, 0LL);
    }
  }
  if ( (_DWORD)v22 )
  {
    return 0;
  }
  else if ( g_wil_details_realtimeFeatureUsageHook )
  {
    LOBYTE(v15) = a8;
    g_wil_details_realtimeFeatureUsageHook(a2, a5, v15);
  }
  return v14;
}
