/*
 * XREFs of IsSuperWetInkCompatibleVailContainer @ 0x1801AD414
 * Callers:
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x180175B0C (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801AAC2C (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801AD340 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x180257148 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ?IsVailContainer@@YA_NXZ @ 0x1801ADE98 (-IsVailContainer@@YA_NXZ.c)
 */

bool IsSuperWetInkCompatibleVailContainer()
{
  bool v0; // al
  char v1; // cl

  v0 = IsVailContainer();
  v1 = 0;
  if ( v0 )
    return *((_DWORD *)g_pComposition + 1572) == 7;
  return v1;
}
