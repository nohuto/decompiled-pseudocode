/*
 * XREFs of ?xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@WindowArrangement@@K@Z @ 0x1402D0024
 * Callers:
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddds @ 0x140189C24 (WPP_RECORDER_AND_TRACE_SF_dddddds.c)
 *     ?SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z @ 0x1402CAEB0 (-SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

char __fastcall WindowActions::xxxInterceptSetSnapArrangementPos(struct tagWND *a1, __int128 *a2, int a3, int a4)
{
  char v8; // si
  char v9; // di
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // r9d
  int v17; // eax
  int v18; // eax
  char result; // al
  __int64 v20; // rdx
  char v21; // r12
  char v22; // r15
  int v23; // ebx
  int v24; // edi
  int v25; // esi
  int v26; // r14d
  __int64 v27; // r9
  const char *v28; // rax
  int v30; // [rsp+90h] [rbp-49h] BYREF
  int v31; // [rsp+94h] [rbp-45h]
  int v32; // [rsp+9Ch] [rbp-3Dh]
  int v33; // [rsp+A0h] [rbp-39h]
  int v34; // [rsp+A4h] [rbp-35h]
  int v35; // [rsp+A8h] [rbp-31h]
  int v36; // [rsp+B8h] [rbp-21h]

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
    v10 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v8;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      4,
      62,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      v10);
  }
  memset_0(&v30, 0, 0x60uLL);
  v14 = *(_DWORD *)a2;
  v15 = *((_DWORD *)a2 + 1);
  v16 = v31 | 1;
  v17 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
  v36 = 3;
  v34 = v17;
  v18 = *((_DWORD *)a2 + 3) - v15;
  v31 |= 1u;
  v32 = v14;
  v33 = v15;
  v30 = 38;
  v35 = v18;
  if ( a3 != 2 )
  {
    v30 = 54;
    if ( a3 == 1 )
      v31 = v16 | 2;
  }
  result = SaveShellRequestedOperationData(a1, a2, 3, a4);
  if ( result )
  {
    v30 |= 0x400u;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v21 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v22 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v22 = 0;
    }
    if ( v21 || v22 )
    {
      v23 = *((_DWORD *)a2 + 3);
      v24 = *((_DWORD *)a2 + 2);
      v25 = *((_DWORD *)a2 + 1);
      v26 = *(_DWORD *)a2;
      v27 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20) + 69416);
      v28 = "no";
      if ( a3 == 2 )
        v28 = "forground";
      WPP_RECORDER_AND_TRACE_SF_dddddds(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v21,
        v22,
        v27,
        5u,
        4u,
        0x3Fu,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        v26,
        v25,
        v24,
        v23,
        v34,
        v35,
        v28);
    }
    return xxxSendTransformableMessageTimeout(
             (struct tagTHREADINFO **)a1,
             838LL,
             0LL,
             (struct tagDRAWITEMSTRUCT *)&v30,
             0,
             0,
             0LL,
             1,
             1);
  }
  return result;
}
