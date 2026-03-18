/*
 * XREFs of MagpRevokeInputTransfrom @ 0x1401FCC40
 * Callers:
 *     MagSetLensContextInformation @ 0x1401AD0BC (MagSetLensContextInformation.c)
 *     MagpDecomposeDesktop @ 0x1401FCB14 (MagpDecomposeDesktop.c)
 * Callees:
 *     _CancelMagnificationInputTransform @ 0x1401FCC60 (_CancelMagnificationInputTransform.c)
 */

__int64 MagpRevokeInputTransfrom()
{
  return (unsigned int)CancelMagnificationInputTransform() == 0 ? 0xC0000001 : 0;
}
