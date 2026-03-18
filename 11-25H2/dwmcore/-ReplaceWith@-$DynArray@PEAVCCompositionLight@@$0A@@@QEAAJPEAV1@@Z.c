/*
 * XREFs of ?ReplaceWith@?$DynArray@PEAVCCompositionLight@@$0A@@@QEAAJPEAV1@@Z @ 0x18020D778
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180095C20 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18020D7D8 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 */

__int64 __fastcall DynArray<CCompositionLight *,0>::ReplaceWith(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  __int64 result; // rax

  v4 = *(void **)a1;
  if ( v4 != *(void **)(a1 + 8) )
  {
    operator delete(v4);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  result = DynArrayImpl<0>::DetachData(a2, 8LL, a1);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 20) = 0;
  }
  return result;
}
