/*
 * XREFs of PfpLogEventRequest @ 0x140AA3778
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfLogEvent @ 0x14020DB78 (PfLogEvent.c)
 *     MmGetDefaultPagePriority @ 0x140479730 (MmGetDefaultPagePriority.c)
 *     PfpPartitionToParent @ 0x1404B7BB0 (PfpPartitionToParent.c)
 *     PfGenerateTrace @ 0x14074466C (PfGenerateTrace.c)
 *     MmIssueMemoryListCommand @ 0x1407EE1F0 (MmIssueMemoryListCommand.c)
 *     PfTSetTracingPriority @ 0x140B5D69C (PfTSetTracingPriority.c)
 */

__int64 __fastcall PfpLogEventRequest(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 DefaultPagePriority; // rdx
  int v6; // esi
  __int64 v7; // rax
  unsigned int v8; // r9d
  size_t Size; // [rsp+20h] [rbp-18h]

  if ( (*(_DWORD *)(a2 + 4) & 0x1Fu) - 2 <= 1 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    *(_OWORD *)v4 = *(_OWORD *)(a1 + 688);
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(a1 + 704);
    if ( (*(_DWORD *)(a2 + 4) & 0x1F) == 2 )
      DefaultPagePriority = (*(_DWORD *)(v4 + 24) >> 5) & 7;
    else
      DefaultPagePriority = (unsigned int)MmGetDefaultPagePriority();
    PfTSetTracingPriority(a1, DefaultPagePriority);
  }
  if ( (*(_BYTE *)(a2 + 4) & 0x1F) == 0x1B && (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 3) == 1 )
    _InterlockedAnd((_DWORD *)&xmmword_140F0E6E8 + 1, 0xFFFFFFFE);
  v6 = dword_140E66FCC
     + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
       + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
  if ( (*(_DWORD *)(a2 + 4) & 0x20) != 0 )
  {
    v7 = PfpPartitionToParent(a1);
    MmIssueMemoryListCommand((v8 >> 1) & 1, 0, v7);
    PfGenerateTrace(a1, 0);
  }
  LODWORD(Size) = *(_DWORD *)(a2 + 4) >> 7;
  return PfLogEvent(a1, *(_DWORD *)(a2 + 4) & 0x1F, v6, *(const void **)(a2 + 16), Size);
}
