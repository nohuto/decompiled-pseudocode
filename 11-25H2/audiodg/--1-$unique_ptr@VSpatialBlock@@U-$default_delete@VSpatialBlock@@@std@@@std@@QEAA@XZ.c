/*
 * XREFs of ??1?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ @ 0x14008E02C
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14008EADC (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14008F138 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$1 @ 0x1400974EE (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--dtor$1.c)
 *     _CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor$2 @ 0x140097542 (_CSpatialCrossProcessBaseEndpoint--MapCPMemory_--_1_--dtor$2.c)
 * Callees:
 *     ??_GSpatialBlock@@QEAAPEAXI@Z @ 0x14008999C (--_GSpatialBlock@@QEAAPEAXI@Z.c)
 */

SpatialBlock *__fastcall std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(SpatialBlock **a1)
{
  SpatialBlock *v1; // rcx
  SpatialBlock *result; // rax

  v1 = *a1;
  if ( v1 )
    return SpatialBlock::`scalar deleting destructor'(v1);
  return result;
}
