/*
 * XREFs of ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z @ 0x1400417D8
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x14008BF84 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x14024B5F0 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x140041808 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 */

MINIPORT_LIST_AUTO_LOCK *__fastcall MINIPORT_LIST_AUTO_LOCK::MINIPORT_LIST_AUTO_LOCK(MINIPORT_LIST_AUTO_LOCK *this)
{
  *(_BYTE *)this = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    *(_BYTE *)this = 1;
  }
  return this;
}
