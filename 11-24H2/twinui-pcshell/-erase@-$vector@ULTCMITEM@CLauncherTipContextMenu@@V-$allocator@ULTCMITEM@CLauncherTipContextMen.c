/*
 * XREFs of ?erase@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@@2@@Z @ 0x180603478
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x180196294 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

_QWORD *__fastcall std::vector<CLauncherTipContextMenu::LTCMITEM>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax

  memmove_0((void *)a3, (const void *)(a3 + 12), *(_QWORD *)(a1 + 8) - (a3 + 12));
  *(_QWORD *)(a1 + 8) -= 12LL;
  result = a2;
  *a2 = a3;
  return result;
}
