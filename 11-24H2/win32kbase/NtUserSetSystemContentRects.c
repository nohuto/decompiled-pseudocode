/*
 * XREFs of NtUserSetSystemContentRects @ 0x1401BDBD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z @ 0x1401A5B30 (-CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1401A97B4 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NtUserSetSystemContentRects(unsigned int a1, const unsigned __int16 *Src)
{
  __int64 v3; // r14
  int v4; // ebx
  bool v5; // si
  bool v6; // r14
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  char v11; // si
  char v12; // r15
  __int64 v13; // rax
  bool v14; // si
  bool v15; // r14
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  struct tagRECT v20[4]; // [rsp+70h] [rbp-68h] BYREF

  v3 = a1;
  v4 = 0;
  if ( (int)UIPrivilegeIsolation::CheckCapability(L"windowManagementSystem", Src) < 0 )
  {
    v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69400),
        2,
        2,
        130,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    v10 = 5;
    goto LABEL_36;
  }
  if ( (unsigned int)v3 > 4 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9543);
    v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v12,
        *(_QWORD *)(v13 + 69400),
        2u,
        2u,
        0x83u,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        4,
        v3,
        0x20000);
    }
    goto LABEL_35;
  }
  if ( !(_DWORD)v3 || !Src )
  {
    v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(v16 + 69400),
        2,
        2,
        132,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    goto LABEL_35;
  }
  memset(v20, 0, sizeof(v20));
  if ( 16 * v3 && ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlCopyVolatileMemory(v20, Src, 16 * v3);
  if ( !CContentRects::SetContentRects((unsigned int)v3, v20) )
  {
LABEL_35:
    v10 = 87;
LABEL_36:
    UserSetLastError(v10);
    return v4;
  }
  return 1;
}
