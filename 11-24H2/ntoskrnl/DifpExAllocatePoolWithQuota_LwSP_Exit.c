/*
 * XREFs of DifpExAllocatePoolWithQuota_LwSP_Exit @ 0x140BA61E0
 * Callers:
 *     <none>
 * Callees:
 *     DifpLwSPProcessPostPoolAlloc @ 0x140BA623C (DifpLwSPProcessPostPoolAlloc.c)
 */

__int64 __fastcall DifpExAllocatePoolWithQuota_LwSP_Exit(__int64 a1)
{
  return DifpLwSPProcessPostPoolAlloc(*(_QWORD *)(a1 + 64));
}
