/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x14048D0D0
 * Callers:
 *     FsRtlAllocatePoolWithQuota @ 0x14057D130 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x14057D160 (FsRtlAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140B81540 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140B8BEB0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExpPoolTypeToPoolFlags @ 0x140B64380 (ExpPoolTypeToPoolFlags.c)
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
