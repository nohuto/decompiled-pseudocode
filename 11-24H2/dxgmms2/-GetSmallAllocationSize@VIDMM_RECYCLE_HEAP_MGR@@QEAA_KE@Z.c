/*
 * XREFs of ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x14003A418
 * Callers:
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400BFC24 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1400CC6F4 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x14003A454 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
        VIDMM_RECYCLE_HEAP_MGR *this,
        unsigned __int8 a2)
{
  int v2; // eax

  if ( a2 )
    return VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(this, a2);
  v2 = dword_140081504;
  if ( (unsigned __int64)qword_1400812F8 > 0x53333333 )
    v2 = dword_1400814F4;
  return (unsigned int)(v2 << 20);
}
