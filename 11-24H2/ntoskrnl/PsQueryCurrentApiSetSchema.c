/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x140A11520
 * Callers:
 *     RtlIsApiSetImplemented @ 0x140785310 (RtlIsApiSetImplemented.c)
 *     ExIsMultiSessionSku @ 0x1407B7F88 (ExIsMultiSessionSku.c)
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     MmQueryApiSetSchema @ 0x1404B0B8C (MmQueryApiSetSchema.c)
 */

struct _LIST_ENTRY *PsQueryCurrentApiSetSchema()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return PsGetCurrentServerSiloGlobals()[63].Flink;
  MmQueryApiSetSchema(&v1, &v2);
  return *(struct _LIST_ENTRY **)v1;
}
