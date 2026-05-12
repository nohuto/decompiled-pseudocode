/*
 * XREFs of RaidEvaluateDsmLedState @ 0x14008C01C
 * Callers:
 *     NvmeDsmGetSupportedLedState @ 0x140087E18 (NvmeDsmGetSupportedLedState.c)
 *     NvmeDsmQuerySupportedFunctionForLedState @ 0x140087EF8 (NvmeDsmQuerySupportedFunctionForLedState.c)
 *     RaidDsmGetLedState @ 0x14008BC30 (RaidDsmGetLedState.c)
 *     RaidDsmGetSupportedLedState @ 0x14008BCE8 (RaidDsmGetSupportedLedState.c)
 *     RaidDsmQuerySupportedFunctionForLedState @ 0x14008BDB0 (RaidDsmQuerySupportedFunctionForLedState.c)
 *     RaidDsmSetLedState @ 0x14008BE68 (RaidDsmSetLedState.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidSyncAcpiEvalMethod @ 0x1400397F0 (RaidSyncAcpiEvalMethod.c)
 *     memcpy_s @ 0x140056418 (memcpy_s.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidEvaluateDsmLedState(
        PDEVICE_OBJECT DeviceObject,
        int a2,
        int a3,
        union _LARGE_INTEGER *a4,
        ULONG *Src)
{
  ULONG *v5; // rsi
  __int64 Pool; // rax
  void *v11; // rbx
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF

  v5 = Src;
  LODWORD(v15) = 0;
  memset_0(a4, 0, *Src);
  Pool = RaidAllocatePool(64LL, 64LL, 1128358226LL, (__int64)DeviceObject);
  v11 = (void *)Pool;
  if ( !Pool )
    return 3221225626LL;
  *(_DWORD *)Pool = 1130980673;
  *(_DWORD *)(Pool + 12) = 4;
  *(_DWORD *)(Pool + 4) = 1297302623;
  *(_DWORD *)(Pool + 8) = 64;
  *(_DWORD *)(Pool + 16) = 1048578;
  LODWORD(Src) = a3;
  *(GUID *)(Pool + 20) = GUID_ACPI_DSM_PCI_SSD_LED_STATE;
  *(_DWORD *)(Pool + 36) = 0x40000;
  *(_DWORD *)(Pool + 40) = 1;
  *(_DWORD *)(Pool + 44) = 0x40000;
  *(_DWORD *)(Pool + 48) = a2;
  v13 = Pool + 52;
  *(_WORD *)v13 = 4;
  if ( a2 == 3 )
  {
    *(_WORD *)(v13 + 2) = 8;
    *(_DWORD *)(v13 + 4) = 262146;
    memcpy_s((void *)(v13 + 8), 4uLL, &Src, 4uLL);
  }
  else
  {
    *(_WORD *)(v13 + 2) = 0;
  }
  v14 = RaidSyncAcpiEvalMethod(DeviceObject, v11, 0x40u, a4, *v5, &v15);
  if ( v14 >= 0 )
    *v5 = v15;
  ExFreePoolWithTag(v11, 0x43416152u);
  return (unsigned int)v14;
}
