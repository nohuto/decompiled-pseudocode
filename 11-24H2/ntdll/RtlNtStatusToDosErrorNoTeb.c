/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x1800872D0
 * Callers:
 *     RtlDebugAllocateHeap @ 0x18001F7A4 (RtlDebugAllocateHeap.c)
 *     RtlSetUserValueHeap @ 0x18001FB40 (RtlSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x18001FFC0 (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x180020100 (RtlValidateHeap.c)
 *     RtlSizeHeap @ 0x180021000 (RtlSizeHeap.c)
 *     RtlDebugFreeHeap @ 0x180022020 (RtlDebugFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DA30 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x180053EC0 (RtlpHpTagFreeHeap.c)
 *     RtlpFreeNTHeapInternal @ 0x180058780 (RtlpFreeNTHeapInternal.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18005AF10 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18005C7E8 (RtlDebugReAllocateHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x180083CE0 (RtlpHpTagAllocateHeap.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x180087220 (RtlQueryUnbiasedInterruptTime.c)
 *     TppSetTimer @ 0x180087CF0 (TppSetTimer.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800D9830 (LdrpRedirectDelayloadFailure.c)
 *     RtlGetUserInfoHeap @ 0x1800E63B0 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800E66BC (RtlDebugGetUserInfoHeap.c)
 *     RtlCompactHeap @ 0x180106E40 (RtlCompactHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108FCC (RtlDebugSetUserFlagsHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180109150 (RtlSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010C554 (RtlDebugSetUserValueHeap.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x18011CE28 (RtlDebugCompactHeap.c)
 *     RtlDebugWalkHeap @ 0x18011D210 (RtlDebugWalkHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180142DD4 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180142EC8 (RtlDebugQueryTagHeap.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 */

ULONG __cdecl RtlNtStatusToDosErrorNoTeb(NTSTATUS Status)
{
  ULONG result; // eax
  unsigned int v2; // r11d
  unsigned __int32 v3; // edx
  unsigned int v4; // r10d
  __int64 v5; // rcx
  __int64 v6; // r9
  unsigned int v7; // eax
  unsigned int v8; // r8d
  int v9; // eax

  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  result = Status;
  if ( (Status & 0x20000000) == 0 )
  {
    if ( (Status & 0xFF0000) != 0x70000 || ((HIBYTE(Status) - 128) & 0xFFFFFFBF) != 0 )
    {
      v2 = 342;
      v3 = Status & 0xCFFFFFFF;
      if ( (Status & 0xF0000000) != 0xD0000000 )
        v3 = Status;
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
        return 317;
      }
    }
    else
    {
      return (unsigned __int16)Status;
    }
  }
  return result;
}
