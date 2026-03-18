/*
 * XREFs of NtChangeThreadState @ 0x14093ADE0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsMultiResumeThread @ 0x14046086C (PsMultiResumeThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsSuspendThread @ 0x14093A4F0 (PsSuspendThread.c)
 */

__int64 __fastcall NtChangeThreadState(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  char PreviousMode; // bl
  int v9; // edi
  int v10; // edx
  int v11; // eax
  PVOID v12; // rcx
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v15; // r14
  char *v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // r15
  _DWORD *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // rsi
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v25; // [rsp+48h] [rbp-8h] BYREF

  Object = 0LL;
  v25 = 0LL;
  if ( a3 <= 1 )
  {
    if ( a5 )
      return (unsigned int)-1073741820;
    if ( a4 )
      return (unsigned int)-1073741811;
  }
  if ( a6 )
    return (unsigned int)-1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = ObpReferenceObjectByHandleWithTag(a1, 1, PspThreadStateChangeType, PreviousMode, 0x63547350u, &v25, 0LL, 0LL);
  if ( v9 >= 0 )
  {
    v10 = 0;
    if ( a3 <= 1 )
      v10 = 2;
    v11 = ObpReferenceObjectByHandleWithTag(
            a2,
            v10,
            (__int64)PsThreadType,
            PreviousMode,
            0x63547350u,
            &Object,
            0LL,
            0LL);
    v12 = Object;
    v9 = v11;
    if ( v11 >= 0 )
    {
      if ( *(PVOID *)v25 == Object )
      {
        CurrentThread = KeGetCurrentThread();
        v15 = (unsigned __int64 *)((char *)v25 + 8);
        v16 = (char *)v25 + 8;
        --CurrentThread->KernelApcDisable;
        v17 = KeAbPreAcquire((__int64)v16, 0LL);
        v18 = v17;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
          ExfAcquirePushLockExclusiveEx(v15, (__int64)v17, (__int64)v15);
        if ( v18 )
          *((_BYTE *)v18 + 10) = 1;
        if ( a3 )
        {
          if ( a3 == 1 )
          {
            v23 = v25;
            if ( *((_DWORD *)v25 + 4) )
            {
              v9 = PsMultiResumeThread((__int64)Object, 0LL, 1u);
              if ( v9 >= 0 )
                --v23[4];
            }
            else
            {
              v9 = -1073741811;
            }
          }
        }
        else
        {
          v19 = v25;
          if ( *((_DWORD *)v25 + 4) == 0x7FFFFFFF )
          {
            v9 = -1073741750;
          }
          else
          {
            v9 = PsSuspendThread((__int64)Object, 0LL);
            if ( v9 >= 0 )
              ++v19[4];
          }
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v15);
        KeAbPostRelease((ULONG_PTR)v15);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v20, v21, v22);
        v12 = Object;
      }
      else
      {
        v9 = -1073741811;
      }
    }
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x63547350u);
  }
  if ( v25 )
    ObfDereferenceObjectWithTag(v25, 0x63547350u);
  return (unsigned int)v9;
}
