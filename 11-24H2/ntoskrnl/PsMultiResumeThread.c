/*
 * XREFs of PsMultiResumeThread @ 0x14046086C
 * Callers:
 *     DbgkUserReportWorkRoutine @ 0x140707610 (DbgkUserReportWorkRoutine.c)
 *     PspWow64SetContextThread @ 0x140913174 (PspWow64SetContextThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140939BE0 (DbgkpPostFakeThreadMessages.c)
 *     NtChangeThreadState @ 0x14093ADE0 (NtChangeThreadState.c)
 *     PspWow64GetContextThread @ 0x1409A90C0 (PspWow64GetContextThread.c)
 *     DbgkpWakeTarget @ 0x1409E8DCC (DbgkpWakeTarget.c)
 *     NtResumeThread @ 0x140A14290 (NtResumeThread.c)
 *     PsResumeThread @ 0x140A3D490 (PsResumeThread.c)
 *     PspDeleteThreadStateChange @ 0x140A83230 (PspDeleteThreadStateChange.c)
 * Callees:
 *     KeResumeThread @ 0x140460900 (KeResumeThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x14093A5E4 (EtwTiLogSuspendResumeThread.c)
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
