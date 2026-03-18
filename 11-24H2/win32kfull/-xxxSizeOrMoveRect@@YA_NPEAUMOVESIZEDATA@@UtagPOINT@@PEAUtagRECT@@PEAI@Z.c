/*
 * XREFs of ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402A9F8C
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14024C350 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ?SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@@Z @ 0x14006C398 (-SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z @ 0x1401BE48C (-MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x140221584 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x14024C8C0 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?GetRestoreAroundCursorOffset@@YAJJJJ@Z @ 0x14026A0C0 (-GetRestoreAroundCursorOffset@@YAJJJJ@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402A5B7C (-HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THR.c)
 *     ?UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z @ 0x1402A6E28 (-UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z.c)
 *     ?RecomputeMouseOffset@MOVESIZEDATA@@QEAAXAEBUtagRECT@@AEBUtagPOINT@@@Z @ 0x1402DC468 (-RecomputeMouseOffset@MOVESIZEDATA@@QEAAXAEBUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     ?RecomputeMouseOffsetOld@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x1402DC5C4 (-RecomputeMouseOffsetOld@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall xxxSizeOrMoveRect(struct MOVESIZEDATA *this, struct tagPOINT a2, struct tagRECT *a3, unsigned int *a4)
{
  unsigned int v6; // r8d
  LONG v9; // r14d
  char v10; // di
  char v11; // bl
  int v12; // edx
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rcx
  unsigned int v18; // edi
  int v19; // r8d
  int v20; // edx
  char v21; // r11
  unsigned int v22; // eax
  __int64 v23; // rdx
  bool v24; // zf
  bool v25; // r10
  int v26; // eax
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  LONG x; // ebx
  LONG right; // ecx
  __m128i v31; // xmm0
  struct tagRECT v32; // xmm1
  struct tagPOINT v33; // rax
  int v34; // r8d
  int v35; // edx
  int RestoreAroundCursorOffset; // eax
  LONG top; // r8d
  int v38; // ecx
  int v39; // eax
  LONG left; // ecx
  __int64 v41; // rdx
  int v42; // ebx
  int v43; // r14d
  __int64 v44; // rcx
  char v45; // al
  __int64 v46; // rax
  __int64 v47; // rcx
  char v48; // al
  LONG bottom; // edi
  LONG v50; // r14d
  LONG v51; // ebx
  LONG v52; // esi
  __int64 v53; // rax
  __int64 v54; // rdx
  int v55; // r8d
  __int64 v56; // rcx
  char v57; // al
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  __int64 v61; // rcx
  int v62; // eax
  char v63; // r14
  bool v64; // bl
  __int64 v65; // rax
  int v66; // r8d
  int v67; // edx
  int v68; // eax
  char v69; // r8
  __int64 v70; // rdx
  char v71; // bl
  bool v72; // di
  __int64 v73; // rax
  int v74; // r8d
  int v75; // edx
  __int16 v76; // [rsp+30h] [rbp-D0h]
  __int64 v77; // [rsp+40h] [rbp-C0h]
  __int64 v78; // [rsp+48h] [rbp-B8h]
  __int64 v79; // [rsp+50h] [rbp-B0h]
  __int64 v80; // [rsp+58h] [rbp-A8h]
  __int64 v81; // [rsp+60h] [rbp-A0h]
  __int64 v82; // [rsp+68h] [rbp-98h]
  char v83; // [rsp+80h] [rbp-80h]
  char v84; // [rsp+80h] [rbp-80h]
  char v85; // [rsp+80h] [rbp-80h]
  char v86; // [rsp+81h] [rbp-7Fh]
  char v87; // [rsp+81h] [rbp-7Fh]
  bool v88; // [rsp+81h] [rbp-7Fh]
  int v89; // [rsp+84h] [rbp-7Ch] BYREF
  bool v90; // [rsp+88h] [rbp-78h]
  bool v91; // [rsp+89h] [rbp-77h]
  int v92; // [rsp+8Ch] [rbp-74h]
  int v93; // [rsp+90h] [rbp-70h]
  struct tagPOINT v94; // [rsp+98h] [rbp-68h] BYREF
  struct tagRECT *v95; // [rsp+A0h] [rbp-60h]
  struct tagPOINT v96; // [rsp+A8h] [rbp-58h]
  int v97; // [rsp+B0h] [rbp-50h]
  int v98; // [rsp+B4h] [rbp-4Ch]
  __int64 v99; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v100; // [rsp+C0h] [rbp-40h]
  __int64 v101; // [rsp+C8h] [rbp-38h]
  unsigned int *v102; // [rsp+D0h] [rbp-30h]
  struct tagRECT v103; // [rsp+D8h] [rbp-28h]
  struct tagMONITOR *v104[3]; // [rsp+E8h] [rbp-18h] BYREF
  int v105; // [rsp+100h] [rbp+0h]
  char v106; // [rsp+104h] [rbp+4h]
  __int128 v107; // [rsp+108h] [rbp+8h]

  v95 = a3;
  *a4 = 534;
  v6 = *((_DWORD *)this + 50);
  v102 = a4;
  v96 = a2;
  if ( (v6 & 0x200) == 0 )
    return MoveDragRect(this, a2, 0, a3);
  v9 = v96.y - *((_DWORD *)this + 43);
  v94.x = a2.x - *((_DWORD *)this + 42);
  v94.y = v9;
  if ( __PAIR64__(v9, v94.x) == *(_QWORD *)((char *)this + 252) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v10 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v11 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v11 = 0;
    }
    if ( !v10 && !v11 )
      return 0;
    v14 = *(_QWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(
                        *(_QWORD *)&WPP_GLOBAL_Control,
                        a2)
                    + 69416);
    v76 = 45;
LABEL_14:
    LOBYTE(v13) = v11;
    LOBYTE(v12) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v13,
      v14,
      5,
      1,
      v76,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
    return 0;
  }
  v15 = *(_QWORD *)((char *)this + 260);
  *(struct tagPOINT *)((char *)this + 252) = v94;
  v16 = *((_DWORD *)this + 44);
  v99 = 0LL;
  v89 = 0;
  HitTargetAndMonitorFromPoint(v16, v15, (v6 >> 11) & 7, &v99, &v89);
  v18 = v89;
  v93 = v89;
  if ( v89 == 3 )
  {
    v89 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3738);
  }
  v19 = *((_DWORD *)this + 62);
  v89 = v19;
  if ( v19 == 3 )
  {
    v89 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3739);
    v19 = *((_DWORD *)this + 62);
    v89 = v19;
  }
  v20 = *((_DWORD *)this + 50);
  v21 = 0x80;
  if ( (v20 & 0x80u) != 0 )
  {
    v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    if ( (*(_BYTE *)(v17 + 31) & 1) != 0 )
    {
      if ( v18 )
        v18 = 4;
      v93 = v18;
    }
  }
  LOBYTE(v17) = v18 != v19;
  v90 = v18 != v19;
  v22 = v20 & 0xF7FFFFFF ^ (v20 | ((v18 != v19) << 27)) & 0x8000000;
  v23 = v99;
  v24 = v99 == *((_QWORD *)this + 30);
  *((_DWORD *)this + 50) = v22;
  v91 = !v24;
  v25 = (v22 & 0x80) != 0 && (v18 == 4 || v18 != v19 && (v22 & 0x10000000) == 0 && (v22 & 0x20) != 0);
  *((_DWORD *)this + 62) = v18;
  *((_QWORD *)this + 30) = v23;
  if ( v18 != v19 || !v24 )
  {
    UpdateDragThresholdForMove(this, v18, v19);
    v19 = v89;
  }
  v26 = *((_DWORD *)this + 50);
  if ( v25 )
  {
    *((_DWORD *)this + 50) = v26 & 0xFFFFFF7F;
    UserSessionState = W32GetUserSessionState(v17, v23);
    Prop = GetProp(*((_QWORD *)this + 2), *(unsigned __int16 *)(UserSessionState + 41398), 1u);
    x = v94.x;
    right = a3->right;
    v31 = _mm_loadl_epi64((const __m128i *)(Prop + 28));
    v32 = *(struct tagRECT *)(Prop + 20);
    v33 = *(struct tagPOINT *)(Prop + 20);
    v100 = v31.m128i_i64[0];
    v96 = v33;
    v34 = _mm_cvtsi128_si32(v31) - v33.x;
    v33.x = a3->left;
    v35 = v94.x - a3->left;
    v98 = v34;
    v103 = v32;
    RestoreAroundCursorOffset = GetRestoreAroundCursorOffset(right - v33.x, v35, v34);
    top = a3->top;
    v92 = RestoreAroundCursorOffset;
    v38 = a3->bottom - top;
    v101 = (unsigned int)(HIDWORD(v100) - v96.y);
    v39 = GetRestoreAroundCursorOffset(v38, v9 - top, HIDWORD(v100) - v96.y);
    *a3 = v32;
    left = a3->left;
    v41 = (unsigned int)a3->top;
    v42 = x - a3->left - v92;
    v43 = v9 - v39 - v41;
    a3->right += v42;
    a3->bottom += v43;
    v97 = v39;
    a3->left = v42 + left;
    a3->top = v43 + v41;
    v44 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v45 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v45 = 0;
    }
    v83 = v45;
    v86 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v45 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v44) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v46 = W32GetUserSessionState(v44, v41);
      WPP_RECORDER_AND_TRACE_SF_dddddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v83,
        v86,
        *(_QWORD *)(v46 + 69416),
        4u,
        1u,
        0x2Eu,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
        v96.x,
        v103.top,
        v100,
        v103.bottom,
        v98,
        v101,
        v92,
        v97);
    }
    v47 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v48 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v48 = 0;
    }
    v84 = v48;
    v87 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v48 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      bottom = v95->bottom;
      v50 = v95->top;
      v51 = v95->right;
      v52 = v95->left;
      LOBYTE(v47) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v53 = W32GetUserSessionState(v47, v41);
      LODWORD(v82) = bottom - v50;
      LODWORD(v81) = v51 - v52;
      LODWORD(v80) = bottom;
      LODWORD(v79) = v51;
      LODWORD(v78) = v50;
      LODWORD(v77) = v52;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v84,
        v87,
        *(_QWORD *)(v53 + 69416),
        4u,
        1u,
        0x2Fu,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
      v18 = v93;
    }
    if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
    {
      v62 = *((_DWORD *)this + 50);
      if ( (v62 & 0x20) != 0 )
        *((_DWORD *)this + 50) = v62 | 0x40000000;
      MOVESIZEDATA::RecomputeMouseOffset(this, v95, &v94);
    }
    else
    {
      v54 = *((unsigned int *)this + 50);
      v55 = *((_DWORD *)this + 50) & 0x20;
      if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 384LL) & 0x10) != 0 )
      {
        if ( v55 )
          *((_DWORD *)this + 50) = v54 | 0x40000000;
        MOVESIZEDATA::RecomputeMouseOffsetOld(this, v95);
      }
      else if ( v55 )
      {
        v56 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v57 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v57 = 0;
        }
        v85 = v57;
        v88 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v57 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v56) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v58 = W32GetUserSessionState(v56, v54);
          LOBYTE(v59) = v88;
          LOBYTE(v60) = v85;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v60,
            v59,
            *(_QWORD *)(v58 + 69416),
            4,
            1,
            48,
            (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
        }
        v104[1] = (struct tagMONITOR *)v95;
        v104[0] = 0LL;
        v104[2] = 0LL;
        *v102 = 532;
        v61 = *((_QWORD *)this + 2);
        v105 = 0;
        v106 = 0;
        v107 = 0LL;
        xxxMinMaximizeEx(v61, 9u, 12, v104);
      }
    }
    if ( (*((_DWORD *)this + 50) & 0x40000) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v63 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v63 = 0;
      }
      v64 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v63 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v65 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v54);
        LOBYTE(v66) = v64;
        LOBYTE(v67) = v63;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v67,
          v66,
          *(_QWORD *)(v65 + 69416),
          4,
          1,
          51,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
      }
      *((_DWORD *)this + 50) &= 0xFFFBFDFF;
    }
  }
  else
  {
    if ( (v26 & 0x8000000) == 0 && ((unsigned __int8)v26 & (unsigned __int8)v21) != 0 && (v26 & 0x10000000) == 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v10 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v11 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v11 = 0;
      }
      if ( !v10 && !v11 )
        return 0;
      v14 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23) + 69416);
      v76 = 49;
      goto LABEL_14;
    }
    v69 = 0;
    if ( !v18 && !v19 && (v26 & 0x10000000) != 0 )
    {
      v68 = *((_DWORD *)this + 50) & 0x3800;
      if ( v68 == 0x2000 || v68 == 10240 )
        v69 = 1;
    }
    if ( !MoveDragRect(this, a2, v69, a3) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v71 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
      {
        v71 = 0;
      }
      v72 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v71 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v73 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v70);
        LOBYTE(v74) = v72;
        LOBYTE(v75) = v71;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v75,
          v74,
          *(_QWORD *)(v73 + 69416),
          3,
          1,
          50,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
      }
      return 0;
    }
  }
  if ( v90 || v91 || MOVESIZEDATA::SHData_NeedsArrangementCallout((__int64)this, v18) )
    xxxUpdateArrangeDataForMove((__int64)this, v99, v18, v89);
  return 1;
}
