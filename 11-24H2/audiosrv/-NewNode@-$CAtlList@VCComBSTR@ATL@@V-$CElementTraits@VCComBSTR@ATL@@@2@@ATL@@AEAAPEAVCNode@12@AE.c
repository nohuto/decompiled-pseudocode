/*
 * XREFs of ?NewNode@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@AEAAPEAVCNode@12@AEBVCComBSTR@2@PEAV312@1@Z @ 0x18011F0F8
 * Callers:
 *     ?AddTail@?$CAtlList@VCComBSTR@ATL@@V?$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@AEBVCComBSTR@2@@Z @ 0x18011E570 (-AddTail@-$CAtlList@VCComBSTR@ATL@@V-$CElementTraits@VCComBSTR@ATL@@@2@@ATL@@QEAAPEAU__POSITION@.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18004EBE0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CComBSTR@ATL@@QEAA@AEBV01@@Z @ 0x18011E454 (--0CComBSTR@ATL@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<ATL::CComBSTR,ATL::CElementTraits<ATL::CComBSTR>>::NewNode(
        __int64 a1,
        BSTR *a2,
        __int64 a3)
{
  struct ATL::CAtlPlex *v6; // rax
  int v7; // r8d
  _QWORD *i; // rdx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  _QWORD *result; // rax

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v6 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24), *(unsigned int *)(a1 + 40), 0x18uLL);
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    v7 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = (_QWORD *)((char *)v6 + 16 * v7 + 8 * (unsigned int)v7 + 8); v7 >= 0; --v7 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
  v9 = *(_QWORD **)(a1 + 32);
  v10 = *v9;
  ATL::CComBSTR::CComBSTR((ATL::CComBSTR *)(v9 + 2), a2);
  *(_QWORD *)(a1 + 32) = v10;
  result = v9;
  *v9 = 0LL;
  v9[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
