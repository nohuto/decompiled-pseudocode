/*
 * XREFs of TtmiLogSessionPowerRequestAcknowledged @ 0x14076E28C
 * Callers:
 *     TtmNotifySessionPowerRequestPresent @ 0x140769F48 (TtmNotifySessionPowerRequestPresent.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall TtmiLogSessionPowerRequestAcknowledged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8)
{
  int v8; // r8d
  __int64 v9; // r9
  int v10; // r10d
  int v11; // r11d
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13; // [rsp+31h] [rbp-CFh] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-A0h] BYREF
  int *v21; // [rsp+80h] [rbp-80h]
  int v22; // [rsp+88h] [rbp-78h]
  int v23; // [rsp+8Ch] [rbp-74h]
  int *v24; // [rsp+90h] [rbp-70h]
  int v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+9Ch] [rbp-64h]
  int *v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+ACh] [rbp-54h]
  __int64 *v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
  __int64 *v33; // [rsp+C0h] [rbp-40h]
  int v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+CCh] [rbp-34h]
  int *v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DCh] [rbp-24h]
  char *v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+ECh] [rbp-14h]
  char *v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+FCh] [rbp-4h]

  if ( (unsigned int)dword_140FD88C8 > 5 && tlgKeywordOn((__int64)&dword_140FD88C8, 1LL) )
  {
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v17 = 0;
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v21 = &v14;
    v24 = &v15;
    v27 = &v16;
    v30 = &v18;
    v19 = a5;
    v33 = &v19;
    v36 = &v17;
    v12 = a7;
    v39 = &v12;
    v13 = a8;
    v42 = &v13;
    v22 = 4;
    v25 = 4;
    v16 = v8;
    v28 = 4;
    v18 = v9;
    v31 = 8;
    v34 = 8;
    v37 = 4;
    v14 = v11;
    v15 = v10;
    v40 = 1;
    v43 = 1;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140FD88C8,
      (unsigned __int8 *)&unk_140050A90,
      0LL,
      0LL,
      0xAu,
      &v20);
  }
}
