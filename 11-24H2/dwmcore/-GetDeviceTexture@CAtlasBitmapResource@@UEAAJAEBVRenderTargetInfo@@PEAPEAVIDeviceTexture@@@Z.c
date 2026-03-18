/*
 * XREFs of ?GetDeviceTexture@CAtlasBitmapResource@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801E5330
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18010BFE0 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasBitmapResource::GetDeviceTexture(
        CAtlasBitmapResource *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  __int64 v3; // rax
  CRenderTargetBitmap *v4; // rcx
  __int64 (__fastcall *v5)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int DeviceTexture; // eax
  unsigned int v7; // ebx
  unsigned int v9; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_QWORD *)this + 2) )
    ModuleFailFastForHRESULT(-2003304315, retaddr);
  v3 = *((_QWORD *)this + 1);
  if ( !v3 )
  {
    v7 = -2003304307;
    v9 = 134;
    DeviceTexture = -2003304307;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DeviceTexture, v9, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xB0u, 0LL);
    return v7;
  }
  v4 = (CRenderTargetBitmap *)(*(_QWORD *)(v3 + 8) + 8LL);
  v5 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v4 + 96LL);
  if ( v5 == CRenderTargetBitmap::GetDeviceTexture )
    DeviceTexture = CRenderTargetBitmap::GetDeviceTexture(v4, a2, a3);
  else
    DeviceTexture = v5(v4, a2, a3);
  v7 = DeviceTexture;
  if ( DeviceTexture < 0 )
  {
    v9 = 137;
    goto LABEL_11;
  }
  return v7;
}
