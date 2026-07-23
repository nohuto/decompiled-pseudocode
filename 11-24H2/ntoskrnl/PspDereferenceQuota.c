/*
 * XREFs of PspDereferenceQuota @ 0x1408FF678
 * Callers:
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     PspAssignProcessQuotaBlock @ 0x140A2BBE8 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     PspDereferenceQuotaBlock @ 0x1409C57F0 (PspDereferenceQuotaBlock.c)
 */

__int64 __fastcall PspDereferenceQuota(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1 + 129);
  return PspDereferenceQuotaBlock((PVOID)a1);
}
