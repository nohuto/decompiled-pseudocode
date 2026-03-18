/*
 * XREFs of MiUnlockWorkingSetCoreShared @ 0x140323E80
 * Callers:
 *     MiRemoveWsleList @ 0x14024AF10 (MiRemoveWsleList.c)
 *     MiCountWslesInPageTableRange @ 0x140385CD0 (MiCountWslesInPageTableRange.c)
 *     MiRemoveWsle @ 0x14038B0E4 (MiRemoveWsle.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

volatile signed __int32 *__fastcall MiUnlockWorkingSetCoreShared(__int64 a1)
{
  volatile signed __int32 *result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    result = (volatile signed __int32 *)&unk_140E38540;
  else
    result = (volatile signed __int32 *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    return (volatile signed __int32 *)ExpReleaseSpinLockSharedFromDpcLevelInstrumented(result, retaddr);
  _InterlockedAnd(result, 0xBFFFFFFF);
  _InterlockedDecrement(result);
  return result;
}
