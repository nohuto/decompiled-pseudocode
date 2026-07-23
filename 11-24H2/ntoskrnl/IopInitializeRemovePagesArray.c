/*
 * XREFs of IopInitializeRemovePagesArray @ 0x14059DB8C
 * Callers:
 *     IopInitializeCrashDump @ 0x14070EAE0 (IopInitializeCrashDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void IopInitializeRemovePagesArray()
{
  __int64 Pool2; // rax

  if ( !IopRemovePagesArray )
  {
    Pool2 = ExAllocatePool2(0x40uLL, 0x3E88uLL, 0x64506F49u);
    IopRemovePagesArray = Pool2;
    if ( Pool2 )
      *(_DWORD *)(Pool2 + 4) = 1000;
  }
}
