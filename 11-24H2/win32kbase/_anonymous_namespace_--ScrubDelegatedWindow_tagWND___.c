/*
 * XREFs of _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1401B3104
 * Callers:
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400EF0B8 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CleanupInputDelegation @ 0x140136650 (CleanupInputDelegation.c)
 * Callees:
 *     ClearDelegationCapture @ 0x14010F6D8 (ClearDelegationCapture.c)
 *     IsClearDelegationCaptureSupported @ 0x140110E50 (IsClearDelegationCaptureSupported.c)
 *     _anonymous_namespace_::ScrubDelegateThread @ 0x1401468D0 (_anonymous_namespace_--ScrubDelegateThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::ScrubDelegatedWindow_tagWND___(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = *(_QWORD *)(a1 + 264);
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 39);
    return 0;
  }
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 260) = 0;
  --*(_DWORD *)(v5 + 1504);
  --*(_DWORD *)(v2 + 1504);
  if ( (int)IsClearDelegationCaptureSupported(a1, a2) >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(v6 + 472);
    if ( *(_QWORD *)(v7 + 144) == a1 )
      ClearDelegationCapture(v7, v6);
  }
  if ( *(_DWORD *)(v2 + 1504) )
    return 0;
  anonymous_namespace_::ScrubDelegateThread(v2);
  return 1;
}
