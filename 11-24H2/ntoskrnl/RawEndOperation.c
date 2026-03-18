/*
 * XREFs of RawEndOperation @ 0x1404838BC
 * Callers:
 *     RawCompletionRoutine @ 0x140483810 (RawCompletionRoutine.c)
 *     RawQueryFsDeviceInfo @ 0x14077CBC4 (RawQueryFsDeviceInfo.c)
 *     RawSetInformation @ 0x14077CC48 (RawSetInformation.c)
 *     RawQueryInformation @ 0x1409A1F5C (RawQueryInformation.c)
 *     RawReadWriteDeviceControl @ 0x1409A2640 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x1409A2E00 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x1409A2EE4 (RawUserFsCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140A89C08 (RawQueryFsSizeInfo.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 216);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 232), 1u);
}
