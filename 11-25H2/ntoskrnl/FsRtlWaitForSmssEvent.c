/*
 * XREFs of FsRtlWaitForSmssEvent @ 0x1406FE2C0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall FsRtlWaitForSmssEvent(PVOID Object)
{
  KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  BYTE3(NlsMbCodePageTag) = 1;
  return ObfDereferenceObject(Object);
}
