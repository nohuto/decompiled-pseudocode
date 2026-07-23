/*
 * XREFs of IopDestroyPassiveInterruptBlock @ 0x1406F9CE4
 * Callers:
 *     IoDisconnectInterrupt @ 0x1409C05D0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1409C0880 (IopConnectInterrupt.c)
 * Callees:
 *     IopFindPassiveInterruptBlock @ 0x14044C81C (IopFindPassiveInterruptBlock.c)
 *     IopDereferencePassiveInterruptBlock @ 0x14044C88C (IopDereferencePassiveInterruptBlock.c)
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
