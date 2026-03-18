/*
 * XREFs of DbgkpDeleteErrorPort @ 0x14070790C
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x14057E5A8 (DbgkpDereferenceErrorPort.c)
 * Callees:
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
