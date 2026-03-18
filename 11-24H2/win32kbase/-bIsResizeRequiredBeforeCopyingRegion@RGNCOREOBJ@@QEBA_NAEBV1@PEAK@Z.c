/*
 * XREFs of ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x1400DD83C
 * Callers:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140025B10 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x140025C20 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017A1BC (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z @ 0x1401C13D0 (-bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z.c)
 * Callees:
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140065B50 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 */

char __fastcall RGNCOREOBJ::bIsResizeRequiredBeforeCopyingRegion(
        REGION_CORE **this,
        REGION_CORE **a2,
        unsigned int *a3)
{
  unsigned int sizeScan; // ebx
  unsigned int v7; // edi

  sizeScan = REGION_CORE::get_sizeScan(*a2);
  v7 = 112;
  if ( ((unsigned int)REGION_CORE::get_sizeScanAlloc(*this) >= sizeScan
     || (unsigned int)REGION_CORE::get_sizeScanAlloc(*a2) <= 0x70)
    && ((unsigned int)REGION_CORE::get_sizeScanAlloc(*this) <= 0x70
     || (unsigned int)REGION_CORE::get_sizeScanAlloc(*a2) > 0x70) )
  {
    return 0;
  }
  if ( (unsigned int)REGION_CORE::get_sizeScan(*a2) > 0x70 )
    v7 = REGION_CORE::get_sizeScan(*a2);
  *a3 = v7;
  return 1;
}
