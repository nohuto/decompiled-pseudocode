/*
 * XREFs of NvmeAdapterGetHostGateway @ 0x1400D351C
 * Callers:
 *     NvmeAdapterAddSubsystemPortMiniport @ 0x1400CCA08 (NvmeAdapterAddSubsystemPortMiniport.c)
 *     NvmeAdapterAddSubsystemPort @ 0x14019363C (NvmeAdapterAddSubsystemPort.c)
 *     NvmeAdapterGetHostGatewayByHandle @ 0x140198090 (NvmeAdapterGetHostGatewayByHandle.c)
 *     NvmeAdapterGetSubsystemPorts @ 0x14019A0F8 (NvmeAdapterGetSubsystemPorts.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NvmeAdapterGetHostGateway(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rcx

  v2 = *(_QWORD *)(a1 + 592);
  v5 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v2 + 24), 1u);
  v6 = *(_QWORD *)(a1 + 592);
  v7 = *(_QWORD **)v6;
  while ( v7 != (_QWORD *)v6 )
  {
    v5 = v7 - 3;
    if ( a2 == v7 - 3 )
      break;
    v7 = (_QWORD *)*v7;
    v5 = 0LL;
  }
  ExReleaseResourceLite((PERESOURCE)(v6 + 24));
  KeLeaveCriticalRegion();
  return v5;
}
