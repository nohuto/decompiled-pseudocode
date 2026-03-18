/*
 * XREFs of NVMeInitializeProcessorIoQueueMapping @ 0x14001E2F4
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     NVMeControllerReinitialize @ 0x1400274C4 (NVMeControllerReinitialize.c)
 * Callees:
 *     ProcessorToIoSqMappingBase @ 0x1400046D0 (ProcessorToIoSqMappingBase.c)
 *     ProcessorToDedicatedIoSqMapping @ 0x14001EF6C (ProcessorToDedicatedIoSqMapping.c)
 */

__int64 __fastcall NVMeInitializeProcessorIoQueueMapping(__int64 a1)
{
  unsigned int i; // esi
  int v4; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_WORD *)(a1 + 272) )
    return 1LL;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 234); ++i )
  {
    v4 = 0;
    if ( !(unsigned int)StorPortExtendedFunction(116LL, a1, *(unsigned int *)(*(_QWORD *)(a1 + 264) + 72LL * i), &v4)
      && (*(_WORD *)(a1 + 272) == 1 || v4) )
    {
      ProcessorToIoSqMappingBase(a1, *(_DWORD *)(*(_QWORD *)(a1 + 264) + 72LL * i), v4, 0);
      ProcessorToDedicatedIoSqMapping(a1, *(unsigned int *)(*(_QWORD *)(a1 + 264) + 72LL * i), (unsigned __int16)v4);
    }
  }
  return 0LL;
}
