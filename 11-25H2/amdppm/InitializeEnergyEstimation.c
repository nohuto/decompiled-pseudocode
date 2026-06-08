/*
 * XREFs of InitializeEnergyEstimation @ 0x14003A3E8
 * Callers:
 *     ProcLibDeviceStart @ 0x14002DBF4 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14003A520 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x14003A808 (RetrieveEfficiencyClassInformation.c)
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
  word_140014E88 = 0;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  qword_140014E98 = PerformanceFrequency.QuadPart;
  HalPrivateDispatchTable[76]((__int64)&unk_140014EA0);
  RetrieveEfficiencyClassInformation();
  qword_140014848 = 0LL;
  v0 = 0;
  qword_140014840 = 0LL;
  for ( i = (unsigned int)dword_140014C84; v0 < dword_140014C84; ++v0 )
  {
    InitializeEnergyEstimationForEfficiencyClass(v0);
    i = (unsigned int)dword_140014C84;
  }
  qword_140014848 = qword_140014D80[0];
  for ( j = 1; j < (unsigned int)i; ++j )
  {
    if ( Globals[32 * (unsigned __int64)j + 254] != qword_140014D80[0] )
    {
      qword_140014848 = (__int64)SnapEnergyCountersDispatch;
      break;
    }
  }
  v3 = (void *)qword_140014D78[0];
  v4 = 1;
  qword_140014840 = qword_140014D78[0];
  while ( v4 < (unsigned int)i )
  {
    if ( Globals[32 * (unsigned __int64)v4 + 253] != qword_140014D78[0] )
    {
      v3 = ComputeEnergyDispatch;
      qword_140014840 = (__int64)ComputeEnergyDispatch;
      break;
    }
    ++v4;
  }
  if ( !v3 )
  {
    v3 = ComputeProcessorEnergy;
    qword_140014840 = (__int64)ComputeProcessorEnergy;
  }
  LOBYTE(i) = byte_140014828;
  return ((__int64 (__fastcall *)(void *, __int64, __int64, __int64 *))qword_140014958)(v3, qword_140014848, i, Globals);
}
