/*
 * XREFs of NtUserSetSystemContentRects @ 0x1C014BE10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C01302E4 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 *     CheckCapability @ 0x1C01E7BE0 (CheckCapability.c)
 */

__int64 __fastcall NtUserSetSystemContentRects(unsigned int a1, char *Src)
{
  __int64 v3; // r14
  int v4; // r8d
  int v5; // ebx
  bool v6; // cl
  int v7; // edx
  int v8; // ecx
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  bool v14; // cl
  int v15; // edx
  struct tagRECT v17[4]; // [rsp+70h] [rbp-68h] BYREF

  v3 = a1;
  v5 = 0;
  if ( (int)CheckCapability(L"windowManagementSystem") < 0 )
  {
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 112;
      LOBYTE(v7) = v6;
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        112,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
    }
    v8 = 5;
    goto LABEL_39;
  }
  if ( (unsigned int)v3 > 4 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9296);
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        2u,
        2u,
        0x71u,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        4,
        v3,
        0x20000);
    goto LABEL_38;
  }
  if ( !(_DWORD)v3 || !Src )
  {
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 114;
      LOBYTE(v15) = v14;
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        114,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
    }
    goto LABEL_38;
  }
  memset(v17, 0, sizeof(v17));
  v13 = 16 * v3;
  if ( 16 * v3 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v11, v10, v12) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v13] > MmUserProbeAddress || &Src[v13] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v17, Src, 16 * v3);
  if ( !CContentRects::SetContentRects(v3, v17) )
  {
LABEL_38:
    v8 = 87;
LABEL_39:
    UserSetLastError(v8);
    return v5;
  }
  return 1;
}
