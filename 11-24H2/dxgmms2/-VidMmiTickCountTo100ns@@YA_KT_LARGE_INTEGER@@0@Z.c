/*
 * XREFs of ?VidMmiTickCountTo100ns@@YA_KT_LARGE_INTEGER@@0@Z @ 0x1400430B4
 * Callers:
 *     VidMmDefragmentSegment @ 0x1400FF220 (VidMmDefragmentSegment.c)
 * Callees:
 *     ?VidMmiTickCountTo100ns@@YA_K_K@Z @ 0x140091AA0 (-VidMmiTickCountTo100ns@@YA_K_K@Z.c)
 */

unsigned __int64 __fastcall VidMmiTickCountTo100ns(union _LARGE_INTEGER a1, union _LARGE_INTEGER a2)
{
  return VidMmiTickCountTo100ns(a2.QuadPart - a1.QuadPart);
}
