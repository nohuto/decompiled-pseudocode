/*
 * XREFs of ?GetFreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ @ 0x14000C7F4
 * Callers:
 *     ?InnerInsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAJPEAVCConnectionNode@@0I@Z @ 0x14000C6FC (-InnerInsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConne.c)
 *     ?AddHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEBQEAVCConnectionNode@@@Z @ 0x14000C788 (-AddHead@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEB.c)
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000CB18 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D040 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetFreeNode(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdi
  void *v4; // rax
  _QWORD *v5; // rax
  int v6; // r8d
  _QWORD *i; // rcx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v2 = 24LL * *(unsigned int *)(a1 + 40);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 0x18uLL)
      || (v3 = v2 + 8, v2 + 8 < v2)
      || (v4 = AERTGetDLLRTHeap(), (v5 = AERTAllocate(v3, v4)) == 0LL) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    *v5 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v5;
    v6 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = &v5[2 * v6 + 1 + (unsigned int)v6]; v6 >= 0; --v6 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
}
