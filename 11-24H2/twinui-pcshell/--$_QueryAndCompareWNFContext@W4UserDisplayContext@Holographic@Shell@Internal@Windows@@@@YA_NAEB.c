/*
 * XREFs of ??$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEBU_WNF_STATE_NAME@@$$QEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x180407620
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18006FB20 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x180070120 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 * Callees:
 *     ??$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1804076C0 (--$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

bool __fastcall _QueryAndCompareWNFContext<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
        __int64 a1,
        _DWORD *a2)
{
  char v3; // bl
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]

  v6 = HIDWORD(a1);
  v3 = 0;
  v5 = 0;
  if ( (unsigned __int8)wil::try_wnf_query<unsigned long>(&WNF_HOLO_USER_DISPLAY_CONTEXT, &v5) )
    return v5 == *a2;
  return v3;
}
