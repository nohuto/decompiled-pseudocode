/*
 * XREFs of ?Find@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEBAPEAU__POSITION@@AEBU_ResourceInfo@@PEAU3@@Z @ 0x18015A63C
 * Callers:
 *     ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x18015B8B8 (-ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlMap@V-$CStringT.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::Find(__int64 **a1, _DWORD *a2)
{
  __int64 *i; // r8

  for ( i = *a1; i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == *a2 )
      return i;
  }
  return 0LL;
}
