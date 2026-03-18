/*
 * XREFs of AlpcpReleaseDirectAttribute @ 0x14046ABC0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignal @ 0x14031BB60 (AlpcpSignal.c)
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     AlpcpReleaseAttributes @ 0x140890220 (AlpcpReleaseAttributes.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408912A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140A20580 (AlpcpReleaseMessageAttributesOnCancel.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpReleaseDirectAttribute(__int64 a1)
{
  LONG_PTR result; // rax

  if ( (a1 & 2) != 0 )
    return ObfDereferenceObjectWithTag((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
  return result;
}
