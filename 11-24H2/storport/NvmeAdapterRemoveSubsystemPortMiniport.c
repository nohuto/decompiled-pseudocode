/*
 * XREFs of NvmeAdapterRemoveSubsystemPortMiniport @ 0x1400D6958
 * Callers:
 *     StorPortNvmeofExtendedFunction @ 0x140074180 (StorPortNvmeofExtendedFunction.c)
 * Callees:
 *     McTemplateK0qjzshsss_EtwWriteTransfer @ 0x1400CBF58 (McTemplateK0qjzshsss_EtwWriteTransfer.c)
 *     NvmeAdapterCleanupSubsystemPort @ 0x1400CD2C0 (NvmeAdapterCleanupSubsystemPort.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D3748 (NvmeAdapterHostGatewayAcquireRundown.c)
 */

__int64 __fastcall NvmeAdapterRemoveSubsystemPortMiniport(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r8
  _QWORD *v9; // rdx
  PVOID v10; // [rsp+88h] [rbp+10h] BYREF

  v10 = a2;
  if ( KeGetCurrentIrql() )
  {
    return (unsigned int)-1056964600;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 144) & 1) == 0 )
      return (unsigned int)-1073741637;
    if ( *a2 != 1314280272 )
      return (unsigned int)-1073741811;
    v6 = *((_QWORD *)a2 + 4);
    if ( (v6 & 1) != 0 )
    {
      return (unsigned int)-1073741637;
    }
    else if ( (v6 & 0x10) != 0 )
    {
      return (unsigned int)-2147483631;
    }
    else
    {
      v7 = *((_QWORD *)a2 + 3);
      v4 = NvmeAdapterHostGatewayAcquireRundown(v7);
      if ( v4 >= 0 )
      {
        *((_QWORD *)a2 + 4) |= 0x10uLL;
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 384), 1u);
        v8 = *((_QWORD *)a2 + 1);
        if ( *(_DWORD **)(v8 + 8) != a2 + 2 || (v9 = (_QWORD *)*((_QWORD *)a2 + 2), (_DWORD *)*v9 != a2 + 2) )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        --*(_DWORD *)(v7 + 376);
        ExReleaseResourceLite((PERESOURCE)(v7 + 384));
        KeLeaveCriticalRegion();
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 56));
        if ( (byte_14017146A & 2) != 0 )
          McTemplateK0qjzshsss_EtwWriteTransfer(
            (__int64)(a2 + 79),
            (__int64)(a2 + 15),
            v7 + 72,
            *(_DWORD *)(a1 + 56),
            a1 + 1032,
            *(const wchar_t **)(a1 + 1016),
            (const char *)(v7 + 72),
            *((_WORD *)a2 + 2),
            (const char *)a2 + 60,
            (const char *)a2 + 316,
            (const char *)a2 + 572);
        ExWaitForRundownProtectionReleaseCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)a2 + 5));
        NvmeAdapterCleanupSubsystemPort(a1, 0, &v10);
      }
    }
  }
  return (unsigned int)v4;
}
