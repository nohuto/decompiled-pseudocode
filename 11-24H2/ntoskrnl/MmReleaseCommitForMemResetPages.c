/*
 * XREFs of MmReleaseCommitForMemResetPages @ 0x14066BCEC
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiAttachThreadDone @ 0x1402FE6F0 (MiAttachThreadDone.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiPrepareAttachThread @ 0x140342180 (MiPrepareAttachThread.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     KeForceAttachProcess @ 0x140424E30 (KeForceAttachProcess.c)
 *     KeRetryOutswapProcess @ 0x1404928E0 (KeRetryOutswapProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 Object; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v18[3]; // [rsp+48h] [rbp-38h] BYREF

  Object = 393216LL;
  v2 = 0;
  v17[1] = v17;
  v3 = BugCheckParameter1 + 1024;
  v17[0] = v17;
  v5 = (__int64 *)&unk_140E388A0;
  v7 = *(_DWORD *)(BugCheckParameter1 + 1208) & 0xF;
  memset(v18, 0, sizeof(v18));
  if ( v7 != 1 )
    v5 = (__int64 *)(BugCheckParameter1 + 1248);
  if ( (HIBYTE(*(_DWORD *)(BugCheckParameter1 + 1208)) & 0x30) == 0x20 )
  {
    ExAcquireSpinLockExclusive(&SpinLock);
    v8 = MiPrepareAttachThread(BugCheckParameter1, v3);
    MiReleaseSpinLockExclusive(&SpinLock, v9);
    if ( v8 )
    {
      KeForceAttachProcess((_KPROCESS *)BugCheckParameter1, v18, 0);
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
          KeForceDetachProcess((volatile _KAFFINITY_EX *)v18, 0, v13, v14);
          MiAttachThreadDone(v3);
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
      KeForceDetachProcess((volatile _KAFFINITY_EX *)v18, 0, v11, v12);
      MiAttachThreadDone(v3);
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
