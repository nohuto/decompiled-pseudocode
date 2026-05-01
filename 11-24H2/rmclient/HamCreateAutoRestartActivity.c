/*
 * XREFs of HamCreateAutoRestartActivity @ 0x18001BEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamCreateAutoRestartActivity(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  ULONG v9; // eax
  CLIENT_CALL_RETURN result; // rax
  ULONG v11; // [rsp+30h] [rbp-58h]
  int v12; // [rsp+38h] [rbp-50h]
  int v13; // [rsp+40h] [rbp-48h]

  v8 = a2 + 464;
  v9 = RtlLengthSid((PSID)(a2 + 464));
  v13 = *(_DWORD *)(a2 + 536);
  v12 = *(_DWORD *)(a2 + 532);
  v11 = v9;
  result.Pointer = NdrClientCall3(
                     (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
                     5u,
                     0LL,
                     *a1,
                     a2,
                     v8,
                     v11,
                     v12,
                     v13,
                     *(_QWORD *)(a2 + 544),
                     a3,
                     a4).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}
