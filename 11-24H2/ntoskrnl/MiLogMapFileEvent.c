/*
 * XREFs of MiLogMapFileEvent @ 0x140919704
 * Callers:
 *     MiUnmapVad @ 0x140895E38 (MiUnmapVad.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x14044CA68 (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x140919CF4 (MiFillMapFileInfo.c)
 */

char __fastcall MiLogMapFileEvent(__int64 a1, __int16 a2)
{
  char result; // al
  _OWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF

  result = *(_DWORD *)(a1 + 48) & 0x70;
  memset(v4, 0, sizeof(v4));
  if ( result != 16 )
  {
    MiFillMapFileInfo(a1, v4);
    return MiLogPerfMemoryEvent(a2, 0x8000u, (__int64)v4, 44, 5249283);
  }
  return result;
}
