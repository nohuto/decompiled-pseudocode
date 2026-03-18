/*
 * XREFs of KiValidateCpuSetMasks @ 0x140491B6C
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x14043ED50 (NtSetInformationWorkerFactory.c)
 *     KeSetSelectedCpuSetsThread @ 0x140491830 (KeSetSelectedCpuSetsThread.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x140491940 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KeSetCpuSetsProcess @ 0x1405BBDD4 (KeSetCpuSetsProcess.c)
 *     KeSetTagCpuSets @ 0x1405BBEBC (KeSetTagCpuSets.c)
 *     KiInitializeReservedCpuSets @ 0x140C18ACC (KiInitializeReservedCpuSets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiValidateCpuSetMasks(__int64 a1, unsigned int a2)
{
  __int64 i; // r8

  if ( a2 > (unsigned __int16)KiMaximumGroups )
    return 3221225903LL;
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
  {
    if ( (~KeActiveProcessors.Bitmap[i] & *(_QWORD *)(a1 + 8 * i)) != 0 )
      return 3221225903LL;
  }
  return 0LL;
}
