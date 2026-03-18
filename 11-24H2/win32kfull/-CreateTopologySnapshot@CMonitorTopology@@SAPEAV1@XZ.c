/*
 * XREFs of ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x14024D2AC
 * Callers:
 *     ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x1402175E8 (-UpdateCurrent@CTopologyManager@@SA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqddddddddd @ 0x1401EF2B8 (WPP_RECORDER_AND_TRACE_SF_dqddddddddd.c)
 *     GreGetMonitorHash @ 0x1401F5234 (GreGetMonitorHash.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ld @ 0x1402205EC (WPP_RECORDER_AND_TRACE_SF_Ld.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ValidateTopology@CMonitorTopology@@SAXPEBV1@@Z @ 0x1402ABCB4 (-ValidateTopology@CMonitorTopology@@SAXPEBV1@@Z.c)
 */

struct CMonitorTopology *__fastcall CMonitorTopology::CreateTopologySnapshot(__int64 a1, __int64 a2)
{
  char v2; // di
  _QWORD **v3; // r14
  __int64 v4; // rdx
  _DWORD *v5; // r15
  bool v6; // si
  int *v7; // rcx
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  int v13; // r14d
  char v14; // bp
  char v15; // si
  __int64 UserSessionState; // rax
  int v17; // r8d
  __int64 v18; // r13
  int v19; // edx
  int MonitorHash; // eax
  __int64 v21; // rdx
  char v22; // r13
  bool v23; // si
  bool v24; // r12
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  const struct CMonitorTopology *v28; // rsi
  unsigned int i; // r8d
  __int64 v30; // rax
  __int64 v31; // rdx
  int *v32; // rcx
  char v34; // bp
  bool v35; // r15
  int v36; // edi
  char CurrentWin32kSessionId; // bl
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  _DWORD *v43; // r13
  int v44; // ebp
  __int64 v45; // rax
  __int64 v46; // r15
  _QWORD *v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  char v51; // r15
  char v52; // bp
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  __int64 v56; // r8
  int v57; // eax
  char v58; // r15
  char v59; // bp
  bool v60; // r12
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  __int64 v64; // rdx
  bool v65; // al
  __int64 v66; // rax
  int v67; // [rsp+20h] [rbp-108h]
  int v68; // [rsp+28h] [rbp-100h]
  int v69; // [rsp+30h] [rbp-F8h]
  __int16 v70; // [rsp+30h] [rbp-F8h]
  int v71; // [rsp+38h] [rbp-F0h]
  int v72; // [rsp+40h] [rbp-E8h]
  _QWORD **v73; // [rsp+B8h] [rbp-70h]
  _DWORD *v74; // [rsp+D0h] [rbp-58h]
  __int64 v75; // [rsp+D8h] [rbp-50h]
  int v76; // [rsp+130h] [rbp+8h]
  __int64 v77; // [rsp+130h] [rbp+8h]
  char v78; // [rsp+130h] [rbp+8h]
  char v79; // [rsp+130h] [rbp+8h]
  __int64 v80; // [rsp+138h] [rbp+10h]
  char v81; // [rsp+138h] [rbp+10h]
  int v82; // [rsp+140h] [rbp+18h]
  int v83; // [rsp+148h] [rbp+20h] BYREF

  v2 = 1;
  v3 = (_QWORD **)(W32GetUserSessionState(a1, a2) + 57008);
  v73 = v3;
  if ( (unsigned int)(*(_DWORD *)**v3 - 1) > 0xFFFD )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 413LL);
  v5 = (_DWORD *)Win32AllocPoolZInit(4LL * *(unsigned int *)**v3, 1919775573LL);
  if ( !v5 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v2 = 0;
    }
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v2 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v7 = (int *)**v3;
    v72 = *v7;
    v10 = *(_QWORD *)(W32GetUserSessionState(v7, v4) + 69416);
    v70 = 11;
LABEL_50:
    LOBYTE(v9) = v6;
    LOBYTE(v8) = v2;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v9,
      v10,
      2,
      7,
      v70,
      (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
      v72);
    return 0LL;
  }
  v11 = 0LL;
  v76 = 0;
  v12 = (_QWORD *)(*v3)[14];
  if ( v12 )
  {
    v13 = 0;
    do
    {
      if ( (*(_DWORD *)(v12[5] + 24LL) & 1) != 0 )
      {
        v80 = v12[10];
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
          || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v14 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v15 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v15 = 0;
        }
        if ( v14 || v15 )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
          LOBYTE(v17) = v15;
          v18 = v80;
          LOBYTE(v19) = v14;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v19,
            v17,
            *(_QWORD *)(UserSessionState + 69416),
            5,
            7,
            12,
            (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
            v80);
        }
        else
        {
          v18 = v12[10];
        }
        MonitorHash = GreGetMonitorHash(v18, (__int64)&v5[v13], 0LL);
        v22 = MonitorHash;
        if ( (int)(MonitorHash + 0x80000000) >= 0 && MonitorHash != -1073741789 )
        {
          v23 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
          v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
            LOBYTE(v26) = v24;
            LOBYTE(v27) = v23;
            WPP_RECORDER_AND_TRACE_SF_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v27,
              v26,
              *(_QWORD *)(v25 + 69416),
              2,
              7,
              13,
              (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
              v22);
          }
          v5[v13] = 0;
        }
        v11 = (unsigned int)(v5[v13] + v76);
        v76 += v5[v13];
      }
      v12 = (_QWORD *)v12[7];
      ++v13;
    }
    while ( v12 );
    v3 = v73;
  }
  v74 = (_DWORD *)Win32AllocPoolZInit((unsigned int)(20 * v11 + 8 * (9 * (*(_DWORD *)**v3 - 1) + 11)), 1919775573LL);
  v28 = (const struct CMonitorTopology *)v74;
  if ( v74 )
  {
    for ( i = 0; i < *(_DWORD *)**v3; v74[18 * v30 + 18] = v5[v30] )
      v30 = i++;
  }
  Win32FreePool(v5);
  if ( !v74 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v2 = 0;
    }
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v2 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v32 = (int *)**v3;
    v72 = *v32;
    v70 = 14;
    v10 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 69416);
    goto LABEL_50;
  }
  *v74 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (v34 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v34 = 0;
  }
  v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v36 = v74[3];
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    v40 = W32GetUserSessionState(v39, v38);
    LOBYTE(v41) = v35;
    LOBYTE(v42) = v34;
    WPP_RECORDER_AND_TRACE_SF_Ld(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v42,
      v41,
      *(_QWORD *)(v40 + 69416),
      v67,
      v68,
      v69,
      v71,
      CurrentWin32kSessionId,
      v36);
  }
  v43 = v74 + 4;
  v44 = 0;
  v82 = 0;
  v45 = *(unsigned int *)**v3;
  v74[1] = v45;
  v46 = (__int64)&v74[18 * v45 + 4];
  v47 = (_QWORD *)(*v3)[14];
  while ( v47 )
  {
    v48 = v47[5];
    if ( (*(_DWORD *)(v48 + 24) & 1) != 0 )
    {
      *(_OWORD *)(v43 + 2) = *(_OWORD *)(v48 + 28);
      *(_OWORD *)(v43 + 6) = *(_OWORD *)(v47[5] + 44LL);
      *((_WORD *)v43 + 20) = *(_WORD *)(v47[5] + 60LL);
      v43[16] = *(unsigned __int16 *)(*(_QWORD *)((*v3)[14] + 40LL) + 62LL);
      if ( *(_WORD *)(*(_QWORD *)((*v3)[14] + 40LL) + 62LL) != *(_WORD *)(v47[5] + 62LL) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 518LL);
      if ( *(_WORD *)(*(_QWORD *)((*v3)[14] + 40LL) + 62LL) > *(_WORD *)(v47[5] + 60LL) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 520LL);
      if ( (unsigned int)HdevFromMonitor(v47) != -1 )
        *(_QWORD *)v43 = *v47;
      v50 = (unsigned int)v43[14];
      *((_QWORD *)v43 + 6) = v46;
      v75 = v46 + 20 * v50;
      if ( (_DWORD)v50 )
      {
        v77 = v47[10];
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
          || (v51 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v51 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v52 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v52 = 0;
        }
        if ( v51 || v52 )
        {
          v53 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v49);
          LOBYTE(v54) = v52;
          LOBYTE(v55) = v51;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v55,
            v54,
            *(_QWORD *)(v53 + 69416),
            5,
            7,
            16,
            (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
            v77);
        }
        v56 = *((_QWORD *)v43 + 6);
        v83 = v43[14];
        v57 = GreGetMonitorHash(v77, (__int64)&v83, v56);
        v58 = v83;
        v49 = 0LL;
        v78 = v57;
        if ( v57 < 0 || v83 != v43[14] )
        {
          if ( v83 != v43[14] )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 543LL);
            v58 = v83;
            v49 = 0LL;
          }
          v50 = *(_QWORD *)&WPP_GLOBAL_Control;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
            || (v59 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
          {
            v59 = 0;
          }
          v60 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v59 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v61 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
            LOBYTE(v62) = v60;
            LOBYTE(v63) = v59;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v63,
              v62,
              *(_QWORD *)(v61 + 69416),
              3,
              7,
              17,
              (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
              v78,
              v58);
            v49 = 0LL;
          }
          *((_QWORD *)v43 + 6) = 0LL;
          v43[14] = 0;
        }
        v44 = v82;
      }
      if ( v47 == *(_QWORD **)(GetDispInfo(v50, v49) + 104) )
        *((_DWORD *)v28 + 2) = v44;
      v65 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v79 = v65;
      v81 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v65 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v66 = W32GetUserSessionState(v43, v64);
        v44 = v82;
        WPP_RECORDER_AND_TRACE_SF_dqddddddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v79,
          v81,
          *(_QWORD *)(v66 + 69416),
          v67,
          v68,
          v69,
          v71);
        v28 = (const struct CMonitorTopology *)v74;
        v3 = v73;
      }
      v46 = v75;
      v82 = ++v44;
    }
    v47 = (_QWORD *)v47[7];
    v43 += 18;
  }
  if ( *((_DWORD *)v28 + 1) != v44 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 576LL);
  if ( !*((_DWORD *)v28 + 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 577LL);
  CMonitorTopology::ValidateTopology(v28);
  return v28;
}
