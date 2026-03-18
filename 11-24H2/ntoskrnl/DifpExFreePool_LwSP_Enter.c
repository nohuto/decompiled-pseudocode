/*
 * XREFs of DifpExFreePool_LwSP_Enter @ 0x140BA4220
 * Callers:
 *     <none>
 * Callees:
 *     DifpLwSPProcessPostPoolAlloc @ 0x140BA423C (DifpLwSPProcessPostPoolAlloc.c)
 */

__int64 __fastcall DifpExFreePool_LwSP_Enter(__int64 a1)
{
  return DifpLwSPProcessPostPoolAlloc(*(_QWORD *)(a1 + 8));
}
