/*
 * XREFs of traceFrame @ 0x1401EBA4C
 * Callers:
 *     RIMFixUpCompleteFrame @ 0x1400BD0EC (RIMFixUpCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     tracePointerInfo @ 0x1400AA220 (tracePointerInfo.c)
 */

__int64 __fastcall traceFrame(__int64 a1)
{
  bool v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  unsigned int v7; // ebp
  __int64 result; // rax
  unsigned int *v9; // rdi
  bool v10; // si
  bool v11; // r15
  __int16 v12; // bx
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx

  v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      44,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
  }
  v7 = 0;
  result = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)result )
  {
    v9 = (unsigned int *)(*(_QWORD *)(a1 + 232) + 16LL);
    do
    {
      v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = *((_WORD *)v9 - 4);
        v13 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v14) = v11;
        LOBYTE(v15) = v10;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(v13 + 19392),
          4,
          1,
          45,
          (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
          v12);
      }
      tracePointerInfo(v9);
      result = *(unsigned int *)(a1 + 24);
      ++v7;
      v9 += 48;
    }
    while ( v7 < (unsigned int)result );
  }
  return result;
}
