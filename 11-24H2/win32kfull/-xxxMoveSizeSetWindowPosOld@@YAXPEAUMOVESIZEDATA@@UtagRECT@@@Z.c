/*
 * XREFs of ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402A8C4C
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     InternalBeginDeferWindowPos @ 0x1400F4B34 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1400F4FF8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?xxxInterceptMoveSizeSetWindowPos@WindowActions@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402CF85C (-xxxInterceptMoveSizeSetWindowPos@WindowActions@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 */

void __fastcall xxxMoveSizeSetWindowPosOld(struct MOVESIZEDATA *a1, struct tagRECT *a2)
{
  struct tagRECT *v4; // r8
  char v5; // r15
  char v6; // bp
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  _OWORD *v9; // r10
  char v10; // di
  bool v11; // bp
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rbx
  char v21; // r15
  char v22; // r14
  _DWORD *v23; // rcx
  int v24; // edi
  int v25; // ebp
  int v26; // ebx
  int v27; // esi
  __int64 v28; // rax
  __int16 v29; // [rsp+30h] [rbp-78h]
  char v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+40h] [rbp-68h]
  __int64 v32; // [rsp+48h] [rbp-60h]
  __int64 v33; // [rsp+50h] [rbp-58h]
  __int64 v34; // [rsp+58h] [rbp-50h]
  __int64 v35; // [rsp+60h] [rbp-48h]
  __int64 v36; // [rsp+68h] [rbp-40h]
  struct tagRECT v37; // [rsp+70h] [rbp-38h] BYREF

  v4 = (struct tagRECT *)*(unsigned int *)(*((_QWORD *)a1 + 2) + 384LL);
  if ( ((unsigned __int8)v4 & 0x10) != 0 )
  {
    v37 = *a2;
    WindowActions::xxxInterceptMoveSizeSetWindowPos(a1, (struct MOVESIZEDATA *)&v37, v4);
    return;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v5 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v6 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v6 = 0;
  }
  if ( v5 || v6 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v5,
      v6,
      *(_QWORD *)(UserSessionState + 69416),
      5u,
      1u,
      0xBu,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      a2->left,
      a2->top,
      a2->right,
      a2->bottom,
      a2->right - a2->left,
      a2->bottom - a2->top);
  }
  v9 = InternalBeginDeferWindowPos(1LL, (__int64)a2);
  if ( v9 )
  {
    v16 = _DeferWindowPos(
            (__int64)v9,
            *((_QWORD *)a1 + 2),
            0LL,
            a2->left,
            a2->top,
            a2->right - a2->left,
            a2->bottom - a2->top,
            524820,
            0);
    if ( v16 )
    {
      *(_QWORD *)(*(_QWORD *)(v16 + 40) + 128LL) = **((_QWORD **)a1 + 27);
      *(_DWORD *)(*(_QWORD *)(v16 + 40) + 156LL) |= 0x200u;
      if ( (unsigned int)xxxEndDeferWindowPosEx((struct tagSMWP *)v16, 0LL) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
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
          v23 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 40LL);
          v24 = v23[25];
          v25 = v23[23];
          v26 = v23[24];
          v27 = v23[22];
          v28 = W32GetUserSessionState(v23, v19);
          LODWORD(v36) = v24 - v25;
          LODWORD(v35) = v26 - v27;
          LODWORD(v34) = v24;
          LODWORD(v33) = v26;
          LODWORD(v32) = v25;
          LODWORD(v31) = v27;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v21,
            v22,
            *(_QWORD *)(v28 + 69416),
            5u,
            1u,
            0xFu,
            (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
        }
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
        {
          v10 = 0;
        }
        v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v20 = **((_QWORD **)a1 + 2);
          v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
          v30 = v20;
          v29 = 14;
          goto LABEL_21;
        }
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
      {
        v10 = 0;
      }
      v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v18 = **((_QWORD **)a1 + 2);
        v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v17);
        v30 = v18;
        v29 = 13;
        goto LABEL_21;
      }
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
    {
      v10 = 0;
    }
    v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v12 = **((_QWORD **)a1 + 2);
      v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
      v30 = v12;
      v29 = 12;
LABEL_21:
      LOBYTE(v15) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v14,
        v15,
        *(_QWORD *)(v13 + 69416),
        2,
        1,
        v29,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
        v30);
    }
  }
}
