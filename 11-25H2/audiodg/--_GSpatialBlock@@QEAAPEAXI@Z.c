/*
 * XREFs of ??_GSpatialBlock@@QEAAPEAXI@Z @ 0x14008999C
 * Callers:
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140055930 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ @ 0x14008E02C (--1-$unique_ptr@VSpatialBlock@@U-$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14008F138 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SpatialBlock *__fastcall SpatialBlock::`scalar deleting destructor'(SpatialBlock *this)
{
  operator delete(this);
  return this;
}
