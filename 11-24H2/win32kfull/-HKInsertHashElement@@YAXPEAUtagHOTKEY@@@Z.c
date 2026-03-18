/*
 * XREFs of ?HKInsertHashElement@@YAXPEAUtagHOTKEY@@@Z @ 0x1401E0930
 * Callers:
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x140288B94 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HKInsertHashElement(struct tagHOTKEY *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = *((_BYTE *)a1 + 36) & 0x7F;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 8 * v3 + 12952);
  *((_QWORD *)a1 + 6) = v4;
  *(_QWORD *)(W32GetUserSessionState(v5, v4) + 8 * v3 + 12952) = a1;
}
