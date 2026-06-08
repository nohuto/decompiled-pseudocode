/*
 * XREFs of InitializeEnergyEstimation @ 0x140029660
 * Callers:
 *     ProcLibDeviceStart @ 0x1400408BC (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     RetrieveEfficiencyClassInformation @ 0x140029798 (RetrieveEfficiencyClassInformation.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x140046278 (InitializeEnergyEstimationForEfficiencyClass.c)
 */

__int64 InitializeEnergyEstimation()
{
  unsigned int v0; // ebx
  __int64 i; // r8
  unsigned int j; // edx
  void *v3; // rcx
  unsigned int v4; // edx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  word_140019A68 = 0;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  qword_140019A78 = PerformanceFrequency.QuadPart;
  HalPrivateDispatchTable[76]((__int64)&qword_140019A80);
  RetrieveEfficiencyClassInformation();
  qword_140019428 = 0LL;
  v0 = 0;
  qword_140019420 = 0LL;
  for ( i = (unsigned int)dword_140019864; v0 < dword_140019864; ++v0 )
  {
    InitializeEnergyEstimationForEfficiencyClass(v0);
    i = (unsigned int)dword_140019864;
  }
  qword_140019428 = qword_140019960[0];
  for ( j = 1; j < (unsigned int)i; ++j )
  {
    if ( Globals[32 * (unsigned __int64)j + 254] != qword_140019960[0] )
    {
      qword_140019428 = (__int64)SnapEnergyCountersDispatch;
      break;
    }
  }
  v3 = (void *)qword_140019958[0];
  v4 = 1;
  qword_140019420 = qword_140019958[0];
  while ( v4 < (unsigned int)i )
  {
    if ( Globals[32 * (unsigned __int64)v4 + 253] != qword_140019958[0] )
    {
      v3 = ComputeEnergyDispatch;
      qword_140019420 = (__int64)ComputeEnergyDispatch;
      break;
    }
    ++v4;
  }
  if ( !v3 )
  {
    v3 = ComputeProcessorEnergy;
    qword_140019420 = (__int64)ComputeProcessorEnergy;
  }
  LOBYTE(i) = byte_140019408;
  return ((__int64 (__fastcall *)(void *, __int64, __int64, __int64 *))qword_140019538)(v3, qword_140019428, i, Globals);
}
