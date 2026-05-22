/*
 * XREFs of ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18005BAD0
 * Callers:
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x180014C08 (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180019290 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001B7B0 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B78C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x18009B814 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 */

char *__fastcall LegacyInputSinkData::GetViewInstanceId(LegacyInputSinkData *this)
{
  char *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 20) )
  {
    v2 = (char *)this + 16;
  }
  else
  {
    LODWORD(v4) = 0;
    if ( *((_BYTE *)this + 8) > 1u )
      std::_Throw_bad_variant_access();
    NtQueryCompositionInputSinkViewId(*(_QWORD *)this, &v4);
    v2 = (char *)this + 16;
    BYTE4(v4) = 1;
    *(_QWORD *)v2 = v4;
  }
  if ( !v2[4] )
    std::_Throw_bad_optional_access();
  return v2;
}
