/*
 * XREFs of PoCopyDeepIdleMask @ 0x14026728C
 * Callers:
 *     KiGetDeepIdleProcessors @ 0x1402671F0 (KiGetDeepIdleProcessors.c)
 *     KiForwardTick @ 0x140274A70 (KiForwardTick.c)
 *     PpmCheckContinueExecution @ 0x1403B099C (PpmCheckContinueExecution.c)
 *     PpmIdleSelectStates @ 0x1404B1F28 (PpmIdleSelectStates.c)
 *     RtlUpdateSwapReference @ 0x140A308D0 (RtlUpdateSwapReference.c)
 *     PpmPostProcessMediaBuffering @ 0x140A3F0D8 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeIsEmptyGroupMask @ 0x140304FE8 (KeIsEmptyGroupMask.c)
 *     KeFindFirstSetRightGroupMask @ 0x140305380 (KeFindFirstSetRightGroupMask.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
