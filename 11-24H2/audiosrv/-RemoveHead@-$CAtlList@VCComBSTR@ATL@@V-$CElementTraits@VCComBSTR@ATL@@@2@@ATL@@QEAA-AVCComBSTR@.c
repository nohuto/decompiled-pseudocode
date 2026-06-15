/*
 * XREFs of ?RemoveHead@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAA?AVCComBSTR@2@XZ @ 0x18011F3C8
 * Callers:
 *     ?GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z @ 0x18011E6FC (-GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CComBSTR@ATL@@QEAA@AEBV01@@Z @ 0x18011E454 (--0CComBSTR@ATL@@QEAA@AEBV01@@Z.c)
 *     ?FreeNode@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18011E6B0 (-FreeNode@-$CAtlList@VCComBSTR@ATL@@V-$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@.c)
 */

ATL::CComBSTR *__fastcall ATL::CAtlList<ATL::CComBSTR,ATL::CElementTraits<ATL::CComBSTR>>::RemoveHead(
        __int64 *a1,
        ATL::CComBSTR *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax

  v2 = *a1;
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147467259);
  ATL::CComBSTR::CComBSTR(a2, (BSTR *)(v2 + 16));
  v5 = *(_QWORD *)v2;
  *a1 = *(_QWORD *)v2;
  if ( v5 )
    *(_QWORD *)(v5 + 8) = 0LL;
  else
    a1[1] = 0LL;
  ATL::CAtlList<ATL::CComBSTR,ATL::CElementTraits<ATL::CComBSTR>>::FreeNode((__int64)a1, v2);
  return a2;
}
