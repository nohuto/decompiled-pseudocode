/*
 * XREFs of NvmeAdapterSendControlRemoveSubsystemPort @ 0x1400D6FA0
 * Callers:
 *     NvmeAdapterCleanupSubsystemPort @ 0x1400CD2C0 (NvmeAdapterCleanupSubsystemPort.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeCallMiniportAdapterControlSafe @ 0x1400716E8 (NvmeCallMiniportAdapterControlSafe.c)
 *     McTemplateK0qjzqsdqs_EtwWriteTransfer @ 0x1400CBAC4 (McTemplateK0qjzqsdqs_EtwWriteTransfer.c)
 */

__int64 __fastcall NvmeAdapterSendControlRemoveSubsystemPort(__int64 a1, __int64 a2)
{
  __int64 Pool; // rax
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // rdx

  Pool = RaidAllocatePool(256LL, 102LL, 1179541842LL, *(_QWORD *)(a1 + 8));
  v5 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 6684673;
    *(_DWORD *)(Pool + 8) = 2;
    *(_DWORD *)(Pool + 12) = 65624;
    *(_WORD *)(Pool + 16) = 88;
    *(_QWORD *)(Pool + 22) = *(_QWORD *)(a2 + 48);
    v6 = NvmeCallMiniportAdapterControlSafe(a1 + 168);
    if ( v6 < 0 )
    {
      if ( (byte_14017146A & 4) != 0 )
        McTemplateK0qjzqsdqs_EtwWriteTransfer(
          a2 + 60,
          v7,
          a1 + 1032,
          *(_DWORD *)(a1 + 56),
          a1 + 1032,
          *(const wchar_t **)(a1 + 1016),
          2,
          (const char *)(a2 + 60),
          v6,
          *(_DWORD *)(v5 + 30),
          (const char *)(v5 + 34));
    }
    else
    {
      *(_QWORD *)(a2 + 48) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v5, 0x464E6152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
