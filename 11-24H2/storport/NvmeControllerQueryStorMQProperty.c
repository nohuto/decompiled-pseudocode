/*
 * XREFs of NvmeControllerQueryStorMQProperty @ 0x1400F3814
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400CFBBC (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeControllerEnable @ 0x1400ECCD0 (NvmeControllerEnable.c)
 *     NvmeControllerGetReadyTimeout @ 0x1400EED34 (NvmeControllerGetReadyTimeout.c)
 *     NvmeControllerInitializeAdminQueue @ 0x1400F02F4 (NvmeControllerInitializeAdminQueue.c)
 *     NvmeControllerIoSqToCqMapping @ 0x1400F18F0 (NvmeControllerIoSqToCqMapping.c)
 *     NvmeControllerPowerDown @ 0x1400F2358 (NvmeControllerPowerDown.c)
 *     NvmeControllerProcessorToSqMapping @ 0x1400F33F0 (NvmeControllerProcessorToSqMapping.c)
 *     NvmeControllerRemove @ 0x1400F3DCC (NvmeControllerRemove.c)
 *     NvmeControllerReset @ 0x1400F488C (NvmeControllerReset.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeControllerQueryStorMQProperty(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  ULONG_PTR v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdx

  v5 = a2;
  if ( *(_BYTE *)(a1 + 1728) != 1 )
    return 3238002694LL;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 128) + 520LL))(
             *(_QWORD *)(a1 + 1648) + 64LL,
             a2);
  if ( (a4 & 1) == 0 )
  {
    if ( (unsigned int)v5 <= 0x24 && (v7 = 0x1010100101LL, _bittest64(&v7, v5)) || (_DWORD)v5 == 104 )
    {
      if ( (_DWORD)result )
        KeBugCheckEx(0xF0u, 6uLL, v5, (unsigned int)result, 0LL);
    }
  }
  return result;
}
