/*
 * XREFs of ?HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z @ 0x180041E7C
 * Callers:
 *     ?HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180041AC4 (-HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 *     ?HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180059140 (-HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIdStoreCheckAndSanitizeKey(const wchar_t *a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)PsmIsValidKey(a1) && wcsnlen(a1 + 268, 0x100uLL) != 256 && RtlValidSid((PSID)(a1 + 232)) )
    return 1LL;
  *((_WORD *)a1 + 231) = 0;
  result = 0LL;
  *((_WORD *)a1 + 523) = 0;
  return result;
}
