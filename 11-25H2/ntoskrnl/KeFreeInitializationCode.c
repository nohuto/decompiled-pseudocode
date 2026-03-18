/*
 * XREFs of KeFreeInitializationCode @ 0x140BCE4F0
 * Callers:
 *     KeInitSystem @ 0x140C4FA10 (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140BCDBD4 (KiSwInterruptPresent.c)
 *     MmDiscardDriverSection @ 0x140C4AB80 (MmDiscardDriverSection.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140C4AC30 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__2c )
      return MmDiscardDriverSection(sub_140BC7DF0);
  }
  return result;
}
