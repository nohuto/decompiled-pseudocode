/*
 * XREFs of RtlCleanUpTEBLangLists @ 0x180087620
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x180140C60 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpFreeTebLanguageList @ 0x1800876EC (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18008D870 (RtlpMuiRegFreeLanguageList.c)
 */

struct _TEB *RtlCleanUpTEBLangLists()
{
  __int64 v0; // r9
  struct _TEB *result; // rax

  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
  NtCurrentTeb()->MergedPrefLanguages = 0LL;
  RtlpFreeTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
  NtCurrentTeb()->UserPrefLanguages = 0LL;
  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
  NtCurrentTeb()->PreferredLanguages = 0LL;
  result = NtCurrentTeb();
  if ( result->ResourceRetValue )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)NtCurrentTeb()->ResourceRetValue, v0);
    result = NtCurrentTeb();
    result->ResourceRetValue = 0LL;
  }
  return result;
}
