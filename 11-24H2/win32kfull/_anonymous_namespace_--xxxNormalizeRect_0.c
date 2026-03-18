/*
 * XREFs of _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014AE04
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14014ACFC (_anonymous_namespace_--xxxNormalizeRect.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140072D0C (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z @ 0x14014ACD0 (-HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x14014C28C (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     CalculateLogicalMonitorRect @ 0x14014DA2C (CalculateLogicalMonitorRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x140238CF0 (xxxAppAdjustDpiCandidateRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140269664 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402BFB0C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 *     _anonymous_namespace_::FitRectToWorkArea @ 0x1402D28B4 (_anonymous_namespace_--FitRectToWorkArea.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddd @ 0x1402D971C (WPP_RECORDER_AND_TRACE_SF_ddddddd.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__m128i *__fastcall anonymous_namespace_::xxxNormalizeRect_0(
        __m128i *a1,
        struct tagWND *a2,
        __m128i *a3,
        __m128i *a4,
        __m128i *a5,
        unsigned __int16 a6,
        __int64 a7,
        char a8)
{
  __m128i *v8; // rsi
  __int64 v9; // rdi
  struct tagWND *v10; // r14
  char v11; // r12
  char v12; // al
  char v13; // r13
  __int64 UserSessionState; // rax
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 Prop; // rbx
  __m128i v22; // xmm0
  __m128i v23; // xmm6
  __int64 v24; // rdx
  unsigned __int16 v25; // cx
  __int32 v26; // r15d
  int v27; // ebx
  bool v28; // zf
  int v29; // r13d
  int v30; // esi
  char v31; // r14
  int v32; // r14d
  char v33; // si
  char v34; // di
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  __int16 v38; // cx
  unsigned __int16 v39; // r10
  char v40; // r15
  char v41; // di
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  const struct tagWND *v45; // r15
  __int64 v46; // rdx
  char v47; // di
  char v48; // bl
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  int v52; // ebx
  INT v53; // r15d
  INT v54; // edi
  INT v55; // eax
  bool v56; // di
  char v57; // bl
  __int64 v58; // rax
  INT v59; // edx
  int v60; // r8d
  __int64 v61; // r9
  INT v62; // r15d
  __m128i v63; // xmm6
  int WindowBordersWithDpiAwareness; // eax
  char v65; // r15
  char v66; // di
  char v67; // si
  __int32 v68; // ebx
  char v69; // r14
  bool v70; // r13
  __int64 v71; // rax
  int v72; // r8d
  int v73; // edx
  __m128i *result; // rax
  __int64 WindowMargins; // rax
  int v76; // r8d
  __int32 v77; // ebx
  int v78; // edi
  int v79; // esi
  int v80; // r14d
  __int32 v81; // r13d
  __int64 v82; // rdx
  int v83; // r11d
  int v84; // r15d
  int v85; // r13d
  int v86; // ecx
  __int64 v87; // r8
  char v88; // al
  __int64 v89; // rax
  int v90; // r8d
  int v91; // edx
  unsigned __int64 v92; // rdx
  char v93; // al
  char v94; // si
  __int64 v95; // rax
  int v96; // edx
  int v97; // r8d
  char v98; // al
  char v99; // r13
  __int64 v100; // rax
  int v101; // edx
  int v102; // r8d
  char v103; // r13
  char v104; // r14
  __int64 v105; // rax
  int v106; // r8d
  int v107; // edx
  char v108; // r13
  char v109; // r15
  __int64 v110; // rax
  int v111; // r8d
  int v112; // edx
  __int64 v113; // rax
  int v114; // edi
  int v115; // r10d
  int v116; // ebx
  int v117; // r9d
  int v118; // edx
  int v119; // r8d
  bool v120; // bl
  __int64 v121; // rax
  int v122; // r8d
  int v123; // edx
  int v124; // [rsp+28h] [rbp-E0h]
  char v125; // [rsp+88h] [rbp-80h]
  char v126; // [rsp+88h] [rbp-80h]
  unsigned __int16 v127; // [rsp+8Ch] [rbp-7Ch]
  INT v128; // [rsp+8Ch] [rbp-7Ch]
  char v129; // [rsp+8Ch] [rbp-7Ch]
  char v130; // [rsp+8Ch] [rbp-7Ch]
  char v131; // [rsp+8Ch] [rbp-7Ch]
  int v132; // [rsp+90h] [rbp-78h]
  __int16 WindowDpiLastNotify; // [rsp+94h] [rbp-74h]
  INT v134; // [rsp+94h] [rbp-74h]
  unsigned int v135; // [rsp+94h] [rbp-74h]
  __int32 v136; // [rsp+98h] [rbp-70h]
  bool v138[16]; // [rsp+B8h] [rbp-50h] BYREF
  __m128i *v139; // [rsp+C8h] [rbp-40h]
  __m128i *v140; // [rsp+D0h] [rbp-38h]
  __m128i *v141; // [rsp+D8h] [rbp-30h]
  __m128i v142; // [rsp+E8h] [rbp-20h]
  __m128i v143; // [rsp+F8h] [rbp-10h] BYREF

  v8 = a3;
  v9 = a7;
  v10 = a2;
  v141 = a1;
  v140 = a4;
  v139 = a3;
  v11 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v12 = 0;
  }
  v125 = v12;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v13 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v13 = 0;
  }
  if ( v12 || v13 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v15) = v125;
    LOBYTE(v16) = v13;
    WPP_RECORDER_AND_TRACE_SF_qdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v16,
      *(_QWORD *)(UserSessionState + 69416));
    v8 = v139;
    v9 = a7;
    v10 = a2;
  }
  v17 = *(_DWORD *)(*((_QWORD *)v10 + 5) + 288LL) >> 8;
  LOWORD(v17) = v17 & 0x1FF;
  *(_OWORD *)v138 = *(_OWORD *)CalculateLogicalMonitorRect(
                                 (unsigned int)v138,
                                 (int)v9 + 8,
                                 *(unsigned __int16 *)(v9 + 40),
                                 v17,
                                 *(_WORD *)(v9 + 64));
  WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v10);
  v20 = W32GetUserSessionState(v19, v18);
  Prop = GetProp((__int64)v10, *(unsigned __int16 *)(v20 + 41398), 1u);
  if ( Prop && HasValidCheckpointPosition(v10) )
    v22 = *(__m128i *)(Prop + 20);
  else
    v22 = *(__m128i *)(*((_QWORD *)v10 + 5) + 88LL);
  v23 = *v8;
  v24 = *((_QWORD *)v10 + 5);
  v25 = *(_WORD *)(v9 + 40);
  v142 = v22;
  v26 = v22.m128i_i32[2] - v22.m128i_i32[0];
  v27 = v22.m128i_i32[3] - v22.m128i_i32[1];
  v132 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 4));
  v28 = (*(_BYTE *)(v24 + 30) & 4) == 0;
  v127 = v25;
  v143 = v23;
  v29 = _mm_cvtsi128_si32(v23);
  if ( v28 )
  {
    v30 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 8));
    v31 = v30 - v29;
    if ( v30 - v29 == v26 && _mm_srli_si128(v23, 8).m128i_i32[1] - v23.m128i_i32[1] == v27 )
    {
      v32 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 12));
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v33 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v33 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v34 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v34 = 0;
      }
      if ( v33 || v34 )
      {
        v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
        LOBYTE(v36) = v34;
        LOBYTE(v37) = v33;
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v37,
          v36,
          *(_QWORD *)(v35 + 69416),
          5,
          4,
          14,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v31,
          v143.m128i_i8[12] - v132,
          v26,
          v27);
      }
      v30 = v26 + v29;
      v32 = v27 + v132;
      v143.m128i_i32[3] = v27 + v132;
      v143.m128i_i32[2] = v26 + v29;
      v23.m128i_i64[0] = v143.m128i_i64[0];
      v24 = *((_QWORD *)a2 + 5);
    }
    v38 = WindowDpiLastNotify;
    v127 = WindowDpiLastNotify;
  }
  else
  {
    v38 = WindowDpiLastNotify;
    v30 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 8));
    v32 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 12));
  }
  v39 = a6;
  if ( (*(_DWORD *)(v24 + 288) & 0xF) != 2 )
    goto LABEL_71;
  if ( v38 == a6 )
  {
LABEL_57:
    v53 = v127;
    if ( v127 != v39 )
    {
      v54 = v39;
      v128 = EngMulDiv(v30 - v29, v39, v127);
      v55 = EngMulDiv(v32 - v132, v54, v53);
      v134 = v55;
      v56 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v57 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v57 = 0;
      }
      if ( v56 || v57 )
      {
        v58 = W32GetUserSessionState(0LL, *(_QWORD *)&WPP_GLOBAL_Control);
        v59 = v134;
        LOBYTE(v60) = v57;
        v61 = *(_QWORD *)(v58 + 69416);
        LOBYTE(v58) = v53;
        v62 = v128;
        LOBYTE(v59) = v56;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v59,
          v60,
          v61,
          5,
          4,
          17,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v58,
          v30 - v29,
          v32 - v132,
          a6,
          v128,
          v134);
        v55 = v134;
      }
      else
      {
        v62 = v128;
      }
      v52 = v132;
      v30 = v62 + v29;
      v39 = a6;
      v32 = v55 + v132;
      goto LABEL_72;
    }
LABEL_71:
    v52 = v132;
LABEL_72:
    v45 = a2;
    goto LABEL_73;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v40 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v41 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v41 = 0;
  }
  if ( v40 || v41 )
  {
    v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 2LL);
    LOBYTE(v43) = v41;
    LOBYTE(v44) = v40;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v44,
      v43,
      *(_QWORD *)(v42 + 69416),
      5,
      4,
      15,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      WindowDpiLastNotify,
      a6);
  }
  v45 = a2;
  v142.m128i_i64[0] = v23.m128i_i64[0];
  v142.m128i_i32[2] = v29 + v22.m128i_i32[2] - v22.m128i_i32[0];
  v142.m128i_i32[3] = v27 + v23.m128i_i32[1];
  if ( !(unsigned int)xxxAppAdjustDpiCandidateRect(a2) )
  {
    v39 = a6;
    goto LABEL_57;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v47 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v48 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v48 = 0;
  }
  if ( v47 || v48 )
  {
    v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v46);
    LOBYTE(v50) = v48;
    LOBYTE(v51) = v47;
    WPP_RECORDER_AND_TRACE_SF_dddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v51,
      v50,
      *(_QWORD *)(v49 + 69416),
      5,
      4,
      16,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v30 - v29,
      v32 - v132,
      v142.m128i_i8[8] - v142.m128i_i8[0],
      v142.m128i_i8[12] - v142.m128i_i8[4]);
  }
  v30 = v29 + v142.m128i_i32[2] - v142.m128i_i32[0];
  v52 = v132;
  v32 = v132 + v142.m128i_i32[3] - v142.m128i_i32[1];
  v39 = a6;
LABEL_73:
  if ( v139->m128i_i32[0] <= *(int *)v138
    && v139->m128i_i32[1] <= *(int *)&v138[4]
    && v139->m128i_i32[2] >= *(int *)&v138[8]
    && v139->m128i_i32[3] >= *(int *)&v138[12] )
  {
    v142 = *v140;
    v63 = v142;
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(v45, *(unsigned int *)&v138[8], 0, 0);
    v65 = WindowBordersWithDpiAwareness;
    v66 = WindowBordersWithDpiAwareness + v142.m128i_i8[8];
    v67 = v142.m128i_i8[4] - WindowBordersWithDpiAwareness;
    v142.m128i_i32[2] += WindowBordersWithDpiAwareness;
    v142.m128i_i32[1] -= WindowBordersWithDpiAwareness;
    v68 = _mm_cvtsi128_si32(v63) - WindowBordersWithDpiAwareness;
    v69 = WindowBordersWithDpiAwareness + v142.m128i_i8[12];
    v142.m128i_i32[0] = v68;
    v142.m128i_i32[3] += WindowBordersWithDpiAwareness;
    v70 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v11 = 0;
    }
    if ( v70 || v11 )
    {
      v71 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v72) = v11;
      LOBYTE(v73) = v70;
      WPP_RECORDER_AND_TRACE_SF_ddddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v73,
        v72,
        *(_QWORD *)(v71 + 69416),
        v124,
        4,
        18,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v65,
        v68,
        v67,
        v66,
        v69,
        v66 - v68,
        v69 - v67);
    }
    result = v141;
    *v141 = v142;
    return result;
  }
  WindowMargins = WindowMargins::_anonymous_namespace_::GetWindowMargins(v45, v39);
  v76 = *(_DWORD *)&v138[12] - *(_DWORD *)&v138[4];
  v77 = SWORD2(WindowMargins) + v52;
  v78 = v29 + (__int16)WindowMargins;
  v143.m128i_i64[0] = __PAIR64__(v77, v78);
  v79 = v30 - SWORD1(WindowMargins);
  v80 = v32 - SHIWORD(WindowMargins);
  v143.m128i_i64[1] = __PAIR64__(v80, v79);
  v81 = v140->m128i_i32[1];
  v82 = (unsigned int)(v140->m128i_i32[2] - v140->m128i_i32[0]);
  v83 = v140->m128i_i32[3] - v81;
  v84 = v140->m128i_i32[0] - *(_DWORD *)v138;
  v85 = v81 - *(_DWORD *)&v138[4];
  if ( (_DWORD)v82 != *(_DWORD *)&v138[8] - *(_DWORD *)v138 || v83 != v76 )
  {
    v86 = (v83 - v76) * (v77 - *(_DWORD *)&v138[4]);
    v84 += (((int)v82 - (*(_DWORD *)&v138[8] - *(_DWORD *)v138)) * (v78 - *(_DWORD *)v138)
          + (*(_DWORD *)&v138[8] - *(_DWORD *)v138) / 2)
         / (*(_DWORD *)&v138[8] - *(_DWORD *)v138);
    v82 = (unsigned int)((v86 + v76 / 2) >> 31);
    LODWORD(v82) = (v86 + v76 / 2) % v76;
    v85 += (v86 + v76 / 2) / v76;
  }
  v87 = 0LL;
  if ( v84 || v85 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (LOBYTE(v82) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      LOBYTE(v82) = 0;
    }
    v129 = v82;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v88 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v88 = 0;
    }
    v126 = v88;
    if ( (_BYTE)v82 || v88 )
    {
      v89 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v82);
      LOBYTE(v90) = v126;
      LOBYTE(v91) = v129;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v91,
        v90,
        *(_QWORD *)(v89 + 69416),
        5,
        4,
        19,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v84,
        v85);
    }
    v78 += v84;
    v79 += v84;
    v80 += v85;
    v143.m128i_i32[0] = v78;
    v77 += v85;
    *(__int64 *)((char *)v143.m128i_i64 + 4) = __PAIR64__(v79, v77);
    v143.m128i_i32[3] = v80;
  }
  if ( (a8 & 1) != 0 )
  {
    LOBYTE(v87) = (*(_BYTE *)(*((_QWORD *)a2 + 5) + 30LL) & 4) != 0;
    anonymous_namespace_::FitRectToWorkArea(&v143, a5, v87);
    v80 = v143.m128i_i32[3];
    v79 = v143.m128i_i32[2];
    v77 = v143.m128i_i32[1];
    v78 = v143.m128i_i32[0];
  }
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 30LL) & 4) == 0 )
    goto LABEL_160;
  v92 = (unsigned int)(v79 - v78);
  v135 = v79 - v78;
  v136 = v80 - v77;
  if ( (a8 & 2) == 0 )
  {
    if ( (a8 & 8) == 0 )
      goto LABEL_134;
LABEL_122:
    v79 = a5->m128i_i32[2];
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v98 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v98 = 0;
    }
    v92 = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
    v131 = v98;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v99 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v99 = 0;
    }
    if ( v98 || v99 )
    {
      v100 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v101) = v131;
      LOBYTE(v102) = v99;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v101,
        v102,
        *(_QWORD *)(v100 + 69416),
        5,
        4,
        21,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    if ( (a8 & 2) == 0 )
      v78 = v79 - v135;
    goto LABEL_134;
  }
  v78 = a5->m128i_i32[0];
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v93 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v93 = 0;
  }
  v130 = v93;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v94 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v94 = 0;
  }
  if ( v93 || v94 )
  {
    v95 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v92);
    LOBYTE(v96) = v130;
    LOBYTE(v97) = v94;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v96,
      v97,
      *(_QWORD *)(v95 + 69416),
      5,
      4,
      20,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    v92 = v135;
  }
  if ( (a8 & 8) != 0 )
    goto LABEL_122;
  v79 = v92 + v78;
LABEL_134:
  if ( (a8 & 4) != 0 )
  {
    v77 = a5->m128i_i32[1];
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v103 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v103 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v104 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v104 = 0;
    }
    if ( v103 || v104 )
    {
      v105 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v92);
      LOBYTE(v106) = v104;
      LOBYTE(v107) = v103;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v107,
        v106,
        *(_QWORD *)(v105 + 69416),
        5,
        4,
        22,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    if ( (a8 & 0x10) == 0 )
    {
      v80 = v77 + v136;
      goto LABEL_160;
    }
LABEL_148:
    v80 = a5->m128i_i32[3];
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v108 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v108 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v109 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v109 = 0;
    }
    if ( v108 || v109 )
    {
      v110 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v92);
      LOBYTE(v111) = v109;
      LOBYTE(v112) = v108;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v112,
        v111,
        *(_QWORD *)(v110 + 69416),
        5,
        4,
        23,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    if ( (a8 & 4) == 0 )
      v77 = v80 - v136;
    goto LABEL_160;
  }
  if ( (a8 & 0x10) != 0 )
    goto LABEL_148;
LABEL_160:
  v113 = WindowMargins::_anonymous_namespace_::GetWindowMargins(a2, a6);
  v114 = v78 - (__int16)v113;
  v115 = v114;
  v116 = v77 - SWORD2(v113);
  v117 = v116;
  v118 = v80 + SHIWORD(v113);
  v119 = v79 + SWORD1(v113);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 30LL) & 4) != 0
    && v114 <= a5->m128i_i32[0]
    && v116 <= a5->m128i_i32[1]
    && v79 + SWORD1(v113) >= a5->m128i_i32[2]
    && v80 + SHIWORD(v113) >= a5->m128i_i32[3] )
  {
    v120 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v11 = 0;
    }
    if ( v120 || v11 )
    {
      v121 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v122) = v11;
      LOBYTE(v123) = v120;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v123,
        v122,
        *(_QWORD *)(v121 + 69416),
        5,
        4,
        24,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    v119 = a5->m128i_i32[2] - 1;
    v118 = _mm_cvtsi128_si32(_mm_srli_si128(*a5, 12)) - 1;
    v117 = _mm_cvtsi128_si32(_mm_srli_si128(*a5, 4)) + 1;
    v115 = _mm_cvtsi128_si32(*a5) + 1;
  }
  result = v141;
  v141->m128i_i32[0] = v115;
  result->m128i_i32[1] = v117;
  result->m128i_i32[2] = v119;
  result->m128i_i32[3] = v118;
  return result;
}
