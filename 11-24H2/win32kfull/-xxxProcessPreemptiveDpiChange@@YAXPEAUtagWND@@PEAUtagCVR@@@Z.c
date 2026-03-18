/*
 * XREFs of ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x14022BB34
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14022B0AC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14008BA78 (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x14008CEB0 (xxxNotifyMonitorChanged.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140269664 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddq @ 0x14026FB8C (WPP_RECORDER_AND_TRACE_SF_ddddq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddds @ 0x14026FCC8 (WPP_RECORDER_AND_TRACE_SF_qddddddds.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxProcessPreemptiveDpiChange(struct tagWND *a1, struct tagCVR *a2)
{
  struct tagWND *v3; // rdi
  __int64 v4; // r9
  __int16 v5; // r10
  unsigned int v6; // r11d
  char v7; // al
  char v8; // si
  LONG v9; // r14d
  LONG v10; // r15d
  LONG v11; // eax
  __int64 v12; // rdx
  struct tagMONITOR *v13; // rbx
  bool v14; // r14
  __int64 v15; // rbx
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  bool v20; // r14
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdx
  __int16 WindowDpiLastNotify; // ax
  __int64 v26; // rdx
  __int16 v27; // r8
  char v28; // bl
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rcx
  bool v33; // al
  __int64 v34; // rax
  LONG right; // r8d
  LONG v36; // edx
  __int64 v37; // rdx
  bool v38; // r14
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rdx
  unsigned __int64 v45; // xmm0_8
  bool v46; // bl
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  bool v50; // bl
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  bool v54; // di
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  bool v58; // [rsp+90h] [rbp-29h]
  bool v59; // [rsp+91h] [rbp-28h]
  LONG top; // [rsp+94h] [rbp-25h]
  char v62; // [rsp+A0h] [rbp-19h]
  struct tagRECT v63; // [rsp+A8h] [rbp-11h] BYREF
  __m128i v64; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v65; // [rsp+C8h] [rbp+Fh]

  v3 = a1;
  if ( (*((_DWORD *)a2 + 8) & 0x80000) == 0 )
    return;
  if ( (*((_DWORD *)a2 + 39) & 0x20) == 0 )
    return;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
    return;
  if ( (*((_DWORD *)a1 + 95) & 0x100000) == 0 )
    return;
  if ( !IsTopLevelWindow((__int64)a1) )
    return;
  v7 = *(_BYTE *)(v4 + 31);
  v8 = 1;
  if ( (v7 & 1) != 0 || (v7 & 0x20) != 0 )
    return;
  v9 = *((_DWORD *)a2 + 4);
  v10 = *((_DWORD *)a2 + 5);
  v63.right = v9 + *((_DWORD *)a2 + 6);
  v11 = v10 + *((_DWORD *)a2 + 7);
  v63.left = v9;
  top = v10;
  v63.top = v10;
  v63.bottom = v11;
  if ( (v5 & 0x200) != 0 )
  {
    v64.m128i_i64[0] = ValidateHmonitorNoRip(*((_QWORD *)a2 + 16));
    v13 = (struct tagMONITOR *)v64.m128i_i64[0];
    if ( !v64.m128i_i64[0] )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v8 = 0;
      }
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v15 = *(_QWORD *)v3;
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
        LOBYTE(v17) = v14;
        LOBYTE(v18) = v8;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v18,
          v17,
          *(_QWORD *)(UserSessionState + 69416),
          3,
          4,
          10,
          (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
          v15);
      }
      return;
    }
    goto LABEL_26;
  }
  v64.m128i_i64[0] = MonitorFromRect(&v63.left, 0, v6);
  v13 = (struct tagMONITOR *)v64.m128i_i64[0];
  if ( v64.m128i_i64[0] )
  {
    top = v63.top;
LABEL_26:
    v24 = *((_QWORD *)v3 + 5);
    if ( *(_QWORD *)(v24 + 256) != *(_QWORD *)v13 || *(_WORD *)(v24 + 286) )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v3);
      if ( v27 != WindowDpiLastNotify
        || *(_QWORD *)(v26 + 88) == *(_QWORD *)&v63.left && *(_QWORD *)(v26 + 96) == *(_QWORD *)&v63.right )
      {
        v32 = *(_QWORD *)&WPP_GLOBAL_Control;
        v33 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v58 = v33;
        v59 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v32) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v34 = W32GetUserSessionState(v32, v26);
          right = v63.right;
          v36 = top;
          LOBYTE(right) = v59;
          LOBYTE(v36) = v58;
          WPP_RECORDER_AND_TRACE_SF_qddddddds(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v36,
            right,
            *(_QWORD *)(v34 + 69416));
          v3 = a1;
          v13 = (struct tagMONITOR *)v64.m128i_i64[0];
        }
        v64.m128i_i64[0] = 0LL;
        if ( (unsigned int)UpdateMonitorForWindowAndChildren((struct tagWND **)v3, v13, &v64, 0) )
        {
          v65 = *(_OWORD *)(*((_QWORD *)v3 + 5) + 88LL);
          xxxNotifyMonitorChanged(v3, &v63, (struct tagBWL *)v64.m128i_i64[0], 0);
          v64 = *(__m128i *)(*((_QWORD *)v3 + 5) + 88LL);
          v62 = v64.m128i_i8[0];
          v45 = _mm_srli_si128(v64, 8).m128i_u64[0];
          if ( v64.m128i_i64[0] == *(_QWORD *)&v63.left && v45 == *(_QWORD *)&v63.right )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v8 = 0;
            }
            v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v47 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v44);
              LOBYTE(v48) = v46;
              LOBYTE(v49) = v8;
              WPP_RECORDER_AND_TRACE_SF_(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v49,
                v48,
                *(_QWORD *)(v47 + 69416),
                4,
                4,
                15,
                (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids);
            }
            *((_DWORD *)a2 + 8) |= 0x403u;
          }
          else if ( __PAIR128__(v45, v64.m128i_u64[0]) == v65 )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v8 = 0;
            }
            v50 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v51 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v44);
              LOBYTE(v52) = v50;
              LOBYTE(v53) = v8;
              WPP_RECORDER_AND_TRACE_SF_(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v53,
                v52,
                *(_QWORD *)(v51 + 69416),
                4,
                4,
                16,
                (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids);
            }
          }
          else
          {
            *((_DWORD *)a2 + 8) |= 0x403u;
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
            {
              v8 = 0;
            }
            v54 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v55 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v44);
              LOBYTE(v56) = v54;
              LOBYTE(v57) = v8;
              WPP_RECORDER_AND_TRACE_SF_dddd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v57,
                v56,
                *(_QWORD *)(v55 + 69416),
                3,
                4,
                17,
                (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
                v62,
                v64.m128i_i8[4],
                v45,
                v64.m128i_i8[12]);
            }
          }
        }
        else
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
          {
            v8 = 0;
          }
          v38 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v39 = *(_QWORD *)v13;
            v40 = *(_QWORD *)v3;
            v41 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v37);
            LOBYTE(v42) = v38;
            LOBYTE(v43) = v8;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v43,
              v42,
              *(_QWORD *)(v41 + 69416),
              2,
              4,
              14,
              (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
              v40,
              v39);
          }
        }
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v28 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
        {
          v8 = 0;
        }
        if ( v28 || v8 )
        {
          v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
          LOBYTE(v30) = v8;
          LOBYTE(v31) = v28;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v31,
            v30,
            *(_QWORD *)(v29 + 69416),
            5,
            4,
            12,
            (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids);
        }
      }
    }
    return;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
  {
    v8 = 0;
  }
  v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v21 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
    LOBYTE(v22) = v20;
    LOBYTE(v23) = v8;
    WPP_RECORDER_AND_TRACE_SF_ddddq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v23,
      v22,
      *(_QWORD *)(v21 + 69416));
  }
}
