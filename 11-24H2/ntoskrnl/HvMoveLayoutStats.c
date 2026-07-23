/*
 * XREFs of HvMoveLayoutStats @ 0x140974624
 * Callers:
 *     HvCheckHive @ 0x1409740B0 (HvCheckHive.c)
 *     HvCheckBin @ 0x1409742F0 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvMoveLayoutStats(_DWORD *a1)
{
  __int64 result; // rax

  *a1 += a1[2];
  result = (unsigned int)a1[3];
  a1[1] += result;
  a1[3] = 0;
  a1[2] = 0;
  return result;
}
