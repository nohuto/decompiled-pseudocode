/*
 * XREFs of IopInitializeRemovePagesArray @ 0x1405A0C5C
 * Callers:
 *     IopInitializeCrashDump @ 0x140710F50 (IopInitializeCrashDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void IopInitializeRemovePagesArray()
{
  __int64 Pool2; // rax

  if ( !IopRemovePagesArray )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    IopRemovePagesArray = Pool2;
    if ( Pool2 )
      *(_DWORD *)(Pool2 + 4) = 1000;
  }
}
