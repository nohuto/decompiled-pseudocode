/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x1404877E0
 * Callers:
 *     FsRtlAllocatePoolWithQuota @ 0x14057D890 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x14057D8C0 (FsRtlAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140B93520 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140B9DE90 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExpPoolTypeToPoolFlags @ 0x140B761C0 (ExpPoolTypeToPoolFlags.c)
 */

PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  char v4; // bl
  ULONG_PTR v5; // rax
  int v6; // r10d
  ULONG v7; // r10d
  PVOID result; // rax

  v4 = PoolType;
  v5 = ExpPoolTypeToPoolFlags(PoolType, 1LL);
  v7 = v6 & 0x7FFFFFFF;
  if ( !v7 )
    v7 = 811884866;
  result = (PVOID)ExAllocatePool2(v5, NumberOfBytes, v7);
  if ( !result && (v4 & 2) != 0 )
    KeBugCheckEx(0x41u, NumberOfBytes, 0LL, 0LL, 0LL);
  return result;
}
