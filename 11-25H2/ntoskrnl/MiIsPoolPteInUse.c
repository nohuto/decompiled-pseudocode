/*
 * XREFs of MiIsPoolPteInUse @ 0x140431FF0
 * Callers:
 *     MiLinkPoolCommitChain @ 0x140238250 (MiLinkPoolCommitChain.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPoolPteInUse(__int16 a1)
{
  return (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 0x3E0) != 0LL;
}
