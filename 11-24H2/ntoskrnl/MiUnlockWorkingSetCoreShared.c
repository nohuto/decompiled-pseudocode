/*
 * XREFs of MiUnlockWorkingSetCoreShared @ 0x1402327A0
 * Callers:
 *     MiRemoveWsleList @ 0x140231F70 (MiRemoveWsleList.c)
 *     MiRemoveWsle @ 0x1402C8340 (MiRemoveWsle.c)
 *     MiCountWslesInPageTableRange @ 0x1402E3F20 (MiCountWslesInPageTableRange.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

volatile signed __int32 *__fastcall MiUnlockWorkingSetCoreShared(__int64 a1)
{
  volatile signed __int32 *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    result = (volatile signed __int32 *)&unk_140E38780;
  else
    result = (volatile signed __int32 *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    return (volatile signed __int32 *)ExpReleaseSpinLockSharedFromDpcLevelInstrumented(result, retaddr);
  _InterlockedAnd(result, 0xBFFFFFFF);
  _InterlockedDecrement(result);
  return result;
}
