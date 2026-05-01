/*
 * XREFs of ?CoInitializeEx_failfast@wil@@YA?AV?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@1@K@Z @ 0x180673AF8
 * Callers:
 *     _lambda_60eafd7a19afe8909bb8fbc758680c8d_::operator() @ 0x180673888 (_lambda_60eafd7a19afe8909bb8fbc758680c8d_--operator().c)
 *     _lambda_b57f95c0514f45b77712658c5381b8ec_::operator() @ 0x180673928 (_lambda_b57f95c0514f45b77712658c5381b8ec_--operator().c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

_BYTE *__fastcall wil::CoInitializeEx_failfast(_BYTE *a1)
{
  HRESULT v2; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CoInitializeEx(0LL, 0);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1284,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v2,
      v4);
  *a1 = 1;
  return a1;
}
