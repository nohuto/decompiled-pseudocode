/*
 * XREFs of RaidAdapterLogIoError @ 0x14005B05C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140001040 (RaidAdapterDeferredRoutine.c)
 *     StorPortLogError @ 0x140074080 (StorPortLogError.c)
 * Callees:
 *     RaidScsiErrorToIoError @ 0x14008DF3C (RaidScsiErrorToIoError.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void __fastcall RaidAdapterLogIoError(__int64 a1, int a2, unsigned int a3, int a4)
{
  char v4; // bl
  char *ErrorLogEntry; // rax
  char *v8; // rdi
  int v9; // eax

  v4 = a2;
  ErrorLogEntry = (char *)IoAllocateErrorLogEntry(*(PVOID *)(a1 + 8), 0x40u);
  v8 = ErrorLogEntry;
  if ( ErrorLogEntry )
  {
    memset_0(ErrorLogEntry, 0, 0x40uLL);
    *((_DWORD *)v8 + 5) = 0;
    *(_WORD *)(v8 + 49) = *(_WORD *)((char *)&a2 + 1);
    *((_WORD *)v8 + 1) = 24;
    *v8 = 15;
    *((_DWORD *)v8 + 4) = a4;
    v8[48] = v4;
    v9 = RaidScsiErrorToIoError(a3);
    *((_DWORD *)v8 + 3) = v9;
    *((_DWORD *)v8 + 13) = v9;
    IoWriteErrorLogEntry(v8);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
}
