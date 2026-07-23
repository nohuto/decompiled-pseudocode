/*
 * XREFs of PfpPowerActionStartScenarioTracingCallback @ 0x140B5CF10
 * Callers:
 *     <none>
 * Callees:
 *     PfLogEvent @ 0x14020DB78 (PfLogEvent.c)
 *     PfpPartitionToParent @ 0x1404B7BB0 (PfpPartitionToParent.c)
 *     PfTAccessTracingCleanup @ 0x140B5D4DC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140B5D620 (PfTAccessTracingStart.c)
 *     MmPerformMemoryListCommand @ 0x140B6F414 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall PfpPowerActionStartScenarioTracingCallback(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  size_t Size; // [rsp+20h] [rbp-28h]
  int v7[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  PfTAccessTracingCleanup(a1, 4LL, 0LL);
  v4 = PfpPartitionToParent(a1);
  MmPerformMemoryListCommand(1LL, v4);
  PfTAccessTracingStart(a1, 4LL);
  *(_QWORD *)v7 = *(int *)(a2 + 48);
  LODWORD(Size) = 16;
  v8 = 4 * (unsigned int)(unsigned __int16)*(_DWORD *)(a2 + 52);
  return PfLogEvent(
           a1,
           27,
           dword_140E66FCC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           v7,
           Size);
}
