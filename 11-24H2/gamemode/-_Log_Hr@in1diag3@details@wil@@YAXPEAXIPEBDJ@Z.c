/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007100
 * Callers:
 *     MsixvcUpdatePolicyInternal @ 0x180007B00 (MsixvcUpdatePolicyInternal.c)
 *     ?HasHandheldScreenSize@@YA_NXZ @ 0x18000B7C4 (-HasHandheldScreenSize@@YA_NXZ.c)
 *     CanSetGamingFullScreenExperience @ 0x18000ED60 (CanSetGamingFullScreenExperience.c)
 *     IsGamingFullScreenExperienceActive @ 0x18000EEF0 (IsGamingFullScreenExperienceActive.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800034B0 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  wil::details *v4; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v4) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>((__int64)this, (int)a2, a3, 0LL, 0LL, retaddr, v4);
}
