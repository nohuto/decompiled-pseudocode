/*
 * XREFs of DbgkpDeleteErrorPort @ 0x1406FBA2C
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x14057B288 (DbgkpDereferenceErrorPort.c)
 * Callees:
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
