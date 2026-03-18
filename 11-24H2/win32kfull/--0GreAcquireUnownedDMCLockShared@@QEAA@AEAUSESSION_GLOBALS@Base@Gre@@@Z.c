/*
 * XREFs of ??0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF4C
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x14002AC68 (GreSfmCloseCompositorRef.c)
 *     GreTransferDwmStateToSpriteState @ 0x1401325C8 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x140169AB8 (GreTransferSpriteStateToDwmState.c)
 *     GreDwmStartup @ 0x1401C9A3C (GreDwmStartup.c)
 *     GreDesktopSwitch @ 0x1401E15CC (GreDesktopSwitch.c)
 *     GreDwmShutdown @ 0x140264BB4 (GreDwmShutdown.c)
 * Callees:
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x14002B098 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 */

GreAcquireUnownedDMCLockShared *__fastcall GreAcquireUnownedDMCLockShared::GreAcquireUnownedDMCLockShared(
        GreAcquireUnownedDMCLockShared *this,
        struct Gre::Base::SESSION_GLOBALS *a2)
{
  ULONG IsResourceAcquiredSharedLite; // eax

  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)(*(_QWORD *)a2 + 624LL));
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(this, a2, IsResourceAcquiredSharedLite == 0);
  return this;
}
