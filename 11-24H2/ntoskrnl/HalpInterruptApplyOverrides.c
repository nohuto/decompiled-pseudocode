/*
 * XREFs of HalpInterruptApplyOverrides @ 0x1403B96C4
 * Callers:
 *     HalDisableInterrupt @ 0x1403B8EA0 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403BB048 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptConnect @ 0x140540AD8 (HalpInterruptConnect.c)
 *     HalpInterruptRemap @ 0x140540EC4 (HalpInterruptRemap.c)
 *     HalpInterruptRestoreClock @ 0x1405428C0 (HalpInterruptRestoreClock.c)
 *     HalpTimerConfigureInterrupt @ 0x140547380 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerUnmapInterrupt @ 0x140548A10 (HalpTimerUnmapInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x14054A1C4 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptMaskAcpi @ 0x140B6C718 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x1403B9C8C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 */

__int64 __fastcall HalpInterruptApplyOverrides(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  char v4; // di
  char v7; // al
  __int64 *v8; // rdx
  __int64 *v9; // r9
  __int64 result; // rax
  unsigned int v11; // edi

  v4 = 0;
  v7 = HalpAcquireHighLevelLock(&HalpInterruptOverridesLock);
  v9 = (__int64 *)HalpInterruptOverrides;
  while ( v9 != &HalpInterruptOverrides )
  {
    v8 = v9;
    v9 = (__int64 *)*v9;
    if ( *((_DWORD *)v8 + 4) == *(_DWORD *)a1 && *((_DWORD *)v8 + 5) == *(_DWORD *)(a1 + 4) )
    {
      *(_QWORD *)a1 = v8[3];
      if ( a2 )
        *a2 = *((_DWORD *)v8 + 9);
      if ( a3 )
        *a3 = *((_DWORD *)v8 + 8);
      v4 = 1;
      break;
    }
  }
  LOBYTE(v8) = v7;
  result = HalpReleaseHighLevelLock(&HalpInterruptOverridesLock, v8);
  if ( !v4 )
  {
    result = HalpInterruptController;
    if ( *(_DWORD *)(HalpInterruptController + 240) == 2 )
    {
      result = (unsigned int)(*(_DWORD *)a1 - 45056);
      if ( (unsigned int)result <= 1 )
      {
        v11 = *(_DWORD *)(a1 + 4) + 8;
        if ( *(_DWORD *)a1 != 45057 )
          v11 = *(_DWORD *)(a1 + 4);
        result = HalpInterruptFindLinesForGsiRange(v11, v11 + 1);
        if ( result )
        {
          *(_DWORD *)(a1 + 4) = v11 + *(_DWORD *)(result + 20) - *(_DWORD *)(result + 28);
          result = *(unsigned int *)(result + 16);
          *(_DWORD *)a1 = result;
        }
      }
    }
  }
  return result;
}
