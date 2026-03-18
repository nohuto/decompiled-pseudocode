/*
 * XREFs of PpmParkReportUnparkedCores @ 0x1403AD800
 * Callers:
 *     <none>
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x140271370 (KeCountSetBitsAffinityEx.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1403ADE18 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmPerfQueueAction @ 0x1403E88F0 (PpmPerfQueueAction.c)
 */

char PpmParkReportUnparkedCores()
{
  int v1; // eax
  unsigned __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 Prcb; // rax

  if ( !PpmIsParkingEnabled
    || !KiSubtractAffinityEx(
          &PpmPerfChangedCoreParkingMask,
          &PpmPerfNewCoreParkingMask,
          &PpmPerfNewUnparkedMask,
          PpmPerfNewUnparkedMask.Size) )
  {
    return 1;
  }
  v1 = KeCountSetBitsAffinityEx(&PpmPerfNewUnparkedMask.Count);
  v2 = PpmPerfNewUnparkedMask.Bitmap[0];
  LOWORD(v3) = 0;
  PpmCheckCount = v1;
  while ( 1 )
  {
    while ( v2 )
    {
      _BitScanForward64(&v4, v2);
      v2 &= ~(1LL << v4);
      Prcb = KeGetPrcb(*((unsigned int *)qword_140F216A8 + 64 * (unsigned __int16)v3 + (unsigned __int8)v4));
      PpmPerfQueueAction(Prcb, 1LL);
    }
    v3 = (unsigned __int16)(v3 + 1);
    if ( (unsigned int)v3 >= PpmPerfNewUnparkedMask.Count )
      break;
    v2 = PpmPerfNewUnparkedMask.Bitmap[v3];
  }
  return 0;
}
