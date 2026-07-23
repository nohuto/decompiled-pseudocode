/*
 * XREFs of PopDiagTraceBatteryTriggerMet @ 0x140753DC0
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceBatteryTriggerMet(__int64 a1, __int64 a2, int *a3)
{
  _UNKNOWN **v3; // rax
  int v4; // r9d
  int v5; // ebx
  bool v6; // zf
  int v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v10; // [rsp+40h] [rbp-C8h] BYREF
  int v11; // [rsp+44h] [rbp-C4h] BYREF
  int v12; // [rsp+48h] [rbp-C0h] BYREF
  BOOL v13; // [rsp+4Ch] [rbp-BCh] BYREF
  BOOL v14; // [rsp+50h] [rbp-B8h] BYREF
  int v15; // [rsp+54h] [rbp-B4h] BYREF
  int v16; // [rsp+58h] [rbp-B0h] BYREF
  int v17; // [rsp+5Ch] [rbp-ACh] BYREF
  int v18; // [rsp+60h] [rbp-A8h] BYREF
  int v19; // [rsp+64h] [rbp-A4h] BYREF
  int v20; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v21; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v22; // [rsp+70h] [rbp-98h] BYREF
  int v23; // [rsp+74h] [rbp-94h] BYREF
  int v24; // [rsp+78h] [rbp-90h] BYREF
  BOOL v25; // [rsp+7Ch] [rbp-8Ch] BYREF
  BOOL v26; // [rsp+80h] [rbp-88h] BYREF
  int v27; // [rsp+84h] [rbp-84h] BYREF
  int v28; // [rsp+88h] [rbp-80h] BYREF
  int v29; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v30; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  int *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  unsigned int *v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  int *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  int *v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  BOOL *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  BOOL *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  int *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  int *v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  int *v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  int *v50; // [rsp+138h] [rbp+30h]
  __int64 v51; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+148h] [rbp+40h] BYREF
  int *v53; // [rsp+168h] [rbp+60h]
  __int64 v54; // [rsp+170h] [rbp+68h]
  int *v55; // [rsp+178h] [rbp+70h]
  __int64 v56; // [rsp+180h] [rbp+78h]
  unsigned int *v57; // [rsp+188h] [rbp+80h]
  __int64 v58; // [rsp+190h] [rbp+88h]
  int *v59; // [rsp+198h] [rbp+90h]
  __int64 v60; // [rsp+1A0h] [rbp+98h]
  int *v61; // [rsp+1A8h] [rbp+A0h]
  __int64 v62; // [rsp+1B0h] [rbp+A8h]
  int *v63; // [rsp+1B8h] [rbp+B0h]
  __int64 v64; // [rsp+1C0h] [rbp+B8h]
  BOOL *v65; // [rsp+1C8h] [rbp+C0h]
  __int64 v66; // [rsp+1D0h] [rbp+C8h]
  BOOL *v67; // [rsp+1D8h] [rbp+D0h]
  __int64 v68; // [rsp+1E0h] [rbp+D8h]
  int *v69; // [rsp+1E8h] [rbp+E0h]
  __int64 v70; // [rsp+1F0h] [rbp+E8h]
  int *v71; // [rsp+1F8h] [rbp+F0h]
  __int64 v72; // [rsp+200h] [rbp+F8h]
  int *v73; // [rsp+208h] [rbp+100h]
  __int64 v74; // [rsp+210h] [rbp+108h]
  int *v75; // [rsp+218h] [rbp+110h]
  __int64 v76; // [rsp+220h] [rbp+118h]
  _UNKNOWN *retaddr; // [rsp+240h] [rbp+138h] BYREF

  v3 = &retaddr;
  v4 = *a3;
  if ( (unsigned int)*a3 <= 1 )
  {
    v5 = dword_140F0BE64;
    v9 = dword_140F0BC94;
    v12 = *(_DWORD *)(a1 + 4);
    v8 = v4;
    v11 = xmmword_140F0BCC0 & 1;
    v6 = *(_BYTE *)a2 == 0;
    v13 = byte_140F0BDD8 != 0;
    v14 = !v6;
    v15 = *(_DWORD *)(a2 + 8);
    v16 = *(_DWORD *)(a2 + 4);
    v17 = *(_DWORD *)(a2 + 16);
    v18 = *(_DWORD *)(a2 + 20);
    LOBYTE(v3) = -45 * (dword_140F0BE64 - 12);
    v10 = (dword_140F0BE64 + 500) / 0x3E8u;
    if ( PopDiagHandleRegistered )
    {
      LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_BATTERY_TRIGGER_MET);
      if ( (_BYTE)v3 )
      {
        UserData.Ptr = (ULONGLONG)&v8;
        *(_QWORD *)&UserData.Size = 4LL;
        v32 = &v9;
        v33 = 4LL;
        v34 = &v10;
        v35 = 4LL;
        v36 = &v11;
        v38 = &v12;
        v40 = &v13;
        v42 = &v14;
        v44 = &v15;
        v46 = &v16;
        v48 = &v17;
        v50 = &v18;
        v37 = 4LL;
        v39 = 4LL;
        v41 = 4LL;
        v43 = 4LL;
        v45 = 4LL;
        v47 = 4LL;
        v49 = 4LL;
        v51 = 4LL;
        LOBYTE(v3) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_BATTERY_TRIGGER_MET, 0LL, 0xBu, &UserData);
      }
    }
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL);
      if ( (_BYTE)v3 )
      {
        v19 = v8;
        v54 = 4LL;
        v53 = &v19;
        v20 = v9;
        v55 = &v20;
        v21 = v10;
        v57 = &v21;
        v59 = &v22;
        v23 = v11;
        v61 = &v23;
        v24 = v12;
        v63 = &v24;
        v25 = v13;
        v65 = &v25;
        v26 = v14;
        v67 = &v26;
        v27 = v15;
        v69 = &v27;
        v28 = v16;
        v71 = &v28;
        v29 = v17;
        v73 = &v29;
        v30 = v18;
        v75 = &v30;
        v56 = 4LL;
        v58 = 4LL;
        v22 = v5;
        v60 = 4LL;
        v62 = 4LL;
        v64 = 4LL;
        v66 = 4LL;
        v68 = 4LL;
        v70 = 4LL;
        v72 = 4LL;
        v74 = 4LL;
        v76 = 4LL;
        LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140E07680,
                       (unsigned __int8 *)&dword_1400498DC,
                       0LL,
                       0LL,
                       0xEu,
                       &v52);
      }
    }
  }
  return (char)v3;
}
