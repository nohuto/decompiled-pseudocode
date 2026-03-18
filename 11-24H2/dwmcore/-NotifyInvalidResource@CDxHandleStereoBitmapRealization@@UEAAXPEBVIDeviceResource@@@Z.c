/*
 * XREFs of ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802D8EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x180222314 (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802D8710 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::NotifyInvalidResource(
        CD2DBitmapCache **this,
        const struct IDeviceResource *a2)
{
  if ( !CD2DBitmapCache::RemoveFromCache(this[49], a2) )
    CDxHandleBitmapRealization::NotifyInvalidResource((CDxHandleBitmapRealization *)this, a2);
}
