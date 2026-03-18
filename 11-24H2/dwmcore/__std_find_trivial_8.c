/*
 * XREFs of __std_find_trivial_8 @ 0x180250770
 * Callers:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180068F70 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveListener@CResourceWeakRef@@QEAAXPEBVCResource@@@Z @ 0x180096080 (-RemoveListener@CResourceWeakRef@@QEAAXPEBVCResource@@@Z.c)
 *     ?AddListener@CResourceWeakRef@@QEAAXPEAVCResource@@@Z @ 0x1800960F4 (-AddListener@CResourceWeakRef@@QEAAXPEAVCResource@@@Z.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x1800E7D78 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180103700 (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180103FC0 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z @ 0x18018BDE8 (-UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1801F16B4 (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1801FFD40 (-RemoveResourceNotifier@-$CDeviceResourceT@V-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDelet.c)
 *     ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x18020AD50 (-RemoveResourceNotifier@-$CDeviceResourceT@V-$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilO.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x18021A138 (-RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 *     ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022FFC4 (-RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x1802469F0 (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18024FD70 (-RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18025F910 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x18026E42C (-DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalI.c)
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1802726DC (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18028C0B4 (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?EnsureRemovedFromReadyList@CDataSourceReader@@AEAAXXZ @ 0x1802919FC (-EnsureRemovedFromReadyList@CDataSourceReader@@AEAAXXZ.c)
 *     ??$find@V?$span_iterator@PEAVCSceneNode@@@details@gsl@@PEAVCSceneNode@@@std@@YA?AV?$span_iterator@PEAVCSceneNode@@@details@gsl@@V123@V123@AEBQEAVCSceneNode@@@Z @ 0x1802A54A0 (--$find@V-$span_iterator@PEAVCSceneNode@@@details@gsl@@PEAVCSceneNode@@@std@@YA-AV-$span_iterato.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802BE5B0 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall _std_find_trivial_8(const __m128i *a1, const __m128i *a2, unsigned __int64 _R8)
{
  signed __int64 v4; // r9
  unsigned __int64 v6; // rdx
  const __m128i *v10; // rdx
  unsigned __int64 v13; // r9
  const __m128i *v14; // rdx
  __m128i v15; // xmm1
  __int64 v16; // rax

  v4 = (char *)a2 - (char *)a1;
  v6 = ((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v6 && (_isa_enabled & 0x20) != 0 )
  {
    __asm
    {
      vmovq   xmm2, r8
      vpunpcklqdq xmm2, xmm2, xmm2
      vinsertf128 ymm2, ymm2, xmm2, 1
    }
    v10 = (const __m128i *)((char *)a1 + v6);
    while ( 1 )
    {
      __asm
      {
        vpcmpeqq ymm1, ymm2, ymmword ptr [rcx]
        vpmovmskb eax, ymm1
      }
      if ( _EAX )
        break;
      a1 += 2;
      if ( a1 == v10 )
      {
        v4 &= 0x1Fu;
        __asm { vzeroupper }
        goto LABEL_7;
      }
    }
    __asm
    {
      vzeroupper
      tzcnt   eax, eax
    }
    return (const __m128i *)((char *)a1 + _EAX);
  }
  else
  {
LABEL_7:
    v13 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v13 && (_isa_enabled & 4) != 0 )
    {
      v14 = (const __m128i *)((char *)a1 + v13);
      v15 = _mm_unpacklo_epi64((__m128i)_R8, (__m128i)_R8);
      while ( 1 )
      {
        LODWORD(v16) = _mm_movemask_epi8(_mm_cmpeq_epi64(_mm_loadu_si128(a1), v15));
        if ( (_DWORD)v16 )
          break;
        if ( ++a1 == v14 )
          goto LABEL_12;
      }
      _BitScanForward((unsigned int *)&v16, v16);
      return (const __m128i *)((char *)a1 + v16);
    }
    else
    {
LABEL_12:
      while ( a1 != a2 )
      {
        if ( a1->m128i_i64[0] == _R8 )
          break;
        a1 = (const __m128i *)((char *)a1 + 8);
      }
      return a1;
    }
  }
}
