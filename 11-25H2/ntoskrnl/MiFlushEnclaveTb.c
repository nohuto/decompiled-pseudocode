/*
 * XREFs of MiFlushEnclaveTb @ 0x14067502C
 * Callers:
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 */

void __fastcall MiFlushEnclaveTb(__int64 *a1, unsigned __int64 a2, int a3)
{
  __int64 *ProcessorFlushList; // rdi
  _KPROCESS *Process; // rbx
  __int64 v6; // rcx

  if ( a2 != -1LL )
  {
    ProcessorFlushList = a1;
    if ( (a3 & 0x20000000) == 0 )
    {
      if ( a1 )
      {
LABEL_6:
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        return;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      ProcessorFlushList = MiGetProcessorFlushList();
      MiInitializeTbFlushList(
        (__int64)ProcessorFlushList,
        (__int64)&Process[2].ReadyListHead.Blink,
        *((_DWORD *)ProcessorFlushList + 3),
        8,
        32);
      MiInsertTbFlushEntry(v6, a2, 1LL, 0);
    }
    if ( !ProcessorFlushList )
      return;
    goto LABEL_6;
  }
}
