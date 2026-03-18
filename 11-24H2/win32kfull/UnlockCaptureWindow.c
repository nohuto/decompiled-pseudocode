/*
 * XREFs of UnlockCaptureWindow @ 0x1401B8730
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x140237494 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x14027A098 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     EditionUpdateRawMouseMode @ 0x14002BEB0 (EditionUpdateRawMouseMode.c)
 */

void __fastcall UnlockCaptureWindow(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  if ( *(_QWORD *)(a1 + 112) )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    --*(_DWORD *)(*(_QWORD *)(UserSessionState + 19928) + 6992LL);
    HMAssignmentUnlock(a1 + 112);
    EditionUpdateRawMouseMode(a1);
  }
}
