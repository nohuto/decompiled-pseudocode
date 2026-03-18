/*
 * XREFs of ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x14020A840
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x140226CB0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14012C7E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddddddS @ 0x1401D8528 (WPP_RECORDER_AND_TRACE_SF_ddddddddddS.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddddddd @ 0x140209ADC (WPP_RECORDER_AND_TRACE_SF_qdddddddddddd.c)
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x14020B418 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140211468 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x1402175E8 (-UpdateCurrent@CTopologyManager@@SA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddd @ 0x1402AD83C (WPP_RECORDER_AND_TRACE_SF_qdddddddd.c)
 *     ?DwmNotifyWorkAreaChanged@@YAXXZ @ 0x1402ADFDC (-DwmNotifyWorkAreaChanged@@YAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

char __fastcall xxxGetWorkAreasFromShell(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _DWORD **v3; // rcx
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // di
  bool v8; // bl
  bool v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rax
  struct _SYNC_DISPLAY_CHANGE_DATA *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rdx
  bool v20; // r14
  bool v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  bool v26; // al
  int v27; // ebx
  int v28; // edi
  int v29; // esi
  int v30; // r14d
  int v31; // r15d
  int v32; // r12d
  int v33; // r13d
  __int64 v34; // rax
  bool v35; // si
  bool v36; // r14
  int **v37; // rcx
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rdx
  bool v44; // bl
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  bool v49; // bl
  bool v50; // si
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  char v54; // r15
  __int64 v55; // rax
  _BYTE *v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rsi
  bool v60; // si
  bool v61; // r14
  int v62; // ebx
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  __int64 v66; // r8
  _BYTE *v67; // rdx
  int v68; // r12d
  int v69; // r15d
  bool v70; // si
  bool v71; // r14
  int v72; // ebx
  __int64 v73; // rax
  int v74; // r8d
  int v75; // edx
  __int64 v76; // rcx
  __int64 v77; // rcx
  bool v78; // al
  __int64 v79; // rax
  int *v80; // rdx
  int *v81; // r8
  __int64 v82; // r8
  char *v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  bool v86; // bl
  bool v87; // si
  __int64 v88; // rax
  int v89; // edx
  int v90; // r8d
  struct _UNICODE_STRING v91; // xmm0
  __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // rcx
  bool v95; // al
  int v96; // ebx
  int v97; // edi
  int v98; // esi
  int v99; // r14d
  int v100; // r15d
  int v101; // r12d
  int v102; // r13d
  __int64 v103; // rax
  int v104; // r8d
  int v105; // edx
  __int64 v106; // [rsp+28h] [rbp-110h]
  char v107; // [rsp+28h] [rbp-110h]
  int v108; // [rsp+30h] [rbp-108h]
  int v109; // [rsp+38h] [rbp-100h]
  __int16 v110; // [rsp+38h] [rbp-100h]
  int v111; // [rsp+40h] [rbp-F8h]
  char v112; // [rsp+B8h] [rbp-80h]
  char v113; // [rsp+B8h] [rbp-80h]
  bool v114; // [rsp+B8h] [rbp-80h]
  char v115; // [rsp+B9h] [rbp-7Fh]
  char v116; // [rsp+B9h] [rbp-7Fh]
  char v117; // [rsp+BAh] [rbp-7Eh]
  bool v118; // [rsp+BAh] [rbp-7Eh]
  unsigned int v119; // [rsp+BCh] [rbp-7Ch]
  int v120; // [rsp+BCh] [rbp-7Ch]
  int v121; // [rsp+C0h] [rbp-78h]
  int v122; // [rsp+C4h] [rbp-74h]
  char v123; // [rsp+C8h] [rbp-70h]
  __int64 v124; // [rsp+D0h] [rbp-68h]
  int v125; // [rsp+D0h] [rbp-68h]
  __int64 v126; // [rsp+D8h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-50h] BYREF
  unsigned int v128; // [rsp+F8h] [rbp-40h] BYREF
  _BYTE v129[20]; // [rsp+FCh] [rbp-3Ch] BYREF
  unsigned __int16 v130[596]; // [rsp+110h] [rbp-28h] BYREF
  int v131; // [rsp+5B8h] [rbp+480h] BYREF
  char v132[324]; // [rsp+5BCh] [rbp+484h] BYREF
  unsigned __int16 v133[260]; // [rsp+700h] [rbp+5C8h] BYREF
  WCHAR SourceString[32]; // [rsp+908h] [rbp+7D0h] BYREF

  v3 = *(_DWORD ***)(W32GetUserSessionState(a1, a2) + 57008);
  if ( **v3 <= 4u )
    v4 = ***(_DWORD ***)(W32GetUserSessionState(v3, v2) + 57008);
  else
    v4 = 4;
  v119 = v4;
  memset_0(v129, 0, 0x4B0uLL);
  v6 = *(_QWORD *)&WPP_GLOBAL_Control;
  v7 = 1;
  v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      7,
      15,
      (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
  }
  v128 = 0;
  v13 = W32GetUserSessionState(v6, v5);
  v14 = 0LL;
  v15 = *(_QWORD *)(*(_QWORD *)(v13 + 57008) + 112LL);
  while ( 1 )
  {
    v126 = v15;
    if ( !v15 )
      break;
    v16 = *(unsigned int *)(*(_QWORD *)(v15 + 40) + 24LL);
    if ( (v16 & 1) != 0 )
    {
      if ( (unsigned int)v14 >= v4 )
      {
        v35 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
        v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v35 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v37 = *(int ***)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14) + 57008);
          v38 = **v37;
          v40 = W32GetUserSessionState(v37, v39);
          LOBYTE(v41) = v36;
          LOBYTE(v42) = v35;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v42,
            v41,
            *(_QWORD *)(v40 + 69416),
            2,
            7,
            16,
            (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
            v38);
        }
        break;
      }
      v17 = 150LL * (unsigned int)v14;
      v124 = v17 * 2;
      *(_DWORD *)&v130[v17 + 130] = *(_DWORD *)v15;
      *(_DWORD *)&v130[v17 + 128] = v15 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v14) + 57008) + 104LL);
      *(_DWORD *)&v129[v17 * 2 + 16] = *(unsigned __int16 *)(*(_QWORD *)(v15 + 40) + 60LL);
      *(_OWORD *)&v129[v17 * 2] = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 28LL);
      *(_OWORD *)&v130[v17 + 132] = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 44LL);
      memset_0(v132, 0, 0x344uLL);
      v18 = *(_QWORD *)(v15 + 80);
      v131 = 840;
      DestinationString = 0LL;
      if ( !(unsigned int)DrvGetHdevName(v18, SourceString)
        || (RtlInitUnicodeString(&DestinationString, SourceString),
            LODWORD(v106) = 1,
            (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, &v131, v106, 0) < 0)
        || (int)RtlStringCchCopyW((char *)&v130[v17], 128LL, (char *)v133) < 0 )
      {
        v20 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
        v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v22 = *(_QWORD *)(v15 + 80);
          v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
          LOBYTE(v24) = v21;
          LOBYTE(v25) = v20;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v25,
            v24,
            *(_QWORD *)(v23 + 69416),
            2,
            7,
            17,
            (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
            v22);
        }
      }
      v26 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v112 = v26;
      v115 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v27 = *(_DWORD *)&v129[v17 * 2 + 16];
        v28 = *(_DWORD *)&v130[v17 + 138];
        v29 = *(_DWORD *)&v130[v17 + 136];
        v30 = *(_DWORD *)&v130[v17 + 134];
        v31 = *(_DWORD *)&v130[v17 + 132];
        v32 = *(_DWORD *)&v129[v17 * 2 + 12];
        v33 = *(_DWORD *)&v129[v17 * 2 + 8];
        v121 = *(_DWORD *)&v129[v124 + 4];
        v122 = *(_DWORD *)&v129[v124];
        v123 = v128;
        v34 = W32GetUserSessionState(v124, v19);
        WPP_RECORDER_AND_TRACE_SF_ddddddddddS(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v112,
          v115,
          *(_QWORD *)(v34 + 69416),
          v106,
          v108,
          v109,
          v111,
          v123,
          v122,
          v121,
          v33,
          v32,
          v31,
          v30,
          v29,
          v28,
          v27,
          (const char *)v130 + v124);
        v15 = v126;
        v7 = 1;
      }
      v14 = (struct _SYNC_DISPLAY_CHANGE_DATA *)++v128;
    }
    v15 = *(_QWORD *)(v15 + 56);
    v4 = v119;
  }
  if ( CallShell::xxxDisplayChangedHandler((CallShell *)&v128, v14) )
  {
    v49 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v50 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v49 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v51 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
      LOBYTE(v52) = v50;
      LOBYTE(v53) = v49;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v53,
        v52,
        *(_QWORD *)(v51 + 69416),
        4,
        7,
        20,
        (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
    }
    v54 = 0;
    v55 = 0LL;
    v116 = 0;
    v120 = 0;
    if ( !v128 )
      return v54;
    while ( 1 )
    {
      v56 = &v129[300 * v55];
      v57 = ValidateHmonitorNoRip(*((unsigned int *)v56 + 70));
      *(_QWORD *)&DestinationString.Length = v57;
      v59 = v57;
      if ( !v57 )
      {
        v60 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v61 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v60 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v62 = *((_DWORD *)v56 + 70);
          v63 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v58);
          LOBYTE(v64) = v61;
          LOBYTE(v65) = v60;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v65,
            v64,
            *(_QWORD *)(v63 + 69416),
            3,
            7,
            21,
            (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
            v62);
        }
        goto LABEL_134;
      }
      v66 = *(_QWORD *)(v57 + 40);
      v67 = v56;
      v68 = *((_DWORD *)v56 + 4);
      v69 = *(unsigned __int16 *)(v66 + 60);
      if ( v69 != v68 )
      {
        v70 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v71 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v70 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v72 = *((_DWORD *)v56 + 70);
          v73 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v67);
          LOBYTE(v74) = v71;
          LOBYTE(v75) = v70;
          WPP_RECORDER_AND_TRACE_SF_qdd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v75,
            v74,
            *(_QWORD *)(v73 + 69416),
            3,
            7,
            22,
            (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
            v72,
            v68,
            v69);
        }
        goto LABEL_134;
      }
      v76 = *(_QWORD *)v56 - *(_QWORD *)(v66 + 28);
      if ( *(_QWORD *)v56 == *(_QWORD *)(v66 + 28) )
        v76 = *((_QWORD *)v56 + 1) - *(_QWORD *)(v66 + 36);
      if ( v76 )
      {
        v94 = *(_QWORD *)&WPP_GLOBAL_Control;
        v95 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v114 = v95;
        v118 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v95 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v96 = *(_DWORD *)(v66 + 40);
          v97 = *(_DWORD *)(v66 + 36);
          v98 = *(_DWORD *)(v66 + 32);
          v99 = *(_DWORD *)(v66 + 28);
          v100 = *((_DWORD *)v67 + 3);
          v101 = *((_DWORD *)v67 + 2);
          v102 = *((_DWORD *)v67 + 1);
          v125 = *(_DWORD *)v67;
          *(_QWORD *)&DestinationString.Length = *((unsigned int *)v67 + 70);
          LOBYTE(v94) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v103 = W32GetUserSessionState(v94, v67);
          LOBYTE(v104) = v118;
          LOBYTE(v105) = v114;
          WPP_RECORDER_AND_TRACE_SF_qdddddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v105,
            v104,
            *(_QWORD *)(v103 + 69416),
            v106,
            v108,
            v109,
            v111,
            DestinationString.Length,
            v125,
            v102,
            v101,
            v100,
            v99,
            v98,
            v97,
            v96);
        }
        goto LABEL_134;
      }
      v77 = *(_QWORD *)&WPP_GLOBAL_Control;
      v78 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v113 = v78;
      v117 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v78 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v77) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        v79 = W32GetUserSessionState(v77, v56);
        v59 = *(_QWORD *)&DestinationString.Length;
        WPP_RECORDER_AND_TRACE_SF_qdddddddddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v113,
          v117,
          *(_QWORD *)(v79 + 69416),
          4u,
          7u,
          0x18u,
          (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
        v67 = v56;
      }
      DestinationString = 0LL;
      if ( IsRectEmptyInl((const struct tagRECT *)(v67 + 284))
        || !(unsigned int)IntersectRect(&DestinationString, v80, v81) )
      {
        goto LABEL_120;
      }
      v83 = (char *)(*(_QWORD *)&DestinationString.Length - *(_QWORD *)v82);
      if ( *(_QWORD *)&DestinationString.Length == *(_QWORD *)v82 )
        v83 = (char *)DestinationString.Buffer - *(_QWORD *)(v82 + 8);
      if ( v83 )
      {
LABEL_120:
        v86 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
        v87 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v86 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_134;
        v88 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v80);
        v110 = 25;
        v107 = 2;
      }
      else
      {
        v84 = *(_QWORD *)(v59 + 40);
        v85 = *(_QWORD *)(v84 + 44) - *(_QWORD *)v82;
        if ( !v85 )
          v85 = *(_QWORD *)(v84 + 52) - *(_QWORD *)(v82 + 8);
        if ( v85 )
        {
          v91 = *(struct _UNICODE_STRING *)(v84 + 44);
          *(_DWORD *)(v84 + 44) = *(_DWORD *)v82;
          v92 = *(_QWORD *)(v59 + 40);
          v93 = *(_DWORD *)(v82 + 4);
          DestinationString = v91;
          v116 = 1;
          *(_DWORD *)(v92 + 48) = v93;
          *(_DWORD *)(*(_QWORD *)(v59 + 40) + 52LL) = *(_DWORD *)(v82 + 8);
          *(_DWORD *)(*(_QWORD *)(v59 + 40) + 56LL) = *(_DWORD *)(v82 + 12);
          v86 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
          v87 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v86 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_134;
          v88 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v84);
          v110 = 27;
        }
        else
        {
          v86 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
          v87 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v86 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_134;
          v88 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v84);
          v110 = 26;
        }
        v107 = 4;
      }
      LOBYTE(v90) = v87;
      LOBYTE(v89) = v86;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v89,
        v90,
        *(_QWORD *)(v88 + 69416),
        v107,
        7,
        v110,
        (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
LABEL_134:
      v55 = (unsigned int)(v120 + 1);
      v120 = v55;
      if ( (unsigned int)v55 >= v128 )
      {
        v54 = v116;
        if ( v116 )
        {
          CTopologyManager::UpdateCurrent();
          DwmNotifyWorkAreaChanged();
        }
        return v54;
      }
    }
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v7 = 0;
  }
  v44 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v45 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
    LOBYTE(v46) = v44;
    LOBYTE(v47) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v47,
      v46,
      *(_QWORD *)(v45 + 69416),
      4,
      7,
      19,
      (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
  }
  return 0;
}
