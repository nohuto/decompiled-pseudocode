/*
 * XREFs of MmReleaseCommitForMemResetPages @ 0x14066AB1C
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiPrepareAttachThread @ 0x140228180 (MiPrepareAttachThread.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiAttachThreadDone @ 0x1402E2710 (MiAttachThreadDone.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeForceAttachProcess @ 0x14042D8D0 (KeForceAttachProcess.c)
 *     KeRetryOutswapProcess @ 0x140497DD0 (KeRetryOutswapProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MmReleaseCommitForMemResetPages(__int64 BugCheckParameter1, int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 *v5; // r14
  char v7; // al
  int v8; // ebx
  unsigned __int8 v9; // r9
  unsigned __int8 v10; // cl
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 Object; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v19[3]; // [rsp+48h] [rbp-38h] BYREF

  Object = 393216LL;
  v2 = 0;
  v18[1] = v18;
  v3 = BugCheckParameter1 + 1024;
  v18[0] = v18;
  v5 = (__int64 *)&unk_140E38760;
  v7 = *(_DWORD *)(BugCheckParameter1 + 1208) & 0xF;
  memset(v19, 0, sizeof(v19));
  if ( v7 != 1 )
    v5 = (__int64 *)(BugCheckParameter1 + 1248);
  if ( (HIBYTE(*(_DWORD *)(BugCheckParameter1 + 1208)) & 0x30) == 0x20 )
  {
    ExAcquireSpinLockExclusive(&dword_140E373C0);
    v8 = MiPrepareAttachThread(BugCheckParameter1, v3);
    MiReleaseSpinLockExclusive(&dword_140E373C0, v9);
    if ( v8 )
    {
      KeForceAttachProcess((_KPROCESS *)BugCheckParameter1, v19, 0);
      v10 = MiLockWorkingSetExclusive(v3);
      if ( (HIBYTE(*(_DWORD *)(v3 + 184)) & 0x30) == 0x20 )
      {
        v11 = *v5;
        if ( !*(_QWORD *)(*v5 + 40) )
        {
          *(_QWORD *)(v11 + 40) = &Object;
          *(_DWORD *)(v11 + 48) = *(_DWORD *)(v11 + 48) & 0xFFFFFFFE | (a2 != 0);
          MiUnlockWorkingSetExclusive(v3, v10);
          KeRetryOutswapProcess((volatile signed __int32 *)BugCheckParameter1);
          KeForceDetachProcess((volatile _KAFFINITY_EX *)v19, 0);
          MiAttachThreadDone(v3, v14, v15);
          KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
          return v2;
        }
        v2 = -1073740682;
      }
      else
      {
        v2 = -1073741431;
      }
      if ( v10 != 17 )
        MiUnlockWorkingSetExclusive(v3, v10);
      KeForceDetachProcess((volatile _KAFFINITY_EX *)v19, 0);
      MiAttachThreadDone(v3, v12, v13);
    }
    else
    {
      return (unsigned int)-1073700861;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v2;
}
