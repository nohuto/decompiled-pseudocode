/*
 * XREFs of MmQueryCommitReleaseState @ 0x14047CE80
 * Callers:
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     KeForceDetachProcess @ 0x14023A720 (KeForceDetachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiAttachThreadDone @ 0x1402BC1A0 (MiAttachThreadDone.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiPrepareAttachThread @ 0x1402C9EE0 (MiPrepareAttachThread.c)
 *     KeForceAttachProcess @ 0x1402C9F60 (KeForceAttachProcess.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  int v22; // [rsp+20h] [rbp-B8h]
  _DWORD *v23; // [rsp+28h] [rbp-B0h]
  _QWORD *v24; // [rsp+30h] [rbp-A8h]
  _QWORD *v25; // [rsp+38h] [rbp-A0h]
  _OWORD v27[3]; // [rsp+50h] [rbp-88h] BYREF

  v5 = a5;
  v6 = a1 + 1024;
  v7 = *(_DWORD *)(a1 + 1208) & 0xF;
  v25 = a4;
  v24 = a3;
  v23 = a2;
  memset(v27, 0, sizeof(v27));
  if ( v7 == 1 )
  {
    v9 = &unk_140E38520;
    v10 = (__int64 *)&unk_140E38510;
    v11 = (__int64 *)&unk_140E38508;
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
  HIBYTE(v22) = HIBYTE(v12);
  if ( dword_140FC4240 == 1 )
  {
    v17 = HIBYTE(v12);
    v15 = 0LL;
  }
  else
  {
    if ( (HIBYTE(v12) & 0x30) == 0x20 )
    {
      ExAcquireSpinLockExclusive(&dword_140E37180);
      v18 = MiPrepareAttachThread(a1, v6);
      MiReleaseSpinLockExclusive(&dword_140E37180, v19);
      if ( v18 )
      {
        KeForceAttachProcess((_KPROCESS *)a1, v27, 0);
        v20 = MiLockWorkingSetShared(v6);
        v22 = *(_DWORD *)(v6 + 184);
        if ( (HIBYTE(v22) & 0x30) == 0x20 )
        {
          v16 = *v10;
          v14 = *(_QWORD *)(*(_QWORD *)v9 + 32LL);
        }
        MiUnlockWorkingSetShared(v6, v20);
        KeForceDetachProcess((volatile _KAFFINITY_EX *)v27, 0);
        MiAttachThreadDone(v6);
      }
      v5 = a5;
      a4 = v25;
      a3 = v24;
      a2 = v23;
    }
    v17 = HIBYTE(v22);
    LOBYTE(v12) = HIBYTE(v22) & 0x30;
    if ( (HIBYTE(v22) & 0x30u) < 0x20 )
      v15 = 0LL;
  }
  LOBYTE(v13) = (v17 & 0x30u) >= 0x10;
  *a2 = v13;
  *a3 = v15;
  *a4 = v14;
  *v5 = v16;
  return v12;
}
