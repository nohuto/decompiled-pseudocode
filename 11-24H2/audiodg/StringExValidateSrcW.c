/*
 * XREFs of StringExValidateSrcW @ 0x14006443C
 * Callers:
 *     ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x14000DF18 (-Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x140026760 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringExValidateSrcW(
        STRSAFE_PCNZWCH *ppszSrc,
        size_t *pcchToRead,
        const size_t cchMax,
        DWORD dwFlags)
{
  HRESULT result; // eax

  result = 0;
  if ( pcchToRead && *pcchToRead >= 0x7FFFFFFF )
    return -2147024809;
  if ( !*ppszSrc )
  {
    *ppszSrc = (STRSAFE_PCNZWCH)&unk_1400A8518;
    if ( pcchToRead )
      *pcchToRead = 0LL;
  }
  return result;
}
