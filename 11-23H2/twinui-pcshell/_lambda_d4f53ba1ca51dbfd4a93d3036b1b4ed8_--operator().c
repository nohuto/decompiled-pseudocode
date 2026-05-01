/*
 * XREFs of _lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::operator() @ 0x180055858
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___::Run @ 0x1800557D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___--Run.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018BFE0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::operator()(unsigned int *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  bool v4; // zf
  int v5; // eax
  const char *v6; // r9
  int v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+30h] [rbp-28h]
  __int128 v10; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = *((_QWORD *)a1 + 2);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v1 + 120) + 112LL))(*(_QWORD *)(v1 + 120), *a1, a1[1]);
  v4 = (a1[1] & 0x20) == 0;
  v5 = _mm_cvtsi128_si32((__m128i)0LL);
  v10 = 0LL;
  if ( !v4 )
    v5 = 5;
  LODWORD(v10) = v5;
  LOBYTE(v3) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
    v3);
  if ( (a1[1] & 0x100) != 0 )
    DWORD1(v10) |= 0x1E0u;
  v7 = 19;
  v8 = &v10;
  v9 = 16;
  if ( !(unsigned int)SetWindowCompositionAttribute(*(_QWORD *)(v1 + 128), &v7) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x542,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      v6);
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
