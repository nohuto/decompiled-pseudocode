/*
 * XREFs of ViGetAdapterInformationInternal @ 0x140B8AE98
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140B87190 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B87370 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140B87580 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140B87640 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140B87790 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140B87870 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140B87950 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140B87AB0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140B87DB0 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x140B87FE0 (VfCancelAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140B88140 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140B88230 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140B883E0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140B88490 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140B88540 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140B88660 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140B887E0 (VfFreeMapRegisters.c)
 *     VfGetDmaAlignment @ 0x140B88B20 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140B88BE0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140B88F30 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140B890C0 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x140B89310 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140B894C0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140B89690 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140B89980 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140B89B00 (VfReadDmaCounter.c)
 *     ViGetAdapterInformation @ 0x140B8AE80 (ViGetAdapterInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140B86FC0 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterSignature @ 0x140B8AFA4 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140B8B21C (ViHalPreprocessOptions.c)
 */

struct _LIST_ENTRY *__fastcall ViGetAdapterInformationInternal(ULONG_PTR a1, char a2)
{
  KIRQL v4; // al
  struct _LIST_ENTRY *i; // rbx

  if ( !a1 || !ViVerifyDma || (unsigned int)ViGetAdapterSignature() != 1634550870 )
    return 0LL;
  if ( KeGetCurrentIrql() > 2u )
  {
    VF_ASSERT_MAX_IRQL();
    return 0LL;
  }
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F03D70);
  for ( i = ViAdapterList.Flink; ; i = i->Flink )
  {
    if ( &ViAdapterList == i )
    {
      KeReleaseSpinLock(&qword_140F03D70, v4);
      return 0LL;
    }
    if ( (struct _LIST_ENTRY *)a1 == &i[1] )
      break;
  }
  KeReleaseSpinLock(&qword_140F03D70, v4);
  if ( a2 )
  {
    if ( SHIDWORD(i[4].Blink) <= 0 )
    {
      ViHalPreprocessOptions(
        byte_140E0EA68,
        "Driver has attempted to access an adapter (%p) that has already been released",
        (const void *)0x18);
      VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)i, 0LL, byte_140E0EA68);
    }
  }
  return i;
}
