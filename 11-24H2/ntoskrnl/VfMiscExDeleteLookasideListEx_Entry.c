/*
 * XREFs of VfMiscExDeleteLookasideListEx_Entry @ 0x140B9D830
 * Callers:
 *     <none>
 * Callees:
 *     VfLookasideDelete @ 0x140B9FF68 (VfLookasideDelete.c)
 */

__int64 __fastcall VfMiscExDeleteLookasideListEx_Entry(__int64 a1)
{
  return VfLookasideDelete(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
}
