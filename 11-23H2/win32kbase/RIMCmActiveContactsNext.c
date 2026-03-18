/*
 * XREFs of RIMCmActiveContactsNext @ 0x1C01AFE4C
 * Callers:
 *     rimCountContactsToDeliverWithFrame @ 0x1C00E1A3E (rimCountContactsToDeliverWithFrame.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C017BBF8 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C400 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C017C920 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C017CD64 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C018C27C (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1C018E454 (rimEndAllActiveContactsWorker.c)
 *     rimIsWakeablePointerFrame @ 0x1C01A0F78 (rimIsWakeablePointerFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01A11A0 (rimStorePointersInHoldingFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01A6F5C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01A7560 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01A78EC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01A890C (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01AB358 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01AFDC8 (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ListTableEnd @ 0x1C00E371E (ListTableEnd.c)
 *     ListTableIteratorNext @ 0x1C00E37BA (ListTableIteratorNext.c)
 */

__int64 *__fastcall RIMCmActiveContactsNext(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 *result; // rax
  __int64 v6; // xmm0_8
  __int64 v7[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a1 + 1000) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 478);
  if ( *(_QWORD *)a2 != a1 + 992 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 479);
  v4 = (_QWORD *)ListTableEnd((__int64)v7, *(_QWORD *)a2);
  if ( *(_QWORD *)a2 == *v4 && *(_DWORD *)(a2 + 8) == (unsigned int)v4[1] && *(_QWORD *)(a2 + 16) == v4[2] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 480);
  result = ListTableIteratorNext(v7, a2);
  v6 = result[2];
  *(_OWORD *)a2 = *(_OWORD *)result;
  *(_QWORD *)(a2 + 16) = v6;
  return result;
}
