/*
 * XREFs of HalpInterruptIsCmciSupported @ 0x14054249C
 * Callers:
 *     HalpIsCmciImplemented @ 0x140B4C2F4 (HalpIsCmciImplemented.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x1403B97B4 (HalpInterruptFindLines.c)
 */

bool HalpInterruptIsCmciSupported()
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF
  int v2; // [rsp+34h] [rbp+Ch]

  if ( *(_DWORD *)(HalpInterruptController + 240) != 2 )
    return 0;
  v1 = *(_DWORD *)(HalpInterruptController + 256);
  v2 = -7;
  return HalpInterruptFindLines(&v1) != 0LL;
}
