/*
 * XREFs of SetNewForegroundPti @ 0x1C0032010
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0031B48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C0032504 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetNewForegroundPti(__int64 a1)
{
  bool v2; // di
  bool v3; // si
  char ThreadId; // bp
  char v5; // al
  __int64 result; // rax

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( a1 )
      ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)a1);
    else
      ThreadId = 0;
    if ( gptiForeground )
      v5 = (unsigned __int8)PsGetThreadId((PETHREAD)*gptiForeground);
    else
      v5 = 0;
    WPP_RECORDER_AND_TRACE_SF_DD(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v3,
      (_DWORD)gFullLog,
      4,
      2,
      84,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      v5,
      ThreadId);
  }
  gptiForeground = a1;
  if ( a1 && *(_DWORD *)(*(_QWORD *)(a1 + 424) + 56LL) == gpidLogonUI )
  {
    result = gfEnableHexNumpad;
    gfEnableHexNumpad |= 2u;
  }
  else
  {
    result = gfEnableHexNumpad;
    gfEnableHexNumpad &= ~2u;
  }
  return result;
}
