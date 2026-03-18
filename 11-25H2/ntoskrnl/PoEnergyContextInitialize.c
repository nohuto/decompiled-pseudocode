/*
 * XREFs of PoEnergyContextInitialize @ 0x140A537B4
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     PopEtInit @ 0x140C21A5C (PopEtInit.c)
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
