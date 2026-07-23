/*
 * XREFs of ExLogTimeZoneInformation @ 0x1404D29AC
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int ExLogTimeZoneInformation()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *Blink; // r9
  int v2; // eax
  int *v3; // r9
  char v4; // cl
  int v5; // r11d
  int v6; // r10d
  char v8; // [rsp+30h] [rbp-D0h] BYREF
  char v9; // [rsp+31h] [rbp-CFh] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int Flink_high; // [rsp+38h] [rbp-C8h] BYREF
  int Flink; // [rsp+3Ch] [rbp-C4h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  struct _LIST_ENTRY *v16; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+60h] [rbp-A0h] BYREF
  int *v18; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+8Ch] [rbp-74h]
  int *p_Flink_high; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+9Ch] [rbp-64h]
  int *p_Flink; // [rsp+A0h] [rbp-60h]
  int v25; // [rsp+A8h] [rbp-58h]
  int v26; // [rsp+ACh] [rbp-54h]
  char *v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B8h] [rbp-48h]
  int v29; // [rsp+BCh] [rbp-44h]
  struct _LIST_ENTRY **v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]
  char v33[16]; // [rsp+D0h] [rbp-30h] BYREF
  char *v34; // [rsp+E0h] [rbp-20h]
  int v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+ECh] [rbp-14h]
  int *v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]
  int *v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+108h] [rbp+8h]
  int v42; // [rsp+10Ch] [rbp+Ch]
  int *v43; // [rsp+110h] [rbp+10h]
  int v44; // [rsp+118h] [rbp+18h]
  int v45; // [rsp+11Ch] [rbp+1Ch]
  int *v46; // [rsp+120h] [rbp+20h]
  int v47; // [rsp+128h] [rbp+28h]
  int v48; // [rsp+12Ch] [rbp+2Ch]
  int *v49; // [rsp+130h] [rbp+30h]
  int v50; // [rsp+138h] [rbp+38h]
  int v51; // [rsp+13Ch] [rbp+3Ch]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  Blink = CurrentServerSiloGlobals[76].Blink;
  if ( (unsigned int)dword_140E09380 > 5 )
  {
    v2 = (int)Blink[62].Blink;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v10 = v2;
    v19 = 4;
    v18 = &v10;
    Flink_high = HIDWORD(Blink[27].Flink);
    p_Flink_high = &Flink_high;
    Flink = (int)Blink[27].Flink;
    p_Flink = &Flink;
    v8 = ExpRealTimeIsUniversal;
    v27 = &v8;
    v16 = Blink[62].Flink;
    v30 = &v16;
    v22 = 4;
    v25 = 4;
    v28 = 1;
    v31 = 8;
    tlgCreate1Sz_wchar_t((__int64)v33, (const wchar_t *)&Blink[10].Blink + 2);
    v4 = *((_BYTE *)v3 + 428);
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v48 = 0;
    v51 = 0;
    v34 = &v9;
    v13 = *v3;
    v37 = &v13;
    v14 = v3[21];
    v40 = &v14;
    v15 = v3[42];
    v43 = &v15;
    v46 = v3 + 17;
    v9 = v4;
    v49 = v3 + 38;
    v47 = v5 + 12;
    v50 = v5 + 12;
    v35 = v6;
    v38 = v5;
    v41 = v5;
    v44 = v5;
    LODWORD(CurrentServerSiloGlobals) = tlgWriteTransfer_EtwWriteTransfer(
                                          (__int64)&dword_140E09380,
                                          (unsigned __int8 *)byte_140054B73,
                                          0LL,
                                          0LL,
                                          0xEu,
                                          &v17);
  }
  return (int)CurrentServerSiloGlobals;
}
