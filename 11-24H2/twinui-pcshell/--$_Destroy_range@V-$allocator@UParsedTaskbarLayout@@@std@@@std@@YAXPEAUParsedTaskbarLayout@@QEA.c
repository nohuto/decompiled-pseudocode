/*
 * XREFs of ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x180320660
 * Callers:
 *     ??$_Emplace_reallocate@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@AEAAPEAUParsedTaskbarLayout@@QEAU2@$$QEAU2@@Z @ 0x18032069C (--$_Emplace_reallocate@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParse.c)
 *     ??$_Uninitialized_move@PEAUParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAPEAUParsedTaskbarLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18032086C (--$_Uninitialized_move@PEAUParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@Y.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x180320B30 (--1-$_Uninitialized_backout_al@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x180320B44 (--1-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ.c)
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180321B50 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     _std::vector_ParsedTaskbarLayout_std::allocator_ParsedTaskbarLayout___::_Emplace_reallocate_ParsedTaskbarLayout__::_1_::catch$0 @ 0x1806DFAA8 (_std--vector_ParsedTaskbarLayout_std--allocator_ParsedTaskbarLayout___--_Emplace_reallocate_Pars.c)
 * Callees:
 *     ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x180320BA4 (--1ParsedTaskbarLayout@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(
        ParsedTaskbarLayout *this,
        ParsedTaskbarLayout *a2)
{
  ParsedTaskbarLayout *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      ParsedTaskbarLayout::~ParsedTaskbarLayout(v3);
      v3 = (ParsedTaskbarLayout *)((char *)v3 + 136);
    }
    while ( v3 != a2 );
  }
}
