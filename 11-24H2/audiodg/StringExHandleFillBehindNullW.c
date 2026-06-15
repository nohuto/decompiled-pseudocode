/*
 * XREFs of StringExHandleFillBehindNullW @ 0x1400643F0
 * Callers:
 *     ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x14000DF18 (-Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x140026760 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 * Callees:
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 */

HRESULT __stdcall StringExHandleFillBehindNullW(STRSAFE_LPWSTR pszDestEnd, size_t cbRemaining, DWORD dwFlags)
{
  if ( cbRemaining > 2 )
    memset_0(pszDestEnd + 1, 0, cbRemaining - 2);
  return 0;
}
