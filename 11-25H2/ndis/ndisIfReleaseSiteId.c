/*
 * XREFs of ndisIfReleaseSiteId @ 0x1400D4CE8
 * Callers:
 *     ndisNsiChangeNetworkInfo @ 0x1400D4D1C (ndisNsiChangeNetworkInfo.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400D55E0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1400D5B70 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfReleaseSiteId(unsigned int a1)
{
  __int64 result; // rax

  if ( byte_1401275D0 )
  {
    if ( a1 > 0x7FFFFFF )
    {
      result = dword_140124F30 & 0xF0000000;
      dword_140124F30 = result | (a1 - 1) & 0xFFFFFFF;
    }
  }
  return result;
}
