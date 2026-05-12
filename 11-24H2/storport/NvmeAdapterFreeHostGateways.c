/*
 * XREFs of NvmeAdapterFreeHostGateways @ 0x1400D346C
 * Callers:
 *     DeleteNvmeAdapter @ 0x1400CB320 (DeleteNvmeAdapter.c)
 * Callees:
 *     NvmeAdapterRemoveHostGateway @ 0x1400D65E0 (NvmeAdapterRemoveHostGateway.c)
 */

void __fastcall NvmeAdapterFreeHostGateways(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 592);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 24), 1u);
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 592);
    v4 = *(_QWORD **)v3;
    if ( *(_QWORD *)v3 == v3 )
      break;
    if ( v4[1] != v3 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    --*(_DWORD *)(*(_QWORD *)(a1 + 592) + 16LL);
    if ( (v4[3] & 4) == 0 )
      NvmeAdapterRemoveHostGateway(a1);
  }
  ExReleaseResourceLite((PERESOURCE)(v3 + 24));
  KeLeaveCriticalRegion();
}
