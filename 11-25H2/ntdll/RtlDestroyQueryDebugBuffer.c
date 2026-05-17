/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x180098820
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x180135940 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x180099350 (RtlpChangeQueryDebugBufferTarget.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlDestroyQueryDebugBuffer(HANDLE *a1)
{
  RtlpChangeQueryDebugBufferTarget(a1, 0LL, 0LL, 0LL);
  NtClose(*a1);
  NtUnmapViewOfSection(-1LL);
  return 0LL;
}
