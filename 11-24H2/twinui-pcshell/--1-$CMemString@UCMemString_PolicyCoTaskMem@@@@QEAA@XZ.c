/*
 * XREFs of ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x180220EFC
 * Callers:
 *     _CLauncherTipContextMenu::_CheckLinkHash_::_1_::dtor$3 @ 0x1806CD9CD (_CLauncherTipContextMenu--_CheckLinkHash_--_1_--dtor$3.c)
 *     _CLauncherTipContextMenu::_CheckLinkHash_::_1_::dtor$4 @ 0x1806CD9DF (_CLauncherTipContextMenu--_CheckLinkHash_--_1_--dtor$4.c)
 *     _CSwitchController::_SwitchToApp_::_1_::dtor$0 @ 0x1806D0DF8 (_CSwitchController--_SwitchToApp_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::_AddLinkToCommands_::_1_::dtor$6 @ 0x1806D6771 (_CLauncherTipContextMenu--_AddLinkToCommands_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
}
