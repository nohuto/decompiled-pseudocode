/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x140349350
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x1407814C0 (RtlpGetTokenNamedObjectPath.c)
 *     SepValidateReferencedCachedHandles @ 0x1408F2790 (SepValidateReferencedCachedHandles.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 */

__int64 RtlGetCurrentServiceSessionId()
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return **(unsigned int **)(PsGetServerSiloGlobals(CurrentServerSilo) + 1288);
}
