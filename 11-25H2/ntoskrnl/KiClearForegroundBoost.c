/*
 * XREFs of KiClearForegroundBoost @ 0x14026974C
 * Callers:
 *     KiSetDisableBoostThread @ 0x140269078 (KiSetDisableBoostThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402691AC (KeSetPriorityAndQuantumProcess.c)
 *     KiComputeNewPriority @ 0x1404E8FCC (KiComputeNewPriority.c)
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
