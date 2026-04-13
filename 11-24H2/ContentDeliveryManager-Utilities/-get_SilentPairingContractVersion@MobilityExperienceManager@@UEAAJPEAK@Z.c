/*
 * XREFs of ?get_SilentPairingContractVersion@MobilityExperienceManager@@UEAAJPEAK@Z @ 0x1800A8290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobilityExperienceManager::get_SilentPairingContractVersion(
        MobilityExperienceManager *this,
        unsigned int *a2)
{
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  v3 = 4;
  RegGetValueW(
    HKEY_CURRENT_USER,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
    L"SilentPairingContractVersion",
    0x20000010u,
    0LL,
    a2,
    &v3);
  return 0LL;
}
