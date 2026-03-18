/*
 * XREFs of ?FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z @ 0x1400A7A08
 * Callers:
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1400A79DC (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeThreadPointerHookData(struct tagTHREADPOINTERDATA *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(UserSessionState + 3264), *((_QWORD *)a1 + 3), 5LL, a1);
  Win32FreePool(a1);
}
