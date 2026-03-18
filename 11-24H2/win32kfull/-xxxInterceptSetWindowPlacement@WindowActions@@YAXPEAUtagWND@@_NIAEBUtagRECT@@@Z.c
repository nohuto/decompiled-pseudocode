/*
 * XREFs of ?xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z @ 0x1402D02C4
 * Callers:
 *     xxxSetWindowPlacement @ 0x140086334 (xxxSetWindowPlacement.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?UpdateActionForShowCmd@@YAXIPEAU_WINDOW_ACTION@@@Z @ 0x1402CB550 (-UpdateActionForShowCmd@@YAXIPEAU_WINDOW_ACTION@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptSetWindowPlacement(
        WindowActions *this,
        struct tagWND *a2,
        unsigned int a3,
        __int128 *a4)
{
  char v6; // r13
  char v8; // bl
  char v9; // si
  char v10; // di
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int128 v15; // xmm0
  __int64 v16; // rdx
  char v17; // r14
  char v18; // si
  __int64 v19; // rax
  char v20; // di
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  __int16 v24; // [rsp+30h] [rbp-89h]
  int v25[2]; // [rsp+40h] [rbp-79h]
  unsigned int v26; // [rsp+70h] [rbp-49h] BYREF
  int v27; // [rsp+74h] [rbp-45h]
  int v28; // [rsp+98h] [rbp-21h]
  __int128 v29; // [rsp+9Ch] [rbp-1Dh]

  v6 = (char)a2;
  v8 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v9 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v10 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v10 = 0;
  }
  if ( v9 || v10 )
  {
    v11 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v13) = v10;
    LOBYTE(v14) = v9;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      4,
      81,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      v11);
    v8 = 0;
  }
  memset_0(&v26, 0, 0x60uLL);
  UpdateActionForShowCmd(a3, (struct _WINDOW_ACTION *)&v26);
  v15 = *a4;
  v16 = v26 | 0x40;
  v26 |= 0x40u;
  v29 = v15;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v17 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v17 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v18 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v18 = 0;
  }
  if ( v17 || v18 )
  {
    v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
    v25[0] = v29;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v17,
      v18,
      *(_QWORD *)(v19 + 69416),
      5u,
      4u,
      0x52u,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      *(_QWORD *)v25,
      DWORD1(v29),
      DWORD2(v29),
      HIDWORD(v29),
      DWORD2(v29) - (_DWORD)v29,
      HIDWORD(v29) - DWORD1(v29));
    v16 = v26;
    v8 = 0;
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x20) != 0 && (v16 & 0x20) == 0 || (v16 & 0x20) != 0 && v28 == 2 )
  {
    if ( v6 )
    {
      v27 |= 0x40u;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v20 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v20 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v8 = 1;
      }
      if ( v20 || v8 )
      {
        v21 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
        v24 = 83;
LABEL_36:
        LOBYTE(v23) = v8;
        LOBYTE(v22) = v20;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v22,
          v23,
          *(_QWORD *)(v21 + 69416),
          5,
          4,
          v24,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids);
      }
    }
    else
    {
      v27 |= 0x20u;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v20 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v20 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v8 = 1;
      }
      if ( v20 || v8 )
      {
        v21 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
        v24 = 84;
        goto LABEL_36;
      }
    }
  }
  xxxSendTransformableMessageTimeout(
    (struct tagTHREADINFO **)this,
    838LL,
    0LL,
    (struct tagDRAWITEMSTRUCT *)&v26,
    0,
    0,
    0LL,
    1,
    1);
}
