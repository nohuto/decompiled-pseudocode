/*
 * XREFs of ?PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1402C3360
 * Callers:
 *     ?s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1402C4FA8 (-s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C5934 (-xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?Compare@CMonitorTopology@@QEBA?AW4CompareResult@1@PEBV1@W4CompareType@1@@Z @ 0x14014D1B0 (-Compare@CMonitorTopology@@QEBA-AW4CompareResult@1@PEBV1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x14019AC0C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1401E0894 (GetPrimaryMonitorRectForWindow.c)
 */

void __fastcall CRecalcProp::PostMessagesForRecalcDisabledWindows(
        CRecalcProp *this,
        struct tagWND *a2,
        const struct CMonitorTopology *a3)
{
  int v4; // eax
  int v5; // r12d
  char v6; // bp
  const char *v7; // r13
  bool v8; // r14
  bool v9; // r15
  int v10; // ebx
  __int64 v11; // rdi
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // r9
  const char *v16; // rax
  __m128i v17; // xmm6
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // r14
  int v22; // ebx
  LARGE_INTEGER v23; // rdi
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  _BYTE v27[16]; // [rsp+50h] [rbp-48h] BYREF

  v4 = CMonitorTopology::Compare(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL), (__int64)a3, 0);
  v5 = v4 & 0x10;
  v6 = 1;
  v7 = "has";
  if ( (v4 & 0xFFFFFFEF) != 0 )
  {
    v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = *((_DWORD *)a2 + 95);
      v11 = *(_QWORD *)a2;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v13) = v9;
      LOBYTE(v14) = v8;
      v15 = *(_QWORD *)(UserSessionState + 69416);
      v16 = "has";
      if ( (v10 & 0x10) == 0 )
        v16 = "had";
      WPP_RECORDER_AND_TRACE_SF_qs(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v14,
        v13,
        v15,
        4,
        7,
        132,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v11,
        (__int64)v16);
    }
    v17 = *(__m128i *)GetPrimaryMonitorRectForWindow((__int64)v27, a2);
    v20 = W32GetUserSessionState(v19, v18);
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a2 + 2),
      *(struct tagQ **)(*((_QWORD *)a2 + 2) + 472LL),
      9u,
      (LARGE_INTEGER *)a2,
      0x7Eu,
      (LARGE_INTEGER)*(unsigned __int16 *)(*(_QWORD *)(v20 + 19928) + 6996LL),
      ((unsigned __int16)(_mm_cvtsi128_si32(_mm_srli_si128(v17, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v17, 4))) << 16) | (unsigned __int16)(_mm_cvtsi128_si32(_mm_srli_si128(v17, 8)) - _mm_cvtsi128_si32(v17)),
      0LL);
  }
  if ( v5 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v6 = 0;
    }
    v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v22 = *((_DWORD *)a2 + 95);
      v23 = *(LARGE_INTEGER *)a2;
      v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v25) = v21;
      LOBYTE(v26) = v6;
      if ( (v22 & 0x10) == 0 )
        v7 = "had";
      WPP_RECORDER_AND_TRACE_SF_qs(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v26,
        v25,
        *(_QWORD *)(v24 + 69416),
        4,
        7,
        133,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v23.QuadPart,
        (__int64)v7);
    }
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a2 + 2),
      *(struct tagQ **)(*((_QWORD *)a2 + 2) + 472LL),
      9u,
      (LARGE_INTEGER *)a2,
      0x1Au,
      (LARGE_INTEGER)47LL,
      0LL,
      0LL);
  }
}
