/*
 * XREFs of PopUsbErrorWNFNotificationCallback @ 0x14075C050
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x1404A42EC (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x140A3BB60 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopUsbErrorWNFNotificationCallback(__int64 a1)
{
  int v1; // edi
  BOOL v2; // ebx
  char v4; // [rsp+30h] [rbp-79h] BYREF
  int v5; // [rsp+34h] [rbp-75h] BYREF
  int v6; // [rsp+38h] [rbp-71h] BYREF
  int v7; // [rsp+40h] [rbp-69h] BYREF
  int v8; // [rsp+44h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-59h] BYREF
  int *v10; // [rsp+70h] [rbp-39h]
  int v11; // [rsp+78h] [rbp-31h]
  int v12; // [rsp+7Ch] [rbp-2Dh]
  int *v13; // [rsp+80h] [rbp-29h]
  int v14; // [rsp+88h] [rbp-21h]
  int v15; // [rsp+8Ch] [rbp-1Dh]
  int *v16; // [rsp+90h] [rbp-19h]
  int v17; // [rsp+98h] [rbp-11h]
  int v18; // [rsp+9Ch] [rbp-Dh]
  int *v19; // [rsp+A0h] [rbp-9h]
  int v20; // [rsp+A8h] [rbp-1h]
  int v21; // [rsp+ACh] [rbp+3h]
  char *v22; // [rsp+B0h] [rbp+7h]
  int v23; // [rsp+B8h] [rbp+Fh]
  int v24; // [rsp+BCh] [rbp+13h]
  __int64 *v25; // [rsp+C0h] [rbp+17h]
  int v26; // [rsp+C8h] [rbp+1Fh]
  int v27; // [rsp+CCh] [rbp+23h]
  __int64 v28; // [rsp+D0h] [rbp+27h] BYREF
  int v29; // [rsp+D8h] [rbp+2Fh]

  v5 = 12;
  v1 = ExQueryWnfStateData(a1, &v6, &v28, &v5);
  if ( v1 >= 0 )
  {
    if ( v5 == 12 )
    {
      v2 = v29 == 1;
      PopAcquireRwLockExclusive(&PopWeakChargerLock);
      PopWeakChargerNotificationUsbStack = v2;
      PopBatteryQueueWork(0x40u);
      PopReleaseRwLock((signed __int64 *)&PopWeakChargerLock);
    }
    else
    {
      v1 = 128;
    }
  }
  if ( (unsigned int)dword_140E076F0 > 5 && tlgKeywordOn((__int64)&dword_140E076F0, 0x400000000000LL) )
  {
    v12 = 0;
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v10 = &v5;
    v7 = PopWeakChargerCompositeState;
    v13 = &v7;
    v8 = PopWeakChargerNotificationBatteryMiniport;
    v16 = &v8;
    v6 = PopWeakChargerNotificationUsbStack;
    v19 = &v6;
    v4 = PopWeakChargerMeasured;
    v22 = &v4;
    v25 = &v28;
    v11 = 4;
    v14 = 4;
    v17 = 4;
    v20 = 4;
    v26 = 8;
    v5 = v1;
    v23 = 1;
    v28 = 0x1000000LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E076F0, (unsigned __int8 *)&byte_14004C037, 0LL, 0LL, 8u, &v9);
  }
  return (unsigned int)v1;
}
