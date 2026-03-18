/*
 * XREFs of MmUnloadSystemImage @ 0x140A86260
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x140723D14 (PnprLoadPluginDriver.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407E1548 (MiApplyHotPatchToLoadedDriver.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     IopDeleteDriver @ 0x140A86150 (IopDeleteDriver.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
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
