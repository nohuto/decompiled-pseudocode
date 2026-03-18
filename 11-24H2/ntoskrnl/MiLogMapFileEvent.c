/*
 * XREFs of MiLogMapFileEvent @ 0x1408E2B54
 * Callers:
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiUnmapVad @ 0x1408E5280 (MiUnmapVad.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x140457228 (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x1408E3144 (MiFillMapFileInfo.c)
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
