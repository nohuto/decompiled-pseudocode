/*
 * XREFs of ExAllocatePool @ 0x14041AEE0
 * Callers:
 *     VerifierExAllocatePool @ 0x140B93070 (VerifierExAllocatePool.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

PVOID __stdcall ExAllocatePool(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  ULONG_PTR v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  PVOID result; // rax

  v4 = 256LL;
  if ( (PoolType & 1) == 0 )
  {
    v4 = 128LL;
    if ( (PoolType & 0x200) != 0 )
      v4 = 64LL;
  }
  if ( PoolType < NonPagedPool )
    v4 = 64LL;
  v5 = v4 | 4;
  if ( (PoolType & 0x20) == 0 )
    v5 = v4;
  v6 = v5 | 2;
  if ( (PoolType & 0x400) != 0 )
    v6 = v5;
  if ( (PoolType & 0xDE) != 0 )
  {
    v7 = v6 | 8;
    if ( (PoolType & 4) == 0 )
      v7 = v6;
    v8 = v7 | 0x200;
    if ( (PoolType & 0x80u) == 0 )
      v8 = v7;
    v6 = v8 | 0x400;
    if ( (PoolType & 0x40) == 0 )
      v6 = v8;
    if ( (PoolType & 0x10) != 0 )
      v6 |= 0x20uLL;
  }
  result = (PVOID)ExAllocatePool2(v6, NumberOfBytes, 0x656E6F4Eu);
  if ( !result && (PoolType & 2) != 0 )
    KeBugCheckEx(0x41u, NumberOfBytes, 0LL, 0LL, 0LL);
  return result;
}
