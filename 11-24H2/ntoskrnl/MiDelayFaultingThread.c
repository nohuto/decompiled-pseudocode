/*
 * XREFs of MiDelayFaultingThread @ 0x14048F028
 * Callers:
 *     MiConvertFaultStatus @ 0x1402163C0 (MiConvertFaultStatus.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 *     MmVirtualAccessFault @ 0x1409F7E30 (MmVirtualAccessFault.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140309950 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     MiWaitForAvailablePages @ 0x14048F10C (MiWaitForAvailablePages.c)
 *     MiLogDelayFaultingThread @ 0x140680434 (MiLogDelayFaultingThread.c)
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
  if ( *(_QWORD *)&qword_140E37518
    && **(_DWORD **)&qword_140E37518
    && (*(_BYTE *)(*(_QWORD *)&qword_140E37518 + 16LL) & 1) != 0
    && (*(_QWORD *)(*(_QWORD *)&qword_140E37518 + 24LL) & 1LL) == *(_QWORD *)(*(_QWORD *)&qword_140E37518 + 24LL) )
  {
    v1 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  }
  Interval.QuadPart = -10000LL * (unsigned __int16)a1;
  if ( (a1 & 0x10000) != 0 )
  {
    result = MiWaitForAvailablePages(
               *((_QWORD *)qword_140E2FF88 + HIWORD(Process[2].ProcessListEntry.Blink)),
               &Interval,
               HIWORD(a1) & 2);
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
