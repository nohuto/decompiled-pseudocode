/*
 * XREFs of NvmeControllerSetStorMQProperty @ 0x1400F5048
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400CFBBC (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeAdapterStop @ 0x1400D901C (NvmeAdapterStop.c)
 *     NvmeAdapterStorMQControllerInitializeWorker @ 0x1400D97A0 (NvmeAdapterStorMQControllerInitializeWorker.c)
 *     NvmeAdapterStorMQControllerRemoveWorker @ 0x1400D9840 (NvmeAdapterStorMQControllerRemoveWorker.c)
 *     NvmeControllerConfigure @ 0x1400EBC7C (NvmeControllerConfigure.c)
 *     NvmeControllerEnable @ 0x1400ECCD0 (NvmeControllerEnable.c)
 *     NvmeControllerIoCompletionQueueCreate @ 0x1400F0D94 (NvmeControllerIoCompletionQueueCreate.c)
 *     NvmeControllerIoSqToCqMapping @ 0x1400F18F0 (NvmeControllerIoSqToCqMapping.c)
 *     NvmeControllerIoSubmissionQueueCreate @ 0x1400F1EC8 (NvmeControllerIoSubmissionQueueCreate.c)
 *     NvmeControllerPowerDown @ 0x1400F2358 (NvmeControllerPowerDown.c)
 *     NvmeControllerProcessorToSqMapping @ 0x1400F33F0 (NvmeControllerProcessorToSqMapping.c)
 *     NvmeControllerRemove @ 0x1400F3DCC (NvmeControllerRemove.c)
 *     NvmeControllerReset @ 0x1400F488C (NvmeControllerReset.c)
 *     NvmeControllerStorMQInitializeAdminQueues @ 0x1400F5234 (NvmeControllerStorMQInitializeAdminQueues.c)
 *     NvmeAdapterStorMQPowerUpDeviceLastStepA @ 0x140131F44 (NvmeAdapterStorMQPowerUpDeviceLastStepA.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeControllerSetStorMQProperty(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  ULONG_PTR v5; // rbx
  unsigned int v6; // r8d
  unsigned int v8; // eax
  __int64 v9; // rcx

  v5 = a2;
  if ( *(_BYTE *)(a1 + 1728) == 1 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 128) + 528LL))(*(_QWORD *)(a1 + 1648) + 64LL, a2);
    v6 = v8;
    if ( (a4 & 1) != 0 )
    {
      switch ( (unsigned int)v5 )
      {
        case 0x80000000:
        case 0x80000001:
        case 0x80000003:
        case 0x80000006:
        case 0x80000007:
        case 0x80000008:
        case 0x80000009:
          if ( !v8 || v8 == -1056964606 )
            return v6;
          goto LABEL_13;
        case 0x80000002:
        case 0x80000004:
        case 0x80000005:
          return (unsigned int)-1073741811;
        default:
          return v6;
      }
    }
    if ( (unsigned int)v5 <= 0x30 )
    {
      v9 = 0x1011000100000LL;
      if ( _bittest64(&v9, v5) )
      {
        if ( v8 )
LABEL_13:
          KeBugCheckEx(0xF0u, 6uLL, v5, v8, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v6;
}
