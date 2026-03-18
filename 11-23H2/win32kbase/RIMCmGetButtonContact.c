/*
 * XREFs of RIMCmGetButtonContact @ 0x1C00E354C
 * Callers:
 *     rimCountContactsToDeliverWithFrame @ 0x1C00E1A3E (rimCountContactsToDeliverWithFrame.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C400 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C017C920 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01A11A0 (rimStorePointersInHoldingFrame.c)
 *     rimFinalizePointerFlags @ 0x1C01AA358 (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01AB8BC (rimProcessPointerDeviceButtonContact.c)
 *     RIMCmActivateButtonContact @ 0x1C01AFB0C (RIMCmActivateButtonContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmGetButtonContact(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 24) == 7 )
    return *(_QWORD *)(a1 + 968);
  else
    return 0LL;
}
