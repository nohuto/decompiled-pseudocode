/*
 * XREFs of RawBeginOperation @ 0x14040CC60
 * Callers:
 *     RawQueryFsDeviceInfo @ 0x14077CBC4 (RawQueryFsDeviceInfo.c)
 *     RawSetInformation @ 0x14077CC48 (RawSetInformation.c)
 *     RawQueryInformation @ 0x1409A1F5C (RawQueryInformation.c)
 *     RawReadWriteDeviceControl @ 0x1409A2640 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x1409A2E00 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x1409A2EE4 (RawUserFsCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140A89C08 (RawQueryFsSizeInfo.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14040CCA0 (ExAcquireRundownProtectionCacheAwareEx.c)
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
