/*
 * XREFs of RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1401DA590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceDeadzoneOrigin(__int64 a1, unsigned int a2, __int64 a3)
{
  bool v6; // di
  bool v7; // r14
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // edi
  bool v13; // bl
  bool v14; // si
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  bool v18; // bl
  bool v19; // si
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx

  v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      39,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x80u) == 0 )
  {
    v12 = -1073741811;
    v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 19392),
        3,
        1,
        40,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
  }
  else if ( a2 < 5 && (_mm_lfence(), (v11 = *(_QWORD *)(a1 + 8LL * a2 + 392)) != 0) )
  {
    v12 = 0;
    if ( *(_DWORD *)(v11 + 16) )
      *(_QWORD *)(v11 + 44) = a3;
    else
      v12 = -1073741823;
  }
  else
  {
    v12 = -1073741811;
  }
  v18 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v21) = v19;
    LOBYTE(v22) = v18;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v21,
      *(_QWORD *)(v20 + 19392),
      4,
      1,
      41,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
      v12);
  }
  return v12;
}
