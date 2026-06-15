/*
 * XREFs of ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140076A48
 * Callers:
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x140089F30 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140089FCC (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x14008B070 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 *     ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x14008B94C (-RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z.c)
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x14008C694 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 *     _ATL::CRegObject::AddReplacement_::_1_::dtor$0 @ 0x1400972A3 (_ATL--CRegObject--AddReplacement_--_1_--dtor$0.c)
 *     _ATL::CRegParser::PreProcessBuffer_::_1_::dtor$1 @ 0x140097357 (_ATL--CRegParser--PreProcessBuffer_--_1_--dtor$1.c)
 *     _ATL::CRegObject::RegisterFromResource_::_1_::dtor$0 @ 0x140097369 (_ATL--CRegObject--RegisterFromResource_--_1_--dtor$0.c)
 * Callees:
 *     free @ 0x14005A15C (free.c)
 */

void __fastcall ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(
        _QWORD **a1)
{
  _QWORD *i; // rcx

  for ( i = *a1; i; i = *a1 )
  {
    *a1 = (_QWORD *)*i;
    free(i);
  }
}
