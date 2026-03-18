/*
 * XREFs of ?VidMmiTickCountTo100ns@@YA_KT_LARGE_INTEGER@@0@Z @ 0x140044454
 * Callers:
 *     VidMmDefragmentSegment @ 0x1400FF568 (VidMmDefragmentSegment.c)
 * Callees:
 *     ?VidMmiTickCountTo100ns@@YA_K_K@Z @ 0x140091AC8 (-VidMmiTickCountTo100ns@@YA_K_K@Z.c)
 */

unsigned __int64 __fastcall VidMmiTickCountTo100ns(union _LARGE_INTEGER a1, union _LARGE_INTEGER a2)
{
  return VidMmiTickCountTo100ns(a2.QuadPart - a1.QuadPart);
}
