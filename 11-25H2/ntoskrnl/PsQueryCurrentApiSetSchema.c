/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x140A12F90
 * Callers:
 *     RtlIsApiSetImplemented @ 0x140776130 (RtlIsApiSetImplemented.c)
 *     ExIsMultiSessionSku @ 0x1407A8688 (ExIsMultiSessionSku.c)
 *     MiResolveImageReferences @ 0x140A1286C (MiResolveImageReferences.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     MmQueryApiSetSchema @ 0x1404B681C (MmQueryApiSetSchema.c)
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
