/*
 * XREFs of KeEnumerateNextSchedulerSubNodeInNode @ 0x140304F78
 * Callers:
 *     KeQueryNodeActiveProcessorCount @ 0x1405B6BB0 (KeQueryNodeActiveProcessorCount.c)
 *     PoAllProcessorsDeepIdle @ 0x1405C9424 (PoAllProcessorsDeepIdle.c)
 *     PpmParkRegisterParking @ 0x1405D55E0 (PpmParkRegisterParking.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A5EA90 (KiSynchNumaCounterSetCallback.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 *     KiConfigureAllSchedulingInformation @ 0x140C16E18 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140305240 (RtlNumberOfSetBitsEx.c)
 *     KeFindFirstSetRightGroupMask @ 0x140305380 (KeFindFirstSetRightGroupMask.c)
 */

__int64 __fastcall KeEnumerateNextSchedulerSubNodeInNode(_QWORD *a1, _QWORD *a2)
{
  signed __int64 *v2; // rbx
  unsigned __int16 FirstSetRightGroupMask; // ax
  __int64 v6; // rcx
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 + 1;
  v8[0] = 32LL;
  v8[1] = a1 + 1;
  if ( !RtlNumberOfSetBitsEx(v8) )
    return 2147483674LL;
  FirstSetRightGroupMask = KeFindFirstSetRightGroupMask(v2);
  _bittestandreset64(v2, FirstSetRightGroupMask);
  v6 = *(_QWORD *)(*a1 + 8LL * FirstSetRightGroupMask + 32);
  result = 0LL;
  *a2 = v6;
  return result;
}
