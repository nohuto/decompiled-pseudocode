/*
 * XREFs of IopDestroyPassiveInterruptBlock @ 0x1406FC0A4
 * Callers:
 *     IoDisconnectInterrupt @ 0x140A121C0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140A12470 (IopConnectInterrupt.c)
 * Callees:
 *     IopFindPassiveInterruptBlock @ 0x140456FDC (IopFindPassiveInterruptBlock.c)
 *     IopDereferencePassiveInterruptBlock @ 0x14045704C (IopDereferencePassiveInterruptBlock.c)
 */

void __fastcall IopDestroyPassiveInterruptBlock(unsigned int a1)
{
  volatile signed __int32 *PassiveInterruptBlock; // rax

  PassiveInterruptBlock = (volatile signed __int32 *)IopFindPassiveInterruptBlock(a1);
  if ( PassiveInterruptBlock )
  {
    _InterlockedDecrement(PassiveInterruptBlock + 48);
    IopDereferencePassiveInterruptBlock((PVOID)PassiveInterruptBlock);
  }
}
