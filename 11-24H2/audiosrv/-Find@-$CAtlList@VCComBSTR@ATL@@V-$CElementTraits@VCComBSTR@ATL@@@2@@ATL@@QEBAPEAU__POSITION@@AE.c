/*
 * XREFs of ?Find@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEBAPEAU__POSITION@@AEBVCComBSTR@2@PEAU3@@Z @ 0x18011E614
 * Callers:
 *     ?GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z @ 0x18011E6FC (-GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall ATL::CAtlList<ATL::CComBSTR,ATL::CElementTraits<ATL::CComBSTR>>::Find(__int64 ***a1, BSTR *a2)
{
  __int64 **i; // rbx

  for ( i = *a1; ; i = (__int64 **)*i )
  {
    if ( !i )
      return 0LL;
    if ( VarBstrCmp((BSTR)i[2], *a2, 0x400u, 0) == 1 )
      break;
  }
  return i;
}
