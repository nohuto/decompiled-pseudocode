/*
 * XREFs of IsDebuggerAttached @ 0x1401566A4
 * Callers:
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1400945E8 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     SlowAppThreadInShellFrame @ 0x140155EA4 (SlowAppThreadInShellFrame.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1401565F8 (IsAdaptiveQueueDetachExempted.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140231B18 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     TryDetachShellFrame @ 0x140237D24 (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *a1;
  if ( v3 && PsGetProcessDebugPort(v3) && (!*((_DWORD *)a1 + 219) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
    return 1;
  return v2;
}
