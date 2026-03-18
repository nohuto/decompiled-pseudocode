/*
 * XREFs of ?Initialize@QualityOfService@@YAJXZ @ 0x1401A5348
 * Callers:
 *     ?InitializeProcessThreadGlobals@@YAJXZ @ 0x140173E3C (-InitializeProcessThreadGlobals@@YAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401A5824 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall QualityOfService::Initialize(QualityOfService *this)
{
  _BYTE *v1; // rax
  _BYTE *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 UserSessionState; // rdi

  v1 = (_BYTE *)Win32AllocPoolZInitImpl(256LL, 0x28uLL, 0x72717355u);
  v2 = v1;
  if ( v1 )
  {
    *v1 = 0;
    v3 = v1 + 8;
    v3[1] = v3;
    *v3 = v3;
    if ( (unsigned int)Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline() )
    {
      *((_QWORD *)v2 + 4) = v2 + 24;
      *((_QWORD *)v2 + 3) = v2 + 24;
    }
    UserSessionState = W32GetUserSessionState(v4);
    if ( *(_QWORD *)(UserSessionState + 41368) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 616);
    *(_QWORD *)(UserSessionState + 41368) = v2;
  }
  else
  {
    v2 = 0LL;
  }
  return v2 == 0LL ? 0xC0000017 : 0;
}
