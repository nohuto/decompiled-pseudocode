/*
 * XREFs of AlpcpReleaseDirectAttribute @ 0x140463550
 * Callers:
 *     AlpcpSignal @ 0x1402C46F0 (AlpcpSignal.c)
 *     AlpcpSignalAndWait @ 0x1402CD9A0 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpCompleteDispatchMessage @ 0x14089A890 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140A15680 (AlpcpReleaseMessageAttributesOnCancel.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpReleaseDirectAttribute(__int64 a1)
{
  LONG_PTR result; // rax

  if ( (a1 & 2) != 0 )
    return ObfDereferenceObjectWithTag((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
  return result;
}
