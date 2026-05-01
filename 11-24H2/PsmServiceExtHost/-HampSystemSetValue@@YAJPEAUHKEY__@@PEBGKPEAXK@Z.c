/*
 * XREFs of ?HampSystemSetValue@@YAJPEAUHKEY__@@PEBGKPEAXK@Z @ 0x180062A84
 * Callers:
 *     ?HampUsageInfoRegistrySaveAppLaunched@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x1800594F0 (-HampUsageInfoRegistrySaveAppLaunched@@YAJPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall HampSystemSetValue(HKEY a1, const unsigned __int16 *a2, DWORD a3, const BYTE *lpData, DWORD cbData)
{
  LSTATUS result; // eax

  result = RegSetValueExW(a1, a2, 0, a3, lpData, cbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
