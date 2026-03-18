/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x14005CF28
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1400635E4 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14009F020 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x14009F050 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x1400077CC (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400407F4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     GetImageTuple @ 0x14009EDCC (GetImageTuple.c)
 *     TakeTelemetryAssertsLock @ 0x14009F080 (TakeTelemetryAssertsLock.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        int a2,
        const CHAR *a3,
        int a4,
        int a5,
        __int64 a6)
{
  __int64 v8; // r9
  __int64 *v9; // rax
  __int64 *v10; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  int ImageTuple; // eax
  __int64 v19; // r10
  __int64 v20; // r12
  int v21; // r14d
  unsigned int v22; // ebx
  struct _FAST_MUTEX *v23; // rcx
  const CHAR *v24; // rdi
  const CHAR *v25; // r9
  const CHAR *v26; // rdx
  KIRQL CurrentIrql; // al
  int v28; // r8d
  const CHAR *v29; // rax
  const CHAR *v30; // r9
  const CHAR *v31; // rdx
  KIRQL v32; // al
  const CHAR *v33; // rax
  int v34; // r15d
  const GUID *v35; // r9
  const GUID *v36; // r9
  ULONG v37; // r10d
  __int64 *v38; // rax
  unsigned int v39; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+5Ch] [rbp-A4h]
  int v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v45; // [rsp+68h] [rbp-98h] BYREF
  int v46; // [rsp+6Ch] [rbp-94h] BYREF
  int v47; // [rsp+70h] [rbp-90h] BYREF
  int v48; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v49; // [rsp+78h] [rbp-88h] BYREF
  int v50; // [rsp+7Ch] [rbp-84h] BYREF
  int v51; // [rsp+80h] [rbp-80h] BYREF
  int v52; // [rsp+84h] [rbp-7Ch] BYREF
  int v53; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v54; // [rsp+8Ch] [rbp-74h] BYREF
  int v55; // [rsp+90h] [rbp-70h] BYREF
  int v56; // [rsp+94h] [rbp-6Ch] BYREF
  int v57; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v58; // [rsp+9Ch] [rbp-64h] BYREF
  int v59; // [rsp+A0h] [rbp-60h] BYREF
  int v60; // [rsp+A4h] [rbp-5Ch]
  int v61; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v62; // [rsp+ACh] [rbp-54h] BYREF
  int v63; // [rsp+B0h] [rbp-50h] BYREF
  int v64; // [rsp+B4h] [rbp-4Ch] BYREF
  int v65; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v66; // [rsp+BCh] [rbp-44h] BYREF
  int v67; // [rsp+C0h] [rbp-40h] BYREF
  int v68; // [rsp+C4h] [rbp-3Ch] BYREF
  int v69; // [rsp+C8h] [rbp-38h] BYREF
  int v70; // [rsp+CCh] [rbp-34h] BYREF
  unsigned int v71; // [rsp+D0h] [rbp-30h] BYREF
  int v72; // [rsp+D4h] [rbp-2Ch] BYREF
  int v73; // [rsp+D8h] [rbp-28h] BYREF
  int v74; // [rsp+DCh] [rbp-24h] BYREF
  unsigned int v75; // [rsp+E0h] [rbp-20h] BYREF
  int v76; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v77; // [rsp+E8h] [rbp-18h]
  const CHAR *v78; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+100h] [rbp+0h] BYREF
  int *v80; // [rsp+120h] [rbp+20h]
  __int64 v81; // [rsp+128h] [rbp+28h]
  int *v82; // [rsp+130h] [rbp+30h]
  __int64 v83; // [rsp+138h] [rbp+38h]
  int *v84; // [rsp+140h] [rbp+40h]
  __int64 v85; // [rsp+148h] [rbp+48h]
  int *v86; // [rsp+150h] [rbp+50h]
  __int64 v87; // [rsp+158h] [rbp+58h]
  char v88[16]; // [rsp+160h] [rbp+60h] BYREF
  int *v89; // [rsp+170h] [rbp+70h]
  __int64 v90; // [rsp+178h] [rbp+78h]
  int *v91; // [rsp+180h] [rbp+80h]
  __int64 v92; // [rsp+188h] [rbp+88h]
  int *v93; // [rsp+190h] [rbp+90h]
  __int64 v94; // [rsp+198h] [rbp+98h]
  char v95[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v96; // [rsp+1B0h] [rbp+B0h]
  __int64 v97; // [rsp+1B8h] [rbp+B8h]
  int *v98; // [rsp+1C0h] [rbp+C0h]
  __int64 v99; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v101; // [rsp+1F0h] [rbp+F0h]
  __int64 v102; // [rsp+1F8h] [rbp+F8h]
  int *v103; // [rsp+200h] [rbp+100h]
  __int64 v104; // [rsp+208h] [rbp+108h]
  int *v105; // [rsp+210h] [rbp+110h]
  __int64 v106; // [rsp+218h] [rbp+118h]
  int *v107; // [rsp+220h] [rbp+120h]
  __int64 v108; // [rsp+228h] [rbp+128h]
  char v109[16]; // [rsp+230h] [rbp+130h] BYREF
  int *v110; // [rsp+240h] [rbp+140h]
  __int64 v111; // [rsp+248h] [rbp+148h]
  int *v112; // [rsp+250h] [rbp+150h]
  __int64 v113; // [rsp+258h] [rbp+158h]
  int *v114; // [rsp+260h] [rbp+160h]
  __int64 v115; // [rsp+268h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+270h] [rbp+170h] BYREF
  int *v117; // [rsp+290h] [rbp+190h]
  __int64 v118; // [rsp+298h] [rbp+198h]
  int *v119; // [rsp+2A0h] [rbp+1A0h]
  __int64 v120; // [rsp+2A8h] [rbp+1A8h]
  int *v121; // [rsp+2B0h] [rbp+1B0h]
  __int64 v122; // [rsp+2B8h] [rbp+1B8h]
  int *v123; // [rsp+2C0h] [rbp+1C0h]
  __int64 v124; // [rsp+2C8h] [rbp+1C8h]
  char v125[16]; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v126; // [rsp+2E0h] [rbp+1E0h]
  __int64 v127; // [rsp+2E8h] [rbp+1E8h]
  int *v128; // [rsp+2F0h] [rbp+1F0h]
  __int64 v129; // [rsp+2F8h] [rbp+1F8h]
  int *v130; // [rsp+300h] [rbp+200h]
  int v131; // [rsp+308h] [rbp+208h]
  int v132; // [rsp+30Ch] [rbp+20Ch]
  char v133[16]; // [rsp+310h] [rbp+210h] BYREF
  int *v134; // [rsp+320h] [rbp+220h]
  int v135; // [rsp+328h] [rbp+228h]
  int v136; // [rsp+32Ch] [rbp+22Ch]
  int *v137; // [rsp+330h] [rbp+230h]
  int v138; // [rsp+338h] [rbp+238h]
  int v139; // [rsp+33Ch] [rbp+23Ch]
  char v140[16]; // [rsp+340h] [rbp+240h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v141; // [rsp+350h] [rbp+250h] BYREF
  int *v142; // [rsp+370h] [rbp+270h]
  __int64 v143; // [rsp+378h] [rbp+278h]
  int *v144; // [rsp+380h] [rbp+280h]
  __int64 v145; // [rsp+388h] [rbp+288h]
  int *v146; // [rsp+390h] [rbp+290h]
  __int64 v147; // [rsp+398h] [rbp+298h]
  int *v148; // [rsp+3A0h] [rbp+2A0h]
  __int64 v149; // [rsp+3A8h] [rbp+2A8h]
  char v150[16]; // [rsp+3B0h] [rbp+2B0h] BYREF
  int *v151; // [rsp+3C0h] [rbp+2C0h]
  __int64 v152; // [rsp+3C8h] [rbp+2C8h]
  int *v153; // [rsp+3D0h] [rbp+2D0h]
  __int64 v154; // [rsp+3D8h] [rbp+2D8h]
  int *v155; // [rsp+3E0h] [rbp+2E0h]
  int v156; // [rsp+3E8h] [rbp+2E8h]
  int v157; // [rsp+3ECh] [rbp+2ECh]
  char v158[16]; // [rsp+3F0h] [rbp+2F0h] BYREF

  v77 = a6;
  v43 = a4;
  v42 = a2;
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) && !(unsigned int)TakeTelemetryAssertsLock() )
  {
    v9 = &g_MicrosoftTelemetryAssertsTriggeredList;
    while ( 1 )
    {
      v9 = (__int64 *)*v9;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v9 )
        break;
      v10 = v9 - 4;
      if ( *(v9 - 4) == a1 )
        goto LABEL_11;
    }
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL, v8);
    v10 = (__int64 *)Pool2;
    if ( !Pool2 )
      goto LABEL_55;
    v12 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    *((_DWORD *)v10 + 4) = 0;
    *((_DWORD *)v10 + 5) = 0;
    *((_DWORD *)v10 + 6) = 0;
    v10[1] = ((__int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
           + ((unsigned __int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
           - 60001;
    v14 = v10 + 4;
    v15 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v14 = g_MicrosoftTelemetryAssertsTriggeredList;
    v10[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v15 + 8) = v14;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v10 + 4);
LABEL_11:
    ++*((_DWORD *)v10 + 4);
    ++*((_DWORD *)v10 + 5);
    v16 = MEMORY[0xFFFFF78000000320];
    v40 = 0;
    v39 = 0;
    v17 = v16 * KeQueryTimeIncrement();
    if ( (unsigned __int64)(v17 / 10000 - v10[1]) <= 0xEA60 )
    {
LABEL_55:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    ImageTuple = GetImageTuple(v17, &v40, &v39);
    v20 = v39;
    v21 = ImageTuple;
    if ( ImageTuple
      && a1 >= 0x140000000LL
      && 0x140000000LL + (unsigned __int64)v39 > 0x140000000LL
      && a1 <= 0x140000000LL + (unsigned __int64)v39 )
    {
      v22 = a1 - 0x40000000;
    }
    else
    {
      v22 = 0;
    }
    v23 = g_AssertFastMutex;
    v41 = *((_DWORD *)v10 + 4);
    v39 = *((_DWORD *)v10 + 5);
    v60 = *((_DWORD *)v10 + 6);
    v10[1] = v19;
    ExReleaseFastMutex(v23);
    v24 = "<unknown>";
    if ( !a3 )
      a3 = (const CHAR *)g_ModuleName;
    v78 = a3;
    if ( v42 )
    {
      if ( (unsigned int)dword_14017F040 > 5 && tlgKeywordOn((__int64)&dword_14017F040, 0x400000000000LL) )
      {
        v44 = 10;
        v117 = &v44;
        v26 = "<unknown>";
        v118 = 4LL;
        v119 = (int *)&v45;
        v45 = v22;
        v120 = 4LL;
        v121 = &v46;
        v46 = v21 != 0 ? v40 : 0;
        v122 = 4LL;
        v123 = &v47;
        v124 = 4LL;
        v47 = v21 != 0 ? v20 : 0;
        if ( v25 )
          v26 = v25;
        tlgCreate1Sz_char((__int64)v125, v26);
        v126 = &v48;
        v49 = v39;
        v128 = (int *)&v49;
        v48 = v41;
        v127 = 4LL;
        v129 = 4LL;
        CurrentIrql = KeGetCurrentIrql();
        v132 = 0;
        v50 = CurrentIrql;
        v131 = 4;
        v130 = &v50;
        tlgCreate1Sz_char((__int64)v133, a3);
        v136 = 0;
        v139 = 0;
        v134 = &v51;
        v52 = a5;
        v137 = &v52;
        v29 = (const CHAR *)v77;
        v51 = v43;
        v135 = v28;
        if ( !v77 )
          v29 = "<unknown>";
        v138 = v28;
        tlgCreate1Sz_char((__int64)v140, v29);
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14017F040, byte_14013E595, 0LL, 0LL, 0xEu, &v116);
      }
    }
    else if ( (unsigned int)dword_14017F040 > 5 && tlgKeywordOn((__int64)&dword_14017F040, 0x400000000000LL) )
    {
      v53 = 10;
      v142 = &v53;
      v31 = "<unknown>";
      v143 = 4LL;
      v144 = (int *)&v54;
      v54 = v22;
      v145 = 4LL;
      v146 = &v55;
      v55 = v21 != 0 ? v40 : 0;
      v147 = 4LL;
      v148 = &v56;
      v149 = 4LL;
      v56 = v21 != 0 ? v20 : 0;
      if ( v30 )
        v31 = v30;
      tlgCreate1Sz_char((__int64)v150, v31);
      v151 = &v57;
      v58 = v39;
      v153 = (int *)&v58;
      v57 = v41;
      v152 = 4LL;
      v154 = 4LL;
      v32 = KeGetCurrentIrql();
      v157 = 0;
      v59 = v32;
      v155 = &v59;
      v33 = (const CHAR *)v77;
      v156 = 4;
      if ( !v77 )
        v33 = "<unknown>";
      tlgCreate1Sz_char((__int64)v158, v33);
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14017F040, byte_14013E63F, 0LL, 0LL, 0xBu, &v141);
    }
    if ( dword_14017F078 && !v60 && !KeGetCurrentIrql() )
    {
      v34 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v22, g_ModuleName, v40, v20, 0LL, 0LL, 0);
      if ( v42 )
      {
        if ( (unsigned int)dword_14017F040 > 5 && tlgKeywordOn((__int64)&dword_14017F040, 0x400000000000LL) )
        {
          v61 = 10;
          v80 = &v61;
          v82 = (int *)&v62;
          v81 = 4LL;
          v62 = v22;
          v84 = &v63;
          v63 = v21 != 0 ? v40 : 0;
          v83 = 4LL;
          v85 = 4LL;
          v87 = 4LL;
          v64 = v21 != 0 ? v20 : 0;
          v86 = &v64;
          if ( g_ModuleName )
            v24 = (const CHAR *)g_ModuleName;
          tlgCreate1Sz_char((__int64)v88, v24);
          v65 = v41;
          v89 = &v65;
          v66 = v39;
          v91 = (int *)&v66;
          v93 = &v67;
          v90 = 4LL;
          v92 = 4LL;
          v67 = v34;
          v94 = 4LL;
          tlgCreate1Sz_char((__int64)v95, v78);
          v68 = v43;
          v96 = &v68;
          v69 = a5;
          v98 = &v69;
          v97 = 4LL;
          v99 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14017F040, byte_14013E6AC, 0LL, v35, 0xDu, &v79);
        }
      }
      else if ( (unsigned int)dword_14017F040 > 5 && tlgKeywordOn((__int64)&dword_14017F040, 0x400000000000LL) )
      {
        v102 = 4LL;
        v101 = &v70;
        v70 = 10;
        v103 = (int *)&v71;
        v71 = v22;
        v104 = 4LL;
        v105 = &v72;
        v72 = v21 != 0 ? v40 : 0;
        v106 = 4LL;
        v108 = 4LL;
        v73 = v21 != 0 ? v20 : 0;
        v107 = &v73;
        if ( g_ModuleName )
          v24 = (const CHAR *)g_ModuleName;
        tlgCreate1Sz_char((__int64)v109, v24);
        v74 = v41;
        v110 = &v74;
        v75 = v39;
        v112 = (int *)&v75;
        v114 = &v76;
        v111 = 4LL;
        v113 = 4LL;
        v76 = v34;
        v115 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14017F040, byte_14013E752, 0LL, v36, v37, &v100);
      }
      if ( !v34 && !(unsigned int)TakeTelemetryAssertsLock() )
      {
        v38 = &g_MicrosoftTelemetryAssertsTriggeredList;
        while ( 1 )
        {
          v38 = (__int64 *)*v38;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v38 )
            goto LABEL_55;
          if ( *(v38 - 4) == a1 )
          {
            ++*((_DWORD *)v38 - 2);
            goto LABEL_55;
          }
        }
      }
    }
  }
}
