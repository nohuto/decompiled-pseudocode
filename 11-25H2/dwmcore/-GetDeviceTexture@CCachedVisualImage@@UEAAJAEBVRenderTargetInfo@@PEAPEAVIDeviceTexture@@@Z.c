/*
 * XREFs of ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801D7560
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801470F0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180147C20 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::GetDeviceTexture(
        struct D2D_SIZE_U *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int v5; // eax
  struct IRenderTargetBitmap *v6; // rbx
  unsigned int v7; // edi
  CRenderTargetBitmap *v8; // rcx
  __int64 (__fastcall *v9)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int DeviceTexture; // eax
  struct IRenderTargetBitmap *v12; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v12 = 0LL;
  v5 = CCachedVisualImage::EnsureRenderTargetBitmap(this - 10, a2, &v12);
  v6 = v12;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x193u, 0LL);
  }
  else
  {
    v8 = (struct IRenderTargetBitmap *)((char *)v12 + 8);
    v9 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **))(*((_QWORD *)v12 + 1) + 96LL);
    if ( v9 == CRenderTargetBitmap::GetDeviceTexture )
      DeviceTexture = CRenderTargetBitmap::GetDeviceTexture(v8, a2, a3);
    else
      DeviceTexture = v9(v8, a2, a3);
    v7 = DeviceTexture;
    if ( DeviceTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DeviceTexture, 0x196u, 0LL);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
