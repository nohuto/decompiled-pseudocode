/*
 * XREFs of HalGetScatterGatherList @ 0x14038A6E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpBuildScatterGatherList @ 0x140386448 (HalpBuildScatterGatherList.c)
 *     HalBuildScatterGatherListV2 @ 0x1403879B0 (HalBuildScatterGatherListV2.c)
 *     HalpDmaGetAdapterVersion @ 0x14038951C (HalpDmaGetAdapterVersion.c)
 */

NTSTATUS __stdcall HalGetScatterGatherList(
        PADAPTER_OBJECT DmaAdapter,
        PDEVICE_OBJECT DeviceObject,
        PMDL Mdl,
        PVOID CurrentVa,
        ULONG Length,
        PDRIVER_LIST_CONTROL ExecutionRoutine,
        PVOID Context,
        BOOLEAN WriteToDevice)
{
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  struct _LIST_ENTRY *v11; // r11
  int v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+68h] [rbp-20h]

  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)DmaAdapter) == 2 )
    return HalBuildScatterGatherListV2(
             v10,
             v11,
             v8,
             v9,
             Length,
             (struct _LIST_ENTRY *)ExecutionRoutine,
             (struct _LIST_ENTRY *)Context,
             WriteToDevice,
             0LL,
             0);
  else
    return HalpBuildScatterGatherList(
             v10,
             (__int64)v11,
             0LL,
             (__int64 **)v8,
             v9 - *(unsigned int *)(v8 + 44) - *(_QWORD *)(v8 + 32),
             Length,
             0,
             (__int64)ExecutionRoutine,
             (__int64)Context,
             WriteToDevice,
             0LL,
             0,
             v13,
             v14,
             0LL);
}
