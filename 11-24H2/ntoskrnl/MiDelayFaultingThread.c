/*
 * XREFs of MiDelayFaultingThread @ 0x140260C98
 * Callers:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiConvertFaultStatus @ 0x140260910 (MiConvertFaultStatus.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MmVirtualAccessFault @ 0x1409F07A0 (MmVirtualAccessFault.c)
 * Callees:
 *     MiWaitForAvailablePages @ 0x1402618C0 (MiWaitForAvailablePages.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140313830 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     MiLogDelayFaultingThread @ 0x140681634 (MiLogDelayFaultingThread.c)
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
  if ( *(_QWORD *)&qword_140E37658
    && **(_DWORD **)&qword_140E37658
    && (*(_BYTE *)(*(_QWORD *)&qword_140E37658 + 16LL) & 1) != 0
    && (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) & 1LL) == *(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) )
  {
    v1 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  }
  Interval.QuadPart = -10000LL * (unsigned __int16)a1;
  if ( (a1 & 0x10000) != 0 )
  {
    result = MiWaitForAvailablePages(
               *((_QWORD *)qword_140E300C8 + HIWORD(Process[2].ProcessListEntry.Blink)),
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
