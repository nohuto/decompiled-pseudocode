/*
 * XREFs of Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x14031D494
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x140172FB0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     NtGdiExtEscape @ 0x14025E9E0 (NtGdiExtEscape.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 * Callees:
 *     Feature_Servicing_UmfdDeadlockFix__private_IsEnabledFallback @ 0x14031D4CC (Feature_Servicing_UmfdDeadlockFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_UmfdDeadlockFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_UmfdDeadlockFix__private_featureState & 1;
  else
    return Feature_Servicing_UmfdDeadlockFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_UmfdDeadlockFix__private_featureState,
             3LL);
}
