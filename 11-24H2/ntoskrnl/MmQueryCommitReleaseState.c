/*
 * XREFs of MmQueryCommitReleaseState @ 0x14047DB54
 * Callers:
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 * Callees:
 *     MiPrepareAttachThread @ 0x140228180 (MiPrepareAttachThread.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiAttachThreadDone @ 0x1402E2710 (MiAttachThreadDone.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     KeForceAttachProcess @ 0x14042D8D0 (KeForceAttachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
  unsigned __int8 v20; // al
  __int64 v21; // rdx
  __int64 v22; // r8
  int v24; // [rsp+20h] [rbp-B8h]
  _DWORD *v25; // [rsp+28h] [rbp-B0h]
  _QWORD *v26; // [rsp+30h] [rbp-A8h]
  _QWORD *v27; // [rsp+38h] [rbp-A0h]
  _OWORD v29[3]; // [rsp+50h] [rbp-88h] BYREF

  v5 = a5;
  v6 = a1 + 1024;
  v7 = *(_DWORD *)(a1 + 1208) & 0xF;
  v27 = a4;
  v26 = a3;
  v25 = a2;
  memset(v29, 0, sizeof(v29));
  if ( v7 == 1 )
  {
    v9 = &unk_140E38760;
    v10 = (__int64 *)&unk_140E38750;
    v11 = (__int64 *)&unk_140E38748;
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
  HIBYTE(v24) = HIBYTE(v12);
  if ( dword_140FC4250 == 1 )
  {
    v17 = HIBYTE(v12);
    v15 = 0LL;
  }
  else
  {
    if ( (HIBYTE(v12) & 0x30) == 0x20 )
    {
      ExAcquireSpinLockExclusive(&dword_140E373C0);
      v18 = MiPrepareAttachThread(a1, v6);
      MiReleaseSpinLockExclusive(&dword_140E373C0, v19);
      if ( v18 )
      {
        KeForceAttachProcess((_KPROCESS *)a1, v29, 0);
        v20 = MiLockWorkingSetShared(v6);
        v24 = *(_DWORD *)(v6 + 184);
        if ( (HIBYTE(v24) & 0x30) == 0x20 )
        {
          v16 = *v10;
          v14 = *(_QWORD *)(*(_QWORD *)v9 + 32LL);
        }
        MiUnlockWorkingSetShared(v6, v20);
        KeForceDetachProcess((volatile _KAFFINITY_EX *)v29, 0);
        MiAttachThreadDone(v6, v21, v22);
      }
      v5 = a5;
      a4 = v27;
      a3 = v26;
      a2 = v25;
    }
    v17 = HIBYTE(v24);
    LOBYTE(v12) = HIBYTE(v24) & 0x30;
    if ( (HIBYTE(v24) & 0x30u) < 0x20 )
      v15 = 0LL;
  }
  LOBYTE(v13) = (v17 & 0x30u) >= 0x10;
  *a2 = v13;
  *a3 = v15;
  *a4 = v14;
  *v5 = v16;
  return v12;
}
