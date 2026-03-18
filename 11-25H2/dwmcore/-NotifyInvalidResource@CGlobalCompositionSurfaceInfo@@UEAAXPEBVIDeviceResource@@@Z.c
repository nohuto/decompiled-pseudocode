/*
 * XREFs of ?NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x18022FF50
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1801012AC (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::NotifyInvalidResource(
        CGlobalCompositionSurfaceInfo *this,
        const struct IDeviceResource *a2)
{
  CGlobalCompositionSurfaceInfo::CBindInfo::Reset((CGlobalCompositionSurfaceInfo *)((char *)this + 96), 0);
  CCompositionSurfaceInfo::NotifyInvalidResource(this, a2);
}
