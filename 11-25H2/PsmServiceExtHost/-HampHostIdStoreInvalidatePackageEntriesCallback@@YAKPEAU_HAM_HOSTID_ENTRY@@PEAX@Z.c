/*
 * XREFs of ?HampHostIdStoreInvalidatePackageEntriesCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x18005B5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_ENTRY@@@Z @ 0x18005B658 (-HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_ENTRY@@@Z.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x18005B770 (CempPackageFamilyNameFromPsmKey.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostIdStoreInvalidatePackageEntriesCallback(struct _HAM_HOSTID_ENTRY *a1, _QWORD *a2)
{
  struct _HAM_HOSTID_ENTRY *v3; // rdi
  unsigned __int64 v4; // rbx
  wchar_t String1[72]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = a1;
  v4 = (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 40;
  if ( v4 != a2[1] )
  {
    CempPackageFamilyNameFromPsmKey(v4 + 88, String1);
    if ( _wcsicmp(String1, (const wchar_t *)(*a2 + 96LL)) )
      return 1LL;
    a2[1] = v4;
    a1 = v3;
  }
  HampHostIdStoreInvalidateEntry(a1);
  return 1LL;
}
