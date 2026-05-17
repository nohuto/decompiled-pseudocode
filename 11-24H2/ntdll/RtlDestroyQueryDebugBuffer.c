/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x180044B40
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x180133E60 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x180045670 (RtlpChangeQueryDebugBufferTarget.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlDestroyQueryDebugBuffer(HANDLE *a1)
{
  RtlpChangeQueryDebugBufferTarget(a1, 0LL, 0LL, 0LL);
  NtClose(*a1);
  NtUnmapViewOfSection(-1LL);
  return 0LL;
}
