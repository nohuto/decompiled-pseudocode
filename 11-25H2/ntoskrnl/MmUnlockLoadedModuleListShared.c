/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x14025D3B0
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x14025BE40 (RtlpxLookupFunctionTable.c)
 *     RtlPcToFileName @ 0x14036CC30 (RtlPcToFileName.c)
 *     MiIsDriverPage @ 0x14036D6BC (MiIsDriverPage.c)
 *     MmUnlockPagableImageSection @ 0x14036DFD0 (MmUnlockPagableImageSection.c)
 *     MiShowBadMapper @ 0x1403BAD60 (MiShowBadMapper.c)
 *     MiDriverPdeOkToDelete @ 0x14065D8B4 (MiDriverPdeOkToDelete.c)
 *     MmGetImageRetpolineCodePage @ 0x1406711C0 (MmGetImageRetpolineCodePage.c)
 *     MmMarkImageForHiberPhase @ 0x140B52FFC (MmMarkImageForHiberPhase.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MmUnlockLoadedModuleListShared(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
  {
    _InterlockedAnd(&PsLoadedModuleSpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(&PsLoadedModuleSpinLock);
  }
  else
  {
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&PsLoadedModuleSpinLock, retaddr, a3);
  }
  if ( (unsigned __int8)v3 < 0xFu )
  {
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v3);
    __writecr8(v3);
  }
  return result;
}
