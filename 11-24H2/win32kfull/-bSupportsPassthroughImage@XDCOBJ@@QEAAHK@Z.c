/*
 * XREFs of ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x140265600
 * Callers:
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400C5BA4 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 * Callees:
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x14026562C (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x140311D2C (-bSupportsPNG@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall XDCOBJ::bSupportsPassthroughImage(XDCOBJ *this, int a2)
{
  if ( a2 == 4 )
    return XDCOBJ::bSupportsJPEG(this);
  if ( a2 == 5 )
    return XDCOBJ::bSupportsPNG(this);
  return 0LL;
}
