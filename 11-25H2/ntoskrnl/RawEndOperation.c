/*
 * XREFs of RawEndOperation @ 0x140482C5C
 * Callers:
 *     RawCompletionRoutine @ 0x140482BB0 (RawCompletionRoutine.c)
 *     RawQueryFsDeviceInfo @ 0x14076D894 (RawQueryFsDeviceInfo.c)
 *     RawSetInformation @ 0x14076D918 (RawSetInformation.c)
 *     RawQueryInformation @ 0x14099D06C (RawQueryInformation.c)
 *     RawReadWriteDeviceControl @ 0x14099D750 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x14099DF10 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x14099DFF4 (RawUserFsCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140A84E18 (RawQueryFsSizeInfo.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 216);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 232), 1u);
}
