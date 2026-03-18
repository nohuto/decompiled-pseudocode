/*
 * XREFs of ExpNlsDeleteSiloState @ 0x140649FD4
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140762F68 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpNlsDeleteSiloState(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[1];
  if ( (unsigned __int64)v2 > 1 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  ExFreePoolWithTag(P, 0x58736C4Eu);
}
