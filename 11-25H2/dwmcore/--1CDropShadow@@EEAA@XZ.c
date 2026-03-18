/*
 * XREFs of ??1CDropShadow@@EEAA@XZ @ 0x1800C033C
 * Callers:
 *     ??_GCDropShadow@@EEAAPEAXI@Z @ 0x1800C02F0 (--_GCDropShadow@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1800C0370 (--1-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V-$_Uhash_compare@PEAV.c)
 *     ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800C03F8 (--1ShadowIntermediates@CDropShadow@@QEAA@XZ.c)
 */

void __fastcall CDropShadow::~CDropShadow(CDropShadow *this)
{
  std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::~_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>((char *)this + 200);
  CDropShadow::ShadowIntermediates::~ShadowIntermediates((CDropShadow *)((char *)this + 128));
  CResource::~CResource(this);
}
