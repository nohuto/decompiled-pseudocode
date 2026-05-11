/*
 * XREFs of IsSupportedSidebandTopology @ 0x14000F154
 * Callers:
 *     IsSidebandSupported @ 0x14002F724 (IsSidebandSupported.c)
 * Callees:
 *     ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x140012E4C (-IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall IsSupportedSidebandTopology(struct _KSFILTER_DESCRIPTOR *a1)
{
  return CSidebandDevice::IsSupportedSidebandTopology(a1);
}
