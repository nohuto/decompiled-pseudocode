/*
 * XREFs of PopPowerAdapterReinitialize @ 0x14075AA58
 * Callers:
 *     PopBatteryUpdateTestExempt @ 0x140759914 (PopBatteryUpdateTestExempt.c)
 * Callees:
 *     IoSynchronousCallDriver @ 0x14025D510 (IoSynchronousCallDriver.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     PopPowerAdapterQueryStatus @ 0x14075A84C (PopPowerAdapterQueryStatus.c)
 *     PopPowerAdapterTraceFailure @ 0x14075AEC8 (PopPowerAdapterTraceFailure.c)
 *     PopPrepareIoctl @ 0x140A54F18 (PopPrepareIoctl.c)
 */

char __fastcall PopPowerAdapterReinitialize(__int64 a1)
{
  int v1; // r9d
  __int64 v3; // rcx
  char result; // al
  char v5; // al
  NTSTATUS updated; // edx
  const CHAR *v7; // rdx
  int v8; // ecx
  int Buffer; // [rsp+40h] [rbp-C0h] BYREF
  char v10; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v11; // [rsp+45h] [rbp-BBh] BYREF
  NTSTATUS v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+4Ch] [rbp-B4h] BYREF
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+54h] [rbp-ACh] BYREF
  int v16; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+5Ch] [rbp-A4h] BYREF
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+64h] [rbp-9Ch] BYREF
  int v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+80h] [rbp-80h] BYREF
  NTSTATUS *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  char v25[16]; // [rsp+B0h] [rbp-50h] BYREF
  int *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  int *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  int *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  int *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  int *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  int *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  __int64 *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+150h] [rbp+50h] BYREF
  char *v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]
  __int16 *v47; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  char *v49; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h]
  NTSTATUS *v51; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]

  v1 = a1 + 132;
  *(_OWORD *)(a1 + 132) = 0LL;
  *(_OWORD *)(a1 + 148) = 0LL;
  *(_QWORD *)(a1 + 164) = 0LL;
  *(_DWORD *)(a1 + 172) = 0;
  v3 = *(_QWORD *)(a1 + 56);
  Buffer = 0;
  PopPrepareIoctl(v3, 2703472, 0, v1, 0, 44);
  if ( IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56)) >= 0 )
  {
    v5 = BYTE2(Buffer);
    *(_DWORD *)(a1 + 128) = 1;
    qword_140F0BF30 = a1;
    if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
      v5 = 1;
    *(_BYTE *)(a1 + 216) = 0;
    BYTE2(Buffer) = v5;
    LOWORD(Buffer) = 256;
    updated = ZwUpdateWnfStateData(&WNF_PO_POWER_ADAPTER_REC_CAPABILITIES, &Buffer, 4u, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      v45 = &v10;
      v10 = Buffer;
      v47 = &v11;
      v49 = (char *)&v11 + 1;
      v51 = &v12;
      v11 = *(_WORD *)((char *)&Buffer + 1);
      v12 = updated;
      v46 = 1LL;
      v48 = 1LL;
      v50 = 1LL;
      v52 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)byte_14004CBCD,
        0LL,
        0LL,
        6u,
        &v44);
    }
    result = PopPowerAdapterQueryStatus(a1, 0);
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      result = tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL);
      if ( result )
      {
        v7 = "REC Supported";
        v12 = *(_DWORD *)(a1 + 136);
        v24 = 4LL;
        v23 = &v12;
        if ( (*(_DWORD *)(a1 + 140) & 1) == 0 )
          v7 = "-";
        tlgCreate1Sz_char((__int64)v25, v7);
        v8 = *(_DWORD *)(a1 + 144);
        v26 = &v13;
        v14 = *(_DWORD *)(a1 + 148);
        v13 = v8;
        v28 = &v14;
        v15 = *(_DWORD *)(a1 + 152);
        v30 = &v15;
        v16 = *(_DWORD *)(a1 + 156);
        v32 = &v16;
        v17 = *(_DWORD *)(a1 + 160);
        v34 = &v17;
        v18 = *(_DWORD *)(a1 + 164);
        v36 = &v18;
        v19 = *(_DWORD *)(a1 + 168);
        v38 = &v19;
        v20 = *(_DWORD *)(a1 + 172);
        v40 = &v20;
        v42 = &v21;
        v27 = 4LL;
        v29 = 4LL;
        v31 = 4LL;
        v33 = 4LL;
        v35 = 4LL;
        v37 = 4LL;
        v39 = 4LL;
        v41 = 4LL;
        v21 = 0x1000000LL;
        v43 = 8LL;
        return tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140E07680,
                 (unsigned __int8 *)byte_14004CC3D,
                 0LL,
                 0LL,
                 0xDu,
                 &v22);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 128) = 2;
    *(_DWORD *)(a1 + 220) = 1;
    *(_DWORD *)(a1 + 228) = 0;
    return PopPowerAdapterTraceFailure(a1, 1LL);
  }
  return result;
}
