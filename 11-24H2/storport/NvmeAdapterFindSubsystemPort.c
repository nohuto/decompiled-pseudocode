/*
 * XREFs of NvmeAdapterFindSubsystemPort @ 0x1400CFFC4
 * Callers:
 *     NvmeAdapterAddController @ 0x140193078 (NvmeAdapterAddController.c)
 *     NvmeAdapterConnectController @ 0x140193CD8 (NvmeAdapterConnectController.c)
 *     NvmeAdapterGetControllers @ 0x140197694 (NvmeAdapterGetControllers.c)
 *     NvmeAdapterRemoveSubsystemPort @ 0x14019BB24 (NvmeAdapterRemoveSubsystemPort.c)
 * Callees:
 *     NvmeAdapterGetSubsystemPort @ 0x1400D3654 (NvmeAdapterGetSubsystemPort.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D3748 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     NvmeAdapterSubsystemPortAcquireRundown @ 0x1400DABE8 (NvmeAdapterSubsystemPortAcquireRundown.c)
 */

__int64 __fastcall NvmeAdapterFindSubsystemPort(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v4; // rsi
  __int64 v9; // rbx
  _QWORD **v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rbx
  __int64 SubsystemPort; // rax

  v4 = 0LL;
  if ( a3 && !a4 )
    return v4;
  if ( a4 )
    *a4 = 0LL;
  v9 = *(_QWORD *)(a1 + 592);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v9 + 24), 1u);
  v10 = *(_QWORD ***)(a1 + 592);
  v11 = *v10;
  if ( *v10 == v10 )
    goto LABEL_16;
  while ( 1 )
  {
    v12 = v11 - 3;
    if ( (int)NvmeAdapterHostGatewayAcquireRundown(v11 - 3) >= 0 )
      break;
LABEL_9:
    v11 = (_QWORD *)*v11;
    if ( v11 == *(_QWORD **)(a1 + 592) )
      goto LABEL_16;
  }
  SubsystemPort = NvmeAdapterGetSubsystemPort(v11 - 3, a2);
  v4 = SubsystemPort;
  if ( !SubsystemPort )
  {
    ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v12[7]);
    goto LABEL_9;
  }
  if ( (int)NvmeAdapterSubsystemPortAcquireRundown(SubsystemPort) < 0 )
  {
    v4 = 0LL;
  }
  else if ( a3 )
  {
    *a4 = v12;
    goto LABEL_16;
  }
  ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v12[7]);
LABEL_16:
  ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 592) + 24LL));
  KeLeaveCriticalRegion();
  return v4;
}
