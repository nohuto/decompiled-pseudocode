/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x14089ED30
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x14073FC54 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpPortQueryServerInfo @ 0x140740094 (AlpcpPortQueryServerInfo.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14088E378 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpSendCloseMessage @ 0x14088EBDC (AlpcpSendCloseMessage.c)
 *     AlpcpFlushMessagesPort @ 0x14088EE5C (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x14088F628 (AlpcpDisconnectPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14089055C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpLookupMessage @ 0x140892E20 (AlpcpLookupMessage.c)
 *     AlpcpCreateSectionView @ 0x1408950B8 (AlpcpCreateSectionView.c)
 *     AlpcpCaptureViewAttribute @ 0x140895F40 (AlpcpCaptureViewAttribute.c)
 *     AlpcpPrepareViewForDelivery @ 0x140896848 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1408969A0 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCreateView @ 0x140897248 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x140897790 (AlpcViewDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     AlpcpReleaseAttributes @ 0x140899E50 (AlpcpReleaseAttributes.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14089BCC0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcSectionDeleteProcedure @ 0x14089CDC0 (AlpcSectionDeleteProcedure.c)
 *     AlpcpReceiveMessagePort @ 0x14089DB00 (AlpcpReceiveMessagePort.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14089F010 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpExposeAttributes @ 0x1408A0770 (AlpcpExposeAttributes.c)
 *     AlpcReserveDestroyProcedure @ 0x1409E0D30 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x1409E98D0 (AlpcpMapLegacyPortView.c)
 *     AlpcRegionDestroyProcedure @ 0x140A1AFE0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpQueryRemoteView @ 0x140A320FC (AlpcpQueryRemoteView.c)
 *     AlpcpReleaseViewAttribute @ 0x140A44954 (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A839EC (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  char *v2; // rax
  char *v3; // rbx
  __int64 result; // rax

  v2 = (char *)KeAbPreAcquire(BugCheckParameter2 - 16, 0LL);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 - 16), v2, BugCheckParameter2 - 16);
  if ( v3 )
    v3[10] = 1;
  *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL) + 0x10000;
  if ( result <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x26uLL, result);
  return result;
}
