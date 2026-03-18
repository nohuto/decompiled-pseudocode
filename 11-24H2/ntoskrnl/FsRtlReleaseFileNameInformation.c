/*
 * XREFs of FsRtlReleaseFileNameInformation @ 0x140A13E20
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x1403C4A00 (EtwpTraceImageUnloadApc.c)
 *     EtwpCancelTraceImageUnloadApc @ 0x14064E3D0 (EtwpCancelTraceImageUnloadApc.c)
 *     PerfLogImageUnload @ 0x1408E6808 (PerfLogImageUnload.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x140A13BF8 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCovSampEnumerateProcess @ 0x140A13C40 (EtwpCovSampEnumerateProcess.c)
 *     EtwpCovSampModuleGetName @ 0x140A428E0 (EtwpCovSampModuleGetName.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlReleaseFileNameInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
}
