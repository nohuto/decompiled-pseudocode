/*
 * XREFs of _lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::operator() @ 0x1801C6CB8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___::Run @ 0x1801C6C30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___--Run.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18007F3A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18010CC88 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::operator()(unsigned int *a1)
{
  __int64 v1; // rdi
  bool v3; // zf
  int v4; // eax
  unsigned int v5; // r8d
  __int64 v6; // r8
  __int64 v7; // r9
  const char *v8; // r9
  int v9; // [rsp+48h] [rbp+7h] BYREF
  __int16 v10; // [rsp+4Ch] [rbp+Bh]
  __int64 v11; // [rsp+50h] [rbp+Fh]
  _QWORD v12[3]; // [rsp+58h] [rbp+17h] BYREF
  __int64 v13; // [rsp+70h] [rbp+2Fh] BYREF
  __int128 v14; // [rsp+78h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v1 = *((_QWORD *)a1 + 2);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v1 + 120) + 112LL))(*(_QWORD *)(v1 + 120), *a1, a1[1]);
  v3 = (a1[1] & 0x20) == 0;
  v4 = _mm_cvtsi128_si32((__m128i)0LL);
  v14 = 0LL;
  if ( !v3 )
    v4 = 5;
  LODWORD(v14) = v4;
  v5 = `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v11 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetCachedFeatureEnabledState(
             (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
             &v13);
    v5 = v11;
  }
  v9 = 0;
  v10 = 3;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)&unk_1808C8F08,
    0x1389317u,
    (v5 >> 10) & 1,
    (v5 >> 11) & 1,
    (__int64)&v9,
    1u,
    3);
  if ( (a1[1] & 0x100) != 0 )
    DWORD1(v14) |= 0x1E0u;
  v12[0] = 19LL;
  v12[1] = &v14;
  v12[2] = 16LL;
  if ( !(unsigned int)SetWindowCompositionAttribute(*(_QWORD *)(v1 + 128), v12, v6, v7) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x542,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      v8);
  if ( *((_BYTE *)a1 + 8) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      *(_QWORD *)(v1 + 128),
      0LL);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
}
