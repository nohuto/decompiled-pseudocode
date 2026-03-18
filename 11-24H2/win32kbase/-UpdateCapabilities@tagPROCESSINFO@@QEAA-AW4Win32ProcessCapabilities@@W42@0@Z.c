/*
 * XREFs of ?UpdateCapabilities@tagPROCESSINFO@@QEAA?AW4Win32ProcessCapabilities@@W42@0@Z @ 0x1401A6260
 * Callers:
 *     ?SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401A369C (-SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dii @ 0x1401A6450 (WPP_RECORDER_AND_TRACE_SF_Dii.c)
 */

__int64 __fastcall tagPROCESSINFO::UpdateCapabilities(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  char v5; // si
  bool v6; // bp
  bool v7; // r14
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  BOOL v11; // r14d
  char v12; // bp
  int v13; // ebx
  __int64 v14; // rax
  __int64 v16; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 1200);
  *(_QWORD *)(a1 + 1200) = a3 & a2 | v3 & ~a2;
  v5 = 1;
  v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    HIDWORD(v16) = HIDWORD(v3);
    WPP_RECORDER_AND_TRACE_SF_Dii(*((_QWORD *)WPP_GLOBAL_Control + 3), v10, v9, *(_QWORD *)(UserSessionState + 69400));
  }
  if ( *(_BYTE *)(a1 + 1208) != 1 )
    *(_QWORD *)(a1 + 816) |= 0x10000000000uLL;
  if ( (((unsigned int)v3 ^ *(_DWORD *)(a1 + 1200)) & 2) != 0 )
  {
    v11 = (*(_QWORD *)(a1 + 1200) & 2) != 0;
    _InterlockedExchange((volatile __int32 *)(a1 + 288), v11);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v5 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(_DWORD *)(a1 + 56);
      v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LODWORD(v16) = v11;
      WPP_RECORDER_AND_TRACE_SF_dD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v5,
        v12,
        *(_QWORD *)(v14 + 69400),
        4u,
        8u,
        0xBu,
        (__int64)&WPP_022b3b488a93348482baeb51c6b66338_Traceguids,
        v13,
        v16);
    }
  }
  return v3;
}
