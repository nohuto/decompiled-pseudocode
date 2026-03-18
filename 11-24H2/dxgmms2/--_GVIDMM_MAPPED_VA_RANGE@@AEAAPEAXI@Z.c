/*
 * XREFs of ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x14003765C
 * Callers:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400B970C (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x140037684 (--1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ.c)
 *     ??3VIDMM_MAPPED_VA_RANGE@@SAXPEAX@Z @ 0x1400997E4 (--3VIDMM_MAPPED_VA_RANGE@@SAXPEAX@Z.c)
 */

VIDMM_MAPPED_VA_RANGE *__fastcall VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'(VIDMM_MAPPED_VA_RANGE *this)
{
  VIDMM_MAPPED_VA_RANGE::~VIDMM_MAPPED_VA_RANGE(this);
  VIDMM_MAPPED_VA_RANGE::operator delete(this);
  return this;
}
