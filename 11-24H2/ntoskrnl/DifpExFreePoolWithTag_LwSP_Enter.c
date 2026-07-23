/*
 * XREFs of DifpExFreePoolWithTag_LwSP_Enter @ 0x140BA6200
 * Callers:
 *     <none>
 * Callees:
 *     DifpLwSPProcessPostPoolAlloc @ 0x140BA623C (DifpLwSPProcessPostPoolAlloc.c)
 */

__int64 __fastcall DifpExFreePoolWithTag_LwSP_Enter(__int64 a1)
{
  return DifpLwSPProcessPostPoolAlloc(*(_QWORD *)(a1 + 16));
}
