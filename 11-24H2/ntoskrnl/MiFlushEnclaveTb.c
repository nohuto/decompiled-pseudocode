/*
 * XREFs of MiFlushEnclaveTb @ 0x140681A4C
 * Callers:
 *     MiProtectEnclavePages @ 0x1404C420C (MiProtectEnclavePages.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
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
