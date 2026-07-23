/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x14042A3E0
 * Callers:
 *     VerifierExAllocatePoolWithTagPriority @ 0x140B936E0 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x140B9DFB0 (VerifierPortExAllocatePoolWithTagPriority.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

PVOID __stdcall ExAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  ULONG_PTR v11; // r10
  __int32 v12; // ebx
  PVOID result; // rax

  v6 = 256LL;
  if ( (PoolType & 1) == 0 )
  {
    v6 = 128LL;
    if ( (PoolType & 0x200) != 0 )
      v6 = 64LL;
  }
  if ( PoolType < NonPagedPool )
    v6 = 64LL;
  v7 = v6 | 4;
  if ( (PoolType & 0x20) == 0 )
    v7 = v6;
  v8 = v7 | 2;
  if ( (PoolType & 0x400) != 0 )
    v8 = v7;
  if ( (PoolType & 0xDE) != 0 )
  {
    v9 = v8 | 8;
    if ( (PoolType & 4) == 0 )
      v9 = v8;
    v10 = v9 | 0x200;
    if ( (PoolType & 0x80u) == 0 )
      v10 = v9;
    v8 = v10 | 0x400;
    if ( (PoolType & 0x40) == 0 )
      v8 = v10;
    if ( (PoolType & 0x10) != 0 )
      v8 |= 0x20uLL;
  }
  v11 = v8 | 0x100000000LL;
  if ( (Priority & 8) == 0 )
    v11 = v8;
  v12 = PoolType & 2;
  result = (PVOID)ExAllocatePool3(v11, 1);
  if ( !result )
  {
    if ( v12 )
      KeBugCheckEx(0x41u, NumberOfBytes, 0LL, 0LL, 0LL);
  }
  return result;
}
