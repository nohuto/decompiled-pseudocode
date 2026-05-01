/*
 * XREFs of WINRT_IMPL_InterlockedFlushSList @ 0x1801CEFAD
 * Callers:
 *     DllCanUnloadNow @ 0x18018DC80 (DllCanUnloadNow.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall WINRT_IMPL_InterlockedFlushSList(PSLIST_HEADER ListHead)
{
  return InterlockedFlushSList(ListHead);
}
