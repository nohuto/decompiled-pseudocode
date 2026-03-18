/*
 * XREFs of RtlpHpLfhSlotInitialize @ 0x1404C21E4
 * Callers:
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B9584 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhBucketActivate @ 0x14060626C (RtlpHpLfhBucketActivate.c)
 * Callees:
 *     RtlpHpLfhOwnerInitialize @ 0x1404C2244 (RtlpHpLfhOwnerInitialize.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall RtlpHpLfhSlotInitialize(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x40uLL);
  result = RtlpHpLfhOwnerInitialize(a1, *a2 >> 1, 0LL, a3);
  *(_DWORD *)(a1 + 4) = 196608;
  *(_WORD *)(a1 + 2) = (unsigned __int64)&a2[-a3] >> 6;
  return result;
}
