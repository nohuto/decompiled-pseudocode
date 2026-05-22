/*
 * XREFs of wil::init_once_nothrow__lambda_058a17f7b797e76983050a020a22a1d6___ @ 0x1800E6BC0
 * Callers:
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E6D0C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008CF24 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_058a17f7b797e76983050a020a22a1d6_::operator() @ 0x1800E6C78 (_lambda_058a17f7b797e76983050a020a22a1d6_--operator().c)
 */

__int64 __fastcall wil::init_once_nothrow__lambda_058a17f7b797e76983050a020a22a1d6___(
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
  if ( !__std_init_once_begin_initialize(&stru_180247800, 0, &fPending, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x330, (int)"wil", v3);
  if ( fPending )
  {
    v5 = lambda_058a17f7b797e76983050a020a22a1d6_::operator()();
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x335, (__int64)"wil", (const char *)(unsigned int)v5);
      InitOnceComplete(&stru_180247800, 4u, 0LL);
      return v6;
    }
    InitOnceComplete(&stru_180247800, 0, 0LL);
  }
  return 0LL;
}
