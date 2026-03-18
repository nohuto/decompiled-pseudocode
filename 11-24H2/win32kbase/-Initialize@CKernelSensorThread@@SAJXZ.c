/*
 * XREFs of ?Initialize@CKernelSensorThread@@SAJXZ @ 0x14021FC9C
 * Callers:
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall CKernelSensorThread::Initialize(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 3112) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 272);
  v1 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 0x88uLL, 0x7054534Bu);
  v3 = v1;
  if ( v1 )
  {
    memset(v1, 0, 0x88uLL);
    *v3 = &CKernelSensorThread::`vftable';
    v3[12] = 0LL;
    *((_BYTE *)v3 + 104) = 0;
    *((_DWORD *)v3 + 27) = 0;
    v3[14] = 0LL;
    *((_DWORD *)v3 + 30) = 80;
    *((_DWORD *)v3 + 31) = 300;
    *((_BYTE *)v3 + 128) = 1;
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v2) + 3112) = v3;
  return *(_QWORD *)(W32GetUserSessionState(v4) + 3112) == 0LL ? 0xC0000017 : 0;
}
