/*
 * XREFs of ??1?$expandable_buffer_base@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01@detail@@QEAA@XZ @ 0x1801397D4
 * Callers:
 *     ??1?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800FD1C0 (--1-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCC.c)
 *     ??1?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801394E8 (--1-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@de.c)
 *     ??1CScopedClipStack@@QEAA@XZ @ 0x180139778 (--1CScopedClipStack@@QEAA@XZ.c)
 *     ??1?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180243C1C (--1-$vector_facade@URectInt32@Graphics@Windows@@V-$buffer_impl@URectInt32@Graphics@Windows@@$07$.c)
 *     ??1?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180249A38 (--1-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliber.c)
 *     ??1?$vector_facade@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180259DE0 (--1-$vector_facade@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl@V-$c.c)
 *     ??1?$vector_facade@VCTempOcclusionRect@COcclusionContext@@V?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180263E88 (--1-$vector_facade@VCTempOcclusionRect@COcclusionContext@@V-$buffer_impl@VCTempOcclusionRect@COc.c)
 *     ??1?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18029A538 (--1-$vector_facade@UNodesDataBookmark@CExpression@@V-$buffer_impl@UNodesDataBookmark@CExpression.c)
 *     ??1?$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1802B8C7C (--1-$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CBetterCheckMPOCac.c)
 *     ??1?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1802C99A4 (--1-$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V-$buffer_impl@U_DXGI_PRESENT_PLANE_FL.c)
 * Callees:
 *     <none>
 */

void __fastcall detail::expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>::~expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>(
        void **a1)
{
  void *v1; // rdx
  bool v2; // zf

  v1 = *a1;
  v2 = *a1 == a1 + 3;
  *a1 = 0LL;
  if ( v2 )
    v1 = 0LL;
  operator delete(v1);
}
