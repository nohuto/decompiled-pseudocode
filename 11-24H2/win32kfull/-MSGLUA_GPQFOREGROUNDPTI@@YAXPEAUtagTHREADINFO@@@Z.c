/*
 * XREFs of ?MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400942CC
 * Callers:
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1400928F0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1400942AC (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     EditionIsGpqForegroundAccessibleExplicit @ 0x140094DF0 (EditionIsGpqForegroundAccessibleExplicit.c)
 * Callees:
 *     <none>
 */

void __fastcall MSGLUA_GPQFOREGROUNDPTI(struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+38h] [rbp-10h]
  __int64 v9; // [rsp+58h] [rbp+10h]

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944);
  v4 = *(_DWORD *)(v3 + 480);
  v9 = *(_QWORD *)(v3 + 472);
  UserSessionState = W32GetUserSessionState(v5, v3);
  v7 = v9;
  v8 = v4;
  EtwTraceUIPIInputError(a1, 0LL, *(_QWORD *)(UserSessionState + 18944), &v7, 1);
}
