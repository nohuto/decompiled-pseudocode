/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x14026A790
 * Callers:
 *     PpmUnlockProcessors @ 0x140205028 (PpmUnlockProcessors.c)
 *     KeChangeMemoryAttributes @ 0x14026A684 (KeChangeMemoryAttributes.c)
 *     KiCheckKeepAlive @ 0x14026B9B4 (KiCheckKeepAlive.c)
 *     KxFlushEntireTb @ 0x14027043C (KxFlushEntireTb.c)
 *     KiForwardTick @ 0x140274A70 (KiForwardTick.c)
 *     PpmParkUnblockIdle @ 0x1403E8470 (PpmParkUnblockIdle.c)
 *     KeFreezeExecution @ 0x1404D6470 (KeFreezeExecution.c)
 *     PpmParkComputeUnparkMask @ 0x1404EAC14 (PpmParkComputeUnparkMask.c)
 *     HalpNmiReboot @ 0x140557354 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiSendFreeze @ 0x1405BDEE4 (KiSendFreeze.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C17E0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KxFlushSingleTb @ 0x1405C52F8 (KxFlushSingleTb.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x140798B1C (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     RtlUpdateSwapReference @ 0x140A308D0 (RtlUpdateSwapReference.c)
 *     PnprQuiesceProcessors @ 0x140B44B74 (PnprQuiesceProcessors.c)
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
