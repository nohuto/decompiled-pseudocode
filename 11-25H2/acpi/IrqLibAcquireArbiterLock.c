/*
 * XREFs of IrqLibAcquireArbiterLock @ 0x14004F218
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1400549E0 (IrqLibpGetVectorInput.c)
 *     ProcessorpAddInstanceCallback @ 0x1400705C0 (ProcessorpAddInstanceCallback.c)
 *     IrqLibAllocateMessageTarget @ 0x1400A8980 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1400A8C30 (IrqLibFreeMessageTarget.c)
 *     IrqLibUpdateInterruptProperties @ 0x1400A8CE0 (IrqLibUpdateInterruptProperties.c)
 *     IrqTransGetInterruptVector @ 0x1400AA520 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1400B13D0 (IrqTranslateResources.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1400C0600 (LinkNodepAddLinkNodeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IrqLibAcquireArbiterLock(char a1)
{
  NTSTATUS result; // eax

  result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    while ( byte_140089A08 )
    {
      KeSetEvent((PRKEVENT)Object, 0, 0);
      KeWaitForSingleObject(qword_140089A10, Executive, 0, 0, 0LL);
      result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
