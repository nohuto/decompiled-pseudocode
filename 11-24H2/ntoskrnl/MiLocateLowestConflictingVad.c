/*
 * XREFs of MiLocateLowestConflictingVad @ 0x14043D644
 * Callers:
 *     MiExpandVadBitMap @ 0x140918A94 (MiExpandVadBitMap.c)
 *     MiUpdateVadBits @ 0x140A705BC (MiUpdateVadBits.c)
 * Callees:
 *     MiGetPreviousVad @ 0x140291B10 (MiGetPreviousVad.c)
 *     MiCheckForConflictingVad @ 0x14043D69C (MiCheckForConflictingVad.c)
 */

unsigned __int64 __fastcall MiLocateLowestConflictingVad(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // r11

  result = MiCheckForConflictingVad();
  if ( result )
  {
    do
      result = MiGetPreviousVad((unsigned __int64 *)result);
    while ( result
         && (((*(unsigned int *)(result + 28) | ((unsigned __int64)*(unsigned __int8 *)(result + 33) << 32)) << 12) | 0xFFF) >= a2 );
    return v4;
  }
  return result;
}
