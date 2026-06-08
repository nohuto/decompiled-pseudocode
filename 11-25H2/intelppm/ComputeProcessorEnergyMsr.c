/*
 * XREFs of ComputeProcessorEnergyMsr @ 0x140005B30
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x140006AA0 (ComputeProcessorEnergyMsrEx.c)
 * Callees:
 *     ProcLibTracePackageEnergyCounterUpdate @ 0x1400032C0 (ProcLibTracePackageEnergyCounterUpdate.c)
 */

unsigned __int64 *__fastcall ComputeProcessorEnergyMsr(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rsi
  int v8; // ecx
  unsigned __int64 *result; // rax

  if ( a1 )
  {
    result = a5;
    *a5 = 0LL;
  }
  else
  {
    v5 = __readmsr(HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1));
    v6 = v5 - LODWORD(WPP_MAIN_CB.DeviceQueue.Lock);
    v7 = (unsigned int)(v5 - LODWORD(WPP_MAIN_CB.DeviceQueue.Lock));
    ProcLibTracePackageEnergyCounterUpdate(SHIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1), v7);
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v5;
    if ( v6 > 0x7FFFFFFF )
    {
      result = a5;
    }
    else
    {
      v8 = (*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type >> 1) & 0x1F;
      if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) == 0 )
      {
        result = a5;
        *a5 = v7 << v8;
        return result;
      }
      result = a5;
      if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) == 1 )
      {
        *a5 = (unsigned __int64)(1000000 * v7) >> v8;
        return result;
      }
    }
    *result = 0LL;
  }
  return result;
}
