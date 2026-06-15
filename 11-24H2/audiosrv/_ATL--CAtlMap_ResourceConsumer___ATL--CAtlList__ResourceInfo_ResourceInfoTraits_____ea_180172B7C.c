/*
 * XREFs of _ATL::CAtlMap_ResourceConsumer___ATL::CAtlList__ResourceInfo_ResourceInfoTraits____ResourceConsumerTraits_ATL::CElementTraits_ATL::CAtlList__ResourceInfo_ResourceInfoTraits______::SetAt_::_1_::catch$2 @ 0x180172B7C
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeNode@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180160C4C (-FreeNode@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@A.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_ResourceConsumer___ATL::CAtlList__ResourceInfo_ResourceInfoTraits____ResourceConsumerTraits_ATL::CElementTraits_ATL::CAtlList__ResourceInfo_ResourceInfoTraits______::SetAt_::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = *(_QWORD *)(a2 + 104);
  v3 = *(_QWORD *)(a2 + 80);
  v4 = (unsigned int)(*(_DWORD *)(v2 + 24) % *(_DWORD *)(v3 + 16));
  if ( v2 == *(_QWORD *)(*(_QWORD *)v3 + 8 * v4) )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)(*(_QWORD *)v3 + 8 * v4);
    if ( *(_QWORD *)(v5 + 16) != v2 )
    {
      v6 = *(_QWORD *)(v5 + 16);
      do
      {
        v5 = v6;
        v6 = *(_QWORD *)(v6 + 16);
      }
      while ( v6 != v2 );
    }
  }
  v7 = *(_QWORD *)(v2 + 16);
  if ( v5 )
    *(_QWORD *)(v5 + 16) = v7;
  else
    *(_QWORD *)(*(_QWORD *)v3 + 8LL * (unsigned int)(*(_DWORD *)(v2 + 24) % *(_DWORD *)(v3 + 16))) = v7;
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::FreeNode(
    v3,
    v2);
  throw;
}
