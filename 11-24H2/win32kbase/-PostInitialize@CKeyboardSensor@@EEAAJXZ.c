/*
 * XREFs of ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x140210670
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     isInputVirtualizationEnabled @ 0x1400D07E4 (isInputVirtualizationEnabled.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021B18C (-Initialize@CIVChannel@@QEAAXXZ.c)
 */

__int64 __fastcall CKeyboardSensor::PostInitialize(CKeyboardSensor *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  v1 = 0;
  if ( *((_QWORD *)this + 166) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 74);
  *((_QWORD *)this + 166) = 0LL;
  v3 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x504B7270u);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 8) = 1;
    *(_QWORD *)v3 = &CBaseProcessor::`vftable';
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_DWORD *)(v3 + 24) = 0;
    *((_QWORD *)this + 166) = v3;
    if ( isInputVirtualizationEnabled((__int64)&CBaseProcessor::`vftable') )
      CIVChannel::Initialize((CKeyboardSensor *)((char *)this + 1264));
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}
