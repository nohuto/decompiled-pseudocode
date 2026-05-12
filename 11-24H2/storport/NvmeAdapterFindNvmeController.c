/*
 * XREFs of NvmeAdapterFindNvmeController @ 0x1400CFE44
 * Callers:
 *     NvmeAdapterDisconnectController @ 0x14019650C (NvmeAdapterDisconnectController.c)
 *     NvmeAdapterGetNamespaces @ 0x140198EE8 (NvmeAdapterGetNamespaces.c)
 *     NvmeAdapterGetNvmeControllerDiscoveryEntries @ 0x14019943C (NvmeAdapterGetNvmeControllerDiscoveryEntries.c)
 *     NvmeAdapterRemoveController @ 0x14019B238 (NvmeAdapterRemoveController.c)
 * Callees:
 *     NvmeAdapterGetNvmeController @ 0x1400D35B8 (NvmeAdapterGetNvmeController.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D3748 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     NvmeAdapterSubsystemPortAcquireRundown @ 0x1400DABE8 (NvmeAdapterSubsystemPortAcquireRundown.c)
 */

__int64 __fastcall NvmeAdapterFindNvmeController(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 NvmeController; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *i; // r14
  _QWORD *v11; // rsi

  NvmeController = 0LL;
  if ( !a3 || a4 )
  {
    if ( a4 )
      *a4 = 0LL;
    v7 = *(_QWORD *)(a1 + 592);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v7 + 24), 1u);
    v8 = *(_QWORD **)(a1 + 592);
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 != v8 )
    {
      do
      {
        if ( (int)NvmeAdapterHostGatewayAcquireRundown(v9 - 3) >= 0 )
        {
          ExAcquireResourceSharedLite((PERESOURCE)(v9 + 45), 1u);
          for ( i = (_QWORD *)v9[42]; i != v9 + 42; i = (_QWORD *)*i )
          {
            v11 = i - 1;
            if ( (int)NvmeAdapterSubsystemPortAcquireRundown(i - 1) >= 0 )
            {
              NvmeController = NvmeAdapterGetNvmeController(i - 1, a2);
              if ( NvmeController )
              {
                if ( a3 )
                  *a4 = v11;
                else
                  ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v11[5]);
                break;
              }
              ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v11[5]);
            }
          }
          ExReleaseResourceLite((PERESOURCE)(v9 + 45));
          ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v9[4]);
          if ( NvmeController )
            break;
        }
        v9 = (_QWORD *)*v9;
      }
      while ( v9 != *(_QWORD **)(a1 + 592) );
    }
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 592) + 24LL));
    KeLeaveCriticalRegion();
  }
  return NvmeController;
}
