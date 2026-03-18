/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x1408B2940
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x140735D04 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpPortQueryServerInfo @ 0x140735E84 (AlpcpPortQueryServerInfo.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140859580 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpReceiveMessagePort @ 0x1408A6F40 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x1408A7C40 (AlpcpExposeAttributes.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408AA7F0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 *     AlpcpPrepareViewForDelivery @ 0x1408AF1C8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1408AF320 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcSectionDeleteProcedure @ 0x1408AF820 (AlpcSectionDeleteProcedure.c)
 *     AlpcpCaptureViewAttribute @ 0x1408B01AC (AlpcpCaptureViewAttribute.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcpReleaseAttributes @ 0x1408B25D0 (AlpcpReleaseAttributes.c)
 *     AlpcViewDestroyProcedure @ 0x1408B3AF0 (AlpcViewDestroyProcedure.c)
 *     AlpcpCreateView @ 0x1408B3D94 (AlpcpCreateView.c)
 *     AlpcpCreateSectionView @ 0x1408B5A38 (AlpcpCreateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x1408B62D4 (AlpcpMapLegacyPortView.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14098AE9C (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpDisconnectPort @ 0x14098B448 (AlpcpDisconnectPort.c)
 *     AlpcpSendCloseMessage @ 0x14098BC2C (AlpcpSendCloseMessage.c)
 *     AlpcpFlushMessagesPort @ 0x14098BF34 (AlpcpFlushMessagesPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14098C750 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14098D31C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpQueryRemoteView @ 0x14098EA38 (AlpcpQueryRemoteView.c)
 *     AlpcReserveDestroyProcedure @ 0x1409EC530 (AlpcReserveDestroyProcedure.c)
 *     AlpcRegionDestroyProcedure @ 0x140A1D030 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x140A4B79C (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A82DE8 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 *v2; // rax
  __int64 *v3; // rsi
  __int64 result; // rax

  v2 = KeAbPreAcquire(BugCheckParameter2 - 16, 0LL);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 - 16), v2, BugCheckParameter2 - 16);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL) + 0x10000;
  if ( result <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x26uLL, result);
  return result;
}
