/*
 * XREFs of rimAbShouldButtonContactBeSuppressed @ 0x1400D9518
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x140056BD0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140058578 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1400D971C (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMGetPointerInputType @ 0x1400D98AC (RIMGetPointerInputType.c)
 */

__int64 __fastcall rimAbShouldButtonContactBeSuppressed(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  int v8; // ebx
  int IsButtonContactActiveAndNotSuppressed; // eax
  int v10; // edx
  _QWORD **v11; // r14
  _QWORD *i; // rsi
  int v13; // ebx
  char v14; // bl
  bool v15; // bp
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rbx
  int v20; // r15d
  char v21; // bp
  char v22; // r14
  int v23; // ebx
  __int64 v24; // rax

  v6 = 0;
  if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
  {
    v8 = *(_DWORD *)(a2 + 1020);
    IsButtonContactActiveAndNotSuppressed = RIMCmIsButtonContactActiveAndNotSuppressed(a2);
    v10 = v8 - 1;
    if ( !IsButtonContactActiveAndNotSuppressed )
      v10 = v8;
    if ( !v10 )
    {
      if ( a3 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v14 = 0;
        }
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v17) = v15;
          LOBYTE(v18) = v14;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v18,
            v17,
            *(_QWORD *)(UserSessionState + 19392),
            4,
            1,
            14,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
        return 1;
      }
      else if ( (*(_DWORD *)(a2 + 368) & 8) == 0 || (unsigned int)RIMGetPointerInputType(a2) != 5 )
      {
        v11 = (_QWORD **)(a1 + 448);
        for ( i = *v11; i != v11; i = (_QWORD *)*i )
        {
          v13 = RIMGetPointerInputType(*(i - 1));
          if ( v13 != (unsigned int)RIMGetPointerInputType(a2) )
          {
            v19 = *(i - 1);
            v20 = *(_DWORD *)(v19 + 1020);
            if ( v20 )
            {
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v21 = 0;
              }
              v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v23 = *(_DWORD *)(v19 + 24);
                v24 = W32GetUserSessionState(WPP_GLOBAL_Control);
                WPP_RECORDER_AND_TRACE_SF_Dd(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v21,
                  v22,
                  *(_QWORD *)(v24 + 19392),
                  4u,
                  1u,
                  0xFu,
                  (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                  v23,
                  v20);
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return v6;
}
