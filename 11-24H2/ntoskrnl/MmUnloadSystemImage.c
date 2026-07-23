/*
 * XREFs of MmUnloadSystemImage @ 0x140A87050
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x14072DCA4 (PnprLoadPluginDriver.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F19B8 (MiApplyHotPatchToLoadedDriver.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     IopDeleteDriver @ 0x140A86F40 (IopDeleteDriver.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
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
