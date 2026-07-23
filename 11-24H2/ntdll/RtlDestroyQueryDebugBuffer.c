/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x180105520
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x180132090 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x180029600 (RtlpChangeQueryDebugBufferTarget.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 */

NTSTATUS __cdecl RtlDestroyQueryDebugBuffer(PRTL_DEBUG_INFORMATION Buffer)
{
  RtlpChangeQueryDebugBufferTarget((__int64)Buffer, 0LL, 0, 0LL);
  NtClose(Buffer->SectionHandleClient);
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, Buffer);
  return 0;
}
