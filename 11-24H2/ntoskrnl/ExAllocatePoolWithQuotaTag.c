/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x14048CAC0
 * Callers:
 *     FsRtlAllocatePoolWithQuota @ 0x140580450 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x140580480 (FsRtlAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140B91520 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140B9BE90 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExpPoolTypeToPoolFlags @ 0x140B74620 (ExpPoolTypeToPoolFlags.c)
 */

PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  char v4; // bl
  ULONG_PTR v5; // rax
  PVOID result; // rax

  v4 = PoolType;
  v5 = ExpPoolTypeToPoolFlags(PoolType, 1LL);
  result = (PVOID)ExAllocatePool2(v5);
  if ( !result && (v4 & 2) != 0 )
    KeBugCheckEx(0x41u, NumberOfBytes, 0LL, 0LL, 0LL);
  return result;
}
