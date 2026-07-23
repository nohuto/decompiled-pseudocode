/*
 * XREFs of _MapCmClassPropertyToRegValue @ 0x140462230
 * Callers:
 *     _CmSetInstallerClassRegPropWorker @ 0x140819A14 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14097F250 (_CmGetInstallerClassRegPropWorker.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall MapCmClassPropertyToRegValue(__int64 a1, int a2)
{
  int v2; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  v2 = a2 - 8;
  if ( !v2 )
    return L"Class";
  v4 = v2 - 5;
  if ( !v4 )
    return L"ClassDesc";
  v5 = v4 - 5;
  if ( !v5 )
    return L"UpperFilters";
  v6 = v5 - 1;
  if ( !v6 )
    return L"LowerFilters";
  v7 = v6 - 5;
  if ( !v7 )
    return L"Security";
  v8 = v7 - 2;
  if ( !v8 )
    return L"DeviceType";
  v9 = v8 - 1;
  if ( !v9 )
    return L"Exclusive";
  if ( v9 == 1 )
    return L"DeviceCharacteristics";
  return 0LL;
}
