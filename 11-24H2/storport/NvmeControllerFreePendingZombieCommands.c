/*
 * XREFs of NvmeControllerFreePendingZombieCommands @ 0x140129454
 * Callers:
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeControllerResetRecovery @ 0x140137858 (NvmeControllerResetRecovery.c)
 * Callees:
 *     NvmeControllerFreeExtendedCommand @ 0x1401293D8 (NvmeControllerFreeExtendedCommand.c)
 */

PSLIST_ENTRY __fastcall NvmeControllerFreePendingZombieCommands(__int64 a1)
{
  union _SLIST_HEADER *v2; // rdi
  PSLIST_ENTRY result; // rax

  v2 = (union _SLIST_HEADER *)(a1 + 1152);
  while ( 1 )
  {
    result = ExpInterlockedPopEntrySList(v2);
    if ( !result )
      break;
    NvmeControllerFreeExtendedCommand(a1, &result[-1].Next);
  }
  return result;
}
