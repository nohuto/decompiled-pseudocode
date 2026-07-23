/*
 * XREFs of RtlpHpLfhSlotInitialize @ 0x1403D7E64
 * Callers:
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B4424 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhBucketActivate @ 0x1406038AC (RtlpHpLfhBucketActivate.c)
 * Callees:
 *     RtlpHpLfhOwnerInitialize @ 0x1403D7EC4 (RtlpHpLfhOwnerInitialize.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
