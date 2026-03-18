/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x1400564C4
 * Callers:
 *     IrqLibAllocateMessageTarget @ 0x1400A8980 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1400A8C30 (IrqLibFreeMessageTarget.c)
 *     IrqLibUpdateInterruptProperties @ 0x1400A8CE0 (IrqLibUpdateInterruptProperties.c)
 *     IrqTransGetInterruptVector @ 0x1400AA520 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1400B13D0 (IrqTranslateResources.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1400C0600 (LinkNodepAddLinkNodeWorker.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent((PRKEVENT)Object, 0, 0);
}
