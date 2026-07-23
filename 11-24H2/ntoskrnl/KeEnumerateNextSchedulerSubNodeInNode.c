/*
 * XREFs of KeEnumerateNextSchedulerSubNodeInNode @ 0x14032FEC0
 * Callers:
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B273C (KeUpdateProcessorRestrictionsEx.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1405B8070 (KeQueryNodeActiveProcessorCount.c)
 *     PoAllProcessorsDeepIdle @ 0x1405CB1F8 (PoAllProcessorsDeepIdle.c)
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A58E70 (KiSynchNumaCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     KiConfigureAllSchedulingInformation @ 0x140C29E84 (KiConfigureAllSchedulingInformation.c)
 *     KiCountNodeZeroSetBitsGroupAffinity @ 0x140C29F90 (KiCountNodeZeroSetBitsGroupAffinity.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x14032FF20 (KeIsEmptyGroupMask.c)
 *     KeFindFirstSetRightGroupMask @ 0x140330524 (KeFindFirstSetRightGroupMask.c)
 */

__int64 __fastcall KeEnumerateNextSchedulerSubNodeInNode(_QWORD *a1, _QWORD *a2)
{
  signed __int64 *v2; // rbx
  unsigned __int16 FirstSetRightGroupMask; // ax
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = a1 + 1;
  if ( (unsigned int)KeIsEmptyGroupMask(a1 + 1) )
    return 2147483674LL;
  FirstSetRightGroupMask = KeFindFirstSetRightGroupMask(v2);
  _bittestandreset64(v2, FirstSetRightGroupMask);
  v6 = *(_QWORD *)(*a1 + 8LL * FirstSetRightGroupMask + 32);
  result = 0LL;
  *a2 = v6;
  return result;
}
