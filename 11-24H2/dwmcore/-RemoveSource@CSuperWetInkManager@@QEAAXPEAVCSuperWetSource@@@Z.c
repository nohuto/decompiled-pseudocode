/*
 * XREFs of ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x18024BD78
 * Callers:
 *     ??1CGenericInk@@EEAA@XZ @ 0x18022DCCC (--1CGenericInk@@EEAA@XZ.c)
 *     ??1CDelegatedInkCanvas@@EEAA@XZ @ 0x180298FAC (--1CDelegatedInkCanvas@@EEAA@XZ.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x1802A6EF8 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 * Callees:
 *     IsSuperWetInkCompatibleVailContainer @ 0x18018F158 (IsSuperWetInkCompatibleVailContainer.c)
 *     ?RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x180223F54 (-RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x18024BDB8 (-RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 */

void __fastcall CSuperWetInkManager::RemoveSource(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  if ( IsSuperWetInkCompatibleVailContainer() )
    CSuperWetInkManager::RemoveSourceHost(this, a2);
  else
    CSuperWetInkManager::RemoveSourceLocal(this, a2);
}
