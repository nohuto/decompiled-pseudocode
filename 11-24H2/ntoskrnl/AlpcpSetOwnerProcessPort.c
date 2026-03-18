/*
 * XREFs of AlpcpSetOwnerProcessPort @ 0x1408633F8
 * Callers:
 *     AlpcpCreateConnectionPort @ 0x14086210C (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateClientPort @ 0x1408649C0 (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x1409F4F00 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerProcessPort(__int64 a1, _DWORD *a2)
{
  PEPROCESS Process; // rbx
  LONG_PTR result; // rax

  if ( a2 && (*a2 & 0x100000) != 0 )
    Process = PsInitialSystemProcess;
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  result = ObfReferenceObjectWithTag(Process, 0x63706C41u);
  *(_QWORD *)(a1 + 24) = Process;
  return result;
}
