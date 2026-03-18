/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1403CA140
 * Callers:
 *     KiForwardTick @ 0x14029D53C (KiForwardTick.c)
 *     KxFlushEntireTb @ 0x1403B07A4 (KxFlushEntireTb.c)
 *     PpmUnlockProcessors @ 0x1403B66C4 (PpmUnlockProcessors.c)
 *     KiCheckKeepAlive @ 0x1403C9E44 (KiCheckKeepAlive.c)
 *     KeChangeMemoryAttributes @ 0x1403CA178 (KeChangeMemoryAttributes.c)
 *     PpmParkUnblockIdle @ 0x140457DA0 (PpmParkUnblockIdle.c)
 *     KeFreezeExecution @ 0x1404D5B60 (KeFreezeExecution.c)
 *     HalpNmiReboot @ 0x140559C54 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KiSendFreeze @ 0x1405C1F30 (KiSendFreeze.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C5B80 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KxFlushSingleTb @ 0x1405C9918 (KxFlushSingleTb.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405E2544 (PpmParkComputeUnparkMaskEx.c)
 *     PpmParkDistributeUtilityEx @ 0x1405E337C (PpmParkDistributeUtilityEx.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1407A7EEC (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     RtlUpdateSwapReference @ 0x140A36190 (RtlUpdateSwapReference.c)
 *     PnprQuiesceProcessors @ 0x140B54B74 (PnprQuiesceProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorAffinityEx(unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = *((_DWORD *)KiGlobalState + a2);
  result = v3 >> 6;
  if ( *a1 > (unsigned int)result )
  {
    v5 = (unsigned int)result;
    result = *(_QWORD *)&a1[4 * result + 4] & ~(1LL << (v3 & 0x3F));
    *(_QWORD *)&a1[4 * v5 + 4] = result;
  }
  return result;
}
