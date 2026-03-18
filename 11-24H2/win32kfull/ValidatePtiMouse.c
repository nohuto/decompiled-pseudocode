/*
 * XREFs of ValidatePtiMouse @ 0x1401314E0
 * Callers:
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401305C0 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadHidObjects @ 0x1401AEBF0 (DestroyThreadHidObjects.c)
 * Callees:
 *     PtiMouseFromQ @ 0x140131DA8 (PtiMouseFromQ.c)
 */

__int64 __fastcall ValidatePtiMouse(__int64 a1)
{
  if ( a1 )
    return PtiMouseFromQ(a1);
  else
    return 0LL;
}
