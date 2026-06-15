/*
 * XREFs of ??0CComBSTR@ATL@@QEAA@AEBV01@@Z @ 0x18011E454
 * Callers:
 *     ?NewNode@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@AEAAPEAVCNode@12@AEBVCComBSTR@2@PEAV312@1@Z @ 0x18011F0F8 (-NewNode@-$CAtlList@VCComBSTR@ATL@@V-$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@AEAAPEAVCNode@12@AE.c)
 *     ?RemoveHead@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAA?AVCComBSTR@2@XZ @ 0x18011F3C8 (-RemoveHead@-$CAtlList@VCComBSTR@ATL@@V-$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAA-AVCComBSTR@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

ATL::CComBSTR *__fastcall ATL::CComBSTR::CComBSTR(ATL::CComBSTR *this, BSTR *a2)
{
  BSTR v4; // rax
  UINT v5; // eax

  if ( *a2 )
  {
    v5 = SysStringByteLen(*a2);
    v4 = SysAllocStringByteLen((LPCSTR)*a2, v5);
  }
  else
  {
    v4 = 0LL;
  }
  *(_QWORD *)this = v4;
  if ( *a2 && !v4 )
    ATL::AtlThrowImpl(-2147024882);
  return this;
}
