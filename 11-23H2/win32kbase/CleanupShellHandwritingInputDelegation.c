/*
 * XREFs of CleanupShellHandwritingInputDelegation @ 0x1C0135740
 * Callers:
 *     <none>
 * Callees:
 *     ?ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01356FC (-ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall CleanupShellHandwritingInputDelegation(DelegationAPI *a1, struct tagTHREADINFO *a2)
{
  DelegationAPI::ScrubShellHandwritingDelegateThread(a1, a2);
}
