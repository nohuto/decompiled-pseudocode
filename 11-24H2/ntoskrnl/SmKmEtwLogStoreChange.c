/*
 * XREFs of SmKmEtwLogStoreChange @ 0x140799AD8
 * Callers:
 *     SmEtwEnableCallback @ 0x14079B9C0 (SmEtwEnableCallback.c)
 *     SmKmStoreAdd @ 0x140A38B64 (SmKmStoreAdd.c)
 *     SmKmStoreDelete @ 0x140A4DC40 (SmKmStoreDelete.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x14060CB3C (-SmStEtwFillStoreEvent@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __fastcall SmKmEtwLogStoreChange(REGHANDLE *a1, __int64 a2, __int64 *a3)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // r8
  ULONG UserDataCount; // edx
  _QWORD v9[2]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v10; // [rsp+50h] [rbp-B0h]
  __int64 v11; // [rsp+54h] [rbp-ACh]
  int v12; // [rsp+5Ch] [rbp-A4h]
  _QWORD v13[22]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v15[320]; // [rsp+120h] [rbp+20h] BYREF

  v14 = 0LL;
  memset_0(v15, 0, sizeof(v15));
  memset_0(v13, 0, 0xA8uLL);
  v11 = 21LL;
  v9[1] = v13;
  v10 = 0;
  UserData = &v14;
  v9[0] = &v14;
  v12 = 168;
  if ( a3 == SmEventStoreDelete )
  {
    UserDataCount = 1;
    v13[0] = a2;
    v14.Ptr = (ULONGLONG)v13;
    *(_QWORD *)&v14.Size = 8LL;
  }
  else
  {
    SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreEvent(a2, (__int64)v9);
    UserDataCount = v10;
    UserData = (struct _EVENT_DATA_DESCRIPTOR *)v9[0];
  }
  return EtwWriteEx(*a1, (PCEVENT_DESCRIPTOR)a3, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
}
