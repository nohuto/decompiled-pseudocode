/*
 * XREFs of DbgkpDeleteErrorPort @ 0x1407054CC
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x14057BA38 (DbgkpDereferenceErrorPort.c)
 * Callees:
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
