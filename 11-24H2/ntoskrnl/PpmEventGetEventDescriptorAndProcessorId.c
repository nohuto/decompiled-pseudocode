/*
 * XREFs of PpmEventGetEventDescriptorAndProcessorId @ 0x14041FD10
 * Callers:
 *     PpmEventProcessorPerfStateChange @ 0x14029E7D8 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventAutonomousModeChange @ 0x1405D8F14 (PpmEventAutonomousModeChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmEventGetEventDescriptorAndProcessorId(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  if ( *(_BYTE *)(a1 + 68) )
  {
    *(_WORD *)a4 = *(unsigned __int8 *)(a1 - 35040);
    *(_BYTE *)(a4 + 2) = *(_BYTE *)(a1 - 35039);
    *a5 = a4;
    a5[1] = 3LL;
    return a2;
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
    *a5 = a4;
    a5[1] = 4LL;
    return a3;
  }
}
