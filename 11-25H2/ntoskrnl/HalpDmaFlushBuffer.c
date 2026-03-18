/*
 * XREFs of HalpDmaFlushBuffer @ 0x140333700
 * Callers:
 *     HalpDmaFlushContiguousTransferV3 @ 0x140331380 (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x14033239C (HalpDmaFlushScatterTransferV3.c)
 *     HalMapTransferEx @ 0x140332780 (HalMapTransferEx.c)
 *     IoMapTransferInternal @ 0x140333E20 (IoMapTransferInternal.c)
 *     IopMapTransfer @ 0x140334310 (IopMapTransfer.c)
 *     HalBuildScatterGatherListV2 @ 0x1403346B0 (HalBuildScatterGatherListV2.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x1403353E0 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x140335DA0 (HalPutScatterGatherListV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1403373F4 (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x14033753C (HalpDmaFlushContiguousTransferV2.c)
 *     IoFlushAdapterBuffersV2 @ 0x140337650 (IoFlushAdapterBuffersV2.c)
 *     HalpDmaMapScatterTransferV3 @ 0x140497828 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x1404CCF54 (HalpDmaMapContiguousTransferV3.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     IoBuildPartialMdl @ 0x1403A2E50 (IoBuildPartialMdl.c)
 *     KeFlushIoBuffers @ 0x14043D260 (KeFlushIoBuffers.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404CE6B4 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
  __int16 v11; // dx
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
  if ( v10 && (v11 = a3, a1 = a3 & 0xFFF, v12 = (a1 + v6 + 4095) >> 12, (unsigned int)v12 <= 0x200) )
  {
    v13 = CurrentIrql;
    if ( CurrentIrql < 2u )
    {
      v13 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a1) = v13;
        KiRaiseIrqlProcessIrqlFlags(a1);
        v11 = a3;
      }
    }
    v14 = *(struct _MDL **)(qword_140E3E928 + 8LL * KeGetPcr()->Prcb.Number);
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
