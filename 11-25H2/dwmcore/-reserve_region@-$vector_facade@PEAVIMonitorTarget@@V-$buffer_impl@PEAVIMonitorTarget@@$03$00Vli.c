/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1800C3264
 * Callers:
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x1800C1BCC (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x1800C1E9C (-AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x180103CE8 (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ @ 0x180114778 (-UpdateCapabilities@CRenderTargetManager@@AEAAXXZ.c)
 *     ?Partition_Synchronize@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x1801AC534 (-Partition_Synchronize@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtag.c)
 *     ?push_back@?$vector_facade@PEAVICapabilitiesContributorTarget@@V?$buffer_impl@PEAVICapabilitiesContributorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAPEAVICapabilitiesContributorTarget@@@Z @ 0x18025519C (-push_back@-$vector_facade@PEAVICapabilitiesContributorTarget@@V-$buffer_impl@PEAVICapabilitiesC.c)
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x1802DC728 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVICapabilitiesContributorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C3124 (-ensure_extra_capacity@-$buffer_impl@PEAVICapabilitiesContributorTarget@@$03$00Vliberal_expansio.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x1800C33AC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::reserve_region(
        const void **a1,
        __int64 a2)
{
  char *v4; // rbp
  char *v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  char *v8; // r11
  __int64 v9; // rax
  char *v10; // r10
  __int64 v11; // rsi
  signed __int64 v12; // rdi
  __int64 v13; // rax
  char *v15; // rdx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  detail::buffer_impl<ICapabilitiesContributorTarget *,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v4 = (char *)*a1;
  v5 = (char *)a1[1];
  v6 = (v5 - (_BYTE *)*a1) >> 3;
  v7 = v6 - a2;
  v8 = (char *)*a1 + 8 * v6;
  if ( !v8 )
    goto LABEL_2;
  v9 = (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3) - a2;
  if ( v7 > 1 )
    v9 = 1LL;
  v10 = &v5[-8 * v9];
  if ( v5 != v10 )
  {
    v15 = v5 - 8;
    *(_QWORD *)v8 = *(_QWORD *)v15;
    if ( v15 != v10 )
LABEL_2:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v7 <= 1 )
  {
    v11 = 8 * a2;
  }
  else
  {
    if ( v6 && (!v4 || v6 < 0) )
      goto LABEL_2;
    v11 = 8 * a2;
    v16[0] = v4;
    v16[1] = v6;
    v16[2] = v6;
    v12 = 8 * v6 - v11 - 8;
    v13 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
            v16,
            -(v12 >> 3));
    memmove_0((void *)(v13 - v12), &v4[v11], v12);
  }
  a1[1] = (char *)a1[1] + 8;
  return &v4[v11];
}
