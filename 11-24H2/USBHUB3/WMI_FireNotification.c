/*
 * XREFs of WMI_FireNotification @ 0x14008EA70
 * Callers:
 *     HUBPDO_EvtDeviceD0Exit @ 0x140015B50 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtOutOfBandwidthTimer @ 0x140018A00 (HUBPDO_EvtOutOfBandwidthTimer.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x14001C058 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_CreatePdoInternal @ 0x14008014C (HUBPDO_CreatePdoInternal.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1400815B0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x140085A14 (HUBMISC_GenerateUserNotificationForPersistentOverCurrent.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x140033B90 (HUBMISC_StripSymbolicNamePrefix.c)
 *     _tlgWriteAgg @ 0x140046304 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

char __fastcall WMI_FireNotification(__int64 *a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 (__fastcall *v6)(PWDF_DRIVER_GLOBALS, __int64); // rax
  char v7; // r14
  int v8; // edi
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  const CHAR *v12; // r8
  _UNKNOWN **v13; // rax
  char v14; // r11
  unsigned __int8 *v15; // rdx
  unsigned __int8 v16; // r9
  char v17; // al
  bool v18; // al
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // r8d
  const CHAR *v25; // r9
  __int16 v26; // cx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r8d
  const CHAR *v30; // r9
  __int64 v31; // r8
  int v32; // r8d
  char v33; // al
  bool v34; // al
  char v36; // [rsp+30h] [rbp-D0h] BYREF
  char v37; // [rsp+31h] [rbp-CFh] BYREF
  char v38; // [rsp+32h] [rbp-CEh] BYREF
  char v39; // [rsp+33h] [rbp-CDh] BYREF
  _WORD v40[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v41[2]; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v42[2]; // [rsp+3Ch] [rbp-C4h] BYREF
  _WORD v43[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v44; // [rsp+44h] [rbp-BCh] BYREF
  int v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B0h] BYREF
  int v48; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  int v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+64h] [rbp-9Ch] BYREF
  int v52; // [rsp+68h] [rbp-98h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h] BYREF
  __int64 v54; // [rsp+78h] [rbp-88h] BYREF
  __int64 v55; // [rsp+80h] [rbp-80h] BYREF
  __int128 v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  int *v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  char *v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  int *v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  int *v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  int *v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  int *v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+128h] [rbp+28h]
  int *v73; // [rsp+130h] [rbp+30h]
  __int64 v74; // [rsp+138h] [rbp+38h]
  int *v75; // [rsp+140h] [rbp+40h]
  __int64 v76; // [rsp+148h] [rbp+48h]
  __int64 *v77; // [rsp+150h] [rbp+50h]
  __int64 v78; // [rsp+158h] [rbp+58h]
  char *v79; // [rsp+160h] [rbp+60h]
  __int64 v80; // [rsp+168h] [rbp+68h]
  const CHAR *v81; // [rsp+170h] [rbp+70h]
  __int64 v82; // [rsp+178h] [rbp+78h]
  __int64 *v83; // [rsp+180h] [rbp+80h]
  __int64 v84; // [rsp+188h] [rbp+88h]
  const CHAR *v85; // [rsp+190h] [rbp+90h]
  int v86; // [rsp+198h] [rbp+98h]
  int v87; // [rsp+19Ch] [rbp+9Ch]
  char *v88; // [rsp+1A0h] [rbp+A0h]
  __int64 v89; // [rsp+1A8h] [rbp+A8h]
  _WORD *v90; // [rsp+1B0h] [rbp+B0h]
  __int64 v91; // [rsp+1B8h] [rbp+B8h]
  _WORD *v92; // [rsp+1C0h] [rbp+C0h]
  __int64 v93; // [rsp+1C8h] [rbp+C8h]
  _WORD *v94; // [rsp+1D0h] [rbp+D0h]
  __int64 v95; // [rsp+1D8h] [rbp+D8h]
  int *v96; // [rsp+1E0h] [rbp+E0h]
  __int64 v97; // [rsp+1E8h] [rbp+E8h]
  __int64 *v98; // [rsp+1F0h] [rbp+F0h]
  __int64 v99; // [rsp+1F8h] [rbp+F8h]
  char *v100; // [rsp+200h] [rbp+100h]
  __int64 v101; // [rsp+208h] [rbp+108h]
  char *v102; // [rsp+210h] [rbp+110h]
  __int64 v103; // [rsp+218h] [rbp+118h]
  __int64 *v104; // [rsp+220h] [rbp+120h]
  __int64 v105; // [rsp+228h] [rbp+128h]

  v2 = *a1;
  v57 = 0LL;
  v56 = 0LL;
  v4 = *(_QWORD *)(v2 + 2552);
  v6 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3016);
  v7 = 0;
  v47 = 0LL;
  v8 = -1073741823;
  v9 = v6(WdfDriverGlobals, v4);
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2968))(
         WdfDriverGlobals,
         v9,
         1LL) )
  {
    v7 = 1;
    HUBMISC_StripSymbolicNamePrefix((unsigned __int16 *)(v2 + 2560), &v47);
    HIDWORD(v57) = v47 + 6;
    DWORD1(v56) = *((unsigned __int16 *)a1 + 100);
    *((_QWORD *)&v56 + 1) = 0LL;
    LODWORD(v57) = 0;
    LODWORD(v56) = a2;
    LODWORD(v13) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int128 *))(WdfFunctions_01015
                                                                                               + 3024))(
                     WdfDriverGlobals,
                     *(_QWORD *)(v2 + 2552),
                     24LL,
                     &v56);
    v8 = (int)v13;
    if ( (int)v13 < 0 )
    {
      v13 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        LOBYTE(v13) = WPP_RECORDER_SF_d(
                        *(_QWORD *)(v2 + 2536),
                        2u,
                        3u,
                        0x17u,
                        (__int64)&WPP_b48bfb8efb7f3208dce8b8d3052aa366_Traceguids,
                        v8);
    }
  }
  else
  {
    v13 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      LOBYTE(v13) = WPP_RECORDER_SF_(
                      *(_QWORD *)(v2 + 2536),
                      v10,
                      3,
                      22,
                      (__int64)&WPP_b48bfb8efb7f3208dce8b8d3052aa366_Traceguids);
    }
  }
  v14 = *(_BYTE *)(v2 + 240);
  if ( !v14 || (*(_DWORD *)(v2 + 44) & 0x100) != 0 )
  {
    if ( (unsigned int)dword_14006C1F8 > 5 )
    {
      if ( (qword_14006C208 & 0x400000000000LL) == 0
        || (LOBYTE(v13) = 1, (qword_14006C210 & 0x400000000000LL) != qword_14006C210) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v13 )
      {
        v54 = 1LL;
        v59 = &v54;
        v60 = 8LL;
        v61 = &v46;
        v63 = &v39;
        v65 = &v45;
        v19 = *(_DWORD *)(v2 + 168);
        v46 = a2;
        v62 = 4LL;
        v39 = v7;
        v64 = 1LL;
        v45 = v8;
        v66 = 4LL;
        v48 = v19;
        v67 = &v48;
        v68 = 4LL;
        if ( v19 == 1 )
          v20 = *(_DWORD *)(v2 + 188);
        else
          v20 = 0;
        v49 = v20;
        v69 = &v49;
        v70 = 4LL;
        if ( v19 == 1 )
          v21 = *(_DWORD *)(v2 + 192);
        else
          v21 = 0;
        v50 = v21;
        v71 = &v50;
        v72 = 4LL;
        if ( v19 == 1 )
          v22 = *(_DWORD *)(v2 + 196);
        else
          v22 = 0;
        v51 = v22;
        v73 = &v51;
        v23 = 0x7FFFFFFF;
        v74 = 4LL;
        if ( v19 == 1 )
          v24 = *(_DWORD *)(v2 + 176);
        else
          v24 = 0x7FFFFFFF;
        v52 = v24;
        v25 = (const CHAR *)(v2 + 176);
        v76 = 4LL;
        v75 = &v52;
        if ( v19 == 1 )
          v23 = *(_DWORD *)(v2 + 180);
        LODWORD(v53) = v23;
        v77 = &v53;
        v78 = 4LL;
        if ( v19 == 1 )
          v26 = *(_WORD *)(v2 + 184);
        else
          v26 = 0;
        v43[0] = v26;
        v80 = 2LL;
        if ( v19 != 2 )
          v25 = 0LL;
        v79 = (char *)v43;
        v27 = -1LL;
        if ( v25 )
        {
          v28 = -1LL;
          do
            ++v28;
          while ( v25[v28] );
          v29 = v28 + 1;
        }
        else
        {
          v25 = File;
          v29 = 1;
        }
        v81 = v25;
        v30 = (const CHAR *)(v2 + 181);
        LODWORD(v82) = v29;
        if ( v19 != 2 )
          v30 = 0LL;
        HIDWORD(v82) = 0;
        if ( v30 )
        {
          v31 = -1LL;
          do
            ++v31;
          while ( v30[v31] );
          v32 = v31 + 1;
        }
        else
        {
          v30 = File;
          v32 = 1;
        }
        LODWORD(v84) = v32;
        v12 = (const CHAR *)(v2 + 186);
        v83 = (__int64 *)v30;
        if ( v19 != 2 )
          v12 = 0LL;
        HIDWORD(v84) = 0;
        if ( v12 )
        {
          do
            ++v27;
          while ( v12[v27] );
          v11 = (unsigned int)(v27 + 1);
        }
        else
        {
          v12 = File;
          v11 = 1LL;
        }
        v85 = v12;
        v88 = &v38;
        v15 = (unsigned __int8 *)&unk_140068090;
        v16 = 25;
        v42[0] = *(_WORD *)(v2 + 2480);
        v90 = v42;
        v41[0] = *(_WORD *)(v2 + 2482);
        v92 = v41;
        v40[0] = *(_WORD *)(v2 + 2484);
        v94 = v40;
        LOWORD(v44) = *((_WORD *)a1 + 100);
        v96 = &v44;
        LODWORD(v47) = *((_DWORD *)a1 + 52);
        v98 = &v47;
        v33 = *((_BYTE *)a1 + 204) & 1;
        v86 = v11;
        v37 = v33;
        v100 = &v37;
        v34 = (*((_DWORD *)a1 + 51) & 0x1000) != 0;
        v87 = 0;
        v36 = v34;
        v102 = &v36;
        v104 = &v55;
        v38 = v14;
        v89 = 1LL;
        v91 = 2LL;
        v93 = 2LL;
        v95 = 2LL;
        v97 = 2LL;
        v99 = 4LL;
        v101 = 1LL;
        v103 = 1LL;
        v55 = 16779264LL;
        v105 = 8LL;
        goto LABEL_58;
      }
    }
  }
  else if ( (unsigned int)dword_14006C1F8 > 5 )
  {
    if ( (qword_14006C208 & 0x400000000000LL) == 0
      || (LOBYTE(v13) = 1, (qword_14006C210 & 0x400000000000LL) != qword_14006C210) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 )
    {
      v47 = 1LL;
      v59 = &v47;
      v15 = (unsigned __int8 *)&unk_140067FA5;
      v60 = 8LL;
      v61 = &v44;
      v16 = 15;
      v44 = a2;
      v63 = &v36;
      v65 = &v45;
      v67 = (int *)&v37;
      v40[0] = *(_WORD *)(v2 + 2480);
      v69 = (int *)v40;
      v41[0] = *(_WORD *)(v2 + 2482);
      v71 = (int *)v41;
      v42[0] = *(_WORD *)(v2 + 2484);
      v73 = (int *)v42;
      v43[0] = *((_WORD *)a1 + 100);
      v75 = (int *)v43;
      v46 = *((_DWORD *)a1 + 52);
      v77 = (__int64 *)&v46;
      v17 = *((_BYTE *)a1 + 204) & 1;
      v62 = 4LL;
      v38 = v17;
      v79 = &v38;
      v18 = (*((_DWORD *)a1 + 51) & 0x1000) != 0;
      v36 = v7;
      v39 = v18;
      v81 = &v39;
      v83 = &v53;
      v64 = 1LL;
      v45 = v8;
      v66 = 4LL;
      v37 = v14;
      v68 = 1LL;
      v70 = 2LL;
      v72 = 2LL;
      v74 = 2LL;
      v76 = 2LL;
      v78 = 4LL;
      v80 = 1LL;
      v82 = 1LL;
      v53 = 16779264LL;
      v84 = 8LL;
LABEL_58:
      LOBYTE(v13) = tlgWriteAgg(v11, v15, (__int64)v12, v16, &v58);
    }
  }
  return (char)v13;
}
