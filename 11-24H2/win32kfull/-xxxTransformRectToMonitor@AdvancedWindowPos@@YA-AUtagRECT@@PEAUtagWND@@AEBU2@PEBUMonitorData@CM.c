/*
 * XREFs of ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D7FA8
 * Callers:
 *     ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402D5304 (-xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@P.c)
 * Callees:
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140072D0C (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014AC60 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014C21C (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     CalculateLogicalMonitorRect @ 0x14014DA2C (CalculateLogicalMonitorRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     _anonymous_namespace_::IsFullscreenRect @ 0x14021DC90 (_anonymous_namespace_--IsFullscreenRect.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x140238CF0 (xxxAppAdjustDpiCandidateRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140269664 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140269B3C (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402BFB0C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 *     _anonymous_namespace_::FitRectToWorkArea @ 0x1402D28B4 (_anonymous_namespace_--FitRectToWorkArea.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddd @ 0x1402D971C (WPP_RECORDER_AND_TRACE_SF_ddddddd.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402DB288 (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall AdvancedWindowPos::xxxTransformRectToMonitor(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        __m128i *a3,
        struct tagRECT *a4,
        const struct CMonitorTopology::MonitorData *a5,
        const struct CMonitorTopology::MonitorData *a6)
{
  const struct CMonitorTopology::MonitorData *v6; // r14
  __m128i *v7; // rsi
  struct tagRECT *v8; // r15
  char v9; // r12
  char v10; // al
  char v11; // r13
  __int64 v12; // r14
  __int64 UserSessionState; // rax
  struct CHECKPOINT *IfValid; // rax
  __int16 v15; // r11
  struct tagRECT *v16; // rdx
  __m128i v17; // xmm0
  __int32 v18; // r9d
  int v19; // edi
  unsigned __int16 WindowDpiLastNotify; // r8
  __m128i v21; // xmm6
  unsigned __int16 v22; // r10
  __int64 v23; // rdx
  int v24; // r14d
  bool v25; // zf
  int v26; // esi
  int v27; // r13d
  int v28; // r13d
  char v29; // r14
  char v30; // si
  __int64 v31; // rax
  unsigned __int16 v32; // cx
  char v33; // r14
  char v34; // bl
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  char v38; // al
  char v39; // r14
  __int32 v40; // ebx
  __int32 v41; // edi
  __int64 v42; // rax
  INT v43; // edi
  char v44; // di
  char v45; // bl
  __int64 v46; // rax
  __m128i v47; // xmm0
  __int64 v48; // rax
  unsigned __int16 v49; // r8
  __m128i v50; // xmm6
  __int64 v51; // rdx
  int WindowBordersWithDpiAwareness; // eax
  char v53; // r15
  char v54; // di
  char v55; // si
  __int32 v56; // ebx
  char v57; // r14
  bool v58; // r13
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  struct tagRECT *result; // rax
  struct tagRECT v63; // xmm0
  __int32 v64; // r9d
  __int32 v65; // ebx
  int v66; // r8d
  int v67; // r13d
  __int32 v68; // r14d
  __int32 v69; // ebx
  __int32 v70; // edi
  __int32 v71; // esi
  char v72; // si
  char v73; // di
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  __int64 v77; // rdx
  char v78; // di
  char v79; // bl
  __int64 v80; // rax
  int v81; // r8d
  int v82; // edx
  __int64 v83; // rdx
  struct tagRECT v84; // xmm1
  LONG left; // esi
  char v86; // di
  char v87; // bl
  __int64 v88; // rax
  int v89; // r8d
  int v90; // edx
  __int64 v91; // [rsp+28h] [rbp-E0h]
  unsigned int v92; // [rsp+28h] [rbp-E0h]
  __int64 v93; // [rsp+48h] [rbp-C0h]
  __int64 v94; // [rsp+50h] [rbp-B8h]
  __int64 v95; // [rsp+58h] [rbp-B0h]
  __int64 v96; // [rsp+60h] [rbp-A8h]
  char v97; // [rsp+88h] [rbp-80h]
  unsigned __int16 v98; // [rsp+88h] [rbp-80h]
  char v99; // [rsp+88h] [rbp-80h]
  unsigned __int16 v100; // [rsp+8Ah] [rbp-7Eh]
  int v101; // [rsp+8Ch] [rbp-7Ch]
  unsigned __int16 v102; // [rsp+90h] [rbp-78h]
  INT v103; // [rsp+90h] [rbp-78h]
  __m128i v104; // [rsp+98h] [rbp-70h] BYREF
  int v105; // [rsp+A8h] [rbp-60h]
  __m128i v106; // [rsp+B8h] [rbp-50h] BYREF
  struct tagRECT v107; // [rsp+C8h] [rbp-40h] BYREF
  CMonitorTopology::MonitorData *v108; // [rsp+D8h] [rbp-30h]
  struct tagRECT *v109; // [rsp+E0h] [rbp-28h]
  __m128i v110; // [rsp+E8h] [rbp-20h] BYREF

  v6 = a5;
  v7 = a3;
  v106.m128i_i64[0] = (__int64)a5;
  v8 = retstr;
  v108 = (CMonitorTopology::MonitorData *)a4;
  *(_QWORD *)&v107.left = a3;
  v104.m128i_i64[0] = (__int64)retstr;
  v109 = this;
  v9 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v10 = 0;
  }
  v97 = v10;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v11 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v11 = 0;
  }
  if ( v10 || v11 )
  {
    v12 = *(_QWORD *)v104.m128i_i64[0];
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    HIDWORD(v93) = HIDWORD(v12);
    WPP_RECORDER_AND_TRACE_SF_qdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v97,
      v11,
      *(_QWORD *)(UserSessionState + 69416),
      v91,
      4u,
      0x46u,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    v8 = (struct tagRECT *)v104.m128i_i64[0];
    v7 = *(__m128i **)&v107.left;
    v6 = (const struct CMonitorTopology::MonitorData *)v106.m128i_i64[0];
  }
  IfValid = CHECKPOINT::GetIfValid((struct tagWND *)v8);
  v15 = 0;
  v16 = v8;
  if ( IfValid )
    v17 = *(__m128i *)((char *)IfValid + 20);
  else
    v17 = *(__m128i *)(*(_QWORD *)&v8[2].right + 88LL);
  v110 = v17;
  v18 = v17.m128i_i32[2] - v17.m128i_i32[0];
  v19 = v17.m128i_i32[3] - v17.m128i_i32[1];
  v104.m128i_i32[0] = v17.m128i_i32[2] - v17.m128i_i32[0];
  if ( !IfValid || (WindowDpiLastNotify = *((_WORD *)IfValid + 26), (v102 = WindowDpiLastNotify) == 0) )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v8);
    v102 = WindowDpiLastNotify;
  }
  v21 = *v7;
  v22 = *((_WORD *)v6 + 20);
  v23 = *(_QWORD *)&v16[2].right;
  v24 = _mm_cvtsi128_si32(*v7);
  v101 = _mm_cvtsi128_si32(_mm_srli_si128(*v7, 4));
  v25 = (*(_BYTE *)(v23 + 30) & 4) == 0;
  v98 = v22;
  v110 = *v7;
  v105 = v24;
  if ( v25 )
  {
    v26 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
    v27 = v26 - v24;
    if ( v26 - v24 == v18 && _mm_srli_si128(v21, 8).m128i_i32[1] - v21.m128i_i32[1] == v19 )
    {
      v28 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 12));
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v29 = v15;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v30 = 1, *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) == v15) )
      {
        v30 = v15;
      }
      if ( v29 || v30 )
      {
        v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
        LODWORD(v93) = v27;
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v29,
          v30,
          *(_QWORD *)(v31 + 69416),
          5u,
          4u,
          0x47u,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v93,
          v110.m128i_i32[3] - v101,
          v104.m128i_i32[0],
          v17.m128i_i32[3] - v17.m128i_i32[1]);
        v18 = v104.m128i_i32[0];
        v15 = 0;
      }
      v24 = v105;
      v23 = *(_QWORD *)&v8[2].right;
      v28 = v19 + v101;
      WindowDpiLastNotify = v102;
      v26 = v18 + v105;
      v110.m128i_i32[3] = v19 + v101;
      v110.m128i_i32[2] = v18 + v105;
      v21.m128i_i64[0] = v110.m128i_i64[0];
    }
    v98 = WindowDpiLastNotify;
  }
  else
  {
    v26 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
    v28 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 12));
  }
  v32 = *((_WORD *)v108 + 20);
  v100 = v32;
  if ( (*(_DWORD *)(v23 + 288) & 0xF) == 2 )
  {
    if ( WindowDpiLastNotify != v32 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v33 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v33 = v15;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v34 = 1, *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) == v15) )
      {
        v34 = v15;
      }
      if ( v33 || v34 )
      {
        v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
        LOBYTE(v36) = v34;
        LOBYTE(v37) = v33;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v37,
          v36,
          *(_QWORD *)(v35 + 69416),
          5,
          4,
          72,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v102,
          v100);
        v18 = v104.m128i_i32[0];
      }
      v24 = v105;
      v104.m128i_i64[0] = v21.m128i_i64[0];
      v104.m128i_i32[2] = v18 + v105;
      v104.m128i_i32[3] = v19 + v21.m128i_i32[1];
      if ( (unsigned int)xxxAppAdjustDpiCandidateRect((struct tagTHREADINFO **)v8, v100, &v104, &v104) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v38 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v38 = 0;
        }
        v99 = v38;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v39 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v39 = 0;
        }
        v40 = v104.m128i_i32[3];
        v41 = v104.m128i_i32[2];
        if ( v38 || v39 )
        {
          v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LODWORD(v96) = v40 - v104.m128i_i32[1];
          LODWORD(v95) = v41 - v104.m128i_i32[0];
          LODWORD(v94) = v28 - v101;
          LODWORD(v93) = v26 - v105;
          WPP_RECORDER_AND_TRACE_SF_dddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v99,
            v39,
            *(_QWORD *)(v42 + 69416),
            5u,
            4u,
            0x49u,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
            v93,
            v94,
            v95,
            v96);
        }
        v110.m128i_i32[3] = v101 + v40 - v104.m128i_i32[1];
        v110.m128i_i32[2] = v105 + v41 - v104.m128i_i32[0];
        goto LABEL_72;
      }
      v32 = v100;
    }
    if ( v98 != v32 )
    {
      v43 = v32;
      v104.m128i_i32[0] = EngMulDiv(v26 - v24, v32, v98);
      v103 = EngMulDiv(v28 - v101, v43, v98);
      v44 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v45 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v45 = 0;
      }
      if ( v44 || v45 )
      {
        v46 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
        LODWORD(v96) = v100;
        LODWORD(v95) = v28 - v101;
        LODWORD(v94) = v26 - v24;
        LODWORD(v93) = v98;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v44,
          v45,
          *(_QWORD *)(v46 + 69416),
          5u,
          4u,
          0x4Au,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v93,
          v94,
          v95,
          v96,
          v104.m128i_i32[0],
          v103);
      }
      v110.m128i_i32[2] = v24 + v104.m128i_i32[0];
      v110.m128i_i32[3] = v101 + v103;
    }
  }
LABEL_72:
  v47 = *CalculateLogicalMonitorRect(
           &v106,
           (__m128i *)(v106.m128i_i64[0] + 8),
           *(_WORD *)(v106.m128i_i64[0] + 40),
           (*(_DWORD *)(*(_QWORD *)&v8[2].right + 288LL) >> 8) & 0x1FF,
           *(_WORD *)(v106.m128i_i64[0] + 64));
  v48 = *(_QWORD *)&v8[2].right;
  v49 = *((_WORD *)v108 + 20);
  v106 = v47;
  v50 = *CalculateLogicalMonitorRect(
           &v104,
           (__m128i *)((char *)v108 + 8),
           v49,
           (*(_DWORD *)(v48 + 288) >> 8) & 0x1FF,
           *((_WORD *)v108 + 32));
  v104 = v50;
  if ( anonymous_namespace_::IsFullscreenRect(*(_DWORD **)&v107.left, &v106) )
  {
    v110 = v50;
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((const struct tagWND *)v8, v51, 0, 0);
    v53 = WindowBordersWithDpiAwareness;
    v54 = WindowBordersWithDpiAwareness + v110.m128i_i8[8];
    v55 = v110.m128i_i8[4] - WindowBordersWithDpiAwareness;
    v110.m128i_i32[2] += WindowBordersWithDpiAwareness;
    v110.m128i_i32[1] -= WindowBordersWithDpiAwareness;
    v56 = _mm_cvtsi128_si32(v50) - WindowBordersWithDpiAwareness;
    v57 = WindowBordersWithDpiAwareness + v110.m128i_i8[12];
    v110.m128i_i32[0] = v56;
    v110.m128i_i32[3] += WindowBordersWithDpiAwareness;
    v58 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v9 = 0;
    }
    if ( v58 || v9 )
    {
      v59 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v60) = v9;
      LOBYTE(v61) = v58;
      WPP_RECORDER_AND_TRACE_SF_ddddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v61,
        v60,
        *(_QWORD *)(v59 + 69416),
        v92,
        4,
        75,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v53,
        v56,
        v55,
        v54,
        v57,
        v54 - v56,
        v57 - v55);
    }
    result = v109;
    *v109 = (struct tagRECT)v110;
    return result;
  }
  v63 = *WindowMargins::ReduceRect(
           (WindowMargins *)&v107,
           v8,
           (const struct tagWND *)&v110,
           (const struct tagRECT *)v100);
  v64 = v104.m128i_i32[3] - v104.m128i_i32[1];
  v65 = v104.m128i_i32[0] - v106.m128i_i32[0];
  v110 = (__m128i)v63;
  v66 = v106.m128i_i32[3] - v106.m128i_i32[1];
  v67 = _mm_cvtsi128_si32((__m128i)v63);
  v68 = v104.m128i_i32[1] - v106.m128i_i32[1];
  if ( v104.m128i_i32[2] - v104.m128i_i32[0] != v106.m128i_i32[2] - v106.m128i_i32[0] || v64 != v66 )
  {
    v65 += ((v104.m128i_i32[2] - v104.m128i_i32[0] - (v106.m128i_i32[2] - v106.m128i_i32[0]))
          * (v67 - v106.m128i_i32[0])
          + (v106.m128i_i32[2] - v106.m128i_i32[0]) / 2)
         / (v106.m128i_i32[2] - v106.m128i_i32[0]);
    v68 += ((v64 - v66) * (v110.m128i_i32[1] - v106.m128i_i32[1]) + v66 / 2) / v66;
  }
  if ( v65 || v68 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v72 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v72 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v73 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v73 = 0;
    }
    if ( v72 || v73 )
    {
      v74 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v75) = v73;
      LOBYTE(v76) = v72;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v76,
        v75,
        *(_QWORD *)(v74 + 69416),
        5,
        4,
        76,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v65,
        v68);
    }
    v67 += v65;
    v70 = v65 + v110.m128i_i32[2];
    v69 = v68 + v110.m128i_i32[3];
    v110.m128i_i32[0] = v67;
    v71 = v68 + v110.m128i_i32[1];
    v110.m128i_i32[2] = v70;
    v110.m128i_i32[1] += v68;
    v110.m128i_i32[3] += v68;
  }
  else
  {
    v69 = v110.m128i_i32[3];
    v70 = v110.m128i_i32[2];
    v71 = v110.m128i_i32[1];
  }
  CMonitorTopology::MonitorData::LogicalWorkArea(v108, &v107, (const struct tagWND *)v8);
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !(_BYTE)a6 )
    {
      v106 = 0LL;
      IntersectRect(&v106, v110.m128i_i32, &v107.left);
      if ( (v106.m128i_i32[2] - v106.m128i_i32[0]) * (v106.m128i_i32[3] - v106.m128i_i32[1]) >= (unsigned int)((v70 - v67) * (v69 - v71)) >> 1 )
        goto LABEL_117;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v78 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v78 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v79 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v79 = 0;
      }
      if ( v78 || v79 )
      {
        v80 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v77);
        LOBYTE(v81) = v79;
        LOBYTE(v82) = v78;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v82,
          v81,
          *(_QWORD *)(v80 + 69416),
          5,
          4,
          77,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
  }
  else if ( !(_BYTE)a6 )
  {
    goto LABEL_117;
  }
  anonymous_namespace_::FitRectToWorkArea(
    v110.m128i_i32,
    (unsigned int *)&v107,
    (*(_BYTE *)(*(_QWORD *)&v8[2].right + 30LL) & 4) != 0);
LABEL_117:
  v84 = *WindowMargins::ExtendRect(
           (struct tagRECT *)&v106,
           v8,
           (const struct tagWND *)&v110,
           (const struct tagRECT *)v100);
  if ( (*(_BYTE *)(*(_QWORD *)&v8[2].right + 30LL) & 4) != 0 )
  {
    left = v107.left;
    if ( _mm_cvtsi128_si32((__m128i)v84) <= v107.left
      && v84.top <= v107.top
      && _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v84, 8)) >= v107.right
      && _mm_srli_si128(*(__m128i *)&v84, 8).m128i_i32[1] >= v107.bottom )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v86 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v86 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v87 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v87 = 0;
      }
      if ( v86 || v87 )
      {
        v88 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v83);
        LOBYTE(v89) = v87;
        LOBYTE(v90) = v86;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v90,
          v89,
          *(_QWORD *)(v88 + 69416),
          5,
          4,
          78,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
      v110.m128i_i32[2] = v107.right - 1;
      v110.m128i_i32[1] = v107.top + 1;
      v110.m128i_i32[3] = v107.bottom - 1;
      v110.m128i_i32[0] = left + 1;
      v84 = (struct tagRECT)v110;
    }
  }
  result = v109;
  *v109 = v84;
  return result;
}
