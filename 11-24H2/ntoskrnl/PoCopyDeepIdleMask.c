/*
 * XREFs of PoCopyDeepIdleMask @ 0x14032C648
 * Callers:
 *     KiForwardTick @ 0x1402AC02C (KiForwardTick.c)
 *     PpmCheckContinueExecution @ 0x1402B065C (PpmCheckContinueExecution.c)
 *     KiGetDeepIdleProcessors @ 0x14032C3E8 (KiGetDeepIdleProcessors.c)
 *     KeFlushQueuedDpcs @ 0x14032C480 (KeFlushQueuedDpcs.c)
 *     PpmIdleSelectStates @ 0x1404E1498 (PpmIdleSelectStates.c)
 *     RtlUpdateSwapReference @ 0x140A2B6A0 (RtlUpdateSwapReference.c)
 *     PpmPostProcessMediaBuffering @ 0x140A3D2EC (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeIsEmptyGroupMask @ 0x14032FF20 (KeIsEmptyGroupMask.c)
 *     KeFindFirstSetRightGroupMask @ 0x140330524 (KeFindFirstSetRightGroupMask.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall PoCopyDeepIdleMask(unsigned __int16 *a1)
{
  unsigned __int64 result; // rax
  bool v3; // cf
  unsigned int v4; // ebx
  unsigned __int16 FirstSetRightGroupMask; // ax
  __int64 v6; // [rsp+20h] [rbp-28h]
  __int128 v7; // [rsp+28h] [rbp-20h] BYREF

  result = (unsigned __int64)memset_0(a1 + 4, 0, 8LL * *a1);
  v3 = KeNumberNodes != 0;
  v4 = 0;
  *a1 = 1;
  if ( v3 )
  {
    do
    {
      v7 = 0LL;
      v6 = KeNodeBlock[v4];
      RtlCopyVolatileMemory(&v7, (const void *)(v6 + 16), 0x10uLL);
      while ( !(unsigned int)KeIsEmptyGroupMask(&v7) )
      {
        FirstSetRightGroupMask = KeFindFirstSetRightGroupMask(&v7);
        _bittestandreset64((signed __int64 *)&v7, FirstSetRightGroupMask);
        KeAddGroupAffinityEx(
          a1,
          *(_WORD *)(*(_QWORD *)(v6 + 8LL * FirstSetRightGroupMask + 32) + 136LL),
          *(_QWORD *)(*(_QWORD *)(v6 + 8LL * FirstSetRightGroupMask + 32) + 64LL));
      }
      result = (unsigned __int16)KeNumberNodes;
      ++v4;
    }
    while ( v4 < (unsigned __int16)KeNumberNodes );
  }
  return result;
}
