/*
 * XREFs of DSA_GetItemPtr @ 0x18074A880
 * Callers:
 *     DSA_EnumCallback @ 0x18074A808 (DSA_EnumCallback.c)
 *     ?FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z @ 0x180753E4C (-FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z.c)
 *     ?FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z @ 0x180754024 (-FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180758E3C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x180759AA0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18075A570 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?_PhysicalPositionFromLogicalPosition@CPinList@@AEAAHH@Z @ 0x18075E77C (-_PhysicalPositionFromLogicalPosition@CPinList@@AEAAHH@Z.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall DSA_GetItemPtr(HDSA hdsa, int i)
{
  PVOID result; // rax

  result = 0LL;
  if ( hdsa && i >= 0 && i < *(_DWORD *)hdsa )
    return (PVOID)(*((_QWORD *)hdsa + 1) + (unsigned int)(*((_DWORD *)hdsa + 5) * i));
  return result;
}
