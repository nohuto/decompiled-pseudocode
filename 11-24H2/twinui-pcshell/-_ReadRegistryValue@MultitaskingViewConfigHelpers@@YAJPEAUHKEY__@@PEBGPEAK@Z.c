/*
 * XREFs of ?_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x1804BA9EC
 * Callers:
 *     ??$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z @ 0x1804B99B4 (--$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z.c)
 *     ??$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z @ 0x1804B99E4 (--$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z.c)
 *     ??$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z @ 0x1804B9A28 (--$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z.c)
 *     ??$_ReadOptionalRegistryValue@_N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEA_N@Z @ 0x1804B9A6C (--$_ReadOptionalRegistryValue@_N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEA_N@Z.c)
 *     ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x1804BA748 (-_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall MultitaskingViewConfigHelpers::_ReadRegistryValue(
        MultitaskingViewConfigHelpers *this,
        const WCHAR *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  LSTATUS result; // eax
  DWORD v5; // [rsp+60h] [rbp+18h] BYREF

  *(_DWORD *)a3 = 0;
  v5 = 4;
  result = RegGetValueW((HKEY)this, 0LL, a2, 0x10u, 0LL, a3, &v5);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
