/*
 * XREFs of MiLocateLowestConflictingVad @ 0x140445494
 * Callers:
 *     MiExpandVadBitMap @ 0x1408E1EE4 (MiExpandVadBitMap.c)
 *     MiUpdateVadBits @ 0x140A764A0 (MiUpdateVadBits.c)
 * Callees:
 *     MiGetPreviousVad @ 0x140261500 (MiGetPreviousVad.c)
 *     MiCheckForConflictingVad @ 0x1404454EC (MiCheckForConflictingVad.c)
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
