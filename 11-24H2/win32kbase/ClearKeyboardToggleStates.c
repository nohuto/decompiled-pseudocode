/*
 * XREFs of ClearKeyboardToggleStates @ 0x140116190
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall ClearKeyboardToggleStates(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  __int64 UserSessionState; // rax
  __int64 i; // rbx
  __int64 result; // rax
  unsigned int v6; // esi
  __int64 v7; // rdi
  int v8; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-28h]

  v1 = 0;
  v2 = 0LL;
  do
  {
    UserSessionState = W32GetUserSessionState(a1);
    ++v1;
    a1 = 2 * (byte_14025E220[v2] & 3u) + 1;
    v9[v2] = *(_BYTE *)(((unsigned __int64)(unsigned __int8)byte_14025E220[v2] >> 2) + UserSessionState + 14336) & (1 << (2 * (byte_14025E220[v2] & 3) + 1));
    ++v2;
  }
  while ( v1 < 0xE );
  for ( i = 0LL; i < 64; ++i )
  {
    result = W32GetUserSessionState(a1);
    *(_BYTE *)(result + i + 14336) &= 0x55u;
  }
  v6 = 0;
  v7 = 0LL;
  do
  {
    if ( v9[v7] )
    {
      v8 = 1 << (2 * (byte_14025E220[v7] & 3) + 1);
      result = W32GetUserSessionState(2 * (byte_14025E220[v7] & 3u) + 1);
      *(_BYTE *)(result + ((unsigned __int64)(unsigned __int8)byte_14025E220[v7] >> 2) + 14336) |= v8;
    }
    ++v6;
    ++v7;
  }
  while ( v6 < 0xE );
  return result;
}
