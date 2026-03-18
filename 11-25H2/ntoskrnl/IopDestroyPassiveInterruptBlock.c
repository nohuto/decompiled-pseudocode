/*
 * XREFs of IopDestroyPassiveInterruptBlock @ 0x1406F02BC
 * Callers:
 *     IoDisconnectInterrupt @ 0x1409A2700 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1409A29B0 (IopConnectInterrupt.c)
 * Callees:
 *     IopFindPassiveInterruptBlock @ 0x140456BB4 (IopFindPassiveInterruptBlock.c)
 *     IopDereferencePassiveInterruptBlock @ 0x140456C24 (IopDereferencePassiveInterruptBlock.c)
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
