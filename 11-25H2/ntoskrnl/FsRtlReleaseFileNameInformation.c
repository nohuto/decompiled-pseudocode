/*
 * XREFs of FsRtlReleaseFileNameInformation @ 0x1409F5600
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x140447E00 (EtwpTraceImageUnloadApc.c)
 *     EtwpCancelTraceImageUnloadApc @ 0x140642410 (EtwpCancelTraceImageUnloadApc.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x1409F53E0 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409F5420 (EtwpCovSampEnumerateProcess.c)
 *     PerfLogImageUnload @ 0x140A0BE8C (PerfLogImageUnload.c)
 *     EtwpCovSampModuleGetName @ 0x140A3DCA4 (EtwpCovSampModuleGetName.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlReleaseFileNameInformation(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1);
}
