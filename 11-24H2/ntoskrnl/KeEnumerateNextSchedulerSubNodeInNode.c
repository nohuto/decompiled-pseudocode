/*
 * XREFs of KeEnumerateNextSchedulerSubNodeInNode @ 0x1402088E0
 * Callers:
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B5474 (KeUpdateProcessorRestrictionsEx.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1405BAA40 (KeQueryNodeActiveProcessorCount.c)
 *     PoAllProcessorsDeepIdle @ 0x1405CDADC (PoAllProcessorsDeepIdle.c)
 *     PpmParkRegisterParking @ 0x1405D9FB4 (PpmParkRegisterParking.c)
 *     PpmParkRegisterParkingEx @ 0x1405E3C90 (PpmParkRegisterParkingEx.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A60920 (KiSynchNumaCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 *     KiConfigureAllSchedulingInformation @ 0x140C27EA8 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x140208940 (KeIsEmptyGroupMask.c)
 *     KeFindFirstSetRightGroupMask @ 0x140208F44 (KeFindFirstSetRightGroupMask.c)
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
