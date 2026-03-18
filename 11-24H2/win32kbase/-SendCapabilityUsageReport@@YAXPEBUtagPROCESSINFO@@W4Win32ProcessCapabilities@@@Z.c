/*
 * XREFs of ?SendCapabilityUsageReport@@YAXPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z @ 0x1401A6120
 * Callers:
 *     ?CheckAccess@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z @ 0x1401A5FC0 (-CheckAccess@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z.c)
 *     RecordCapabilityUsage @ 0x1401A6420 (RecordCapabilityUsage.c)
 * Callees:
 *     W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822___ @ 0x1401A5EEC (W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822___.c)
 *     WPP_RECORDER_AND_TRACE_SF_Diid @ 0x1401A6544 (WPP_RECORDER_AND_TRACE_SF_Diid.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall SendCapabilityUsageReport(__int64 *a1, char a2)
{
  int v2; // eax
  __int64 v4; // rcx
  unsigned int CurrentServiceSessionId; // eax
  _UNKNOWN **result; // rax
  __int64 v7; // rcx
  bool v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  _DWORD *v13; // [rsp+68h] [rbp+27h] BYREF
  _DWORD v14[2]; // [rsp+70h] [rbp+2Fh] BYREF
  __int64 ProcessSequenceNumber; // [rsp+78h] [rbp+37h]
  __int64 v16; // [rsp+80h] [rbp+3Fh]

  v2 = *((_DWORD *)a1 + 14);
  v4 = *a1;
  v14[0] = v2;
  v14[1] = 0;
  ProcessSequenceNumber = PsGetProcessSequenceNumber(v4);
  v13 = v14;
  v16 = a2 & 2;
  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  result = (_UNKNOWN **)W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822_(
                          CurrentServiceSessionId,
                          &v13);
  if ( (int)result < 0 )
  {
    v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    result = &WPP_RECORDER_INITIALIZED;
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v7);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_Diid(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v12,
                            v11,
                            *(_QWORD *)(UserSessionState + 69400));
    }
  }
  return result;
}
