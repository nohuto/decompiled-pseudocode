/*
 * XREFs of PopPowerAdapterAdd @ 0x14075B550
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoSynchronousCallDriver @ 0x140374C50 (IoSynchronousCallDriver.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     _tlgCreate1Sz_char @ 0x1404397B4 (_tlgCreate1Sz_char.c)
 *     Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline @ 0x1405D7CA8 (Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     PopPowerAdapterQueryStatus @ 0x14075BB40 (PopPowerAdapterQueryStatus.c)
 *     PopPowerAdapterTraceFailure @ 0x14075BE98 (PopPowerAdapterTraceFailure.c)
 *     PopPrepareIoctl @ 0x140A5D1E8 (PopPrepareIoctl.c)
 */

void __fastcall PopPowerAdapterAdd(__int64 a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  char v3; // al
  int updated; // edx
  const CHAR *v5; // rdx
  int v6; // ecx
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  char v8; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v9; // [rsp+45h] [rbp-BBh] BYREF
  int v10; // [rsp+48h] [rbp-B8h] BYREF
  int v11; // [rsp+4Ch] [rbp-B4h] BYREF
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+54h] [rbp-ACh] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+5Ch] [rbp-A4h] BYREF
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  int v17; // [rsp+64h] [rbp-9Ch] BYREF
  int v18; // [rsp+68h] [rbp-98h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+80h] [rbp-80h] BYREF
  int *v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  _BYTE v23[16]; // [rsp+B0h] [rbp-50h] BYREF
  int *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  int *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  int *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  int *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  int *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  int *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  int *v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  int *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  __int64 *v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+150h] [rbp+50h] BYREF
  char *v43; // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]
  __int16 *v45; // [rsp+180h] [rbp+80h]
  __int64 v46; // [rsp+188h] [rbp+88h]
  char *v47; // [rsp+190h] [rbp+90h]
  __int64 v48; // [rsp+198h] [rbp+98h]
  int *v49; // [rsp+1A0h] [rbp+A0h]
  __int64 v50; // [rsp+1A8h] [rbp+A8h]

  v7 = 0;
  if ( !qword_140F0B0F0 )
  {
    IsEnabledDeviceUsageNoInline = Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline();
    KeInitializeEvent(
      (PRKEVENT)(a1 + 104),
      (EVENT_TYPE)(IsEnabledDeviceUsageNoInline == 0),
      IsEnabledDeviceUsageNoInline != 0);
    *(_OWORD *)(a1 + 132) = 0LL;
    *(_OWORD *)(a1 + 148) = 0LL;
    *(_QWORD *)(a1 + 164) = 0LL;
    *(_DWORD *)(a1 + 172) = 0;
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2703472, 0, a1 + 132, 0, 44);
    if ( IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56)) >= 0 )
    {
      *(_DWORD *)(a1 + 128) = 1;
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
      v3 = BYTE2(v7);
      qword_140F0B0F0 = a1;
      if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
        v3 = 1;
      *(_BYTE *)(a1 + 216) = 0;
      BYTE2(v7) = v3;
      LOWORD(v7) = 256;
      updated = ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_ADAPTER_REC_CAPABILITIES, (__int64)&v7);
      if ( (unsigned int)dword_140E076F0 > 5 )
      {
        v43 = &v8;
        v8 = v7;
        v45 = &v9;
        v47 = (char *)&v9 + 1;
        v49 = &v10;
        v9 = *(_WORD *)((char *)&v7 + 1);
        v10 = updated;
        v44 = 1LL;
        v46 = 1LL;
        v48 = 1LL;
        v50 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E076F0,
          (unsigned __int8 *)byte_14004CAF3,
          0LL,
          0LL,
          6u,
          &v42);
      }
      PopPowerAdapterQueryStatus(a1, 0LL);
      PopReleaseRwLock((signed __int64 *)&PopCB);
      if ( (unsigned int)dword_140E076F0 > 5 && tlgKeywordOn((__int64)&dword_140E076F0, 0x400000000000LL) )
      {
        v5 = "REC Supported";
        v10 = *(_DWORD *)(a1 + 136);
        v22 = 4LL;
        v21 = &v10;
        if ( (*(_DWORD *)(a1 + 140) & 1) == 0 )
          v5 = "-";
        tlgCreate1Sz_char((__int64)v23, v5);
        v6 = *(_DWORD *)(a1 + 144);
        v24 = &v11;
        v12 = *(_DWORD *)(a1 + 148);
        v11 = v6;
        v26 = &v12;
        v13 = *(_DWORD *)(a1 + 152);
        v28 = &v13;
        v14 = *(_DWORD *)(a1 + 156);
        v30 = &v14;
        v15 = *(_DWORD *)(a1 + 160);
        v32 = &v15;
        v16 = *(_DWORD *)(a1 + 164);
        v34 = &v16;
        v17 = *(_DWORD *)(a1 + 168);
        v36 = &v17;
        v18 = *(_DWORD *)(a1 + 172);
        v38 = &v18;
        v40 = &v19;
        v25 = 4LL;
        v27 = 4LL;
        v29 = 4LL;
        v31 = 4LL;
        v33 = 4LL;
        v35 = 4LL;
        v37 = 4LL;
        v39 = 4LL;
        v19 = 0x1000000LL;
        v41 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E076F0,
          (unsigned __int8 *)&word_14004CA3E,
          0LL,
          0LL,
          0xDu,
          &v20);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 128) = 2;
      *(_DWORD *)(a1 + 220) = 1;
      *(_DWORD *)(a1 + 228) = 0;
      PopPowerAdapterTraceFailure(a1, 1LL);
    }
  }
}
