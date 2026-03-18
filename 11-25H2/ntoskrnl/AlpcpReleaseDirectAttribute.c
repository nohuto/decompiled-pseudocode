/*
 * XREFs of AlpcpReleaseDirectAttribute @ 0x14046BB78
 * Callers:
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408A9370 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1408AD2C8 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x1408B25D0 (AlpcpReleaseAttributes.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpReleaseDirectAttribute(__int64 a1)
{
  LONG_PTR result; // rax

  if ( (a1 & 2) != 0 )
    return ObfDereferenceObjectWithTag((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
  return result;
}
