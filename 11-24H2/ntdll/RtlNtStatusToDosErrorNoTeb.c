/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0
 * Callers:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180021030 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpFreeNTHeapInternal @ 0x18002BD80 (RtlpFreeNTHeapInternal.c)
 *     RtlpFreeHeap @ 0x18002D620 (RtlpFreeHeap.c)
 *     RtlDebugSizeHeap @ 0x18003F690 (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x18003F7D0 (RtlValidateHeap.c)
 *     RtlSizeHeap @ 0x1800406D0 (RtlSizeHeap.c)
 *     RtlDebugFreeHeap @ 0x18004178C (RtlDebugFreeHeap.c)
 *     RtlGetUserInfoHeap @ 0x1800423E0 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800426EC (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800428AC (RtlDebugSetUserValueHeap.c)
 *     RtlCompactHeap @ 0x180043EC0 (RtlCompactHeap.c)
 *     TppSetTimer @ 0x18006B410 (TppSetTimer.c)
 *     RtlpHpTagAllocateHeap @ 0x180094EF0 (RtlpHpTagAllocateHeap.c)
 *     RtlSetUserValueHeap @ 0x18009BF90 (RtlSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x18009CC30 (RtlDebugAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x18009D360 (RtlpAllocateHeap.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x18009F930 (RtlQueryUnbiasedInterruptTime.c)
 *     RtlpReAllocateHeapInternal @ 0x1800A1040 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800A18B0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800A2A3C (RtlDebugReAllocateHeap.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800DE6C0 (LdrpRedirectDelayloadFailure.c)
 *     RtlDebugSetUserFlagsHeap @ 0x18010E0EC (RtlDebugSetUserFlagsHeap.c)
 *     RtlSetUserFlagsHeap @ 0x18010E270 (RtlSetUserFlagsHeap.c)
 *     RtlDebugCompactHeap @ 0x18011EBF8 (RtlDebugCompactHeap.c)
 *     RtlDebugWalkHeap @ 0x18011EFE0 (RtlDebugWalkHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180144A24 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180144B18 (RtlDebugQueryTagHeap.c)
 * Callees:
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 */

__int64 __fastcall RtlNtStatusToDosErrorNoTeb(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // r11d
  unsigned int v3; // edx
  unsigned int v4; // r10d
  __int64 v5; // rcx
  __int64 v6; // r9
  unsigned int v7; // eax
  unsigned int v8; // r8d
  int v9; // eax

  if ( !a1 )
    return 0LL;
  if ( a1 == 259 )
    return 997LL;
  result = a1;
  if ( (a1 & 0x20000000) == 0 )
  {
    if ( (a1 & 0xFF0000) != 0x70000 || ((HIBYTE(a1) - 128) & 0xFFFFFFBF) != 0 )
    {
      v2 = 341;
      v3 = a1 & 0xCFFFFFFF;
      if ( (a1 & 0xF0000000) != 0xD0000000 )
        v3 = a1;
      v4 = 0;
      do
      {
        v5 = (v4 + v2) >> 1;
        v6 = 2 * v5;
        v7 = RtlpRunTable[2 * v5];
        v8 = v3 - v7;
        if ( v3 < v7 )
        {
          v2 = v5 - 1;
        }
        else
        {
          if ( v8 < LOBYTE(RtlpRunTable[v6 + 1]) )
          {
            v9 = HIWORD(RtlpRunTable[v6 + 1]);
            if ( BYTE1(RtlpRunTable[v6 + 1]) == 1 )
              return (unsigned __int16)RtlpStatusTable[v8 + v9];
            else
              return (unsigned __int16)RtlpStatusTable[2 * v8 + v9] | ((unsigned __int16)RtlpStatusTable[2 * v8 + 1 + v9] << 16);
          }
          v4 = v5 + 1;
        }
      }
      while ( v4 <= v2 );
      if ( (v3 & 0xFFFF0000) == 0xC0010000 )
      {
        return (unsigned __int16)v3;
      }
      else
      {
        DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v3);
        DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
        DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
        return 317LL;
      }
    }
    else
    {
      return (unsigned __int16)a1;
    }
  }
  return result;
}
