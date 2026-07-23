/*
 * XREFs of KiClearForegroundBoost @ 0x1404476C0
 * Callers:
 *     KiSetDisableBoostThread @ 0x140446F84 (KiSetDisableBoostThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1404470CC (KeSetPriorityAndQuantumProcess.c)
 *     ?KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405C698C (-KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 *     ?KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405C6A4C (-KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiClearForegroundBoost(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 518) & 0xF) != 0 )
  {
    *(_DWORD *)(a1 + 872) = MEMORY[0xFFFFF78000000320];
    result = 65520LL;
    *(_WORD *)(a1 + 518) &= 0xFFF0u;
  }
  return result;
}
