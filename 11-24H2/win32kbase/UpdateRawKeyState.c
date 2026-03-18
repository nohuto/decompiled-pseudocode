/*
 * XREFs of UpdateRawKeyState @ 0x14010750C
 * Callers:
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x140215F0C (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 * Callees:
 *     ApiSetEditionUpdateModifiersForHotkey @ 0x140107618 (ApiSetEditionUpdateModifiersForHotkey.c)
 */

__int64 __fastcall UpdateRawKeyState(__int64 a1, unsigned __int8 a2)
{
  char v2; // di
  unsigned int v3; // r14d
  int v4; // esi
  unsigned __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 UserSessionState; // rax
  int v11; // ecx
  __int64 v12; // rdx

  v2 = a1;
  v3 = a2;
  v4 = a1 & 3;
  v5 = (unsigned __int64)(unsigned __int8)a1 >> 2;
  v6 = 2 * v4;
  if ( a2 )
  {
    UserSessionState = W32GetUserSessionState(a1);
    v11 = *(unsigned __int8 *)(UserSessionState + v5 + 14400) & ~(1 << v6);
  }
  else
  {
    v7 = W32GetUserSessionState(a1);
    v8 = v6;
    if ( (*(_BYTE *)(v5 + v7 + 14400) & (unsigned __int8)(1 << v6)) == 0 )
    {
      v9 = W32GetUserSessionState(v6);
      v8 = (unsigned int)(2 * v4 + 1);
      *(_BYTE *)(v9 + v5 + 14400) ^= 1 << (2 * v4 + 1);
    }
    UserSessionState = W32GetUserSessionState(v8);
    v11 = *(unsigned __int8 *)(UserSessionState + v5 + 14400) | (1 << v6);
  }
  *(_BYTE *)(UserSessionState + v5 + 14400) = v11;
  if ( (unsigned __int8)(v2 - 16) <= 2u )
  {
    v12 = 4 >> (v2 - 16);
  }
  else
  {
    v12 = 8LL;
    if ( (unsigned __int8)(v2 - 91) > 1u )
      v12 = 0LL;
  }
  return ApiSetEditionUpdateModifiersForHotkey(v3, v12);
}
