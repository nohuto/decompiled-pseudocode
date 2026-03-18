/*
 * XREFs of PoEnergyContextInitialize @ 0x140A57074
 * Callers:
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     PopEtInit @ 0x140C32B60 (PopEtInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoEnergyContextInitialize(_QWORD *a1)
{
  __int64 result; // rax

  a1[56] = 0LL;
  a1[55] = 0LL;
  result = PopEtGlobals;
  if ( PopEtGlobals )
  {
    result = PopEtGlobals + 792;
    a1[57] = PopEtGlobals + 792;
  }
  return result;
}
