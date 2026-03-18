/*
 * XREFs of PopDirectedDripsIsLikelySpecialDevice @ 0x140755588
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140755090 (PopDirectedDripsBuildBroadcastTreeFull.c)
 *     PopDirectedDripsVisitPs4Device @ 0x140755600 (PopDirectedDripsVisitPs4Device.c)
 * Callees:
 *     <none>
 */

char __fastcall PopDirectedDripsIsLikelySpecialDevice(__int64 a1, _DWORD *a2)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 760) & 0x10) != 0 )
  {
    *a2 = 0;
    return 1;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0 )
  {
    result = 1;
    *a2 = 7;
  }
  else if ( (*(_DWORD *)(a1 + 760) & 0x80000) != 0 )
  {
    result = 1;
    *a2 = 6;
  }
  else
  {
    return 0;
  }
  return result;
}
