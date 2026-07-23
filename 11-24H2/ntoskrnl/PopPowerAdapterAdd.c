/*
 * XREFs of PopPowerAdapterAdd @ 0x14075A030
 * Callers:
 *     <none>
 * Callees:
 *     IoSynchronousCallDriver @ 0x14025D510 (IoSynchronousCallDriver.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline @ 0x1405CD1A8 (Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline @ 0x1405D521C (Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     PopPowerAdapterQueryStatus @ 0x14075A84C (PopPowerAdapterQueryStatus.c)
 *     PopPowerAdapterTraceFailure @ 0x14075AEC8 (PopPowerAdapterTraceFailure.c)
 *     PopPrepareIoctl @ 0x140A54F18 (PopPrepareIoctl.c)
 */

void __fastcall PopPowerAdapterAdd(__int64 a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  char v3; // al
  NTSTATUS updated; // edx
  const CHAR *v5; // rdx
  int v6; // ecx
  unsigned __int8 *v7; // rdx
  NTSTATUS *v8; // rax
  char v9; // al
  NTSTATUS v10; // edx
  const CHAR *v11; // rdx
  int v12; // ecx
  char v13; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v14; // [rsp+41h] [rbp-BFh] BYREF
  int Buffer; // [rsp+44h] [rbp-BCh] BYREF
  NTSTATUS v16; // [rsp+48h] [rbp-B8h] BYREF
  NTSTATUS v17; // [rsp+4Ch] [rbp-B4h] BYREF
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+54h] [rbp-ACh] BYREF
  int v20; // [rsp+58h] [rbp-A8h] BYREF
  int v21; // [rsp+5Ch] [rbp-A4h] BYREF
  int v22; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+64h] [rbp-9Ch] BYREF
  int v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+80h] [rbp-80h] BYREF
  NTSTATUS *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  _BYTE v29[16]; // [rsp+B0h] [rbp-50h] BYREF
  int *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  int *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  int *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  int *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  int *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  int *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  NTSTATUS *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  __int64 *v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v48[2]; // [rsp+150h] [rbp+50h] BYREF
  char *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  __int16 *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  char *v53; // [rsp+190h] [rbp+90h]
  __int64 v54; // [rsp+198h] [rbp+98h]
  NTSTATUS *v55; // [rsp+1A0h] [rbp+A0h]
  __int64 v56; // [rsp+1A8h] [rbp+A8h]

  Buffer = 0;
  if ( !qword_140F0BF30 )
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
    if ( IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56)) < 0 )
    {
      *(_DWORD *)(a1 + 128) = 2;
      *(_DWORD *)(a1 + 220) = 1;
      *(_DWORD *)(a1 + 228) = 0;
      PopPowerAdapterTraceFailure(a1, 1LL);
      return;
    }
    *(_DWORD *)(a1 + 128) = 1;
    if ( (unsigned int)Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !PopBatteryTestExemptPolicy )
      {
        PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
        qword_140F0BF30 = a1;
        v3 = *(_BYTE *)(a1 + 140) & 1;
        *(_BYTE *)(a1 + 216) = 0;
        BYTE2(Buffer) = v3;
        LOWORD(Buffer) = 256;
        updated = ZwUpdateWnfStateData(&WNF_PO_POWER_ADAPTER_REC_CAPABILITIES, &Buffer, 4u, 0LL, 0LL, 0, 0);
        if ( (unsigned int)dword_140E07680 > 5 )
        {
          v49 = &v13;
          v13 = Buffer;
          v51 = &v14;
          v53 = (char *)&v14 + 1;
          v55 = &v16;
          v14 = *(_WORD *)((char *)&Buffer + 1);
          v16 = updated;
          v50 = 1LL;
          v52 = 1LL;
          v54 = 1LL;
          v56 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E07680,
            (unsigned __int8 *)byte_14004D4B1,
            0LL,
            0LL,
            6u,
            v48);
        }
        PopPowerAdapterQueryStatus(a1, 0LL);
        PopReleaseRwLock((signed __int64 *)&PopCB);
        if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
        {
          v5 = "REC Supported";
          v16 = *(_DWORD *)(a1 + 136);
          v28 = 4LL;
          v27 = &v16;
          if ( (*(_DWORD *)(a1 + 140) & 1) == 0 )
            v5 = "-";
          tlgCreate1Sz_char((__int64)v29, v5);
          v6 = *(_DWORD *)(a1 + 144);
          v30 = &v18;
          v7 = (unsigned __int8 *)word_14004D2DA;
          v19 = *(_DWORD *)(a1 + 148);
          v32 = &v19;
          v20 = *(_DWORD *)(a1 + 152);
          v34 = &v20;
          v21 = *(_DWORD *)(a1 + 156);
          v36 = &v21;
          v22 = *(_DWORD *)(a1 + 160);
          v38 = &v22;
          v23 = *(_DWORD *)(a1 + 164);
          v40 = &v23;
          v24 = *(_DWORD *)(a1 + 168);
          v42 = &v24;
          v17 = *(_DWORD *)(a1 + 172);
          v8 = &v17;
          v18 = v6;
LABEL_20:
          v44 = v8;
          v31 = 4LL;
          v46 = &v25;
          v37 = 4LL;
          v35 = 4LL;
          v33 = 4LL;
          v39 = 4LL;
          v41 = 4LL;
          v43 = 4LL;
          v45 = 4LL;
          v25 = 0x1000000LL;
          v47 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, v7, 0LL, 0LL, 0xDu, &v26);
        }
      }
    }
    else
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
      qword_140F0BF30 = a1;
      v9 = *(_BYTE *)(a1 + 140) & 1;
      *(_BYTE *)(a1 + 216) = 0;
      BYTE2(Buffer) = v9;
      LOWORD(Buffer) = 256;
      v10 = ZwUpdateWnfStateData(&WNF_PO_POWER_ADAPTER_REC_CAPABILITIES, &Buffer, 4u, 0LL, 0LL, 0, 0);
      if ( (unsigned int)dword_140E07680 > 5 )
      {
        v49 = (char *)&v14 + 1;
        HIBYTE(v14) = Buffer;
        v51 = &v14;
        v13 = BYTE2(Buffer);
        v53 = &v13;
        v55 = &v17;
        LOBYTE(v14) = BYTE1(Buffer);
        v17 = v10;
        v50 = 1LL;
        v52 = 1LL;
        v54 = 1LL;
        v56 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)&byte_14004D38F,
          0LL,
          0LL,
          6u,
          v48);
      }
      PopPowerAdapterQueryStatus(a1, 0LL);
      PopReleaseRwLock((signed __int64 *)&PopCB);
      if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
      {
        v11 = "REC Supported";
        v17 = *(_DWORD *)(a1 + 136);
        v28 = 4LL;
        v27 = &v17;
        if ( (*(_DWORD *)(a1 + 140) & 1) == 0 )
          v11 = "-";
        tlgCreate1Sz_char((__int64)v29, v11);
        v12 = *(_DWORD *)(a1 + 144);
        v30 = &v24;
        v7 = (unsigned __int8 *)&dword_14004D3FC;
        v23 = *(_DWORD *)(a1 + 148);
        v32 = &v23;
        v22 = *(_DWORD *)(a1 + 152);
        v34 = &v22;
        v21 = *(_DWORD *)(a1 + 156);
        v36 = &v21;
        v20 = *(_DWORD *)(a1 + 160);
        v38 = &v20;
        v19 = *(_DWORD *)(a1 + 164);
        v40 = &v19;
        v18 = *(_DWORD *)(a1 + 168);
        v42 = &v18;
        v16 = *(_DWORD *)(a1 + 172);
        v8 = &v16;
        v24 = v12;
        goto LABEL_20;
      }
    }
  }
}
