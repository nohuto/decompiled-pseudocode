/*
 * XREFs of ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C01E52A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     isInputVirtualizationEnabled @ 0x1C004FF0C (isInputVirtualizationEnabled.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C00818F0 (--0CMouseProcessor@@IEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F38B0 (-Initialize@CIVChannel@@QEAAXXZ.c)
 */

__int64 __fastcall CMouseSensor::PostInitialize(CMouseSensor *this)
{
  unsigned int v1; // ebx
  CMouseProcessor *v3; // rax
  CMouseProcessor *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax

  v1 = 0;
  if ( *((_QWORD *)this + 168) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 62);
  *((_QWORD *)this + 168) = 0LL;
  v3 = (CMouseProcessor *)Win32AllocPoolZInit(0x1368uLL, 0x70724D50u);
  if ( v3 && (v4 = CMouseProcessor::CMouseProcessor(v3)) != 0LL )
  {
    *((_QWORD *)this + 168) = v4;
    if ( isInputVirtualizationEnabled(v6, v5, v7, v8) )
      CIVChannel::Initialize((CMouseSensor *)((char *)this + 1288));
  }
  else
  {
    v1 = -1073741801;
  }
  *((_QWORD *)this + 183) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 354) / 0x3E8;
  result = v1;
  *((_QWORD *)this + 184) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 360) / 0x3E8;
  return result;
}
