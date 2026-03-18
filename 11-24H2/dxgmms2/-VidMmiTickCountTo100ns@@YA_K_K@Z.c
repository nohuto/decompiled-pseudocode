/*
 * XREFs of ?VidMmiTickCountTo100ns@@YA_K_K@Z @ 0x140091AA0
 * Callers:
 *     ?VidMmiTickCountTo100ns@@YA_KT_LARGE_INTEGER@@0@Z @ 0x1400430B4 (-VidMmiTickCountTo100ns@@YA_KT_LARGE_INTEGER@@0@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VidMmiTickCountTo100ns(__int64 a1)
{
  return (unsigned __int64)(10000000 * a1) / VIDMM_GLOBAL::_QpcFrequency.QuadPart;
}
