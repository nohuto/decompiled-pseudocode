/*
 * XREFs of IopInitializeRemovePagesArray @ 0x14059D47C
 * Callers:
 *     IopInitializeCrashDump @ 0x140704E50 (IopInitializeCrashDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
