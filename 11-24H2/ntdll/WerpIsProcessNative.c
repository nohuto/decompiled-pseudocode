/*
 * XREFs of WerpIsProcessNative @ 0x18011BF64
 * Callers:
 *     RtlpPossibleDeadlock @ 0x180030A80 (RtlpPossibleDeadlock.c)
 *     RtlReportException @ 0x18010B4F0 (RtlReportException.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x180160370 (NtQueryInformationProcess.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 WerpIsProcessNative()
{
  unsigned int v0; // ebx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-48h] BYREF
  int v3; // [rsp+50h] [rbp-28h]

  memset_thunk_772440563353939046(ProcessInformation, 0, 0x40uLL);
  v0 = 0;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessImageInformation, ProcessInformation, 0x40u, 0LL) < 0 )
    return 0LL;
  LOBYTE(v0) = v3 == 1;
  return v0;
}
