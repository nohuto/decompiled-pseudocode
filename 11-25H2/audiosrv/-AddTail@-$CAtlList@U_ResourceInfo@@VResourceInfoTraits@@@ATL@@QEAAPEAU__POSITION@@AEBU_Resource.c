/*
 * XREFs of ?AddTail@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAU__POSITION@@AEBU_ResourceInfo@@@Z @ 0x180157A20
 * Callers:
 *     ?CopyResourceLimits@CConstraintModel@@AEAAJPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@0@Z @ 0x180157D40 (-CopyResourceLimits@CConstraintModel@@AEAAJPEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@.c)
 *     ?ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@@Z @ 0x18015B25C (-ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-$CAtlMap@.c)
 *     ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x18015B8B8 (-ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlMap@V-$CStringT.c)
 * Callees:
 *     ?NewNode@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@AEAAPEAVCNode@12@AEBU_ResourceInfo@@PEAV312@1@Z @ 0x180159164 (-NewNode@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@AEAAPEAVCNode@12@AEBU_ResourceInf.c)
 */

__int64 __fastcall ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::AddTail(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  result = ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::NewNode(a1, a2, a1[1]);
  v4 = (__int64 *)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
