/*
 * XREFs of PpmParkReportUnparkedCores @ 0x1402B2410
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfQueueAction @ 0x1402AF01C (PpmPerfQueueAction.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeCountSetBitsAffinityEx @ 0x14039E490 (KeCountSetBitsAffinityEx.c)
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
  v1 = KeCountSetBitsAffinityEx(&PpmPerfNewUnparkedMask);
  v2 = PpmPerfNewUnparkedMask.Bitmap[0];
  LOWORD(v3) = 0;
  PpmCheckCount = v1;
  while ( 1 )
  {
    while ( v2 )
    {
      _BitScanForward64(&v4, v2);
      v2 &= ~(1LL << v4);
      Prcb = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v3 + (unsigned __int8)v4));
      PpmPerfQueueAction(Prcb, 1);
    }
    v3 = (unsigned __int16)(v3 + 1);
    if ( (unsigned int)v3 >= PpmPerfNewUnparkedMask.Count )
      break;
    v2 = PpmPerfNewUnparkedMask.Bitmap[v3];
  }
  return 0;
}
