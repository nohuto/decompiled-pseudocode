/*
 * XREFs of ?FreeNode@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18011E6B0
 * Callers:
 *     ?RemoveAll@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAAXXZ @ 0x18011F298 (-RemoveAll@-$CAtlList@VCComBSTR@ATL@@V-$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAAXXZ.c)
 *     ?RemoveHead@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAA?AVCComBSTR@2@XZ @ 0x18011F3C8 (-RemoveHead@-$CAtlList@VCComBSTR@ATL@@V-$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAA-AVCComBSTR@.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAAXXZ @ 0x18011F298 (-RemoveAll@-$CAtlList@VCComBSTR@ATL@@V-$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall ATL::CAtlList<ATL::CComBSTR,ATL::CElementTraits<ATL::CComBSTR>>::FreeNode(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v5; // zf

  SysFreeString(*(BSTR *)(a2 + 16));
  result = *(_QWORD *)(a1 + 32);
  *(_QWORD *)a2 = result;
  v5 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v5 )
    return ATL::CAtlList<ATL::CComBSTR,ATL::CElementTraits<ATL::CComBSTR>>::RemoveAll(a1);
  return result;
}
