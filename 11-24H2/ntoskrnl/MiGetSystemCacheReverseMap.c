/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x1402D4740
 * Callers:
 *     MiSynchronizeSystemVa @ 0x14022AD58 (MiSynchronizeSystemVa.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiReleaseSystemCacheView @ 0x1402D4388 (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1402D5CA4 (MmMapViewInSystemCache.c)
 *     MiComputePxeWalkAction @ 0x1402DE580 (MiComputePxeWalkAction.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiFastTrimWorkingSet @ 0x1403CF450 (MiFastTrimWorkingSet.c)
 *     MmFreeSystemCacheReserveView @ 0x1407ED648 (MmFreeSystemCacheReserveView.c)
 *     MmHardFaultBytesRequired @ 0x1409A5BD0 (MmHardFaultBytesRequired.c)
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
    result = qword_140E38AB8 + 16 * (result - 1);
  }
  if ( result )
    result += 40 * ((a1 >> 18) & 7);
  return result;
}
