/*
 * XREFs of ?VidSchiGetSchedulingLogBufferSize@@YA_KI@Z @ 0x140051D64
 * Callers:
 *     VidSchGetSchedulingLogSize @ 0x1400A7E8C (VidSchGetSchedulingLogSize.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VidSchiGetSchedulingLogBufferSize(int a1)
{
  return (unsigned int)(32 * (a1 + 1));
}
