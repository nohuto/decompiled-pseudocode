/*
 * XREFs of EraseBitmap @ 0x140207758
 * Callers:
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 */

__int64 __fastcall EraseBitmap(Gre::Base *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v13[4]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v14; // [rsp+40h] [rbp-18h]

  *(_OWORD *)v13 = 0LL;
  v14 = 0LL;
  GreExtGetObjectW(a1, 32LL, v13);
  UserSessionState = W32GetUserSessionState(v3, v2);
  v5 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43288), a1);
  v8 = W32GetUserSessionState(v7, v6);
  GrePatBlt(*(HDC *)(v8 + 43288), 0, 0, v13[1], v13[2], 66);
  v11 = W32GetUserSessionState(v10, v9);
  return GreSelectBitmap(*(_QWORD *)(v11 + 43288), v5);
}
