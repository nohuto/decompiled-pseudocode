/*
 * XREFs of XilCoreCommonBuffer_AcquireBuffer @ 0x140004284
 * Callers:
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x140004060 (Bulk_TransferData_DetermineTransferMechanism.c)
 *     CommonBuffer_AcquireBuffer @ 0x140004238 (CommonBuffer_AcquireBuffer.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x14001FB88 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x140020234 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     Feature_UMPERS__private_IsEnabledDeviceUsageNoInline @ 0x14003F574 (Feature_UMPERS__private_IsEnabledDeviceUsageNoInline.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056E34 (XilCoreCommonBuffer_AllocateBuffer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140057938 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall XilCoreCommonBuffer_AcquireBuffer(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _BYTE *a5)
{
  __int64 Buffer; // rax
  __int64 v10; // rbx
  unsigned int v11; // ecx
  unsigned int *v12; // rax
  unsigned int *v13; // r15
  __int64 v14; // rbp
  __int64 v15; // r8

  Feature_UMPERS__private_IsEnabledDeviceUsageNoInline();
  if ( (unsigned int)Feature_UMPERS__private_IsEnabledDeviceUsageNoInline() && a2 > 0x1000 )
  {
    Buffer = XilCoreCommonBuffer_AllocateBuffer(a1, a2);
    v10 = Buffer;
    if ( Buffer )
    {
      *a5 = 0;
      memset(*(void **)(Buffer + 16), 0, a2);
      *(_QWORD *)(v10 + 72) = a3;
      *(_DWORD *)(v10 + 64) = a4;
      goto LABEL_18;
    }
  }
  else
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
    v10 = XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, (_DWORD)v13, a3, a4, (__int64)a5);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
    if ( v10 )
    {
      if ( !*a5 )
        goto LABEL_18;
      v14 = a1 + 16;
    }
    if ( KeGetCurrentIrql() )
    {
      *a5 = 1;
    }
    else
    {
      v15 = v10 == 0;
      if ( *a5 )
        v15 = v13[4] + (unsigned int)v15;
      XilCoreCommonBuffer_AllocateBuffers(a1, v13, v15);
      *a5 = 0;
      if ( v10 )
        goto LABEL_18;
      *(_BYTE *)(v14 + 9) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14);
      v10 = XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, (_DWORD)v13, a3, a4, (__int64)a5);
      KeReleaseSpinLock((PKSPIN_LOCK)v14, *(_BYTE *)(v14 + 9));
    }
    if ( v10 )
    {
LABEL_18:
      *(_DWORD *)(v10 + 80) = 1;
      *(_DWORD *)(v10 + 44) = a2;
      return v10;
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
