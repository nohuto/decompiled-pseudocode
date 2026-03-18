/*
 * XREFs of ACPIProcessorBuildHiddenApicIds @ 0x1400A2AA8
 * Callers:
 *     ACPIProcessorStartDeviceWorker @ 0x140065D40 (ACPIProcessorStartDeviceWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 ACPIProcessorBuildHiddenApicIds()
{
  __int64 (__fastcall *v0)(__int64); // rax
  unsigned int v1; // eax
  int v2; // edx
  __int64 result; // rax
  __int64 i; // rbx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  v0 = (__int64 (__fastcall *)(__int64))HalPrivateDispatchTable[145];
  if ( !v0 )
    return 0LL;
  if ( !HalPrivateDispatchTable[146] )
    return 0LL;
  if ( AcpiHiddenProcessorApicIds )
    return 0LL;
  v1 = v0(0xFFFFFFFFLL);
  AcpiHiddenProcessorCount = v1;
  if ( !v1 )
    return 0LL;
  AcpiHiddenProcessorApicIds = ExAllocatePool2(64LL, 4LL * v1, 1299211073LL);
  if ( AcpiHiddenProcessorApicIds )
  {
    for ( i = 0LL; (unsigned int)i < AcpiHiddenProcessorCount; i = (unsigned int)(i + 1) )
    {
      result = HalPrivateDispatchTable[146]((unsigned int)i, (__int64)&v5);
      if ( (int)result < 0 )
        return result;
      *(_DWORD *)(AcpiHiddenProcessorApicIds + 4 * i) = v5;
    }
    return 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      21,
      11,
      (__int64)&WPP_753fe4d36662374399d7f9e30a1e6541_Traceguids);
  }
  return 3221225626LL;
}
