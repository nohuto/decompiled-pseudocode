/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x14005C988
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140063ED4 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1400A1380 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A13B0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x140007878 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400401E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     GetImageTuple @ 0x1400A112C (GetImageTuple.c)
 *     TakeTelemetryAssertsLock @ 0x1400A13E0 (TakeTelemetryAssertsLock.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        int a2,
        const CHAR *a3,
        int a4,
        int a5,
        __int64 a6)
{
  __int64 *v8; // rax
  __int64 *v9; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v11; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  int ImageTuple; // eax
  __int64 v18; // r10
  __int64 v19; // r12
  int v20; // r14d
  unsigned int v21; // ebx
  struct _FAST_MUTEX *v22; // rcx
  const CHAR *v23; // rdi
  const CHAR *v24; // r9
  const CHAR *v25; // rdx
  KIRQL CurrentIrql; // al
  int v27; // r8d
  const CHAR *v28; // rax
  const CHAR *v29; // r9
  const CHAR *v30; // rdx
  KIRQL v31; // al
  const CHAR *v32; // rax
  int v33; // r15d
  const GUID *v34; // r9
  const GUID *v35; // r9
  ULONG v36; // r10d
  __int64 *v37; // rax
  unsigned int v38; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v39; // [rsp+54h] [rbp-ACh] BYREF
  int v40; // [rsp+58h] [rbp-A8h]
  int v41; // [rsp+5Ch] [rbp-A4h]
  int v42; // [rsp+60h] [rbp-A0h]
  int v43; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v44; // [rsp+68h] [rbp-98h] BYREF
  int v45; // [rsp+6Ch] [rbp-94h] BYREF
  int v46; // [rsp+70h] [rbp-90h] BYREF
  int v47; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v48; // [rsp+78h] [rbp-88h] BYREF
  int v49; // [rsp+7Ch] [rbp-84h] BYREF
  int v50; // [rsp+80h] [rbp-80h] BYREF
  int v51; // [rsp+84h] [rbp-7Ch] BYREF
  int v52; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v53; // [rsp+8Ch] [rbp-74h] BYREF
  int v54; // [rsp+90h] [rbp-70h] BYREF
  int v55; // [rsp+94h] [rbp-6Ch] BYREF
  int v56; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v57; // [rsp+9Ch] [rbp-64h] BYREF
  int v58; // [rsp+A0h] [rbp-60h] BYREF
  int v59; // [rsp+A4h] [rbp-5Ch]
  int v60; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v61; // [rsp+ACh] [rbp-54h] BYREF
  int v62; // [rsp+B0h] [rbp-50h] BYREF
  int v63; // [rsp+B4h] [rbp-4Ch] BYREF
  int v64; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v65; // [rsp+BCh] [rbp-44h] BYREF
  int v66; // [rsp+C0h] [rbp-40h] BYREF
  int v67; // [rsp+C4h] [rbp-3Ch] BYREF
  int v68; // [rsp+C8h] [rbp-38h] BYREF
  int v69; // [rsp+CCh] [rbp-34h] BYREF
  unsigned int v70; // [rsp+D0h] [rbp-30h] BYREF
  int v71; // [rsp+D4h] [rbp-2Ch] BYREF
  int v72; // [rsp+D8h] [rbp-28h] BYREF
  int v73; // [rsp+DCh] [rbp-24h] BYREF
  unsigned int v74; // [rsp+E0h] [rbp-20h] BYREF
  int v75; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v76; // [rsp+E8h] [rbp-18h]
  const CHAR *v77; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+100h] [rbp+0h] BYREF
  int *v79; // [rsp+120h] [rbp+20h]
  __int64 v80; // [rsp+128h] [rbp+28h]
  int *v81; // [rsp+130h] [rbp+30h]
  __int64 v82; // [rsp+138h] [rbp+38h]
  int *v83; // [rsp+140h] [rbp+40h]
  __int64 v84; // [rsp+148h] [rbp+48h]
  int *v85; // [rsp+150h] [rbp+50h]
  __int64 v86; // [rsp+158h] [rbp+58h]
  char v87[16]; // [rsp+160h] [rbp+60h] BYREF
  int *v88; // [rsp+170h] [rbp+70h]
  __int64 v89; // [rsp+178h] [rbp+78h]
  int *v90; // [rsp+180h] [rbp+80h]
  __int64 v91; // [rsp+188h] [rbp+88h]
  int *v92; // [rsp+190h] [rbp+90h]
  __int64 v93; // [rsp+198h] [rbp+98h]
  char v94[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v95; // [rsp+1B0h] [rbp+B0h]
  __int64 v96; // [rsp+1B8h] [rbp+B8h]
  int *v97; // [rsp+1C0h] [rbp+C0h]
  __int64 v98; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v100; // [rsp+1F0h] [rbp+F0h]
  __int64 v101; // [rsp+1F8h] [rbp+F8h]
  int *v102; // [rsp+200h] [rbp+100h]
  __int64 v103; // [rsp+208h] [rbp+108h]
  int *v104; // [rsp+210h] [rbp+110h]
  __int64 v105; // [rsp+218h] [rbp+118h]
  int *v106; // [rsp+220h] [rbp+120h]
  __int64 v107; // [rsp+228h] [rbp+128h]
  char v108[16]; // [rsp+230h] [rbp+130h] BYREF
  int *v109; // [rsp+240h] [rbp+140h]
  __int64 v110; // [rsp+248h] [rbp+148h]
  int *v111; // [rsp+250h] [rbp+150h]
  __int64 v112; // [rsp+258h] [rbp+158h]
  int *v113; // [rsp+260h] [rbp+160h]
  __int64 v114; // [rsp+268h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+270h] [rbp+170h] BYREF
  int *v116; // [rsp+290h] [rbp+190h]
  __int64 v117; // [rsp+298h] [rbp+198h]
  int *v118; // [rsp+2A0h] [rbp+1A0h]
  __int64 v119; // [rsp+2A8h] [rbp+1A8h]
  int *v120; // [rsp+2B0h] [rbp+1B0h]
  __int64 v121; // [rsp+2B8h] [rbp+1B8h]
  int *v122; // [rsp+2C0h] [rbp+1C0h]
  __int64 v123; // [rsp+2C8h] [rbp+1C8h]
  char v124[16]; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v125; // [rsp+2E0h] [rbp+1E0h]
  __int64 v126; // [rsp+2E8h] [rbp+1E8h]
  int *v127; // [rsp+2F0h] [rbp+1F0h]
  __int64 v128; // [rsp+2F8h] [rbp+1F8h]
  int *v129; // [rsp+300h] [rbp+200h]
  int v130; // [rsp+308h] [rbp+208h]
  int v131; // [rsp+30Ch] [rbp+20Ch]
  char v132[16]; // [rsp+310h] [rbp+210h] BYREF
  int *v133; // [rsp+320h] [rbp+220h]
  int v134; // [rsp+328h] [rbp+228h]
  int v135; // [rsp+32Ch] [rbp+22Ch]
  int *v136; // [rsp+330h] [rbp+230h]
  int v137; // [rsp+338h] [rbp+238h]
  int v138; // [rsp+33Ch] [rbp+23Ch]
  char v139[16]; // [rsp+340h] [rbp+240h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v140; // [rsp+350h] [rbp+250h] BYREF
  int *v141; // [rsp+370h] [rbp+270h]
  __int64 v142; // [rsp+378h] [rbp+278h]
  int *v143; // [rsp+380h] [rbp+280h]
  __int64 v144; // [rsp+388h] [rbp+288h]
  int *v145; // [rsp+390h] [rbp+290h]
  __int64 v146; // [rsp+398h] [rbp+298h]
  int *v147; // [rsp+3A0h] [rbp+2A0h]
  __int64 v148; // [rsp+3A8h] [rbp+2A8h]
  char v149[16]; // [rsp+3B0h] [rbp+2B0h] BYREF
  int *v150; // [rsp+3C0h] [rbp+2C0h]
  __int64 v151; // [rsp+3C8h] [rbp+2C8h]
  int *v152; // [rsp+3D0h] [rbp+2D0h]
  __int64 v153; // [rsp+3D8h] [rbp+2D8h]
  int *v154; // [rsp+3E0h] [rbp+2E0h]
  int v155; // [rsp+3E8h] [rbp+2E8h]
  int v156; // [rsp+3ECh] [rbp+2ECh]
  char v157[16]; // [rsp+3F0h] [rbp+2F0h] BYREF

  v76 = a6;
  v42 = a4;
  v41 = a2;
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) && !(unsigned int)TakeTelemetryAssertsLock() )
  {
    v8 = &g_MicrosoftTelemetryAssertsTriggeredList;
    while ( 1 )
    {
      v8 = (__int64 *)*v8;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v8 )
        break;
      v9 = v8 - 4;
      if ( *(v8 - 4) == a1 )
        goto LABEL_11;
    }
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v9 = (__int64 *)Pool2;
    if ( !Pool2 )
      goto LABEL_55;
    v11 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    *((_DWORD *)v9 + 4) = 0;
    *((_DWORD *)v9 + 5) = 0;
    *((_DWORD *)v9 + 6) = 0;
    v9[1] = ((__int64)((unsigned __int128)(v11 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v11 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v13 = v9 + 4;
    v14 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v13 = g_MicrosoftTelemetryAssertsTriggeredList;
    v9[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v14 + 8) = v13;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v9 + 4);
LABEL_11:
    ++*((_DWORD *)v9 + 4);
    ++*((_DWORD *)v9 + 5);
    v15 = MEMORY[0xFFFFF78000000320];
    v39 = 0;
    v38 = 0;
    v16 = v15 * KeQueryTimeIncrement();
    if ( (unsigned __int64)(v16 / 10000 - v9[1]) <= 0xEA60 )
    {
LABEL_55:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    ImageTuple = GetImageTuple(v16, &v39, &v38);
    v19 = v38;
    v20 = ImageTuple;
    if ( ImageTuple
      && a1 >= 0x140000000LL
      && 0x140000000LL + (unsigned __int64)v38 > 0x140000000LL
      && a1 <= 0x140000000LL + (unsigned __int64)v38 )
    {
      v21 = a1 - 0x40000000;
    }
    else
    {
      v21 = 0;
    }
    v22 = g_AssertFastMutex;
    v40 = *((_DWORD *)v9 + 4);
    v38 = *((_DWORD *)v9 + 5);
    v59 = *((_DWORD *)v9 + 6);
    v9[1] = v18;
    ExReleaseFastMutex(v22);
    v23 = "<unknown>";
    if ( !a3 )
      a3 = (const CHAR *)g_ModuleName;
    v77 = a3;
    if ( v41 )
    {
      if ( (unsigned int)dword_140182040 > 5 && tlgKeywordOn((__int64)&dword_140182040, 0x400000000000LL) )
      {
        v43 = 10;
        v116 = &v43;
        v25 = "<unknown>";
        v117 = 4LL;
        v118 = (int *)&v44;
        v44 = v21;
        v119 = 4LL;
        v120 = &v45;
        v45 = v20 != 0 ? v39 : 0;
        v121 = 4LL;
        v122 = &v46;
        v123 = 4LL;
        v46 = v20 != 0 ? v19 : 0;
        if ( v24 )
          v25 = v24;
        tlgCreate1Sz_char((__int64)v124, v25);
        v125 = &v47;
        v48 = v38;
        v127 = (int *)&v48;
        v47 = v40;
        v126 = 4LL;
        v128 = 4LL;
        CurrentIrql = KeGetCurrentIrql();
        v131 = 0;
        v49 = CurrentIrql;
        v130 = 4;
        v129 = &v49;
        tlgCreate1Sz_char((__int64)v132, a3);
        v135 = 0;
        v138 = 0;
        v133 = &v50;
        v51 = a5;
        v136 = &v51;
        v28 = (const CHAR *)v76;
        v50 = v42;
        v134 = v27;
        if ( !v76 )
          v28 = "<unknown>";
        v137 = v27;
        tlgCreate1Sz_char((__int64)v139, v28);
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140182040, byte_1401411FE, 0LL, 0LL, 0xEu, &v115);
      }
    }
    else if ( (unsigned int)dword_140182040 > 5 && tlgKeywordOn((__int64)&dword_140182040, 0x400000000000LL) )
    {
      v52 = 10;
      v141 = &v52;
      v30 = "<unknown>";
      v142 = 4LL;
      v143 = (int *)&v53;
      v53 = v21;
      v144 = 4LL;
      v145 = &v54;
      v54 = v20 != 0 ? v39 : 0;
      v146 = 4LL;
      v147 = &v55;
      v148 = 4LL;
      v55 = v20 != 0 ? v19 : 0;
      if ( v29 )
        v30 = v29;
      tlgCreate1Sz_char((__int64)v149, v30);
      v150 = &v56;
      v57 = v38;
      v152 = (int *)&v57;
      v56 = v40;
      v151 = 4LL;
      v153 = 4LL;
      v31 = KeGetCurrentIrql();
      v156 = 0;
      v58 = v31;
      v154 = &v58;
      v32 = (const CHAR *)v76;
      v155 = 4;
      if ( !v76 )
        v32 = "<unknown>";
      tlgCreate1Sz_char((__int64)v157, v32);
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140182040, byte_1401412A8, 0LL, 0LL, 0xBu, &v140);
    }
    if ( dword_140182078 && !v59 && !KeGetCurrentIrql() )
    {
      v33 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v21, g_ModuleName, v39, v19, 0LL, 0LL, 0);
      if ( v41 )
      {
        if ( (unsigned int)dword_140182040 > 5 && tlgKeywordOn((__int64)&dword_140182040, 0x400000000000LL) )
        {
          v60 = 10;
          v79 = &v60;
          v81 = (int *)&v61;
          v80 = 4LL;
          v61 = v21;
          v83 = &v62;
          v62 = v20 != 0 ? v39 : 0;
          v82 = 4LL;
          v84 = 4LL;
          v86 = 4LL;
          v63 = v20 != 0 ? v19 : 0;
          v85 = &v63;
          if ( g_ModuleName )
            v23 = (const CHAR *)g_ModuleName;
          tlgCreate1Sz_char((__int64)v87, v23);
          v64 = v40;
          v88 = &v64;
          v65 = v38;
          v90 = (int *)&v65;
          v92 = &v66;
          v89 = 4LL;
          v91 = 4LL;
          v66 = v33;
          v93 = 4LL;
          tlgCreate1Sz_char((__int64)v94, v77);
          v67 = v42;
          v95 = &v67;
          v68 = a5;
          v97 = &v68;
          v96 = 4LL;
          v98 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140182040, byte_140141315, 0LL, v34, 0xDu, &v78);
        }
      }
      else if ( (unsigned int)dword_140182040 > 5 && tlgKeywordOn((__int64)&dword_140182040, 0x400000000000LL) )
      {
        v101 = 4LL;
        v100 = &v69;
        v69 = 10;
        v102 = (int *)&v70;
        v70 = v21;
        v103 = 4LL;
        v104 = &v71;
        v71 = v20 != 0 ? v39 : 0;
        v105 = 4LL;
        v107 = 4LL;
        v72 = v20 != 0 ? v19 : 0;
        v106 = &v72;
        if ( g_ModuleName )
          v23 = (const CHAR *)g_ModuleName;
        tlgCreate1Sz_char((__int64)v108, v23);
        v73 = v40;
        v109 = &v73;
        v74 = v38;
        v111 = (int *)&v74;
        v113 = &v75;
        v110 = 4LL;
        v112 = 4LL;
        v75 = v33;
        v114 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140182040, byte_1401413BB, 0LL, v35, v36, &v99);
      }
      if ( !v33 && !(unsigned int)TakeTelemetryAssertsLock() )
      {
        v37 = &g_MicrosoftTelemetryAssertsTriggeredList;
        while ( 1 )
        {
          v37 = (__int64 *)*v37;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v37 )
            goto LABEL_55;
          if ( *(v37 - 4) == a1 )
          {
            ++*((_DWORD *)v37 - 2);
            goto LABEL_55;
          }
        }
      }
    }
  }
}
