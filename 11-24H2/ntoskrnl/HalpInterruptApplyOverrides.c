/*
 * XREFs of HalpInterruptApplyOverrides @ 0x1403732F0
 * Callers:
 *     HalDisableInterrupt @ 0x140373FF0 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403747D8 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptConnect @ 0x14053E3D8 (HalpInterruptConnect.c)
 *     HalpInterruptRemap @ 0x14053E7C4 (HalpInterruptRemap.c)
 *     HalpInterruptRestoreClock @ 0x140540210 (HalpInterruptRestoreClock.c)
 *     HalpTimerConfigureInterrupt @ 0x140544C40 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerUnmapInterrupt @ 0x1405462D0 (HalpTimerUnmapInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140547A84 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptMaskAcpi @ 0x140B6DFB8 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x14037265C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 */

ULONG_PTR __fastcall HalpInterruptApplyOverrides(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  char v4; // di
  unsigned __int8 v7; // al
  __int64 *v8; // r9
  __int64 *v9; // rdx
  ULONG_PTR result; // rax
  unsigned int v11; // edi

  v4 = 0;
  v7 = HalpAcquireHighLevelLock(&HalpInterruptOverridesLock);
  v8 = (__int64 *)HalpInterruptOverrides;
  while ( v8 != &HalpInterruptOverrides )
  {
    v9 = v8;
    v8 = (__int64 *)*v8;
    if ( *((_DWORD *)v9 + 4) == *(_DWORD *)a1 && *((_DWORD *)v9 + 5) == *(_DWORD *)(a1 + 4) )
    {
      *(_QWORD *)a1 = v9[3];
      if ( a2 )
        *a2 = *((_DWORD *)v9 + 9);
      if ( a3 )
        *a3 = *((_DWORD *)v9 + 8);
      v4 = 1;
      break;
    }
  }
  result = HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptOverridesLock, v7);
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
        result = (ULONG_PTR)HalpInterruptFindLinesForGsiRange(v11, v11 + 1);
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
