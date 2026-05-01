/*
 * XREFs of ?HampHostIdStoreCompareLeafByKey@@YAJPEAX0@Z @ 0x1800430B0
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180042948 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 * Callees:
 *     <none>
 */

int __fastcall HampHostIdStoreCompareLeafByKey(const wchar_t *a1, const wchar_t *a2)
{
  return _wcsicmp(a1 + 268, a2 + 48);
}
