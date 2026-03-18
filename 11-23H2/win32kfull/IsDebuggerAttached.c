/*
 * XREFs of IsDebuggerAttached @ 0x1C002FD34
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006E7C (IsAdaptiveQueueDetachExempted.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002F440 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C002FCB4 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     SlowAppThreadInShellFrame @ 0x1C01B629C (SlowAppThreadInShellFrame.c)
 *     TryDetachShellFrame @ 0x1C01B655C (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *a1;
  if ( v3 && PsGetProcessDebugPort(v3) && (!*((_DWORD *)a1 + 225) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
    return 1;
  return v2;
}
