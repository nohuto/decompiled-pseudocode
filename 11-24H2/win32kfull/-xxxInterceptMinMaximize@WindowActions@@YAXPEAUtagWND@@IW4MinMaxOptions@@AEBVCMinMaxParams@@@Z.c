/*
 * XREFs of ?xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z @ 0x1402CF198
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401162C8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402CB230 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     ?UpdateActionForShowCmd@@YAXIPEAU_WINDOW_ACTION@@@Z @ 0x1402CB550 (-UpdateActionForShowCmd@@YAXIPEAU_WINDOW_ACTION@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

unsigned __int64 __fastcall WindowActions::xxxInterceptMinMaximize(
        struct tagTHREADINFO **a1,
        unsigned int a2,
        char a3,
        __int64 a4)
{
  char v8; // si
  char v9; // di
  struct tagTHREADINFO *v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  const struct tagMONITOR *v14; // rdx
  __int64 v15; // rsi
  char v16; // di
  char v17; // bl
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int128 *v21; // rax
  char v22; // r14
  char v23; // si
  __int64 v24; // rax
  int v26[2]; // [rsp+40h] [rbp-79h]
  __int64 v27; // [rsp+48h] [rbp-71h]
  _QWORD v28[5]; // [rsp+70h] [rbp-49h] BYREF
  int v29; // [rsp+98h] [rbp-21h]
  __int128 v30; // [rsp+9Ch] [rbp-1Dh]

  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v8 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v9 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v9 = 0;
  }
  if ( v8 || v9 )
  {
    v10 = *a1;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v8;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      4,
      51,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      (char)v10,
      a2);
  }
  memset_0(v28, 0, 0x60uLL);
  UpdateActionForShowCmd(a2, (struct _WINDOW_ACTION *)v28);
  if ( (a3 & 0x10) != 0 )
    LODWORD(v28[0]) &= ~0x10u;
  if ( v29 == 1 )
  {
    v14 = *(const struct tagMONITOR **)a4;
    if ( *(_QWORD *)a4 )
      SetMonitorMovePoint((struct _WINDOW_ACTION *)v28, v14);
  }
  if ( (a3 & 0x40) == 0 )
  {
    v15 = *(_QWORD *)(a4 + 16);
    LODWORD(v28[0]) |= 8u;
    v28[4] = v15;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v16 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v17 = 0;
    }
    if ( v16 || v17 )
    {
      v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v16;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v20,
        v19,
        *(_QWORD *)(v18 + 69416),
        5,
        4,
        52,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        v15);
    }
  }
  if ( (a3 & 8) != 0 )
  {
    v21 = *(__int128 **)(a4 + 8);
    if ( v21 )
    {
      LODWORD(v28[0]) |= 0x40u;
      v30 = *v21;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v22 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v23 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v23 = 0;
      }
      if ( v22 || v23 )
      {
        v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
        LODWORD(v27) = DWORD1(v30);
        v26[0] = v30;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v22,
          v23,
          *(_QWORD *)(v24 + 69416),
          5u,
          4u,
          0x35u,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
          *(_QWORD *)v26,
          v27,
          DWORD2(v30),
          HIDWORD(v30),
          DWORD2(v30) - (_DWORD)v30,
          HIDWORD(v30) - DWORD1(v30),
          v28[0]);
      }
    }
  }
  return xxxSendTransformableMessageTimeout(a1, 838LL, 0LL, (struct tagDRAWITEMSTRUCT *)v28, 0, 0, 0LL, 1, 1);
}
