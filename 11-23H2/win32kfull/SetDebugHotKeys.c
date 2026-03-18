/*
 * XREFs of SetDebugHotKeys @ 0x1C009E840
 * Callers:
 *     RawInputThread @ 0x1C00D6580 (RawInputThread.c)
 * Callees:
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0040AF8 (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 */

__int64 SetDebugHotKeys()
{
  __int64 v0; // rcx
  unsigned int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  FastGetProfileDword(0LL, 21LL, L"UserDebuggerHotkey", 0LL, &v7);
  v1 = v7;
  if ( !v7 )
  {
    if ( *(_BYTE *)(SGDGetUserSessionState(v0) + 12568) == 2
      || *(_BYTE *)(SGDGetUserSessionState(v2) + 12568) == 4
      || *(_BYTE *)(SGDGetUserSessionState(v3) + 12568) == 7
      || (v6 = *(_BYTE *)(SGDGetUserSessionState(v5) + 12568) == 8, v1 = 109, v6) )
    {
      v1 = 123;
    }
    v7 = v1;
  }
  _RegisterHotKey((struct tagWND *)1, 0LL, 4294967291LL, 0, v1, 0LL);
  return _RegisterHotKey((struct tagWND *)1, 0LL, 4294967290LL, 4, v7, 0LL);
}
