/*
 * XREFs of LdrpOpenKey @ 0x1800EBDC0
 * Callers:
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180118410 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpCleanupRegistryKeys @ 0x180140C60 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x180141830 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x180141E40 (RtlpSetPreferredUILanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x18014BAA4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014C944 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 */

__int64 __fastcall LdrpOpenKey(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]

  v5[1] = a2;
  v5[2] = a1;
  *a4 = 0LL;
  v5[0] = 48LL;
  v5[3] = 64LL;
  v6 = 0LL;
  return NtOpenKey(a4, a3, v5);
}
