/*
 * XREFs of ?AddSasKey@@YAHII@Z @ 0x14026DB88
 * Callers:
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x140288B94 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddSasKey(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // ebp
  __int64 i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a2;
  v3 = a1;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 8 * i + 14020) )
    {
      *(_DWORD *)(W32GetUserSessionState(a1, a2) + 8 * i + 14020) = v3;
      *(_DWORD *)(W32GetUserSessionState(v6, v5) + 8 * i + 14016) = v2;
      return 1LL;
    }
  }
  return 0LL;
}
