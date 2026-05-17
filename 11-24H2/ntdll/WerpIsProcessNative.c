/*
 * XREFs of WerpIsProcessNative @ 0x18011DD34
 * Callers:
 *     RtlReportException @ 0x180001490 (RtlReportException.c)
 *     RtlpPossibleDeadlock @ 0x18009BC30 (RtlpPossibleDeadlock.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x180161FB0 (NtQueryInformationProcess.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 WerpIsProcessNative()
{
  unsigned int v0; // ebx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-48h] BYREF
  int v3; // [rsp+50h] [rbp-28h]

  memset_thunk_772440563353939046(ProcessInformation, 0, 0x40uLL);
  v0 = 0;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)37, ProcessInformation, 0x40u, 0LL) < 0 )
    return 0LL;
  LOBYTE(v0) = v3 == 1;
  return v0;
}
