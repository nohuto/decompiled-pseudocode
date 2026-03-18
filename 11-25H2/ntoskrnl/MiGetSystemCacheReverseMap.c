/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x1403B53D0
 * Callers:
 *     MiSynchronizeSystemVa @ 0x1402197A8 (MiSynchronizeSystemVa.c)
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiComputePxeWalkAction @ 0x1402B48B0 (MiComputePxeWalkAction.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MmMapViewInSystemCache @ 0x1403B44EC (MmMapViewInSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x1403B5010 (MiReleaseSystemCacheView.c)
 *     MiFastTrimWorkingSet @ 0x1403C4B40 (MiFastTrimWorkingSet.c)
 *     MmFreeSystemCacheReserveView @ 0x1407DD7A8 (MmFreeSystemCacheReserveView.c)
 *     MmHardFaultBytesRequired @ 0x1409A4C40 (MmHardFaultBytesRequired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSystemCacheReverseMap(unsigned __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = 48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v3 = *(_QWORD *)v2 >> 1;
  LODWORD(v3) = v3 & 0x7FFFFFFF;
  result = v3 | ((unsigned __int64)(*(_DWORD *)(v2 + 36) & 0x3FF0000) << 15);
  if ( !result )
    return 0LL;
  if ( (unsigned __int64)(result - 0x10000000000LL) <= 1 )
  {
    if ( result == 0x10000000001LL && PsInitialSystemProcess )
      result = (__int64)PsInitialSystemProcess;
  }
  else
  {
    result = qword_140E38878 + 16 * (result - 1);
  }
  if ( result )
    result += 40 * ((a1 >> 18) & 7);
  return result;
}
