/*
 * XREFs of ExAllocatePoolWithQuota @ 0x140652560
 * Callers:
 *     VerifierExAllocatePoolWithQuota @ 0x140B93480 (VerifierExAllocatePoolWithQuota.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExpPoolTypeToPoolFlags @ 0x140B761C0 (ExpPoolTypeToPoolFlags.c)
 */

PVOID __stdcall ExAllocatePoolWithQuota(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  char v3; // bl
  ULONG_PTR v4; // rax
  PVOID result; // rax

  v3 = PoolType;
  v4 = ExpPoolTypeToPoolFlags(PoolType, 1LL);
  result = (PVOID)ExAllocatePool2(v4, NumberOfBytes, 0x656E6F4Eu);
  if ( !result && (v3 & 2) != 0 )
    KeBugCheckEx(0x41u, NumberOfBytes, 0LL, 0LL, 0LL);
  return result;
}
