/*
 * XREFs of HalpDmaZeroMapBuffers @ 0x14054F91C
 * Callers:
 *     IopMapTransfer @ 0x14038DCD0 (IopMapTransfer.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x14038ED80 (HalpAllocateAdapterCallbackV2.c)
 *     IoMapTransferInternal @ 0x140390384 (IoMapTransferInternal.c)
 *     HalpMapTransferV3 @ 0x140493590 (HalpMapTransferV3.c)
 * Callees:
 *     HalpDmaAcquireBufferMappings @ 0x1403902DC (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaReleaseBufferMappings @ 0x14045A854 (HalpDmaReleaseBufferMappings.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall HalpDmaZeroMapBuffers(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rcx
  char v9; // r15
  unsigned __int64 v10; // rbp
  __int64 i; // rcx
  __int64 j; // r13
  unsigned int v13; // eax
  unsigned int v14; // ebx
  _OWORD v15[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16; // [rsp+60h] [rbp-38h]

  v4 = a4;
  v5 = a3;
  memset(v15, 0, sizeof(v15));
  v6 = a2;
  v16 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v8 = a3 & 0xFFF;
  v9 = 0;
  v10 = (v8 + (unsigned __int64)a4 + 4095) >> 12;
  if ( CurrentIrql <= 2u )
  {
    if ( CurrentIrql < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
      }
      v9 = 1;
    }
    HalpDmaAcquireBufferMappings(v8, v6, v10, (__int64)v15);
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < (unsigned int)v10; i = (unsigned int)(i + 1) )
    {
      if ( (*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF06uLL, 0LL, 0LL);
      a2 = *(_QWORD *)(a2 + 8);
    }
  }
  for ( j = v6; v4; v4 -= v14 )
  {
    v13 = v4;
    if ( v4 >= 4096 - v5 )
      v13 = 4096 - v5;
    v14 = v13;
    memset_0((void *)(v5 + (*(_QWORD *)(j + 48) & 0xFFFFFFFFFFFFF000uLL)), 0, v13);
    j = *(_QWORD *)(j + 8);
    v5 = 0;
  }
  if ( CurrentIrql <= 2u )
    HalpDmaReleaseBufferMappings(i, v6, v10, (__int64)v15);
  if ( v9 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
