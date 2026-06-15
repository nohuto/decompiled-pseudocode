/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000CCC0
 * Callers:
 *     ?FreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXPEAVCNode@12@@Z @ 0x14000CC78 (-FreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXPEAVCNode@12@@Z.c)
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14003BD04 (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ??1CProcessingData@@QEAA@XZ @ 0x140043240 (--1CProcessingData@@QEAA@XZ.c)
 *     ??1?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAA@XZ @ 0x14004B1D0 (--1-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAA@XZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXPEAVCNode@12@@Z @ 0x14000CC78 (-FreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXPEAVCNode@12@@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD4C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x14000CD90 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll(__int64 *a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  void *v4; // rax
  __int64 *v5; // rdx

  while ( a1[2] )
  {
    v5 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v5;
    ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::FreeNode((__int64)a1, v5);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v2 = (_QWORD *)a1[3];
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      v4 = AERTGetDLLRTHeap();
      AERTFree(v2, v4);
      v2 = v3;
    }
    while ( v3 );
    a1[3] = 0LL;
  }
}
