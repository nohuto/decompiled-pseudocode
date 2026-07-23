/*
 * XREFs of SymCryptSizeofRsakeyFromParams @ 0x14051FBD4
 * Callers:
 *     SymCryptRsakeyAllocate @ 0x14051E8E4 (SymCryptRsakeyAllocate.c)
 *     SymCryptRsakeyCreate @ 0x14051F184 (SymCryptRsakeyCreate.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x14052103C (SymCryptDigitsFromBits.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModulusFromDigits @ 0x140521944 (SymCryptSizeofModulusFromDigits.c)
 */

__int64 __fastcall SymCryptSizeofRsakeyFromParams(unsigned int *a1)
{
  unsigned int v2; // esi
  int v3; // ebx
  int v4; // edi
  int v5; // ebx

  v2 = SymCryptDigitsFromBits(a1[1]);
  v3 = a1[3] * SymCryptSizeofIntFromDigits(v2);
  v4 = a1[2] * (v3 + SymCryptSizeofModulusFromDigits(v2) + (((a1[1] >> 9) + (((a1[1] & 0x1FF) + 511) >> 9)) << 6));
  v5 = v4 + a1[3] * SymCryptSizeofIntFromDigits(v2);
  return v5 + (unsigned int)SymCryptSizeofModulusFromDigits(v2) + 192;
}
