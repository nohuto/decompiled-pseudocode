/*
 * XREFs of XilCoreCommonBuffer_AcquireBuffer @ 0x14001F364
 * Callers:
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x14001F140 (Bulk_TransferData_DetermineTransferMechanism.c)
 *     CommonBuffer_AcquireBuffer @ 0x14001F318 (CommonBuffer_AcquireBuffer.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x140016C88 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x140017334 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056294 (XilCoreCommonBuffer_AllocateBuffer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140056D58 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

unsigned int *__fastcall XilCoreCommonBuffer_AcquireBuffer(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        bool *a5)
{
  __int64 Buffer; // rax
  unsigned int *v10; // rbx
  unsigned int v11; // ecx
  unsigned int *v12; // rax
  unsigned int *v13; // r15
  __int64 v14; // rbp
  int v15; // r8d

  if ( a2 <= 0x1000 )
  {
    v11 = 0;
    v12 = (unsigned int *)(a1 + 32);
    do
    {
      v13 = v12;
      if ( a2 <= *v12 )
        break;
      ++v11;
      v12 += 16;
    }
    while ( v11 < 2 );
    v14 = a1 + 16;
    *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
    v10 = XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, v13, a3, a4, a5);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
    if ( v10 )
    {
      if ( !*a5 )
        goto LABEL_17;
      v14 = a1 + 16;
    }
    if ( KeGetCurrentIrql() )
    {
      *a5 = 1;
    }
    else
    {
      v15 = v10 == 0LL;
      if ( *a5 )
        v15 += v13[4];
      XilCoreCommonBuffer_AllocateBuffers((__int64 **)a1, (__int64)v13, v15);
      *a5 = 0;
      if ( v10 )
        goto LABEL_17;
      *(_BYTE *)(v14 + 9) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14);
      v10 = XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, v13, a3, a4, a5);
      KeReleaseSpinLock((PKSPIN_LOCK)v14, *(_BYTE *)(v14 + 9));
    }
    if ( v10 )
    {
LABEL_17:
      v10[20] = 1;
      v10[11] = a2;
      return v10;
    }
  }
  else
  {
    Buffer = XilCoreCommonBuffer_AllocateBuffer(a1, a2);
    v10 = (unsigned int *)Buffer;
    if ( Buffer )
    {
      *a5 = 0;
      memset(*(void **)(Buffer + 16), 0, a2);
      *((_QWORD *)v10 + 9) = a3;
      v10[16] = a4;
      goto LABEL_17;
    }
  }
  if ( KeGetCurrentIrql() )
    MicrosoftTelemetryAssertTriggeredArgsMsgKM(
      "usbxhci.sys",
      a4,
      a2,
      "Common buffer allocation failure at DISPATCH LEVEL");
  return v10;
}
