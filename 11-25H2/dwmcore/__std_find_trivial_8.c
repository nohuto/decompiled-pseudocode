/*
 * XREFs of __std_find_trivial_8 @ 0x18025BDA0
 * Callers:
 *     ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x1800BFD48 (-RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z @ 0x1800C0F30 (-UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z.c)
 *     ?RemoveListener@CResourceWeakRef@@QEAAXPEBVCResource@@@Z @ 0x18013B090 (-RemoveListener@CResourceWeakRef@@QEAAXPEBVCResource@@@Z.c)
 *     ?AddListener@CResourceWeakRef@@QEAAXPEAVCResource@@@Z @ 0x18013B104 (-AddListener@CResourceWeakRef@@QEAAXPEAVCResource@@@Z.c)
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x18013F210 (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x18013FC00 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x1801B7A24 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1801C7820 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1801FDCA8 (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x18020C080 (-RemoveResourceNotifier@-$CDeviceResourceT@V-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDelet.c)
 *     ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180217020 (-RemoveResourceNotifier@-$CDeviceResourceT@V-$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilO.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x180225DF8 (-RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x18025191C (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18025B2A0 (-RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x180269850 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x180278B3C (-DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalI.c)
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18027CDEC (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180297534 (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?EnsureRemovedFromReadyList@CDataSourceReader@@AEAAXXZ @ 0x18029D05C (-EnsureRemovedFromReadyList@CDataSourceReader@@AEAAXXZ.c)
 *     ??$find@V?$span_iterator@PEAVCSceneNode@@@details@gsl@@PEAVCSceneNode@@@std@@YA?AV?$span_iterator@PEAVCSceneNode@@@details@gsl@@V123@V123@AEBQEAVCSceneNode@@@Z @ 0x1802AEFD8 (--$find@V-$span_iterator@PEAVCSceneNode@@@details@gsl@@PEAVCSceneNode@@@std@@YA-AV-$span_iterato.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802C7940 (--1CDDisplaySwapChain@@MEAA@XZ.c)
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
