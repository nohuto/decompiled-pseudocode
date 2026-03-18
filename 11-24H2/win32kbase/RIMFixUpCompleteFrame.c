/*
 * XREFs of RIMFixUpCompleteFrame @ 0x1400BD0EC
 * Callers:
 *     RIMFixUpCompleteFrames @ 0x1400BC7A8 (RIMFixUpCompleteFrames.c)
 *     rimProcessInput @ 0x1400BC820 (rimProcessInput.c)
 *     rimFindOtherQueuedFrames @ 0x1401ED5E8 (rimFindOtherQueuedFrames.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     traceFrame @ 0x1401EBA4C (traceFrame.c)
 */

_UNKNOWN **__fastcall RIMFixUpCompleteFrame(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5)
{
  int v5; // r12d
  __int64 v9; // rdx
  int v10; // ebp
  __int64 v11; // r15
  bool v12; // si
  bool v13; // r14
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  _QWORD *j; // rbp
  bool v22; // bl
  _UNKNOWN **result; // rax
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  _QWORD *v28; // rsi
  unsigned int i; // ebp

  v5 = 0;
  v9 = 1LL;
  if ( !a5 && *(_DWORD *)(a1 + 848) == 1 )
  {
    v10 = 1;
    v11 = 1LL;
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
  }
  v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      58,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
  }
  if ( v10 )
    ProbeForWrite((volatile void *)a3, *(unsigned int *)a4, 8u);
  if ( *(_QWORD *)(a2 + 328) )
  {
    v5 = 1;
    *(_QWORD *)(a3 + 32) = *(_QWORD *)(a2 + 328);
  }
  v17 = a4[27];
  if ( v17 )
    *(_QWORD *)(a3 + 216) = a3 + v17 - (_QWORD)a4;
  v18 = a4[29];
  if ( v18 )
  {
    *(_QWORD *)(a3 + 232) = a3 + v18 - (_QWORD)a4;
    if ( v5 )
    {
      v28 = *(_QWORD **)(a3 + 232);
      for ( i = 0; i < *(_DWORD *)(a3 + 24); v28 += 24 )
      {
        if ( v11 )
          ProbeForWrite(v28, 0xC0uLL, 8u);
        ++i;
        v28[4] = *(_QWORD *)(a2 + 328);
      }
    }
    traceFrame(a3, v9);
  }
  v19 = a4[28];
  if ( v19 )
  {
    *(_QWORD *)(a3 + 224) = a3 + v19 - (_QWORD)a4;
    v20 = a4[28];
    for ( j = *(_QWORD **)(a3 + 224); v20; v20 = *(_QWORD *)(v20 + 16) )
    {
      if ( *(_QWORD *)(v20 + 8) )
      {
        if ( v11 )
          ProbeForWrite(j, 0x18uLL, 8u);
        j[1] = a3 + *(_QWORD *)(v20 + 8) - (_QWORD)a4;
      }
      if ( *(_QWORD *)(v20 + 16) )
      {
        if ( v11 )
          ProbeForWrite(j, 0x18uLL, 8u);
        j[2] = a3 + *(_QWORD *)(v20 + 16) - (_QWORD)a4;
        j = (_QWORD *)j[2];
      }
    }
  }
  v22 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v26) = v24;
    LOBYTE(v27) = v22;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v27,
                          v26,
                          *(_QWORD *)(v25 + 19392),
                          4,
                          1,
                          59,
                          (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
  }
  return result;
}
