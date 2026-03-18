/*
 * XREFs of RIMCmActiveContactsBeginNoButton @ 0x140059F50
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x140056BD0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140058578 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x14017ED68 (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x14017F21C (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140180B5C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x14019930C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1401D96B0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     RIMCmActiveContactsEnd @ 0x140059FD4 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsBegin @ 0x14005A030 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsNext @ 0x14005A08C (RIMCmActiveContactsNext.c)
 */

__int64 __fastcall RIMCmActiveContactsBeginNoButton(__int64 a1, __int64 a2)
{
  __int64 active; // rax
  __int64 v5; // xmm1_8
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  active = RIMCmActiveContactsBegin(&v7, a2);
  v5 = *(_QWORD *)(active + 16);
  *(_OWORD *)a1 = *(_OWORD *)active;
  *(_QWORD *)(a1 + 16) = v5;
  RIMCmActiveContactsEnd(&v7, a2);
  if ( (*(_QWORD *)a1 != v7 || *(_DWORD *)(a1 + 8) != v8 || *(_QWORD *)(a1 + 16) != v9)
    && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) & 4) != 0 )
  {
    RIMCmActiveContactsNext(a2, a1);
  }
  return a1;
}
