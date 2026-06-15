/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCDisplayNode@@@Z @ 0x140069DA4
 * Callers:
 *     ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14006A078 (-DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVC.c)
 *     ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x14006A75C (-GetDisplayNode@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@.c)
 *     ?LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z @ 0x14006AC00 (-LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140025F74 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct ATL::CAtlPlex *__fastcall ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead(
        struct ATL::CAtlPlex **a1,
        _QWORD *a2)
{
  struct ATL::CAtlPlex *v3; // rsi
  struct ATL::CAtlPlex *v5; // rax
  int v6; // r8d
  struct ATL::CAtlPlex *i; // rdx
  struct ATL::CAtlPlex *v8; // rdx
  struct ATL::CAtlPlex *v9; // rcx
  struct ATL::CAtlPlex *result; // rax

  v3 = *a1;
  if ( !a1[4] )
  {
    v5 = ATL::CAtlPlex::Create(a1 + 3, *((unsigned int *)a1 + 10), 0x18uLL);
    if ( !v5 )
      ATL::AtlThrowImpl(-2147024882);
    v6 = *((_DWORD *)a1 + 10) - 1;
    for ( i = (struct ATL::CAtlPlex *)((char *)v5 + 16 * v6 + 8 * (unsigned int)v6 + 8); v6 >= 0; --v6 )
    {
      *(_QWORD *)i = a1[4];
      a1[4] = i;
      i = (struct ATL::CAtlPlex *)((char *)i - 24);
    }
  }
  v8 = a1[4];
  v9 = *(struct ATL::CAtlPlex **)v8;
  *((_QWORD *)v8 + 2) = *a2;
  a1[4] = v9;
  *((_QWORD *)v8 + 1) = 0LL;
  *(_QWORD *)v8 = v3;
  a1[2] = (struct ATL::CAtlPlex *)((char *)a1[2] + 1);
  if ( *a1 )
    *((_QWORD *)*a1 + 1) = v8;
  else
    a1[1] = v8;
  result = v8;
  *a1 = v8;
  return result;
}
