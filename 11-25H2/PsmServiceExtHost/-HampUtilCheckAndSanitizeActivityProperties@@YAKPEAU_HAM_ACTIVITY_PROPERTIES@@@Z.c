/*
 * XREFs of ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180038AEC
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180038798 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HampHostDepValidateCustomProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800840A4 (-HampHostDepValidateCustomProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampUtilCheckAndSanitizeActivityProperties(struct _HAM_ACTIVITY_PROPERTIES *a1)
{
  unsigned int v2; // edx

  if ( *(_DWORD *)a1 >= 0x8000000u
    || wcsnlen((const wchar_t *)a1 + 6, 0x40uLL) == 64
    || wcsnlen((const wchar_t *)a1 + 70, 0x40uLL) == 64
    || *((int *)a1 + 67) > 5 )
  {
    v2 = 0;
    *((_WORD *)a1 + 69) = 0;
    *((_WORD *)a1 + 133) = 0;
  }
  else
  {
    return 1;
  }
  return v2;
}
