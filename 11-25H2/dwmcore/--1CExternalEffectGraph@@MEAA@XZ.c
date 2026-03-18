/*
 * XREFs of ??1CExternalEffectGraph@@MEAA@XZ @ 0x180071C48
 * Callers:
 *     ??1CBlurRenderingGraph@@EEAA@XZ @ 0x180216F4C (--1CBlurRenderingGraph@@EEAA@XZ.c)
 *     ??_GCExternalEffectGraph@@MEAAPEAXI@Z @ 0x1802E8580 (--_GCExternalEffectGraph@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBlurredBackdropCache@@QEAA@XZ @ 0x180071C7C (--1CBlurredBackdropCache@@QEAA@XZ.c)
 *     ??1?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180071CC8 (--1-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V-.c)
 */

void __fastcall CExternalEffectGraph::~CExternalEffectGraph(CExternalEffectGraph *this)
{
  unsigned int v2; // edx

  detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::~vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>((char *)this + 496);
  CBlurredBackdropCache::~CBlurredBackdropCache((CExternalEffectGraph *)((char *)this + 216));
  CBrushRenderingGraph::~CBrushRenderingGraph(this, v2);
}
