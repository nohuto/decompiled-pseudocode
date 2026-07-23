/*
 * XREFs of WmipReferenceEntry @ 0x1409B4038
 * Callers:
 *     WmipRegisterEtwProvider @ 0x1407A590C (WmipRegisterEtwProvider.c)
 *     WmipInsertMofResource @ 0x1407A5D5C (WmipInsertMofResource.c)
 *     WmipUpdateDataSource @ 0x1409AF500 (WmipUpdateDataSource.c)
 *     WmipSendEnableDisableRequest @ 0x1409AF934 (WmipSendEnableDisableRequest.c)
 *     WmipFindISinGEbyName @ 0x1409AFB60 (WmipFindISinGEbyName.c)
 *     WmipGenerateRegistrationNotification @ 0x1409B1AE4 (WmipGenerateRegistrationNotification.c)
 *     WmipIncludeStaticNames @ 0x1409B1C2C (WmipIncludeStaticNames.c)
 *     WmipFindGEByGuid @ 0x1409B2884 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x1409B3B80 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1409B3E88 (WmipPrepareForWnodeAD.c)
 *     WmipLegacyEtwCallback @ 0x140A765F0 (WmipLegacyEtwCallback.c)
 *     WmipLegacyEtwWorker @ 0x140A876B0 (WmipLegacyEtwWorker.c)
 *     WmipQueueLegacyEtwWork @ 0x140A8AB68 (WmipQueueLegacyEtwWork.c)
 *     WmipSendEnableRequest @ 0x140A8D0B0 (WmipSendEnableRequest.c)
 *     WmipFindMRByNames @ 0x140A94A94 (WmipFindMRByNames.c)
 *     WmipFindISInDSByGuid @ 0x140AA3FE8 (WmipFindISInDSByGuid.c)
 *     WmipDereferenceEvent @ 0x140AB08D8 (WmipDereferenceEvent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
