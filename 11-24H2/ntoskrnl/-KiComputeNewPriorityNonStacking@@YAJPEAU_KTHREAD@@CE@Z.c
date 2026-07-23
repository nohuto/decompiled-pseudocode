/*
 * XREFs of ?KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405C698C
 * Callers:
 *     KiComputeNewPriority @ 0x1404E1290 (KiComputeNewPriority.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiClearForegroundBoost @ 0x1404476C0 (KiClearForegroundBoost.c)
 */

__int64 __fastcall KiComputeNewPriorityNonStacking(struct _KTHREAD *a1, __int64 a2, char a3)
{
  unsigned int Priority; // ecx
  unsigned int v6; // edx
  char v7; // dl
  int DecayBoost; // esi
  int v9; // eax
  int BasePriority; // ecx
  char v11; // al

  Priority = a1->Priority;
  if ( (char)Priority < 16 || (*((_DWORD *)&a1->0 + 1) & 0x400000) != 0 )
  {
    v7 = 6;
    DecayBoost = a1->DecayBoost;
    if ( KiSchedulerForegroundBoostDecayPolicy )
    {
      v7 = 7;
      if ( a3 )
        KiClearForegroundBoost((__int64)a1);
    }
    v9 = KiComputeThreadPriority((__int64)a1, v7, 0);
    BasePriority = a1->BasePriority;
    v6 = v9;
    if ( DecayBoost >= 1 )
      BasePriority = DecayBoost + BasePriority - 1;
    if ( v9 < BasePriority )
      v6 = BasePriority;
    if ( a3 )
    {
      a1->PriorityDecrement &= 0xF00Fu;
      v11 = a1->DecayBoost;
      if ( v11 >= 1 )
        a1->DecayBoost = v11 - 1;
      else
        a1->DecayBoost = 0;
    }
  }
  else
  {
    return Priority;
  }
  return v6;
}
