/*
 * XREFs of NvmeControllerCreateExtendedCommandPool @ 0x1401291AC
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400CFBBC (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeControllerEssentialInitialize @ 0x1400ECE18 (NvmeControllerEssentialInitialize.c)
 * Callees:
 *     NvmeControllerAllocateExtendedCommand @ 0x1401290D8 (NvmeControllerAllocateExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerCreateExtendedCommandPool(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rdi
  PHYSICAL_ADDRESS *ExtendedCommand; // rax

  v1 = a1 + 71;
  InitializeSListHead(a1 + 71);
  InitializeSListHead(a1 + 73);
  InitializeSListHead(a1 + 72);
  ExtendedCommand = NvmeControllerAllocateExtendedCommand((__int64)a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  ExpInterlockedPushEntrySList(v1, (PSLIST_ENTRY)&ExtendedCommand[2]);
  return 0LL;
}
