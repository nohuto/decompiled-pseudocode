/*
 * XREFs of ?Hash@ResourceConsumerTraits@@SAKAEBQEAVResourceConsumer@@@Z @ 0x1800779B8
 * Callers:
 *     ?GetNode@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAVResourceConsumer@@AEAI1AEAPEAV312@@Z @ 0x1800777EC (-GetNode@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@AT.c)
 *     ?Lookup@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEBA_NAEBQEAVResourceConsumer@@AEAPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x18007791C (-Lookup@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceConsumerTraits::Hash(struct ResourceConsumer *const *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = (__int64)*a1;
  result = *(unsigned int *)(v1 + 8);
  if ( !(_DWORD)result )
    return (unsigned int)(4 * *(_DWORD *)(v1 + 160));
  return result;
}
