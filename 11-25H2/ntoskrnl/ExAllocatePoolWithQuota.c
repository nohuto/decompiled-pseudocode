/*
 * XREFs of ExAllocatePoolWithQuota @ 0x140647F00
 * Callers:
 *     VerifierExAllocatePoolWithQuota @ 0x140B814A0 (VerifierExAllocatePoolWithQuota.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExpPoolTypeToPoolFlags @ 0x140B64380 (ExpPoolTypeToPoolFlags.c)
 */

PVOID __stdcall ExAllocatePoolWithQuota(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  char v3; // bl
  ULONG_PTR v4; // rax
  PVOID result; // rax

  v3 = PoolType;
  v4 = ExpPoolTypeToPoolFlags(PoolType, 1LL);
  result = (PVOID)ExAllocatePool2(v4);
  if ( !result && (v3 & 2) != 0 )
    KeBugCheckEx(0x41u, NumberOfBytes, 0LL, 0LL, 0LL);
  return result;
}
