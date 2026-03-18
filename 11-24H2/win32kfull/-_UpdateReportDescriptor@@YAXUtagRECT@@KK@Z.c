/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1402790C0
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x140279418 (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall _UpdateReportDescriptor(struct tagRECT *a1, __int64 a2, __int16 a3)
{
  __int16 v4; // bx
  _BYTE *UserSessionState; // rax
  char v7; // dl
  int v8; // ecx
  int v9; // r8d
  char v10; // r9

  v4 = a2;
  UserSessionState = (_BYTE *)W32GetUserSessionState(a1, a2);
  v7 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  v8 = a1->bottom - a1->top;
  v9 = (a1->right - a1->left) >> 8;
  UserSessionState[70319] = HIBYTE(a3);
  UserSessionState[70433] = HIBYTE(a3);
  UserSessionState[70547] = HIBYTE(a3);
  UserSessionState[70661] = HIBYTE(a3);
  v10 = LOBYTE(a1->right) - LOBYTE(a1->left);
  v8 >>= 8;
  UserSessionState[70313] = v4;
  UserSessionState[70427] = v4;
  UserSessionState[70541] = v4;
  UserSessionState[70655] = v4;
  UserSessionState[70322] = v8;
  UserSessionState[70436] = v8;
  UserSessionState[70550] = v8;
  UserSessionState[70664] = v8;
  UserSessionState[70314] = HIBYTE(v4);
  UserSessionState[70318] = a3;
  UserSessionState[70428] = HIBYTE(v4);
  UserSessionState[70432] = a3;
  UserSessionState[70542] = HIBYTE(v4);
  UserSessionState[70546] = a3;
  UserSessionState[70656] = HIBYTE(v4);
  UserSessionState[70660] = a3;
  UserSessionState[70300] = v10;
  UserSessionState[70301] = v9;
  UserSessionState[70321] = v7;
  UserSessionState[70414] = v10;
  UserSessionState[70415] = v9;
  UserSessionState[70435] = v7;
  UserSessionState[70528] = v10;
  UserSessionState[70529] = v9;
  UserSessionState[70549] = v7;
  UserSessionState[70642] = v10;
  UserSessionState[70643] = v9;
  UserSessionState[70663] = v7;
}
