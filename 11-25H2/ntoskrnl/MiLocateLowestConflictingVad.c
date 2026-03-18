/*
 * XREFs of MiLocateLowestConflictingVad @ 0x140447C18
 * Callers:
 *     MiExpandVadBitMap @ 0x140900244 (MiExpandVadBitMap.c)
 *     MiUpdateVadBits @ 0x140A75570 (MiUpdateVadBits.c)
 * Callees:
 *     MiGetPreviousVad @ 0x1402A971C (MiGetPreviousVad.c)
 *     MiCheckForConflictingVad @ 0x140447C70 (MiCheckForConflictingVad.c)
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
