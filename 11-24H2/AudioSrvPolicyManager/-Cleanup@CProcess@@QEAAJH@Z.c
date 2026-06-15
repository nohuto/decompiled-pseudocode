/*
 * XREFs of ?Cleanup@CProcess@@QEAAJH@Z @ 0x1800318E8
 * Callers:
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001A3B0 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180036448 (--1CApplicationManager@@MEAA@XZ.c)
 * Callees:
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180008220 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18001E20C (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 */

__int64 __fastcall CProcess::Cleanup(CProcess *this, int a2)
{
  CProcess::CleanupProcessTerminationWatcher(this, a2);
  CProcess::NotifyPLM((__int64)this, 1);
  return 0LL;
}
