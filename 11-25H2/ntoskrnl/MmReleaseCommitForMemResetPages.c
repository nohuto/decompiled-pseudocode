/*
 * XREFs of MmReleaseCommitForMemResetPages @ 0x14065EFDC
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     KeForceDetachProcess @ 0x14023A720 (KeForceDetachProcess.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiAttachThreadDone @ 0x1402BC1A0 (MiAttachThreadDone.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiPrepareAttachThread @ 0x1402C9EE0 (MiPrepareAttachThread.c)
 *     KeForceAttachProcess @ 0x1402C9F60 (KeForceAttachProcess.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeRetryOutswapProcess @ 0x1404983B0 (KeRetryOutswapProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  __int64 Object; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v15[3]; // [rsp+48h] [rbp-38h] BYREF

  Object = 393216LL;
  v2 = 0;
  v14[1] = v14;
  v3 = BugCheckParameter1 + 1024;
  v14[0] = v14;
  v5 = (__int64 *)&unk_140E38520;
  v7 = *(_DWORD *)(BugCheckParameter1 + 1208) & 0xF;
  memset(v15, 0, sizeof(v15));
  if ( v7 != 1 )
    v5 = (__int64 *)(BugCheckParameter1 + 1248);
  if ( (HIBYTE(*(_DWORD *)(BugCheckParameter1 + 1208)) & 0x30) == 0x20 )
  {
    ExAcquireSpinLockExclusive(&dword_140E37180);
    v8 = MiPrepareAttachThread(BugCheckParameter1, v3);
    MiReleaseSpinLockExclusive(&dword_140E37180, v9);
    if ( v8 )
    {
      KeForceAttachProcess((_KPROCESS *)BugCheckParameter1, v15, 0);
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
          KeForceDetachProcess((volatile _KAFFINITY_EX *)v15, 0);
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
      KeForceDetachProcess((volatile _KAFFINITY_EX *)v15, 0);
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
