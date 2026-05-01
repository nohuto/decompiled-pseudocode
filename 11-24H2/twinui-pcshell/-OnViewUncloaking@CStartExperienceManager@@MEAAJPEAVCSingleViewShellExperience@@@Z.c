/*
 * XREFs of ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180242320
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewUncloaking(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  _WORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+34h] [rbp-34h]
  __int64 v5; // [rsp+38h] [rbp-30h]
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]

  v3[0] = 0;
  v3[1] = *((_WORD *)this + 296);
  v4 = 3;
  v5 = *((_QWORD *)this + 75);
  v6 = *((_QWORD *)this + 76);
  v7 = *((_QWORD *)this + 77);
  RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v3, 32LL);
  return 0LL;
}
