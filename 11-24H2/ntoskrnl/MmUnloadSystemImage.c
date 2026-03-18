/*
 * XREFs of MmUnloadSystemImage @ 0x140A8AD10
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x14072FC94 (PnprLoadPluginDriver.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F13E8 (MiApplyHotPatchToLoadedDriver.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     IopDeleteDriver @ 0x140A8AC00 (IopDeleteDriver.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(ULONG_PTR BugCheckParameter3)
{
  struct _LIST_ENTRY *v2; // rbx
  char v3; // di
  struct _LIST_ENTRY *v4; // rax

  v2 = 0LL;
  v3 = 0;
  if ( LODWORD(PsGetCurrentServerSiloGlobals()[83].Blink) < (unsigned __int16)NtBuildNumber )
  {
    v4 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
    v2 = PsAttachSiloToCurrentThread(v4);
    v3 = 1;
  }
  MiUnloadSystemImage(BugCheckParameter3);
  if ( v3 )
    PsDetachSiloFromCurrentThread(v2);
  return 0LL;
}
