/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x1403C2D90
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x1407813F0 (RtlpGetTokenNamedObjectPath.c)
 *     SepValidateReferencedCachedHandles @ 0x140913DDC (SepValidateReferencedCachedHandles.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 */

ULONG RtlGetCurrentServiceSessionId(void)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return **(_DWORD **)(PsGetServerSiloGlobals(CurrentServerSilo) + 1288);
}
