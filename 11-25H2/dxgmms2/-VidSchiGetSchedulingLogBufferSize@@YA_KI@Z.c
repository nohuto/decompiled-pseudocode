/*
 * XREFs of ?VidSchiGetSchedulingLogBufferSize@@YA_KI@Z @ 0x14005222C
 * Callers:
 *     VidSchGetSchedulingLogSize @ 0x1400A660C (VidSchGetSchedulingLogSize.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VidSchiGetSchedulingLogBufferSize(int a1)
{
  return (unsigned int)(32 * (a1 + 1));
}
