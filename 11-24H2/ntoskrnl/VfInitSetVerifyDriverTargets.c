/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x140C3B544
 * Callers:
 *     ViInitSystemPhase0 @ 0x140C3B6E4 (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x140C3C470 (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, unsigned int a2)
{
  unsigned int v2; // ebx
  void *result; // rax

  if ( a2 > 0x1800 )
  {
    word_14100B9CE = 0;
    a2 = 6142;
  }
  v2 = a2;
  result = memmove(MmVerifyDriverBuffer, Src, a2);
  VfOptionFlags &= ~1u;
  LODWORD(MmVerifyDriverBufferLength) = v2;
  return result;
}
