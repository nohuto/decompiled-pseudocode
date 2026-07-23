/*
 * XREFs of PsLoadVsmEnclaveData @ 0x1405E4194
 * Callers:
 *     MiLoadDataIntoVsmEnclave @ 0x140A2A630 (MiLoadDataIntoVsmEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     VslLoadEnclaveData @ 0x14070D754 (VslLoadEnclaveData.c)
 *     PspFindVsmEnclaveThread @ 0x140A2E7DC (PspFindVsmEnclaveThread.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsLoadVsmEnclaveData(_QWORD *a1, __int64 a2, int a3, int a4, __int64 a5)
{
  bool v5; // di
  __int64 Pool2; // rsi
  int EnclaveData; // eax
  unsigned int v13; // r12d
  struct _KTHREAD *CurrentThread; // rcx
  char *v15; // rax
  __int64 v16; // r8
  char *v17; // rbp
  _QWORD *v18; // r14
  _QWORD *v19; // rax
  int v20; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v20 = 0;
  if ( a3 == 4 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x28uLL, 0x74457350u);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = 0LL;
  }
  EnclaveData = VslLoadEnclaveData(a1[3], a2, a3, a4, a5, (__int64)&v20);
  v13 = EnclaveData;
  if ( Pool2 )
  {
    if ( EnclaveData < 0 )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    else
    {
      *(_DWORD *)(Pool2 + 32) = v20;
      *(_QWORD *)(Pool2 + 24) = a2;
      *(_DWORD *)(Pool2 + 36) = 0;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = (char *)KeAbPreAcquire((__int64)(a1 + 14), 0LL);
      v17 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 28, 0LL) )
        ExfAcquirePushLockExclusiveEx(a1 + 14, v15, (__int64)(a1 + 14));
      if ( v17 )
        v17[10] = 1;
      v18 = (_QWORD *)a1[13];
      if ( v18 )
      {
        while ( 1 )
        {
          if ( (int)PspFindVsmEnclaveThread(a2, v18, v16) < 0 )
          {
            v19 = (_QWORD *)*v18;
            if ( !*v18 )
              break;
          }
          else
          {
            v19 = (_QWORD *)v18[1];
            if ( !v19 )
            {
              v5 = 1;
              break;
            }
          }
          v18 = v19;
        }
      }
      RtlAvlInsertNodeEx(a1 + 13, (unsigned __int64)v18, v5, (_QWORD *)Pool2);
      if ( (_InterlockedExchangeAdd64(a1 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 14);
      KeAbPostRelease((ULONG_PTR)(a1 + 14));
      KeLeaveCriticalRegion();
    }
  }
  return v13;
}
