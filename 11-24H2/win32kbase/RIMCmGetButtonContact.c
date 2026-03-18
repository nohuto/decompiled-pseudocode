/*
 * XREFs of RIMCmGetButtonContact @ 0x140104458
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x140056BD0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1400571D4 (rimProcessPointerDeviceButtonContact.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140058578 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x14017ED68 (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x14017F21C (rimStorePointersInHoldingFrame.c)
 *     rimFinalizePointerFlags @ 0x1401815FC (rimFinalizePointerFlags.c)
 *     RIMCmActivateButtonContact @ 0x1401F1704 (RIMCmActivateButtonContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmGetButtonContact(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 24) == 7 )
    return *(_QWORD *)(a1 + 976);
  else
    return 0LL;
}
