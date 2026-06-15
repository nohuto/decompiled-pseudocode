/*
 * XREFs of ?RemoveAll@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAAXXZ @ 0x18011F298
 * Callers:
 *     ??1?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAA@XZ @ 0x18011E50C (--1-$CAtlList@VCComBSTR@ATL@@V-$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18011E6B0 (-FreeNode@-$CAtlList@VCComBSTR@ATL@@V-$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@.c)
 *     ?GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z @ 0x18011E6FC (-GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x18004C18C (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18011E6B0 (-FreeNode@-$CAtlList@VCComBSTR@ATL@@V-$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@.c)
 */

void __fastcall ATL::CAtlList<ATL::CComBSTR,ATL::CElementTraits<ATL::CComBSTR>>::RemoveAll(__int64 a1)
{
  _QWORD *v2; // rdx
  ATL::CAtlPlex **v3; // rcx

  while ( *(_QWORD *)(a1 + 16) )
  {
    v2 = *(_QWORD **)a1;
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = *v2;
    ATL::CAtlList<ATL::CComBSTR,ATL::CElementTraits<ATL::CComBSTR>>::FreeNode(a1, (__int64)v2);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = *(ATL::CAtlPlex ***)(a1 + 24);
  if ( v3 )
  {
    ATL::CAtlPlex::FreeDataChain(v3);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
