/*
 * XREFs of ??$init_once_nothrow@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@PEA_N@Z @ 0x1800FC780
 * Callers:
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800FDA84 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008D698 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R_lambda_d503711298e7f6b3b6e2140cf5363040_@@QEBA@XZ @ 0x1800FC948 (--R_lambda_d503711298e7f6b3b6e2140cf5363040_@@QEBA@XZ.c)
 */

__int64 __fastcall wil::init_once_nothrow<_lambda_d503711298e7f6b3b6e2140cf5363040_>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const char *v3; // r9
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+44h] [rbp+1Ch]

  v9 = HIDWORD(a3);
  fPending = 0;
  if ( !__std_init_once_begin_initialize(
          &`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried,
          0,
          &fPending,
          0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x330, (int)"wil", v3);
  if ( fPending )
  {
    v5 = _lambda_d503711298e7f6b3b6e2140cf5363040_::operator()();
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x335, (__int64)"wil", (const char *)(unsigned int)v5);
      InitOnceComplete(&`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried, 4u, 0LL);
      return v6;
    }
    InitOnceComplete(&`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried, 0, 0LL);
  }
  return 0LL;
}
