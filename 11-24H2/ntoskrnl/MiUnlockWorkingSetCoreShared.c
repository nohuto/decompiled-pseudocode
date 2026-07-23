/*
 * XREFs of MiUnlockWorkingSetCoreShared @ 0x1403030A0
 * Callers:
 *     MiRemoveWsle @ 0x1402007F4 (MiRemoveWsle.c)
 *     MiRemoveWsleList @ 0x140303100 (MiRemoveWsleList.c)
 *     MiCountWslesInPageTableRange @ 0x140392E70 (MiCountWslesInPageTableRange.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

volatile signed __int32 *__fastcall MiUnlockWorkingSetCoreShared(__int64 a1)
{
  volatile signed __int32 *result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    result = (volatile signed __int32 *)&unk_140E388C0;
  else
    result = (volatile signed __int32 *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    return (volatile signed __int32 *)ExpReleaseSpinLockSharedFromDpcLevelInstrumented(result, retaddr);
  _InterlockedAnd(result, 0xBFFFFFFF);
  _InterlockedDecrement(result);
  return result;
}
