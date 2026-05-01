/*
 * XREFs of HamServicingEnableServicing @ 0x180012A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamServicingEnableServicing(_QWORD *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  CLIENT_CALL_RETURN result; // rax
  BOOL v7; // [rsp+28h] [rbp-40h]
  _DWORD v8[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF

  if ( (a4 == 0LL) == (a3 == 0LL) )
  {
    v8[0] = 0;
    v9 = 0uLL;
    v7 = a4 != 0LL;
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001F000, 7u, 0LL, *a1, a2, v7, &v9, v8).Pointer;
    *((CLIENT_CALL_RETURN *)&v9 + 1) = result;
    v8[1] = result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      if ( a4 )
      {
        *a4 = v8[0];
        *a3 = v9;
      }
      return 0LL;
    }
  }
  else
  {
    return (CLIENT_CALL_RETURN)3221225520LL;
  }
  return result;
}
