/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x140A183B0
 * Callers:
 *     RtlIsApiSetImplemented @ 0x1407853E0 (RtlIsApiSetImplemented.c)
 *     ExIsMultiSessionSku @ 0x1407B7B38 (ExIsMultiSessionSku.c)
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     MmQueryApiSetSchema @ 0x1404B62CC (MmQueryApiSetSchema.c)
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
