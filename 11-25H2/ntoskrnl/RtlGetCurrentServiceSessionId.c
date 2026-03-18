/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x1403D6CD0
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x140772270 (RtlpGetTokenNamedObjectPath.c)
 *     SepValidateReferencedCachedHandles @ 0x140983B48 (SepValidateReferencedCachedHandles.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 */

__int64 RtlGetCurrentServiceSessionId()
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return **(unsigned int **)(PsGetServerSiloGlobals(CurrentServerSilo) + 1288);
}
