/*
 * XREFs of ?HamSrvAreTerminateParametersValid@@YAKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180063148
 * Callers:
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x180062DD0 (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMIN.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HamSrvAreTerminateParametersValid(int a1, int a2, _QWORD *a3)
{
  return (unsigned int)(a1 - 1) <= 2 && (unsigned int)(a2 - 1) <= 0x1AFE && (!a3 || *a3);
}
