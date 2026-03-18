/*
 * XREFs of KeFreeInitializationCode @ 0x140BDF4F0
 * Callers:
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140BDEBD4 (KiSwInterruptPresent.c)
 *     MmDiscardDriverSection @ 0x140C5BF00 (MmDiscardDriverSection.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140C5BFB0 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__2c )
      return MmDiscardDriverSection(sub_140BD8DF0);
  }
  return result;
}
