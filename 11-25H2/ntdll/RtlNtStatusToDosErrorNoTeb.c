/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x180028990
 * Callers:
 *     RtlDebugAllocateHeap @ 0x180025BE0 (RtlDebugAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x1800288E0 (RtlQueryUnbiasedInterruptTime.c)
 *     RtlpReAllocateHeapInternal @ 0x180029FF0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18002A860 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18002B9EC (RtlDebugReAllocateHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     TppSetTimer @ 0x18003EB00 (TppSetTimer.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180042A00 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpFreeNTHeapInternal @ 0x180054850 (RtlpFreeNTHeapInternal.c)
 *     RtlpFreeHeap @ 0x1800560F0 (RtlpFreeHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800818A0 (RtlpHpTagFreeHeap.c)
 *     RtlDebugSizeHeap @ 0x180093080 (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x1800931C0 (RtlValidateHeap.c)
 *     RtlSizeHeap @ 0x1800940C0 (RtlSizeHeap.c)
 *     RtlDebugFreeHeap @ 0x18009517C (RtlDebugFreeHeap.c)
 *     RtlGetUserInfoHeap @ 0x180095DD0 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800960DC (RtlDebugGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x1800962A0 (RtlSetUserValueHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180096590 (RtlDebugSetUserValueHeap.c)
 *     RtlCompactHeap @ 0x180097BA0 (RtlCompactHeap.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800DC5E0 (LdrpRedirectDelayloadFailure.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180110BBC (RtlDebugSetUserFlagsHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180110D40 (RtlSetUserFlagsHeap.c)
 *     RtlDebugCompactHeap @ 0x1801204C8 (RtlDebugCompactHeap.c)
 *     RtlDebugWalkHeap @ 0x1801208B0 (RtlDebugWalkHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180145F94 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180146088 (RtlDebugQueryTagHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
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
      v2 = 340;
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
