/*
 * XREFs of ProcessDelayedSdc @ 0x1402271E0
 * Callers:
 *     PowerOnGdi @ 0x140134F50 (PowerOnGdi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessDelayedSdc(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 result; // rax
  char v9; // [rsp+28h] [rbp-40h]

  if ( *(_DWORD *)(W32GetUserGdiSessionState(a1) + 16) && !*(_WORD *)(W32GetUserSessionState(v3, v2) + 69008) )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(v3, v4) + 19200);
    UserGdiSessionState = W32GetUserGdiSessionState(v6);
    v9 = 0;
    xxxUserSetDisplayConfig(0LL, 0LL, *(unsigned int *)(UserGdiSessionState + 16), 0LL, v5, v9, 0LL, 0LL, 0LL, a1, 0LL);
  }
  result = W32GetUserGdiSessionState(v3);
  *(_DWORD *)(result + 16) = 0;
  return result;
}
