/*
 * XREFs of PsGetCurrentServerSiloName @ 0x1407723B0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 *PsGetCurrentServerSiloName()
{
  struct _LIST_ENTRY *v0; // rax
  __int64 *v1; // rcx

  v0 = PsGetCurrentServerSiloGlobals() + 78;
  v1 = &PspDefaultSiloName;
  if ( LOWORD(v0->Flink) )
    return (__int64 *)v0;
  return v1;
}
