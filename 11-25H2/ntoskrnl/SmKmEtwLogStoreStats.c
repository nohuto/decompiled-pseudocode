/*
 * XREFs of SmKmEtwLogStoreStats @ 0x14078A718
 * Callers:
 *     SmEtwEnableCallback @ 0x14078C4F0 (SmEtwEnableCallback.c)
 *     SmKmStoreDelete @ 0x140A51F20 (SmKmStoreDelete.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     ?SmStEtwFillStoreStatsEvent@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x1406029D4 (-SmStEtwFillStoreStatsEvent@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

NTSTATUS __fastcall SmKmEtwLogStoreStats(REGHANDLE *a1, __int64 a2)
{
  NTSTATUS result; // eax
  PEVENT_DATA_DESCRIPTOR UserData[2]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG UserDataCount; // [rsp+50h] [rbp-B0h]
  int v7; // [rsp+54h] [rbp-ACh]
  int v8; // [rsp+58h] [rbp-A8h]
  int v9; // [rsp+5Ch] [rbp-A4h]
  _BYTE v10[1360]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v11[3]; // [rsp+5B0h] [rbp+4B0h] BYREF

  memset(v11, 0, sizeof(v11));
  memset_0(v10, 0, sizeof(v10));
  UserDataCount = 0;
  v8 = 0;
  UserData[0] = (PEVENT_DATA_DESCRIPTOR)v11;
  v7 = 3;
  UserData[1] = (PEVENT_DATA_DESCRIPTOR)v10;
  v9 = 1360;
  result = SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreStatsEvent(a2, (__int64)UserData);
  if ( result )
    return EtwWriteEx(*a1, &SmEventStoreIoStats, 0LL, 0, 0LL, 0LL, UserDataCount, UserData[0]);
  return result;
}
