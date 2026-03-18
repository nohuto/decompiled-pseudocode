/*
 * XREFs of WmipReferenceEntry @ 0x1409CF068
 * Callers:
 *     WmipRegisterEtwProvider @ 0x1407A57CC (WmipRegisterEtwProvider.c)
 *     WmipInsertMofResource @ 0x1407A5C1C (WmipInsertMofResource.c)
 *     WmipDereferenceEvent @ 0x1409C9CE0 (WmipDereferenceEvent.c)
 *     WmipGenerateRegistrationNotification @ 0x1409CB3C4 (WmipGenerateRegistrationNotification.c)
 *     WmipIncludeStaticNames @ 0x1409CB50C (WmipIncludeStaticNames.c)
 *     WmipFindGEByGuid @ 0x1409CD8B0 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x1409CEBB0 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1409CEEB8 (WmipPrepareForWnodeAD.c)
 *     WmipFindISinGEbyName @ 0x1409D0B10 (WmipFindISinGEbyName.c)
 *     WmipLegacyEtwWorker @ 0x1409D0ED0 (WmipLegacyEtwWorker.c)
 *     WmipQueueLegacyEtwWork @ 0x1409D101C (WmipQueueLegacyEtwWork.c)
 *     WmipSendEnableDisableRequest @ 0x1409D12AC (WmipSendEnableDisableRequest.c)
 *     WmipUpdateDataSource @ 0x1409D1534 (WmipUpdateDataSource.c)
 *     WmipLegacyEtwCallback @ 0x140A7C2F0 (WmipLegacyEtwCallback.c)
 *     WmipSendEnableRequest @ 0x140A909B4 (WmipSendEnableRequest.c)
 *     WmipFindMRByNames @ 0x140A982D8 (WmipFindMRByNames.c)
 *     WmipFindISInDSByGuid @ 0x140AA8F3C (WmipFindISInDSByGuid.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall WmipReferenceEntry(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(BugCheckParameter2 + 24));
  if ( result <= 1 )
  {
    if ( result == 1 )
      KeBugCheckEx(0x14Au, 0LL, BugCheckParameter2, 0LL, 0LL);
    KeBugCheckEx(0x14Au, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return result;
}
