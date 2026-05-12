/*
 * XREFs of NvmeAdapterSendControlRemoveNvmeController @ 0x1400E7230
 * Callers:
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeCallMiniportAdapterControlSafe @ 0x1400716E8 (NvmeCallMiniportAdapterControlSafe.c)
 *     McTemplateK0qjzqsdqs_EtwWriteTransfer @ 0x1400CBAC4 (McTemplateK0qjzqsdqs_EtwWriteTransfer.c)
 */

__int64 __fastcall NvmeAdapterSendControlRemoveNvmeController(__int64 a1)
{
  __int64 v1; // rdi
  __int64 Pool; // rax
  __int64 v4; // rbx
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8

  v1 = *(_QWORD *)(a1 + 128);
  Pool = RaidAllocatePool(256LL, 102LL, 1179541842LL, *(_QWORD *)(v1 + 8));
  v4 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 6684673;
    *(_DWORD *)(Pool + 8) = 4;
    *(_DWORD *)(Pool + 12) = 65624;
    *(_WORD *)(Pool + 16) = 88;
    *(_QWORD *)(Pool + 22) = *(_QWORD *)(a1 + 560);
    v5 = NvmeCallMiniportAdapterControlSafe(v1 + 168);
    if ( v5 < 0 )
    {
      if ( (byte_14017146A & 4) != 0 )
        McTemplateK0qjzqsdqs_EtwWriteTransfer(
          v1 + 1032,
          v6,
          v7,
          *(_DWORD *)(v1 + 56),
          v1 + 1032,
          *(const wchar_t **)(v1 + 1016),
          4,
          *(const char **)(a1 + 792),
          v5,
          *(_DWORD *)(v4 + 30),
          (const char *)(v4 + 34));
    }
    else
    {
      *(_QWORD *)(a1 + 560) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v4, 0x464E6152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
