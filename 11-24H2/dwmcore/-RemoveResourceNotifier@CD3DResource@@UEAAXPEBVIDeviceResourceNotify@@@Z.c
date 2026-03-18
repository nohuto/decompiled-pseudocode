/*
 * XREFs of ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180068F70
 * Callers:
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@AEAAXXZ @ 0x180043954 (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@AEAAXXZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x180068DF0 (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@AEAAXXZ @ 0x180068F10 (-ReleaseResources@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@AEAAXXZ.c)
 *     ?ReleaseResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@AEAAXPEBVIDeviceResource@@@Z @ 0x180068FB4 (-ReleaseResource@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@AEAAXPEBVIDeviceReso.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1801AFCA0 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x1802975C0 (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 *     ?NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802978B0 (-NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x1802AA900 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@EEAAX.c)
 * Callees:
 *     __std_find_trivial_8 @ 0x180250770 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall CD3DResource::RemoveResourceNotifier(CD3DResource *this, const struct IDeviceResourceNotify *a2)
{
  __int64 trivial_8; // rax
  __int64 v4; // r8

  trivial_8 = _std_find_trivial_8(*((_QWORD *)this + 6), *((_QWORD *)this + 7), a2);
  v4 = *((_QWORD *)this + 7);
  if ( trivial_8 != v4 )
  {
    memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), v4 - (trivial_8 + 8));
    *((_QWORD *)this + 7) -= 8LL;
  }
}
