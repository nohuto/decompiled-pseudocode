/*
 * XREFs of _lambda_c92a1355a24c64b2e5b1950f66ad99d0_::_lambda_invoker_cdecl_ @ 0x140212090
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 */

__int64 __fastcall lambda_c92a1355a24c64b2e5b1950f66ad99d0_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 *v4; // rax
  _DWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  result = W32GetUserSessionState(a1);
  v2 = *(_QWORD *)(result + 18960);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 464);
    v6 = 0LL;
    v8 = 0LL;
    v5[0] = *(_DWORD *)(v3 + 56);
    v5[1] = (unsigned int)PsGetThreadId(*(PETHREAD *)v2);
    v4 = *(__int64 **)(*(_QWORD *)(v2 + 472) + 120LL);
    if ( v4 )
      v7 = *v4;
    else
      v7 = 0LL;
    return SendMessageTo(2LL, v5, 32LL);
  }
  return result;
}
