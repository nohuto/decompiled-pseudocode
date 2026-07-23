/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1403A4D10
 * Callers:
 *     KiForwardTick @ 0x1402AC02C (KiForwardTick.c)
 *     PpmUnlockProcessors @ 0x140371990 (PpmUnlockProcessors.c)
 *     KxFlushEntireTb @ 0x14039EFB4 (KxFlushEntireTb.c)
 *     KiCheckKeepAlive @ 0x1403A49E4 (KiCheckKeepAlive.c)
 *     KeChangeMemoryAttributes @ 0x1403A4D48 (KeChangeMemoryAttributes.c)
 *     PpmParkUnblockIdle @ 0x14044D0B0 (PpmParkUnblockIdle.c)
 *     KeFreezeExecution @ 0x1404CEFB0 (KeFreezeExecution.c)
 *     HalpNmiReboot @ 0x140557884 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiSendFreeze @ 0x1405BF500 (KiSendFreeze.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C32B0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KxFlushSingleTb @ 0x1405C7048 (KxFlushSingleTb.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 *     PpmParkDistributeUtilityEx @ 0x1405E0904 (PpmParkDistributeUtilityEx.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1407A802C (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     RtlUpdateSwapReference @ 0x140A2B6A0 (RtlUpdateSwapReference.c)
 *     PnprQuiesceProcessors @ 0x140B56BC4 (PnprQuiesceProcessors.c)
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
