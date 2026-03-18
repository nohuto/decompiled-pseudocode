/*
 * XREFs of ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1400FD4B0
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1400FBF10 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1400FD250 (-bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025B70C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025BE74 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall PFEOBJ::pGetLinkedFontList(PFEOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v3 )
    return (struct _LIST_ENTRY *)(v3 + 16);
  else
    return (struct _LIST_ENTRY *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 14136LL);
}
