/*
 * XREFs of ??$make_unique@VSpatialBlock@@$$V$0A@@std@@YA?AV?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@0@XZ @ 0x14008DE24
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14008EADC (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14008F138 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 *     ??0_unnamed_type__changeSet_@SpatialBlock@@QEAA@XZ @ 0x14008DEA0 (--0_unnamed_type__changeSet_@SpatialBlock@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_unique<SpatialBlock,,0>(_QWORD *a1)
{
  _QWORD *v2; // rbx
  SpatialBlock::_unnamed_type__changeSet_ *v3; // rsi
  __int64 v4; // rbp

  v2 = operator new(0x58uLL);
  *(_OWORD *)v2 = 0LL;
  v2[2] = 0LL;
  *((_DWORD *)v2 + 6) = 0;
  v2[4] = 0LL;
  v3 = (SpatialBlock::_unnamed_type__changeSet_ *)(v2 + 5);
  v4 = 2LL;
  do
  {
    SpatialBlock::_unnamed_type__changeSet_::_unnamed_type__changeSet_(v3);
    v3 = (SpatialBlock::_unnamed_type__changeSet_ *)((char *)v3 + 24);
    --v4;
  }
  while ( v4 );
  *a1 = v2;
  return a1;
}
