/*
 * XREFs of ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x180320158
 * Callers:
 *     _lambda_203a32cbd1766f67226f85b07542c037_::operator() @ 0x18031E12C (_lambda_203a32cbd1766f67226f85b07542c037_--operator().c)
 *     ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18031FD14 (-SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1801F294C (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow(
        wil *this,
        const struct _WNF_STATE_NAME *a2,
        bool *a3,
        struct wil::WNF_CHANGE_STAMP_STRUCT *a4)
{
  unsigned int v6; // edi
  char v8; // di
  char v9; // al
  int v10; // eax
  const char *v11; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(a2->Data[0]) = 0;
  if ( a3 )
    *(_DWORD *)a3 = 0;
  v14 = 0;
  v13 = 0;
  v6 = NtQueryWnfStateData(this, 0LL, 0LL, &v13, 0LL, &v14) | 0x10000000;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -805306333 )
  {
    v8 = 1;
    v9 = v13 && v14;
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x2AC,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8000FFFFLL,
      v9,
      (unsigned __int64)"Inconsistent state data size in wnf_query",
      v11);
    v10 = v13;
    if ( !v13 || v14 )
      v8 = 0;
    LOBYTE(a2->Data[0]) = v8;
    if ( a3 )
      *(_DWORD *)a3 = v10;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AA,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v6);
    return v6;
  }
}
