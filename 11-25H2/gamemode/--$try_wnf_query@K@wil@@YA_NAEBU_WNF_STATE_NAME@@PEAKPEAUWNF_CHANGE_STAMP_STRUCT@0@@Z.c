/*
 * XREFs of ??$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180008850
 * Callers:
 *     IsGamingFullScreenExperienceActive @ 0x18000DAB0 (IsGamingFullScreenExperienceActive.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18000AB34 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

char __fastcall wil::try_wnf_query<unsigned long>(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v4; // eax
  const char *v5; // r9
  int v6; // eax
  char v7; // bl
  int v8; // ecx
  char v9; // al
  const char *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]
  int v15; // [rsp+50h] [rbp+18h] BYREF
  int v16; // [rsp+54h] [rbp+1Ch]

  v16 = HIDWORD(a3);
  v14 = HIDWORD(a1);
  v13 = 0;
  v15 = 4;
  v4 = NtQueryWnfStateData(&WNF_GAME_IS_GAMING_POSTURE_ACTIVE, 0LL, 0LL, &v13, a2, &v15);
  v5 = (const char *)v4;
  LODWORD(v5) = v4 | 0x10000000;
  if ( (int)((v4 | 0x10000000) + 0x80000000) >= 0 && (_DWORD)v5 != -805306333 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CC,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      v5);
    return 0;
  }
  v6 = v13;
  v7 = 1;
  if ( !v13 )
    goto LABEL_10;
  v8 = v15;
  if ( v15 != 4 )
  {
    wil::details::in1diag3::Log_HrMsg(
      retaddr,
      (void *)0x271,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8000FFFFLL,
      (int)"Inconsistent state data size in wnf_query",
      v11);
    v8 = v15;
    *a2 = 0;
    v6 = v13;
  }
  if ( v6 && v8 == 4 )
    v9 = 1;
  else
LABEL_10:
    v9 = 0;
  if ( !v9 )
    return 0;
  return v7;
}
