/*
 * XREFs of ?TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D4568
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x1400688D0 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140269664 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?LogicalToPhysicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402AB50C (-LogicalToPhysicalDPIRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEAU3@K@Z.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402DB288 (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::TransformWindowActionToPhysical(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        struct AdvancedWindowPos::WindowAction *a3)
{
  unsigned int v5; // r14d
  int v6; // ecx
  int v7; // eax
  char v8; // bl
  char v9; // r13
  int v10; // esi
  int v11; // edx
  int v12; // ebx
  int v13; // r13d
  char v14; // r12
  char v15; // al
  bool v16; // cf
  char v17; // cl
  LONG v18; // edx
  CMonitorTopology *v19; // rcx
  struct CHECKPOINT *IfValid; // rax
  struct tagRECT v21; // xmm0
  CMonitorTopology::MonitorData *v22; // rax
  char v23; // di
  LONG v24; // edx
  int v25; // ecx
  struct tagRECT *v26; // rax
  int v27; // edx
  __m128i v28; // xmm0
  __int64 v29; // rax
  int v30; // esi
  char v31; // bl
  __int64 UserSessionState; // rax
  char v33; // al
  char v34; // r13
  int v35; // edi
  int v36; // r14d
  int v37; // ebx
  int v38; // esi
  __int64 v39; // rax
  LONG v40; // eax
  struct tagRECT v41; // xmm0
  char v42; // bl
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  __int64 v46; // rdx
  char v47; // r13
  int v48; // edi
  int v49; // r14d
  int v50; // ebx
  int v51; // esi
  __int64 v52; // rax
  __int64 v53; // [rsp+40h] [rbp-59h]
  __int64 v54; // [rsp+48h] [rbp-51h]
  __int64 v55; // [rsp+50h] [rbp-49h]
  __int64 v56; // [rsp+58h] [rbp-41h]
  __int64 v57; // [rsp+60h] [rbp-39h]
  __int64 v58; // [rsp+68h] [rbp-31h]
  char v59; // [rsp+70h] [rbp-29h]
  char v60; // [rsp+71h] [rbp-28h]
  unsigned int v61; // [rsp+74h] [rbp-25h]
  char v62; // [rsp+74h] [rbp-25h]
  CMonitorTopology::MonitorData *v63; // [rsp+78h] [rbp-21h]
  int v64; // [rsp+80h] [rbp-19h]
  int v65; // [rsp+84h] [rbp-15h]
  int v66; // [rsp+88h] [rbp-11h]
  struct tagRECT v67; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v68; // [rsp+A0h] [rbp+7h] BYREF

  v5 = *(_DWORD *)(*((_QWORD *)this + 5) + 288LL);
  v61 = v5;
  if ( (v5 & 0xF) == 2 )
    return;
  v6 = *(_DWORD *)a2;
  v7 = *((_DWORD *)a2 + 1);
  v8 = *(_DWORD *)a2;
  v9 = v8;
  v10 = *(_DWORD *)a2 & 4;
  v11 = v7 & 0x80;
  v12 = v8 & 2;
  v13 = v9 & 0x40;
  v66 = v11;
  v14 = 1;
  if ( (v7 & 0x200) != 0 )
  {
    v15 = 1;
LABEL_5:
    v17 = 1;
    goto LABEL_6;
  }
  v16 = (v6 & 0x100) != 0;
  v15 = 0;
  v17 = 0;
  if ( v16 )
    goto LABEL_5;
LABEL_6:
  v60 = v17;
  if ( v10 || v12 || v13 || v17 || v11 )
  {
    if ( v15 )
    {
      v18 = *((_DWORD *)a2 + 26);
      v19 = (CMonitorTopology *)*((_QWORD *)a2 + 21);
      v67.left = *((_DWORD *)a2 + 25);
      v67.top = v18;
      v67.right = v67.left;
      v67.bottom = v18;
    }
    else
    {
      IfValid = CHECKPOINT::GetIfValid(this);
      v19 = (CMonitorTopology *)*((_QWORD *)a2 + 21);
      if ( IfValid )
        v21 = *(struct tagRECT *)((char *)IfValid + 20);
      else
        v21 = *(struct tagRECT *)(*((_QWORD *)this + 5) + 88LL);
      v67 = v21;
    }
    v22 = CMonitorTopology::MonitorDataFromRect(v19, &v67, 2, v5);
    v23 = 0;
    v63 = v22;
    if ( v12 || v10 )
    {
      v24 = *((_DWORD *)a2 + 4);
      v67.left = *((_DWORD *)a2 + 3);
      v67.right = *((_DWORD *)a2 + 5) + v67.left;
      v25 = *((_DWORD *)a2 + 6);
      v67.top = v24;
      v67.bottom = v24 + v25;
      v26 = CMonitorTopology::MonitorData::LogicalToPhysicalDPIRect(v22, &v68, (__m128i *)&v67, v5);
      v27 = _mm_cvtsi128_si32(*(__m128i *)v26);
      v28 = _mm_srli_si128(*(__m128i *)v26, 8);
      v29 = HIDWORD(*(_QWORD *)&v26->left);
      v65 = v27;
      v30 = v28.m128i_i32[1] - v29;
      *((_DWORD *)a2 + 3) = v27;
      *((_DWORD *)a2 + 6) = v28.m128i_i32[1] - v29;
      *(_QWORD *)&v67.left = v29;
      *((_DWORD *)a2 + 4) = v29;
      v64 = _mm_cvtsi128_si32(v28) - v27;
      *((_DWORD *)a2 + 5) = v64;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
      {
        v23 = 1;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v31 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v31 = 0;
      }
      if ( v23 || v31 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v23,
          v31,
          *(_QWORD *)(UserSessionState + 69416),
          5u,
          4u,
          0x6Fu,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v65,
          v67.left,
          v64,
          v30);
      }
      v23 = 0;
    }
    if ( v13 )
    {
      *(struct tagRECT *)((char *)a2 + 44) = *CMonitorTopology::MonitorData::LogicalToPhysicalDPIRect(
                                                v63,
                                                &v68,
                                                (__m128i *)((char *)a2 + 44),
                                                v5);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v33 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v33 = 0;
      }
      v59 = v33;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v34 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v34 = 0;
      }
      if ( v33 || v34 )
      {
        v35 = *((_DWORD *)a2 + 14);
        v36 = *((_DWORD *)a2 + 12);
        v37 = *((_DWORD *)a2 + 13);
        v38 = *((_DWORD *)a2 + 11);
        v39 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LODWORD(v56) = v35;
        LODWORD(v55) = v37;
        LODWORD(v54) = v36;
        LODWORD(v53) = v38;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v59,
          v34,
          *(_QWORD *)(v39 + 69416),
          5u,
          4u,
          0x70u,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v53,
          v54,
          v55,
          v56,
          v37 - v38,
          v35 - v36);
        v5 = v61;
        v23 = 0;
      }
    }
    if ( v60 )
    {
      v40 = *((_DWORD *)a2 + 26);
      v67.left = *((_DWORD *)a2 + 25);
      v67.right = v67.left;
      v67.top = v40;
      v67.bottom = v40;
      v41 = *CMonitorTopology::MonitorData::LogicalToPhysicalDPIRect(v63, &v68, (__m128i *)&v67, v5);
      v62 = _mm_cvtsi128_si32((__m128i)v41);
      *((_DWORD *)a2 + 26) = v41.top;
      *((_DWORD *)a2 + 25) = _mm_cvtsi128_si32((__m128i)v41);
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
      {
        v23 = 1;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v42 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v42 = 0;
      }
      if ( v23 || v42 )
      {
        v43 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v44) = v42;
        LOBYTE(v45) = v23;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v45,
          v44,
          *(_QWORD *)(v43 + 69416),
          5,
          4,
          113,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v62,
          v41.top);
      }
    }
    if ( v66 )
    {
      *(struct tagRECT *)((char *)a2 + 60) = *CMonitorTopology::MonitorData::LogicalToPhysicalDPIRect(
                                                v63,
                                                &v68,
                                                (__m128i *)((char *)a2 + 60),
                                                v5);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v47 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v14 = 0;
      }
      if ( v47 || v14 )
      {
        v48 = *((_DWORD *)a2 + 14);
        v49 = *((_DWORD *)a2 + 12);
        v50 = *((_DWORD *)a2 + 13);
        v51 = *((_DWORD *)a2 + 11);
        v52 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v46);
        LODWORD(v58) = v48 - v49;
        LODWORD(v57) = v50 - v51;
        LODWORD(v56) = v48;
        LODWORD(v55) = v50;
        LODWORD(v54) = v49;
        LODWORD(v53) = v51;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v47,
          v14,
          *(_QWORD *)(v52 + 69416),
          5u,
          4u,
          0x72u,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
      }
    }
  }
}
