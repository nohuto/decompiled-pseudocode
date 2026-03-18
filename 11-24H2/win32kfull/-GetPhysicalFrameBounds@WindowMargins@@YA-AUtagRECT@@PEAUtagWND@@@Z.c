/*
 * XREFs of ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEAUtagWND@@@Z @ 0x1402519A0
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1402974D0 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x140049924 (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140269664 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

struct tagRECT *__fastcall WindowMargins::GetPhysicalFrameBounds(
        WindowMargins *this,
        struct tagRECT *__return_ptr retstr,
        struct tagWND *a3)
{
  char v5; // si
  char v6; // bp
  char v7; // di
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  char v15; // r12
  char v16; // bp
  __int64 v17; // rax
  struct WindowMargins::CWindowMarginProp *v18; // rax
  __int64 v19; // rdx
  char v20; // di
  char v21; // bl
  __int16 v22; // r12
  __int16 v23; // r13
  __int16 v24; // bp
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  INT ScaledLogPixels; // ebx
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rax
  INT v37; // edi
  __int64 v38; // rcx
  bool v39; // di
  char v40; // bl
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  int v44; // ecx
  char v45; // bp
  __int64 v46; // rax
  __int64 v48; // [rsp+40h] [rbp-68h]
  __int64 v49; // [rsp+48h] [rbp-60h]
  __int64 v50; // [rsp+50h] [rbp-58h]
  __int64 v51; // [rsp+58h] [rbp-50h]
  __int64 v52; // [rsp+60h] [rbp-48h]
  __int64 v53; // [rsp+68h] [rbp-40h]
  __int16 v54; // [rsp+B0h] [rbp+8h]
  __int64 v55; // [rsp+B8h] [rbp+10h]
  __int64 v56; // [rsp+C0h] [rbp+18h] BYREF

  v5 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
    || (v6 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v6 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v7 = 0;
  }
  if ( v6 || v7 )
  {
    v8 = *(_QWORD *)&retstr->left;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, retstr);
    LOBYTE(v10) = v7;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      21,
      31,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
      v8);
  }
  *(_OWORD *)this = *(_OWORD *)(*(_QWORD *)&retstr[2].right + 88LL);
  v12 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)&retstr[2].right + 256LL));
  v13 = *(_QWORD *)&retstr[2].right;
  v56 = v12;
  LogicalToPhysicalDPIRect(this, this, *(unsigned int *)(v13 + 288), &v56);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
    || (v15 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v15 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v16 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v16 = 0;
  }
  if ( v15 || v16 )
  {
    v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
    LODWORD(v48) = *(_DWORD *)this;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v16,
      *(_QWORD *)(v17 + 69416),
      5u,
      0x15u,
      0x20u,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
      v48,
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 3),
      *(_DWORD *)this - *((_DWORD *)this + 2),
      *((_DWORD *)this + 3) - *((_DWORD *)this + 1));
  }
  v18 = WindowMargins::CWindowMarginProp::GetOrCreate((struct tagWND *)retstr, v14);
  if ( v18 )
  {
    v55 = *(_QWORD *)((char *)v18 + 44);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
      || (v20 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v20 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v21 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v21 = 0;
    }
    v22 = WORD2(*(_QWORD *)((char *)v18 + 44));
    v23 = WORD1(*(_QWORD *)((char *)v18 + 44));
    v24 = *(_QWORD *)((char *)v18 + 44);
    v54 = HIWORD(*(_QWORD *)((char *)v18 + 44));
    if ( v20 || v21 )
    {
      v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
      LOBYTE(v26) = v21;
      LOBYTE(v27) = v20;
      WPP_RECORDER_AND_TRACE_SF_dddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v27,
        v26,
        *(_QWORD *)(v25 + 69416),
        5,
        21,
        33,
        (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
        v55,
        SBYTE4(v55),
        SBYTE2(v55),
        SBYTE6(v55));
    }
    v28 = *(unsigned int *)(*(_QWORD *)&retstr[2].right + 288LL);
    LOBYTE(v28) = v28 & 0xF;
    if ( (_BYTE)v28 != 2 )
    {
      if ( PtiCurrent(v28, v19)
        && *((_QWORD *)PtiCurrent(v29, v19) + 62)
        && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v30, v19) + 62) + 8LL) + 64LL) & 1) != 0
        && (v31 = *(_QWORD *)&retstr[2].right, v32 = *(_DWORD *)(v31 + 288), (v32 & 0xF) == 0)
        && (v32 & 0x40000000) != 0 )
      {
        ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(*(unsigned __int16 *)(v31 + 284));
      }
      else
      {
        v34 = *(_QWORD *)&retstr[2].right;
        v35 = *(_DWORD *)(v34 + 288) & 0xF;
        if ( v35 == 3 )
        {
          ScaledLogPixels = (*(_DWORD *)(v34 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v34 + 232) & 0x400) != 0 )
        {
          ScaledLogPixels = GetWindowDpiLastNotify((__int64)retstr);
        }
        else if ( !v35
               && (v36 = *(_QWORD *)(*(_QWORD *)&retstr[1].left + 496LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v36 + 8) + 64LL) & 1) != 0 )
        {
          ScaledLogPixels = 96;
        }
        else
        {
          ScaledLogPixels = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&retstr[1].left + 464LL) + 272LL);
        }
      }
      v37 = *(unsigned __int16 *)(*(_QWORD *)(v56 + 40) + 60LL);
      if ( v37 != ScaledLogPixels )
      {
        v24 = EngMulDiv((__int16)v55, v37, ScaledLogPixels);
        v22 = EngMulDiv(SWORD2(v55), v37, ScaledLogPixels);
        v23 = EngMulDiv(SWORD1(v55), v37, ScaledLogPixels);
        v54 = EngMulDiv(SHIWORD(v55), v37, ScaledLogPixels);
        v19 = *(_QWORD *)&WPP_GLOBAL_Control;
        v39 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v40 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v40 = 0;
        }
        if ( v39 || v40 )
        {
          v41 = W32GetUserSessionState(v38, *(_QWORD *)&WPP_GLOBAL_Control);
          LOBYTE(v42) = v40;
          LOBYTE(v43) = v39;
          WPP_RECORDER_AND_TRACE_SF_dddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v43,
            v42,
            *(_QWORD *)(v41 + 69416),
            5,
            21,
            34,
            (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
            v24,
            v22,
            v23,
            v54);
        }
      }
    }
    v44 = *((_DWORD *)this + 2);
    *(_DWORD *)this += v24;
    *((_DWORD *)this + 1) += v22;
    *((_DWORD *)this + 3) -= v54;
    *((_DWORD *)this + 2) = v44 - v23;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
    || (v45 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v45 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v5 = 0;
  }
  if ( v45 || v5 )
  {
    v46 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
    LODWORD(v53) = *((_DWORD *)this + 3) - *((_DWORD *)this + 1);
    LODWORD(v52) = *(_DWORD *)this - *((_DWORD *)this + 2);
    LODWORD(v51) = *((_DWORD *)this + 3);
    LODWORD(v50) = *((_DWORD *)this + 2);
    LODWORD(v49) = *((_DWORD *)this + 1);
    LODWORD(v48) = *(_DWORD *)this;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v45,
      v5,
      *(_QWORD *)(v46 + 69416),
      5u,
      0x15u,
      0x23u,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  return (struct tagRECT *)this;
}
