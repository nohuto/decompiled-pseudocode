/*
 * XREFs of RIMHandleAnySignalledReadsOnDestroyed @ 0x1400FF688
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1401140EC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall RIMHandleAnySignalledReadsOnDestroyed(__int64 a1)
{
  bool v2; // bl
  bool v3; // r14
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rcx
  bool v8; // bl
  bool v9; // di
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // r9
  __int64 v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rdx

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
      50,
      (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids);
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)a1 == 4 && (*(_DWORD *)(v7 + 244) & 8) != 0 )
  {
    v13 = *(_QWORD *)(v7 + 392);
    if ( (*(_DWORD *)(v7 + 240) & 0x2000) != 0 )
    {
      v14 = *(_QWORD *)(v7 + 96);
    }
    else
    {
      v14 = *(_QWORD *)(v7 + 400);
      if ( !v14 )
        v14 = *(_QWORD *)(v7 + 88);
    }
    if ( *(_DWORD *)(v13 + 848) )
    {
      v16 = *(_QWORD **)(v13 + 864);
      if ( (unsigned __int64)v16 >= MmUserProbeAddress )
        v16 = (_QWORD *)MmUserProbeAddress;
      if ( *v16 == v14 )
      {
        v17 = *(_QWORD **)(v13 + 864);
        if ( (unsigned __int64)v17 >= MmUserProbeAddress )
          v17 = (_QWORD *)MmUserProbeAddress;
        *v17 = -1LL;
      }
    }
    else
    {
      v15 = *(_QWORD **)(v13 + 864);
      if ( *v15 == v14 )
        *v15 = -1LL;
    }
  }
  v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(v10 + 19392),
      4,
      1,
      52,
      (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids);
  }
}
