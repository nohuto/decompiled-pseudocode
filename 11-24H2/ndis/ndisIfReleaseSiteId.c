/*
 * XREFs of ndisIfReleaseSiteId @ 0x1400CD6A8
 * Callers:
 *     ndisNsiChangeNetworkInfo @ 0x1400CD6DC (ndisNsiChangeNetworkInfo.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400CDFA0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1400CE530 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfReleaseSiteId(unsigned int a1)
{
  __int64 result; // rax

  if ( byte_14011D520 )
  {
    if ( a1 > 0x7FFFFFF )
    {
      result = dword_14011AF30 & 0xF0000000;
      dword_14011AF30 = result | (a1 - 1) & 0xFFFFFFF;
    }
  }
  return result;
}
