/*
 * XREFs of wil::init_once__lambda_171c398c6aabaca0f0574d3dc33ce85c___ @ 0x1400551D4
 * Callers:
 *     ?GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@H@Z @ 0x140055170 (-GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@H@Z.c)
 * Callees:
 *     _lambda_171c398c6aabaca0f0574d3dc33ce85c_::operator() @ 0x14005525C (_lambda_171c398c6aabaca0f0574d3dc33ce85c_--operator().c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14006DDAC (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::init_once__lambda_171c398c6aabaca0f0574d3dc33ce85c___(__int64 a1, __int64 a2)
{
  void *v2; // rdx
  unsigned int v3; // r8d
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+44h] [rbp+Ch]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v8 = HIDWORD(a1);
  v7 = 0;
  if ( !__std_init_once_begin_initialize(&CreateRTThreadManagerInstance, 0, &v7, 0LL) )
    wil::details::in1diag3::_Throw_GetLastError(retaddr, v2, v3, v4);
  if ( !v7 )
    return 0;
  lambda_171c398c6aabaca0f0574d3dc33ce85c_::operator()(&v9);
  InitOnceComplete(&CreateRTThreadManagerInstance, 0, 0LL);
  return 1;
}
