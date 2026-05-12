/*
 * XREFs of RaidAdapterUpdateDynamicRegistrySettings @ 0x140064F60
 * Callers:
 *     <none>
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x140009B34 (RaidAcquireAdapterRemoveLock.c)
 *     RaMiniportGetRaidAdapter @ 0x140036868 (RaMiniportGetRaidAdapter.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidAdapterUpdateDynamicRegistrySettings(_QWORD *a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *RaidAdapter; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v3; // rbx
  void (__fastcall *v4)(_QWORD); // rax

  RaidAdapter = (PEX_RUNDOWN_REF_CACHE_AWARE *)RaMiniportGetRaidAdapter(*(_BYTE **)(*a1 - 16LL));
  v3 = RaidAdapter;
  if ( RaidAdapter
    && *(_DWORD *)RaidAdapter == 1094997074
    && (int)RaidAcquireAdapterRemoveLock((__int64)RaidAdapter) >= 0 )
  {
    v4 = (void (__fastcall *)(_QWORD))a1[1];
    if ( v4 )
      v4(*a1);
    ExReleaseRundownProtectionCacheAware(v3[42]);
  }
}
