/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x14027C120
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x14027DCB0 (RtlpxLookupFunctionTable.c)
 *     MmUnlockPagableImageSection @ 0x1402C7030 (MmUnlockPagableImageSection.c)
 *     MiIsDriverPage @ 0x1402C80A4 (MiIsDriverPage.c)
 *     MiShowBadMapper @ 0x1403D0830 (MiShowBadMapper.c)
 *     RtlPcToFileName @ 0x1403FFB00 (RtlPcToFileName.c)
 *     MiDriverPdeOkToDelete @ 0x1406693D8 (MiDriverPdeOkToDelete.c)
 *     MmGetImageRetpolineCodePage @ 0x14067C980 (MmGetImageRetpolineCodePage.c)
 *     MmMarkImageForHiberPhase @ 0x140B6312C (MmMarkImageForHiberPhase.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
