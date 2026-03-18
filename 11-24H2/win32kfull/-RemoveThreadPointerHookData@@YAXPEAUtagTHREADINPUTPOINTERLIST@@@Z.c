/*
 * XREFs of ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1400A79DC
 * Callers:
 *     xxxPointerCallHook @ 0x1400A7484 (xxxPointerCallHook.c)
 *     ?xxxCleanupThreadPointerData@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400A7890 (-xxxCleanupThreadPointerData@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z @ 0x1400A7A08 (-FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z.c)
 */

void __fastcall RemoveThreadPointerHookData(struct tagTHREADINPUTPOINTERLIST *a1)
{
  struct tagTHREADPOINTERDATA *v2; // rcx

  v2 = (struct tagTHREADPOINTERDATA *)*((_QWORD *)a1 + 3);
  if ( v2 )
  {
    FreeThreadPointerHookData(v2);
    *((_QWORD *)a1 + 3) = 0LL;
  }
}
