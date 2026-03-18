/*
 * XREFs of ?KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405C931C
 * Callers:
 *     KiComputeNewPriority @ 0x1404EA2E0 (KiComputeNewPriority.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiClearForegroundBoost @ 0x140452610 (KiClearForegroundBoost.c)
 */

__int64 __fastcall KiComputeNewPriorityStacking(struct _KTHREAD *a1, __int64 a2, char a3)
{
  unsigned int Priority; // ecx
  __int64 result; // rax
  int v7; // edx
  char DecayBoost; // cl

  Priority = a1->Priority;
  if ( (char)Priority >= 16 && (*((_DWORD *)&a1->0 + 1) & 0x400000) == 0 )
    return Priority;
  v7 = a3 != 0 ? 2 : 10;
  if ( KiSchedulerForegroundBoostDecayPolicy )
  {
    LOBYTE(v7) = v7 | 1;
    if ( a3 )
      KiClearForegroundBoost((__int64)a1);
  }
  result = KiComputeThreadPriority((__int64)a1, v7, 1);
  if ( a3 )
  {
    a1->PriorityDecrement &= 0xF00Fu;
    DecayBoost = a1->DecayBoost;
    if ( DecayBoost >= 1 )
      a1->DecayBoost = DecayBoost - 1;
    else
      a1->DecayBoost = 0;
  }
  return result;
}
