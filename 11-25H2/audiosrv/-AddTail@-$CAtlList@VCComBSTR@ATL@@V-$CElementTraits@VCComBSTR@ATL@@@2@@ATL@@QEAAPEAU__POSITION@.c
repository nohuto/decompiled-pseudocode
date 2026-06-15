/*
 * XREFs of ?AddTail@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@AEBVCComBSTR@2@@Z @ 0x180116730
 * Callers:
 *     ?GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z @ 0x1801168BC (-GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@AEAAPEAVCNode@12@AEBVCComBSTR@2@PEAV312@1@Z @ 0x180117448 (-NewNode@-$CAtlList@VCComBSTR@ATL@@V-$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@AEAAPEAVCNode@12@AE.c)
 */

__int64 __fastcall ATL::CAtlList<ATL::CComBSTR,ATL::CElementTraits<ATL::CComBSTR>>::AddTail(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  result = ATL::CAtlList<ATL::CComBSTR,ATL::CElementTraits<ATL::CComBSTR>>::NewNode(a1, a2, a1[1]);
  v4 = (__int64 *)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
