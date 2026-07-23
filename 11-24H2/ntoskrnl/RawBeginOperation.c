/*
 * XREFs of RawBeginOperation @ 0x1404052F0
 * Callers:
 *     RawQueryFsDeviceInfo @ 0x14077CA74 (RawQueryFsDeviceInfo.c)
 *     RawSetInformation @ 0x14077CAF8 (RawSetInformation.c)
 *     RawReadWriteDeviceControl @ 0x1408AD8D0 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x1408AE090 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x1408AE174 (RawUserFsCtrl.c)
 *     RawQueryInformation @ 0x1408AE868 (RawQueryInformation.c)
 *     RawQueryFsSizeInfo @ 0x140A86008 (RawQueryFsSizeInfo.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405330 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

BOOLEAN __fastcall RawBeginOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  BOOLEAN result; // al

  v2 = *(_QWORD *)(a1 + 216);
  result = 1;
  if ( !v2 || a2 != v2 )
    return ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 232), 1u);
  return result;
}
