/*
 * XREFs of CheckOrAcquireDwmStateLock @ 0x14006F960
 * Callers:
 *     OpenDwmHandle @ 0x14006F814 (OpenDwmHandle.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1402235E0 (NtDCompositionSendDwmLpcMessage.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1402346E4 (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140234E98 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreLockDwmState @ 0x140023480 (GreLockDwmState.c)
 *     GreIsDwmStateLocked @ 0x140024460 (GreIsDwmStateLocked.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

char CheckOrAcquireDwmStateLock()
{
  char v0; // bl
  __int64 v1; // rcx
  __int64 v2; // rcx

  v0 = 0;
  if ( !IS_USERCRIT_OWNED_AT_ALL() && !GreIsDwmStateLocked(v1) )
  {
    GreLockDwmState(v2);
    return 1;
  }
  return v0;
}
