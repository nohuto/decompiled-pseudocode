/*
 * XREFs of AlpcpReferenceBlob @ 0x14089EB60
 * Callers:
 *     AlpcpFlushMessagesByRequestor @ 0x14088E378 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpFlushResourcesPort @ 0x14088ECFC (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushMessagesPort @ 0x14088EE5C (AlpcpFlushMessagesPort.c)
 *     AlpcpFormatConnectionRequest @ 0x14089137C (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateRegion @ 0x140893390 (AlpcpCreateRegion.c)
 *     AlpcpCreateSection @ 0x140893594 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x140893C6C (AlpcpCreateReserve.c)
 *     AlpcpLocateSectionView @ 0x14089630C (AlpcpLocateSectionView.c)
 *     AlpcpPrepareViewForDelivery @ 0x140896848 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCreateView @ 0x140897248 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14089BCC0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcCreateSecurityContext @ 0x14089D0F0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpReceiveMessagePort @ 0x14089DB00 (AlpcpReceiveMessagePort.c)
 *     AlpcpCreateSecurityContext @ 0x14089E878 (AlpcpCreateSecurityContext.c)
 *     AlpcpExposeAttributes @ 0x1408A0770 (AlpcpExposeAttributes.c)
 *     AlpcpCleanupProcessViews @ 0x1408FF9DC (AlpcpCleanupProcessViews.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1409E1BD8 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140A2FA3C (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
