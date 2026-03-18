/*
 * XREFs of ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x14020B1FC
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1402152B8 (UserSetMITInputCallbacks.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     CoreMsgCreatePort @ 0x1400FC1D4 (CoreMsgCreatePort.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CreateCoreMsgPort(InputExtensibilityCallout *this)
{
  char v2; // di
  int Port; // esi
  char v4; // cl
  bool v5; // bp
  __int64 v6; // rax
  int v7; // r8d
  int v8; // edx
  bool v9; // bl
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    LODWORD(P) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 140);
  }
  P = 0LL;
  v2 = 1;
  Port = SeConvertStringSecurityDescriptorToSecurityDescriptor(
           L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)",
           1LL,
           &P);
  if ( Port < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v2 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v2;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69400),
        2,
        2,
        11,
        (__int64)&WPP_3fde221f8eaf389f7474ab123d689665_Traceguids,
        Port);
    }
  }
  else
  {
    W32AcquirePushLockExclusiveEx((InputExtensibilityCallout *)((char *)this + 8), 0);
    Port = CoreMsgCreatePort(v4, P, L"Kernel\\MIT\\InputPort", (void **)this + 2);
    if ( Port < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v2 = 0;
      }
      v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v7) = v5;
        LOBYTE(v8) = v2;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v8,
          v7,
          *(_QWORD *)(v6 + 69400),
          2,
          2,
          10,
          (__int64)&WPP_3fde221f8eaf389f7474ab123d689665_Traceguids,
          Port);
      }
    }
    W32ReleasePushLockExclusiveEx((InputExtensibilityCallout *)((char *)this + 8), 0LL);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)Port;
}
