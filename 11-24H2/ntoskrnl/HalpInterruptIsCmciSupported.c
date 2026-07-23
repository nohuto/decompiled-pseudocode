/*
 * XREFs of HalpInterruptIsCmciSupported @ 0x14053FDEC
 * Callers:
 *     HalpIsCmciImplemented @ 0x140B4E334 (HalpIsCmciImplemented.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x140373298 (HalpInterruptFindLines.c)
 */

bool HalpInterruptIsCmciSupported()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF
  int v2; // [rsp+34h] [rbp+Ch]

  if ( *(_DWORD *)(HalpInterruptController + 240) != 2 )
    return 0;
  v1 = *(_DWORD *)(HalpInterruptController + 256);
  v2 = -7;
  return HalpInterruptFindLines(&v1) != 0LL;
}
