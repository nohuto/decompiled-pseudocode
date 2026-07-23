/*
 * XREFs of RawEndOperation @ 0x14047ED8C
 * Callers:
 *     RawCompletionRoutine @ 0x14047ECE0 (RawCompletionRoutine.c)
 *     RawQueryFsDeviceInfo @ 0x14077CA74 (RawQueryFsDeviceInfo.c)
 *     RawSetInformation @ 0x14077CAF8 (RawSetInformation.c)
 *     RawReadWriteDeviceControl @ 0x1408AD8D0 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x1408AE090 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x1408AE174 (RawUserFsCtrl.c)
 *     RawQueryInformation @ 0x1408AE868 (RawQueryInformation.c)
 *     RawQueryFsSizeInfo @ 0x140A86008 (RawQueryFsSizeInfo.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 216);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 232), 1u);
}
