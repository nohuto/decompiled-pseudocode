/*
 * XREFs of HalpDmaFlushBuffer @ 0x14038D450
 * Callers:
 *     HalpDmaMapContiguousTransferV2 @ 0x14038D984 (HalpDmaMapContiguousTransferV2.c)
 *     IopMapTransfer @ 0x14038DCD0 (IopMapTransfer.c)
 *     HalBuildScatterGatherListV2 @ 0x14038E070 (HalBuildScatterGatherListV2.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x14038ED80 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x14038F730 (HalPutScatterGatherListV2.c)
 *     IoMapTransferInternal @ 0x140390384 (IoMapTransferInternal.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x1403910E4 (HalpDmaFlushContiguousTransferV2.c)
 *     IoFlushAdapterBuffersV2 @ 0x1403911F0 (IoFlushAdapterBuffersV2.c)
 *     HalMapTransferEx @ 0x140391AE0 (HalMapTransferEx.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x14039249C (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x1403934E8 (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x140493664 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x140493844 (HalpDmaMapContiguousTransferV3.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     IoBuildPartialMdl @ 0x14038B960 (IoBuildPartialMdl.c)
 *     KeFlushIoBuffers @ 0x14043D470 (KeFlushIoBuffers.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404CE494 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall HalpDmaFlushBuffer(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5,
        char a6)
{
  __int64 v6; // r12
  unsigned __int8 CurrentIrql; // bp
  PVOID v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r14
  unsigned __int8 v13; // di
  struct _MDL *v14; // r15
  __int64 v15; // rdx

  v6 = a4;
  CurrentIrql = KeGetCurrentIrql();
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    v10 = *(PVOID *)(a2 + 24);
  else
    v10 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( v10 && (v11 = (unsigned int)a3, a1 = a3 & 0xFFF, v12 = (a1 + v6 + 4095) >> 12, (unsigned int)v12 <= 0x200) )
  {
    v13 = CurrentIrql;
    if ( CurrentIrql < 2u )
    {
      v13 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v11) = 2;
        LOBYTE(a1) = v13;
        KiRaiseIrqlProcessIrqlFlags(a1, v11);
        LOWORD(v11) = a3;
      }
    }
    v14 = *(struct _MDL **)(qword_140E3EB68 + 8LL * KeGetPcr()->Prcb.Number);
    v14->Next = 0LL;
    v14->MdlFlags = 0;
    v14->ByteOffset = v11 & 0xFFF;
    v14->Size = 8 * (v12 + 6);
    v14->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
    v14->ByteCount = v6;
    IoBuildPartialMdl((PMDL)a2, v14, (PVOID)a3, v6);
    if ( !a6 )
      KeFlushIoBuffers((ULONG_PTR)v14);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v15) = v13;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
      }
      __writecr8(v13);
    }
  }
  else
  {
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0xACu, 0x1000uLL, 0xEF05uLL, 0LL, 0LL);
    HalpDmaFlushBufferWithEmergencyResources(a1, a2, a3, v6, a5, a6);
  }
}
