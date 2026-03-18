/*
 * XREFs of AlpcpReferenceBlob @ 0x1408966C0
 * Callers:
 *     AlpcpFlushMessagesByRequestor @ 0x14088A4C8 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpFormatConnectionRequest @ 0x14088B56C (AlpcpFormatConnectionRequest.c)
 *     AlpcpFlushResourcesPort @ 0x14088BD0C (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushMessagesPort @ 0x14088BE6C (AlpcpFlushMessagesPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14088CA00 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408926D0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x14089328C (AlpcpCreateView.c)
 *     AlpcpLocateSectionView @ 0x140893C6C (AlpcpLocateSectionView.c)
 *     AlpcpPrepareViewForDelivery @ 0x140894200 (AlpcpPrepareViewForDelivery.c)
 *     NtAlpcCreateSecurityContext @ 0x140894C50 (NtAlpcCreateSecurityContext.c)
 *     AlpcpReceiveMessagePort @ 0x140895660 (AlpcpReceiveMessagePort.c)
 *     AlpcpCreateSecurityContext @ 0x1408963D8 (AlpcpCreateSecurityContext.c)
 *     AlpcpExposeAttributes @ 0x1408980D0 (AlpcpExposeAttributes.c)
 *     AlpcpCleanupProcessViews @ 0x1408A977C (AlpcpCleanupProcessViews.c)
 *     AlpcpCreateRegion @ 0x14093ED50 (AlpcpCreateRegion.c)
 *     AlpcpCreateSection @ 0x14093EF54 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x14093F62C (AlpcpCreateReserve.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1409E6C18 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpAcceptConnectPort @ 0x1409F4F00 (AlpcpAcceptConnectPort.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140A3A410 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 BugCheckParameter4; // rax
  __int64 v2; // r8

  _m_prefetchw((const void *)(BugCheckParameter2 - 24));
  BugCheckParameter4 = *(_QWORD *)(BugCheckParameter2 - 24);
  while ( BugCheckParameter4 > 0 )
  {
    v2 = BugCheckParameter4;
    BugCheckParameter4 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)(BugCheckParameter2 - 24),
                           BugCheckParameter4 + 1,
                           BugCheckParameter4);
    if ( BugCheckParameter4 == v2 )
      return BugCheckParameter4 + 1;
  }
  if ( BugCheckParameter4 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, BugCheckParameter4);
  return 0LL;
}
