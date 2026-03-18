/*
 * XREFs of MiDelayFaultingThread @ 0x1403BF998
 * Callers:
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiConvertFaultStatus @ 0x1403BF610 (MiConvertFaultStatus.c)
 *     MmVirtualAccessFault @ 0x1409FE0E4 (MmVirtualAccessFault.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x14034FFA0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     MiWaitForAvailablePages @ 0x1403BEAEC (MiWaitForAvailablePages.c)
 *     MiLogDelayFaultingThread @ 0x140674C14 (MiLogDelayFaultingThread.c)
 */

NTSTATUS __fastcall MiDelayFaultingThread(unsigned int a1)
{
  ULONG64 v1; // rdi
  _KPROCESS *Process; // rsi
  NTSTATUS result; // eax
  unsigned int v5; // esi
  ULONG64 v6; // rax
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 QpcTimeStamp; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( *(_QWORD *)&qword_140E372D8
    && **(_DWORD **)&qword_140E372D8
    && (*(_BYTE *)(*(_QWORD *)&qword_140E372D8 + 16LL) & 1) != 0
    && (*(_QWORD *)(*(_QWORD *)&qword_140E372D8 + 24LL) & 1LL) == *(_QWORD *)(*(_QWORD *)&qword_140E372D8 + 24LL) )
  {
    v1 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  }
  Interval.QuadPart = -10000LL * (unsigned __int16)a1;
  if ( (a1 & 0x10000) != 0 )
  {
    result = MiWaitForAvailablePages(
               *((_QWORD *)qword_140E2FD48 + HIWORD(Process[2].ProcessListEntry.Blink)),
               &Interval,
               BYTE2(a1) & 2);
    v5 = result;
  }
  else
  {
    result = KeDelayExecutionThread(0, 0, &Interval);
    v5 = 0;
  }
  if ( v1 )
  {
    v6 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    return MiLogDelayFaultingThread(a1, v6 - v1, v5);
  }
  return result;
}
