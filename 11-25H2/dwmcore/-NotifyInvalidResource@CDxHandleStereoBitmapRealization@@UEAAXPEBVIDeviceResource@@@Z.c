/*
 * XREFs of ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802E2160
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x18022D784 (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802E19B0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::NotifyInvalidResource(
        CD2DBitmapCache **this,
        const struct IDeviceResource *a2)
{
  if ( !CD2DBitmapCache::RemoveFromCache(this[49], a2) )
    CDxHandleBitmapRealization::NotifyInvalidResource((CDxHandleBitmapRealization *)this, a2);
}
