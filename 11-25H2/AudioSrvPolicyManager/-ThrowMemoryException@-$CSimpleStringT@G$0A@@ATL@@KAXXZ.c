/*
 * XREFs of ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180045AF4
 * Callers:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180014990 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180045204 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180045940 (-Reallocate@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x180047760 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B800 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __noreturn ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException()
{
  ATL::AtlThrowImpl(-2147024882);
}
