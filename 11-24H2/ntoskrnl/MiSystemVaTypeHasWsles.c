/*
 * XREFs of MiSystemVaTypeHasWsles @ 0x140229548
 * Callers:
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiSystemVaTypeHasWsles(int a1)
{
  return ((a1 - 5) & 0xFFFFFFF9) == 0 && a1 != 9 || a1 == 17;
}
