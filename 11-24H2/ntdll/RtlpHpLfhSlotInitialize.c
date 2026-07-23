/*
 * XREFs of RtlpHpLfhSlotInitialize @ 0x1800D6AB0
 * Callers:
 *     RtlpHpLfhContextSlotAllocate @ 0x1800D65B0 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhBucketActivate @ 0x1800D68F0 (RtlpHpLfhBucketActivate.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

_BYTE *__fastcall RtlpHpLfhSlotInitialize(_BYTE *a1, _BYTE *a2, __int64 a3)
{
  _BYTE *result; // rax

  memset_thunk_772440563353939046(a1, 0, 0x40uLL);
  *a1 = *a2 & 0xFE;
  *((_QWORD *)a1 + 4) = a1 + 24;
  *((_QWORD *)a1 + 3) = a1 + 24;
  result = a1 + 40;
  *((_QWORD *)a1 + 6) = a1 + 40;
  *((_QWORD *)a1 + 5) = a1 + 40;
  *((_WORD *)a1 + 1) = (unsigned __int64)&a2[-a3] >> 6;
  *((_DWORD *)a1 + 1) = 196608;
  return result;
}
