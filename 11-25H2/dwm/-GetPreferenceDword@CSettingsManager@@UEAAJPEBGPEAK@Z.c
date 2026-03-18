/*
 * XREFs of ?GetPreferenceDword@CSettingsManager@@UEAAJPEBGPEAK@Z @ 0x140003FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSettingsManager::GetPreferenceDword(CSettingsManager *this, const unsigned __int16 *a2, BYTE *a3)
{
  return CSettingsManager::GetDword((__int64)this, 0, a2, a3);
}
