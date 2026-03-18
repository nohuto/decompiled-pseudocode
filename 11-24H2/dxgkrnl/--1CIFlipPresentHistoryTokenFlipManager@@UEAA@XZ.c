/*
 * XREFs of ??1CIFlipPresentHistoryTokenFlipManager@@UEAA@XZ @ 0x14001A530
 * Callers:
 *     ??_GCIFlipPresentHistoryTokenFlipManager@@UEAAPEAXI@Z @ 0x14001A510 (--_GCIFlipPresentHistoryTokenFlipManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnlockAndRelease@CFlipManagerToken@@QEAAXXZ @ 0x14001A8F8 (-UnlockAndRelease@CFlipManagerToken@@QEAAXXZ.c)
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::~CIFlipPresentHistoryTokenFlipManager(CFlipManagerToken **this)
{
  *this = (CFlipManagerToken *)&CIFlipPresentHistoryTokenFlipManager::`vftable';
  CFlipManagerToken::UnlockAndRelease(this[1]);
  *this = (CFlipManagerToken *)&CIFlipPresentHistoryTokenData::`vftable';
}
