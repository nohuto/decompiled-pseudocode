/*
 * XREFs of InkProcessorOnThreadExit @ 0x14019E2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x14019E2E8 (-OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 */

void __fastcall InkProcessorOnThreadExit(struct tagTHREADINFO *a1, __int64 a2)
{
  InkProcessor *v3; // rcx

  v3 = *(InkProcessor **)(W32GetUserSessionState(a1, a2) + 3280);
  if ( v3 )
    InkProcessor::OnThreadExit(v3, a1);
}
