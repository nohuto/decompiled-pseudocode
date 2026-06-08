/*
 * XREFs of InitializeEnergyEstimation @ 0x14003B638
 * Callers:
 *     ProcLibDeviceStart @ 0x14002EDF4 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14003B770 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x14003BA58 (RetrieveEfficiencyClassInformation.c)
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
  word_140015EC0 = 0;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  qword_140015ED0 = PerformanceFrequency.QuadPart;
  HalPrivateDispatchTable[76]((__int64)&unk_140015ED8);
  RetrieveEfficiencyClassInformation();
  qword_140015878 = 0LL;
  v0 = 0;
  qword_140015870 = 0LL;
  for ( i = (unsigned int)dword_140015CBC; v0 < dword_140015CBC; ++v0 )
  {
    InitializeEnergyEstimationForEfficiencyClass(v0);
    i = (unsigned int)dword_140015CBC;
  }
  qword_140015878 = qword_140015DB8[0];
  for ( j = 1; j < (unsigned int)i; ++j )
  {
    if ( Globals[32 * (unsigned __int64)j + 255] != qword_140015DB8[0] )
    {
      qword_140015878 = (__int64)SnapEnergyCountersDispatch;
      break;
    }
  }
  v3 = (void *)qword_140015DB0[0];
  v4 = 1;
  qword_140015870 = qword_140015DB0[0];
  while ( v4 < (unsigned int)i )
  {
    if ( Globals[32 * (unsigned __int64)v4 + 254] != qword_140015DB0[0] )
    {
      v3 = ComputeEnergyDispatch;
      qword_140015870 = (__int64)ComputeEnergyDispatch;
      break;
    }
    ++v4;
  }
  if ( !v3 )
  {
    v3 = ComputeProcessorEnergy;
    qword_140015870 = (__int64)ComputeProcessorEnergy;
  }
  LOBYTE(i) = byte_140015858;
  return ((__int64 (__fastcall *)(void *, __int64, __int64, __int64 *))qword_140015988)(v3, qword_140015878, i, Globals);
}
