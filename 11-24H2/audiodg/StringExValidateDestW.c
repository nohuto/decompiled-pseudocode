/*
 * XREFs of StringExValidateDestW @ 0x140064418
 * Callers:
 *     ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x14000DF18 (-Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x140026760 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringExValidateDestW(STRSAFE_PCNZWCH pszDest, size_t cchDest, const size_t cchMax, DWORD dwFlags)
{
  HRESULT result; // eax

  result = 0;
  if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
    return -2147024809;
  return result;
}
