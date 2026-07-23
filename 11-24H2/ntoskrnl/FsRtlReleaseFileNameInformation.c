/*
 * XREFs of FsRtlReleaseFileNameInformation @ 0x140A0C580
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x1403B35C0 (EtwpTraceImageUnloadApc.c)
 *     EtwpCancelTraceImageUnloadApc @ 0x14064C9E0 (EtwpCancelTraceImageUnloadApc.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x140A0C358 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCovSampEnumerateProcess @ 0x140A0C3A0 (EtwpCovSampEnumerateProcess.c)
 *     PerfLogImageUnload @ 0x140A0E50C (PerfLogImageUnload.c)
 *     EtwpCovSampModuleGetName @ 0x140A38120 (EtwpCovSampModuleGetName.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlReleaseFileNameInformation(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
