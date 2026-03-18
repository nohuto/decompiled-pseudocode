/*
 * XREFs of EnsureDpiServerInfoForDpi @ 0x140287514
 * Callers:
 *     EnsureArbitraryDpiServerInfoForDpi @ 0x14028735C (EnsureArbitraryDpiServerInfoForDpi.c)
 *     GetDpiServerInfoForDpi @ 0x1402F18D4 (GetDpiServerInfoForDpi.c)
 * Callees:
 *     CreateScaledFont @ 0x1401CD670 (CreateScaledFont.c)
 */

__int64 __fastcall EnsureDpiServerInfoForDpi(__int64 a1, __int64 a2)
{
  INT v2; // ebx
  __int64 v4; // rdi
  int v5; // ebx
  __int64 result; // rax

  v2 = (unsigned __int16)a2;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928);
  CreateScaledFont(*(Gre::Base **)(v4 + 5208), (__int64 *)(a1 + 8), a1 + 16, v2, (_DWORD *)(a1 + 16), a1 + 20, 0LL);
  CreateScaledFont(*(Gre::Base **)(v4 + 5224), (__int64 *)(a1 + 24), a1 + 32, v2, (_DWORD *)(a1 + 32), a1 + 36, a1 + 40);
  v5 = *(_DWORD *)(v4 + 5204) * v2;
  *(_DWORD *)a1 = 1;
  result = (unsigned int)((unsigned __int64)(715827883LL * (v5 + 48)) >> 32) >> 31;
  *(_DWORD *)(a1 + 4) = (v5 + 48) / 96;
  return result;
}
