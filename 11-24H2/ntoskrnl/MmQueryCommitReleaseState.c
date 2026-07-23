/*
 * XREFs of MmQueryCommitReleaseState @ 0x140478DE4
 * Callers:
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiAttachThreadDone @ 0x1402FE6F0 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x140342180 (MiPrepareAttachThread.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     KeForceAttachProcess @ 0x140424E30 (KeForceAttachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall MmQueryCommitReleaseState(__int64 a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v5; // r10
  __int64 v6; // rdi
  char v7; // al
  void *v9; // r14
  __int64 *v10; // r15
  __int64 *v11; // rbp
  int v12; // eax
  int v13; // esi
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // r13
  char v17; // cl
  int v18; // ebx
  unsigned __int8 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int8 v23; // al
  __int64 v24; // r8
  __int64 v25; // r9
  int v27; // [rsp+20h] [rbp-B8h]
  _DWORD *v28; // [rsp+28h] [rbp-B0h]
  _QWORD *v29; // [rsp+30h] [rbp-A8h]
  _QWORD *v30; // [rsp+38h] [rbp-A0h]
  _OWORD v32[3]; // [rsp+50h] [rbp-88h] BYREF

  v5 = a5;
  v6 = a1 + 1024;
  v7 = *(_DWORD *)(a1 + 1208) & 0xF;
  v30 = a4;
  v29 = a3;
  v28 = a2;
  memset(v32, 0, sizeof(v32));
  if ( v7 == 1 )
  {
    v9 = &unk_140E388A0;
    v10 = (__int64 *)&unk_140E38890;
    v11 = (__int64 *)&unk_140E38888;
  }
  else
  {
    v9 = (void *)(a1 + 1248);
    v10 = (__int64 *)(a1 + 1232);
    v11 = (__int64 *)(a1 + 1224);
  }
  v12 = *(_DWORD *)(a1 + 1208);
  v13 = 0;
  v14 = 0LL;
  v15 = *v11;
  v16 = 0LL;
  HIBYTE(v27) = HIBYTE(v12);
  if ( dword_140FC5250 == 1 )
  {
    v17 = HIBYTE(v12);
    v15 = 0LL;
  }
  else
  {
    if ( (HIBYTE(v12) & 0x30) == 0x20 )
    {
      ExAcquireSpinLockExclusive(&SpinLock);
      v18 = MiPrepareAttachThread(a1, v6);
      MiReleaseSpinLockExclusive(&SpinLock, v19);
      if ( v18 )
      {
        KeForceAttachProcess((_KPROCESS *)a1, v32, 0);
        v23 = MiLockWorkingSetShared(v6, v20, v21, v22);
        v27 = *(_DWORD *)(v6 + 184);
        if ( (HIBYTE(v27) & 0x30) == 0x20 )
        {
          v16 = *v10;
          v14 = *(_QWORD *)(*(_QWORD *)v9 + 32LL);
        }
        MiUnlockWorkingSetShared(v6, v23);
        KeForceDetachProcess((volatile _KAFFINITY_EX *)v32, 0, v24, v25);
        MiAttachThreadDone(v6);
      }
      v5 = a5;
      a4 = v30;
      a3 = v29;
      a2 = v28;
    }
    v17 = HIBYTE(v27);
    LOBYTE(v12) = HIBYTE(v27) & 0x30;
    if ( (HIBYTE(v27) & 0x30u) < 0x20 )
      v15 = 0LL;
  }
  LOBYTE(v13) = (v17 & 0x30u) >= 0x10;
  *a2 = v13;
  *a3 = v15;
  *a4 = v14;
  *v5 = v16;
  return v12;
}
