/*
 * XREFs of PopSetBatteryDischargingState @ 0x140A31788
 * Callers:
 *     PopBatteryCheckCompositeCapacity @ 0x140A315D4 (PopBatteryCheckCompositeCapacity.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

char __fastcall PopSetBatteryDischargingState(_DWORD *a1, unsigned __int8 a2)
{
  _UNKNOWN **v2; // rax
  const CHAR *v4; // rdx
  bool v5; // zf
  const CHAR *v6; // rdx
  const CHAR *v7; // r8
  const CHAR *v8; // rdx
  const CHAR *v9; // r8
  const CHAR *v10; // rdx
  const CHAR *v11; // r8
  const CHAR *v12; // rdx
  const CHAR *v13; // r8
  const CHAR *v14; // rdx
  const CHAR *v15; // r8
  const CHAR *v16; // rdx
  const CHAR *v17; // r8
  const CHAR *v18; // rdx
  const CHAR *v19; // r8
  const CHAR *v20; // rdx
  int v21; // r11d
  unsigned int v22; // r8d
  unsigned int v23; // eax
  unsigned __int64 v24; // rax
  int Buffer; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v29; // [rsp+54h] [rbp-B4h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v31; // [rsp+5Ch] [rbp-ACh] BYREF
  int v32; // [rsp+60h] [rbp-A8h] BYREF
  int v33; // [rsp+64h] [rbp-A4h] BYREF
  int v34; // [rsp+68h] [rbp-A0h] BYREF
  int v35; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+78h] [rbp-90h] BYREF
  int *v37; // [rsp+98h] [rbp-70h]
  __int64 v38; // [rsp+A0h] [rbp-68h]
  int *v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  char v41[16]; // [rsp+B8h] [rbp-50h] BYREF
  char v42[16]; // [rsp+C8h] [rbp-40h] BYREF
  char v43[16]; // [rsp+D8h] [rbp-30h] BYREF
  char v44[16]; // [rsp+E8h] [rbp-20h] BYREF
  char v45[16]; // [rsp+F8h] [rbp-10h] BYREF
  char v46[16]; // [rsp+108h] [rbp+0h] BYREF
  char v47[16]; // [rsp+118h] [rbp+10h] BYREF
  char v48[16]; // [rsp+128h] [rbp+20h] BYREF
  char v49[16]; // [rsp+138h] [rbp+30h] BYREF
  unsigned int *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  int *v52; // [rsp+158h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+58h]
  int *v54; // [rsp+168h] [rbp+60h]
  __int64 v55; // [rsp+170h] [rbp+68h]
  int *v56; // [rsp+178h] [rbp+70h]
  __int64 v57; // [rsp+180h] [rbp+78h]
  int *v58; // [rsp+188h] [rbp+80h]
  __int64 v59; // [rsp+190h] [rbp+88h]
  int *v60; // [rsp+198h] [rbp+90h]
  __int64 v61; // [rsp+1A0h] [rbp+98h]
  int *v62; // [rsp+1A8h] [rbp+A0h]
  __int64 v63; // [rsp+1B0h] [rbp+A8h]
  _UNKNOWN *retaddr; // [rsp+1D0h] [rbp+C8h] BYREF

  v2 = &retaddr;
  if ( byte_140F0BE60 != a2 )
  {
    byte_140F0BE60 = a2;
    Buffer = a2;
    LOBYTE(v2) = ZwUpdateWnfStateData(&WNF_PO_BATTERY_DISCHARGING, &Buffer, 4u, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL);
      if ( (_BYTE)v2 )
      {
        v37 = &v27;
        v4 = "AC Power";
        v28 = dword_140F0BC94;
        v39 = &v28;
        v5 = (*a1 & 1) == 0;
        v27 = (unsigned __int8)byte_140F0BE60;
        if ( v5 )
          v4 = "DC Power";
        v38 = 4LL;
        v40 = 4LL;
        tlgCreate1Sz_char((__int64)v41, v4);
        v6 = "Battery Discharging";
        if ( (*a1 & 2) == 0 )
          v6 = "-";
        tlgCreate1Sz_char((__int64)v42, v6);
        v8 = "Battery Charging";
        if ( (*a1 & 4) == 0 )
          v8 = v7;
        tlgCreate1Sz_char((__int64)v43, v8);
        v10 = "Battery Critical";
        if ( (*a1 & 8) == 0 )
          v10 = v9;
        tlgCreate1Sz_char((__int64)v44, v10);
        v12 = "Battery charge limiting mode";
        if ( (*a1 & 0x10) == 0 )
          v12 = v11;
        tlgCreate1Sz_char((__int64)v45, v12);
        v14 = "Battery charging state power supply present";
        if ( (*a1 & 0x20) == 0 )
          v14 = v13;
        tlgCreate1Sz_char((__int64)v46, v14);
        v16 = "Battery charging state adequate";
        if ( (*a1 & 0x40) == 0 )
          v16 = v15;
        tlgCreate1Sz_char((__int64)v47, v16);
        v18 = "Battery trip point supported";
        if ( (*a1 & 0x80u) == 0 )
          v18 = v17;
        tlgCreate1Sz_char((__int64)v48, v18);
        v20 = "Platform BCL Enabled";
        if ( (byte_140F0BF18 & 1) == 0 )
          v20 = v19;
        tlgCreate1Sz_char((__int64)v49, v20);
        v22 = a1[1];
        if ( HIDWORD(qword_140F0BCF4) )
          v23 = ((HIDWORD(qword_140F0BCF4) >> 1) + 100 * v22) / HIDWORD(qword_140F0BCF4);
        else
          v23 = 0;
        v29 = v23;
        v50 = &v29;
        v51 = 4LL;
        if ( HIDWORD(qword_140F0BCF4) )
          v24 = 100000 * (unsigned __int64)v22 / HIDWORD(qword_140F0BCF4);
        else
          LODWORD(v24) = 0;
        v30 = v24;
        v31 = v22;
        v52 = &v30;
        v32 = HIDWORD(qword_140F0BCF4);
        v54 = (int *)&v31;
        v53 = 4LL;
        v56 = &v32;
        v33 = a1[2];
        v58 = &v33;
        v34 = a1[3];
        v60 = &v34;
        v62 = &v35;
        v55 = 4LL;
        v57 = 4LL;
        v59 = 4LL;
        v61 = 4LL;
        v35 = v21;
        v63 = 4LL;
        LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140E07680,
                       (unsigned __int8 *)&dword_14004BFAC,
                       0LL,
                       0LL,
                       0x14u,
                       &v36);
      }
    }
  }
  return (char)v2;
}
