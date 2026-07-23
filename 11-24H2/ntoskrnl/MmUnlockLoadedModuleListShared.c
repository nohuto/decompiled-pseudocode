/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x1402316B0
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x140233240 (RtlpxLookupFunctionTable.c)
 *     MiShowBadMapper @ 0x140275730 (MiShowBadMapper.c)
 *     MiIsDriverPage @ 0x1402BA964 (MiIsDriverPage.c)
 *     MmUnlockPagableImageSection @ 0x1402BBBB0 (MmUnlockPagableImageSection.c)
 *     RtlPcToFileName @ 0x1403F9FF0 (RtlPcToFileName.c)
 *     MiDriverPdeOkToDelete @ 0x14066A5B0 (MiDriverPdeOkToDelete.c)
 *     MmGetImageRetpolineCodePage @ 0x14067DB60 (MmGetImageRetpolineCodePage.c)
 *     MmMarkImageForHiberPhase @ 0x140B651FC (MmMarkImageForHiberPhase.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MmUnlockLoadedModuleListShared(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
  {
    _InterlockedAnd(&PsLoadedModuleSpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(&PsLoadedModuleSpinLock);
  }
  else
  {
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&PsLoadedModuleSpinLock, retaddr);
  }
  if ( (unsigned __int8)v1 < 0xFu )
  {
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v1);
    __writecr8(v1);
  }
  return result;
}
