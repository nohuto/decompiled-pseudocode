/*
 * XREFs of DelegateReleasePointerMessage @ 0x14008EF5C
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14008E06C (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x14021D768 (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 * Callees:
 *     DelegateCoalescePointerMessage @ 0x14008EFBC (DelegateCoalescePointerMessage.c)
 */

__int64 __fastcall DelegateReleasePointerMessage(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  if ( *(_DWORD *)(a2 + 24) == 583 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    CTouchProcessor::DelegateImplictCaptureAndReleaseIfNeeded(
      *(CTouchProcessor **)(UserSessionState + 3264),
      *(_QWORD *)(a2 + 40));
  }
  return DelegateCoalescePointerMessage(a1, 1LL, a2);
}
