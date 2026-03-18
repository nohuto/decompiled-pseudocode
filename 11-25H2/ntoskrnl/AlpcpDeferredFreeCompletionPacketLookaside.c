/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x140472B58
 * Callers:
 *     AlpcpFreeCompletionPacketLookaside @ 0x140472AF4 (AlpcpFreeCompletionPacketLookaside.c)
 * Callees:
 *     IoFreeMiniCompletionPacket @ 0x1409A6C50 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_QWORD *P)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(P[3 * i + 8]);
  ExFreePoolWithTag(P, 0);
}
