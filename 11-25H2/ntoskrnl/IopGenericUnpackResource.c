/*
 * XREFs of IopGenericUnpackResource @ 0x140719B40
 * Callers:
 *     <none>
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x140495FB0 (RtlCmDecodeMemIoResource.c)
 */

__int64 __fastcall IopGenericUnpackResource(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a1, ULONGLONG *a2, ULONGLONG *a3)
{
  *a3 = RtlCmDecodeMemIoResource(a1, a2);
  return 0LL;
}
