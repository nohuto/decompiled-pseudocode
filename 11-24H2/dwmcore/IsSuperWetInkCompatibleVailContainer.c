/*
 * XREFs of IsSuperWetInkCompatibleVailContainer @ 0x18018F158
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18018F084 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801A0CA8 (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801C4700 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x18024BD78 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ?IsVailContainer@@YA_NXZ @ 0x18018FD20 (-IsVailContainer@@YA_NXZ.c)
 */

bool IsSuperWetInkCompatibleVailContainer()
{
  bool v0; // al
  char v1; // cl

  v0 = IsVailContainer();
  v1 = 0;
  if ( v0 )
    return *((_DWORD *)g_pComposition + 1566) == 7;
  return v1;
}
