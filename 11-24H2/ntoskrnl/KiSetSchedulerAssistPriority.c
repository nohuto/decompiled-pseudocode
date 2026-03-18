/*
 * XREFs of KiSetSchedulerAssistPriority @ 0x140465FD0
 * Callers:
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14030E95C (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     KiUpdateThreadSchedulingProperties @ 0x14047C4A8 (KiUpdateThreadSchedulingProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSetSchedulerAssistPriority(volatile signed __int32 *a1, int a2, char a3)
{
  __int64 result; // rax
  char v5; // cl

  LODWORD(result) = *a1;
  if ( !a3 )
    LODWORD(result) = (unsigned int)result >> 8;
  result = (unsigned __int8)result;
  v5 = a3 == 0 ? 8 : 0;
  if ( a2 != (unsigned __int8)result )
  {
    if ( a2 <= (unsigned __int8)result )
    {
      result = -(((unsigned __int8)result - a2) << v5);
      _InterlockedAdd(a1, result);
    }
    else
    {
      _InterlockedAdd(a1, (a2 - (unsigned __int8)result) << v5);
    }
  }
  return result;
}
