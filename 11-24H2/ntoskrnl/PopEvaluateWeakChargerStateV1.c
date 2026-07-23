/*
 * XREFs of PopEvaluateWeakChargerStateV1 @ 0x140759DB0
 * Callers:
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopEvaluateWeakChargerStateV1(char a1, __int16 a2)
{
  unsigned __int8 v4; // r8
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  char v8; // bl
  char v9; // r8
  int v10; // r10d
  unsigned __int8 Buffer; // [rsp+48h] [rbp-C0h] BYREF
  char Buffer_1; // [rsp+49h] [rbp-BFh] BYREF
  char v14; // [rsp+4Ah] [rbp-BEh] BYREF
  char v15; // [rsp+4Bh] [rbp-BDh] BYREF
  int v16; // [rsp+4Ch] [rbp-BCh] BYREF
  int v17; // [rsp+50h] [rbp-B8h] BYREF
  int v18; // [rsp+54h] [rbp-B4h] BYREF
  int v19; // [rsp+58h] [rbp-B0h] BYREF
  int v20; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+68h] [rbp-A0h] BYREF
  char *p_Buffer_1; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  int *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  int *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  char *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  char *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  int *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  int *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  int *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  __int64 *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock);
  Buffer = 0;
  v4 = 0;
  if ( PopWeakChargerNotificationUsbStack == -1 )
  {
    v5 = PopWeakChargerNotificationBatteryMiniport != -1;
  }
  else if ( PopWeakChargerNotificationBatteryMiniport == -1 )
  {
    v5 = 2;
  }
  else
  {
    v5 = 3;
  }
  if ( !a1 )
    goto LABEL_19;
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      if ( !PopWeakChargerNotificationUsbStack )
        goto LABEL_19;
      v4 = 2;
      goto LABEL_16;
    }
    if ( v7 == 1 )
    {
      if ( PopWeakChargerNotificationUsbStack )
      {
        v4 = 2;
        Buffer = 2;
      }
      if ( PopWeakChargerNotificationBatteryMiniport == 1 )
      {
        v4 |= 1u;
LABEL_16:
        Buffer = v4;
      }
    }
  }
  else if ( PopWeakChargerNotificationBatteryMiniport == 1 )
  {
    v4 = 1;
    Buffer = 1;
  }
LABEL_19:
  if ( PopWeakChargerCompositeState == v4 )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    ZwUpdateWnfStateData(&WNF_PO_RECONCILED_WEAK_CHARGER, &Buffer, 1u, 0LL, 0LL, 0, 0);
    PopWeakChargerCompositeState = Buffer;
  }
  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    Buffer_1 = v9;
    p_Buffer_1 = &Buffer_1;
    v18 = PopWeakChargerNotificationBatteryMiniport;
    v24 = 1LL;
    v25 = &v18;
    v19 = PopWeakChargerNotificationUsbStack;
    v27 = &v19;
    v14 = PopWeakChargerMeasured;
    v29 = &v14;
    v31 = &v15;
    v33 = &v17;
    v35 = &v16;
    v37 = &v20;
    v39 = &v21;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 1LL;
    v15 = a1;
    v32 = 1LL;
    LOWORD(v17) = a2;
    v34 = 2LL;
    LOBYTE(v16) = v8;
    v36 = 1LL;
    v20 = v10;
    v38 = 4LL;
    v21 = 0x1000000LL;
    v40 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07680,
      (unsigned __int8 *)&dword_14004D094,
      0LL,
      0LL,
      0xBu,
      &v22);
  }
  return PopReleaseRwLock(&PopWeakChargerLock);
}
