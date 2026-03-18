/*
 * XREFs of ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x140215F0C
 * Callers:
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1402169E0 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     UpdateRawKeyState @ 0x14010750C (UpdateRawKeyState.c)
 *     UpdateAsyncKeyState @ 0x140189B10 (UpdateAsyncKeyState.c)
 */

void __fastcall ApplyKeyStateUpdate(__int64 a1, char a2)
{
  unsigned __int8 v3; // di
  __int64 v4; // rcx
  __int64 UserSessionState; // rax

  v3 = a1;
  UpdateRawKeyState(a1, a2);
  UserSessionState = W32GetUserSessionState(v4);
  UpdateAsyncKeyState(*(_QWORD *)(UserSessionState + 18944), v3, a2);
}
