/*
 * XREFs of RaidGetD3ColdInterface @ 0x140077DF4
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     RaidSetD3Cold @ 0x140078A68 (RaidSetD3Cold.c)
 *     NvmeAdapterCompleteInitialization @ 0x1400CD5A8 (NvmeAdapterCompleteInitialization.c)
 *     NvmeNamespaceStartDeviceIrp @ 0x1401A97E8 (NvmeNamespaceStartDeviceIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1401BC368 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidQueryD3ColdInterface @ 0x140078090 (RaidQueryD3ColdInterface.c)
 */

__int64 __fastcall RaidGetD3ColdInterface(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  _QWORD *DeviceExtension; // rax
  _QWORD *v4; // r15
  _QWORD *v5; // rbp
  _QWORD *v6; // r14
  _QWORD *v7; // rsi
  int v9; // edx
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  void *Pool; // rbx
  int D3ColdInterface; // r12d

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v9 = *(_DWORD *)DeviceExtension;
  if ( *(_DWORD *)DeviceExtension != 1094997074 )
  {
    switch ( v9 )
    {
      case 1431193940:
        v5 = DeviceObject->DeviceExtension;
        if ( !DeviceExtension )
          goto LABEL_17;
        v10 = DeviceExtension[235];
        break;
      case 1314275652:
        v6 = DeviceObject->DeviceExtension;
        if ( !DeviceExtension )
          goto LABEL_17;
        v12 = DeviceExtension[20];
        if ( !v12 )
          goto LABEL_17;
        v10 = *(_QWORD *)(v12 + 32);
        break;
      case 1314278989:
        v7 = DeviceObject->DeviceExtension;
        if ( !DeviceExtension )
          goto LABEL_17;
        v13 = DeviceExtension[16];
        if ( !v13 )
          goto LABEL_17;
        v10 = *(_QWORD *)(v13 + 16);
        break;
      default:
        return 3221225485LL;
    }
LABEL_4:
    if ( v10 )
    {
      *a2 = v10;
      return 0LL;
    }
    goto LABEL_17;
  }
  v4 = DeviceObject->DeviceExtension;
  if ( DeviceExtension )
  {
    v10 = DeviceExtension[671];
    goto LABEL_4;
  }
LABEL_17:
  if ( KeGetCurrentIrql() )
    return 3221225800LL;
  Pool = (void *)RaidAllocatePool(64LL, 72LL, 1464885586LL, (__int64)DeviceObject);
  if ( !Pool )
    return 3221225626LL;
  D3ColdInterface = RaidQueryD3ColdInterface(DeviceObject);
  if ( D3ColdInterface < 0 )
  {
    ExFreePoolWithTag(Pool, 0x57506152u);
  }
  else
  {
    *a2 = Pool;
    if ( v4 )
    {
      v4[671] = Pool;
    }
    else if ( v5 )
    {
      v5[235] = Pool;
    }
    else if ( v6 )
    {
      *(_QWORD *)(v6[20] + 32LL) = Pool;
    }
    else if ( v7 )
    {
      *(_QWORD *)(v7[16] + 16LL) = Pool;
    }
  }
  return (unsigned int)D3ColdInterface;
}
