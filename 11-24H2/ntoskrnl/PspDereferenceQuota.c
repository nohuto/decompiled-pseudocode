/*
 * XREFs of PspDereferenceQuota @ 0x1408A9418
 * Callers:
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     PspAssignProcessQuotaBlock @ 0x140A36D98 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     PspDereferenceQuotaBlock @ 0x1409D59C0 (PspDereferenceQuotaBlock.c)
 */

__int64 __fastcall PspDereferenceQuota(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1 + 129);
  return PspDereferenceQuotaBlock((PVOID)a1);
}
