/*
 * XREFs of RaCallMiniportHwInitialize @ 0x14003C630
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 *     RaidAdapterReInitialize @ 0x140054250 (RaidAdapterReInitialize.c)
 *     NvmeAdapterStartMiniport @ 0x1400D8B80 (NvmeAdapterStartMiniport.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaCallMiniportHwInitialize(__int64 a1)
{
  return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 8LL))(*(_QWORD *)(a1 + 240) + 16LL) == 0
       ? 0xC0000001
       : 0;
}
