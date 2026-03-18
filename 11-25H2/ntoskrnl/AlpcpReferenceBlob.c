/*
 * XREFs of AlpcpReferenceBlob @ 0x1408B4930
 * Callers:
 *     AlpcpExposeAttributes @ 0x1408A7C40 (AlpcpExposeAttributes.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408AA7F0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateRegion @ 0x1408ADF04 (AlpcpCreateRegion.c)
 *     AlpcpCreateSection @ 0x1408AE108 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1408AEE08 (AlpcpCreateReserve.c)
 *     AlpcpPrepareViewForDelivery @ 0x1408AF1C8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpLocateSectionView @ 0x1408AF88C (AlpcpLocateSectionView.c)
 *     AlpcpCreateSecurityContext @ 0x1408AFF04 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateView @ 0x1408B3D94 (AlpcpCreateView.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1408B4DA4 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpCleanupProcessViews @ 0x1408E10E0 (AlpcpCleanupProcessViews.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14098AE9C (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpFlushResourcesPort @ 0x14098BDD4 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushMessagesPort @ 0x14098BF34 (AlpcpFlushMessagesPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14098C750 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFormatConnectionRequest @ 0x14098E160 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140A35620 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
