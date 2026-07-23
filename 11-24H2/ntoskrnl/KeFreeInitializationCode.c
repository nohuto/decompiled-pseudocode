/*
 * XREFs of KeFreeInitializationCode @ 0x140BE14F0
 * Callers:
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140BE0BD4 (KiSwInterruptPresent.c)
 *     MmDiscardDriverSection @ 0x140C5E090 (MmDiscardDriverSection.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140C5E140 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__2c )
      return MmDiscardDriverSection(sub_140BDADF0);
  }
  return result;
}
