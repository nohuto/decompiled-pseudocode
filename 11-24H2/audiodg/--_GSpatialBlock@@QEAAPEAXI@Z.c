/*
 * XREFs of ??_GSpatialBlock@@QEAAPEAXI@Z @ 0x14008941C
 * Callers:
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140055860 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ @ 0x14008DAAC (--1-$unique_ptr@VSpatialBlock@@U-$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14008EBB8 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SpatialBlock *__fastcall SpatialBlock::`scalar deleting destructor'(SpatialBlock *this)
{
  operator delete(this);
  return this;
}
