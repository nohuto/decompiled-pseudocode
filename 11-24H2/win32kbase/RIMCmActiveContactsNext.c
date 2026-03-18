/*
 * XREFs of RIMCmActiveContactsNext @ 0x14005A08C
 * Callers:
 *     RIMSuppressAllActiveContacts @ 0x140055A50 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1400568CC (rimEndAllActiveContactsWorker.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x140056BD0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140057F58 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140058578 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x140059314 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x140059874 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x140059F50 (RIMCmActiveContactsBeginNoButton.c)
 *     rimIsWakeablePointerFrame @ 0x14011470C (rimIsWakeablePointerFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x14017ED68 (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x14017F21C (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1401807E4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140180B5C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x14019930C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1401D96B0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400D0398 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     ListTableEnd @ 0x140182768 (ListTableEnd.c)
 *     ListTableIteratorNext @ 0x140182804 (ListTableIteratorNext.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsNext(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // xmm1_8
  __int64 result; // rax
  __int64 v7; // xmm0_8
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  _BYTE v10[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a1 + 1008) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 483LL);
  if ( *a2 != a1 + 1000 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 484LL);
  v4 = ListTableEnd(v10, *a2);
  v5 = *(_QWORD *)(v4 + 16);
  v8 = *(_OWORD *)v4;
  v9 = v5;
  if ( !(unsigned __int8)tagLIST_TABLE_ITERATOR::operator!=(a2, &v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 485LL);
  result = ListTableIteratorNext(v10, a2);
  v7 = *(_QWORD *)(result + 16);
  *(_OWORD *)a2 = *(_OWORD *)result;
  a2[2] = v7;
  return result;
}
