/*
 * XREFs of ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x14006BAAC
 * Callers:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14002A25C (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x14002B2A4 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14006B8F0 (-Reallocate@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __noreturn ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException()
{
  ATL::AtlThrowImpl(-2147024882);
}
