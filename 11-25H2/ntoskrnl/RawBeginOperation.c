/*
 * XREFs of RawBeginOperation @ 0x140405F18
 * Callers:
 *     RawQueryFsDeviceInfo @ 0x14076D894 (RawQueryFsDeviceInfo.c)
 *     RawSetInformation @ 0x14076D918 (RawSetInformation.c)
 *     RawQueryInformation @ 0x14099D06C (RawQueryInformation.c)
 *     RawReadWriteDeviceControl @ 0x14099D750 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x14099DF10 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x14099DFF4 (RawUserFsCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140A84E18 (RawQueryFsSizeInfo.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405F50 (ExAcquireRundownProtectionCacheAwareEx.c)
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
