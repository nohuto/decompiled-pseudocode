/*
 * XREFs of PsMultiResumeThread @ 0x140455D04
 * Callers:
 *     DbgkUserReportWorkRoutine @ 0x1407051D0 (DbgkUserReportWorkRoutine.c)
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x1408F50E4 (DbgkpPostFakeThreadMessages.c)
 *     PspWow64GetContextThread @ 0x140992510 (PspWow64GetContextThread.c)
 *     DbgkpWakeTarget @ 0x1409E3D8C (DbgkpWakeTarget.c)
 *     NtChangeThreadState @ 0x140A0CB20 (NtChangeThreadState.c)
 *     NtResumeThread @ 0x140A0D170 (NtResumeThread.c)
 *     PsResumeThread @ 0x140A32DA0 (PsResumeThread.c)
 *     PspDeleteThreadStateChange @ 0x140A7DD50 (PspDeleteThreadStateChange.c)
 * Callees:
 *     KeResumeThread @ 0x140455D98 (KeResumeThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x140A0D004 (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PsMultiResumeThread(__int64 a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rax

  v6 = KeResumeThread(a1, a3);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  if ( v6 && v6 <= a3 )
  {
    v9 = *(_QWORD *)(a1 + 544);
    if ( (*(_DWORD *)(v9 + 1532) & 0x8000) == 0 )
      _InterlockedOr((volatile signed __int32 *)(v9 + 1532), 0x8000u);
    if ( (*(_DWORD *)(v9 + 1532) & 0x100000) != 0 )
      EtwTiLogSuspendResumeThread(0LL, CurrentThread, a1, 0LL);
  }
  if ( a2 )
    *a2 = v8;
  return 0LL;
}
