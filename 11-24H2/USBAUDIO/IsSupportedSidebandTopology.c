/*
 * XREFs of IsSupportedSidebandTopology @ 0x14000E844
 * Callers:
 *     IsSidebandSupported @ 0x14002F5D4 (IsSidebandSupported.c)
 * Callees:
 *     ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x1400124CC (-IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall IsSupportedSidebandTopology(struct _KSFILTER_DESCRIPTOR *a1)
{
  return CSidebandDevice::IsSupportedSidebandTopology(a1);
}
