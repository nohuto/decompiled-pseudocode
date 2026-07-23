/*
 * XREFs of RtlRestoreThreadPreferredUILanguages @ 0x1800C8700
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x180016160 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x1800CA5CC (RtlpFreeTebLanguageList.c)
 */

LOGICAL __fastcall RtlRestoreThreadPreferredUILanguages(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    return RtlReportCriticalFailure(v2 != 0 ? -1073740004 : -1073741816, a1, 1);
  RtlpMuiRegFreeLanguageList((_BYTE *)NtCurrentTeb()->PreferredLanguages);
  RtlpMuiRegFreeLanguageList((_BYTE *)NtCurrentTeb()->MergedPrefLanguages);
  RtlpFreeTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
  NtCurrentTeb()->PreferredLanguages = *(void **)a1;
  NtCurrentTeb()->MergedPrefLanguages = *(void **)(a1 + 8);
  NtCurrentTeb()->UserPrefLanguages = *(void **)(a1 + 16);
  *(_DWORD *)(a1 + 24) = 0;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
