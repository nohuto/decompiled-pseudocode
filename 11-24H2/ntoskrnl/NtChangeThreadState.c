/*
 * XREFs of NtChangeThreadState @ 0x140A0CB20
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsMultiResumeThread @ 0x140455D04 (PsMultiResumeThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsSuspendThread @ 0x140A0CF10 (PsSuspendThread.c)
 */

NTSTATUS __cdecl NtChangeThreadState(
        HANDLE ThreadStateChangeHandle,
        HANDLE ThreadHandle,
        THREAD_STATE_CHANGE_TYPE StateChangeType,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 Reserved)
{
  char PreviousMode; // bl
  NTSTATUS v9; // edi
  int v10; // edx
  int v11; // eax
  PVOID v12; // rcx
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v15; // r14
  char *v16; // rcx
  char *v17; // rax
  char *v18; // r15
  _DWORD *v19; // rsi
  _DWORD *v20; // rsi
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v22; // [rsp+48h] [rbp-8h] BYREF

  Object = 0LL;
  v22 = 0LL;
  if ( (unsigned int)StateChangeType <= ThreadStateChangeResume )
  {
    if ( (_DWORD)ExtendedInformationLength )
      return -1073741820;
    if ( ExtendedInformation )
      return -1073741811;
  }
  if ( (_DWORD)Reserved )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = ObpReferenceObjectByHandleWithTag(
         (ULONG_PTR)ThreadStateChangeHandle,
         1,
         PspThreadStateChangeType,
         PreviousMode,
         0x63547350u,
         &v22,
         0LL,
         0LL);
  if ( v9 >= 0 )
  {
    v10 = 0;
    if ( (unsigned int)StateChangeType <= ThreadStateChangeResume )
      v10 = 2;
    v11 = ObpReferenceObjectByHandleWithTag(
            (ULONG_PTR)ThreadHandle,
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
      if ( *(PVOID *)v22 == Object )
      {
        CurrentThread = KeGetCurrentThread();
        v15 = (unsigned __int64 *)((char *)v22 + 8);
        v16 = (char *)v22 + 8;
        --CurrentThread->KernelApcDisable;
        v17 = (char *)KeAbPreAcquire((__int64)v16, 0LL);
        v18 = v17;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
          ExfAcquirePushLockExclusiveEx(v15, v17, (__int64)v15);
        if ( v18 )
          v18[10] = 1;
        if ( StateChangeType )
        {
          if ( StateChangeType == ThreadStateChangeResume )
          {
            v20 = v22;
            if ( *((_DWORD *)v22 + 4) )
            {
              v9 = PsMultiResumeThread((__int64)Object, 0LL, 1u);
              if ( v9 >= 0 )
                --v20[4];
            }
            else
            {
              v9 = -1073741811;
            }
          }
        }
        else
        {
          v19 = v22;
          if ( *((_DWORD *)v22 + 4) == 0x7FFFFFFF )
          {
            v9 = -1073741750;
          }
          else
          {
            v9 = PsSuspendThread(Object, 0LL);
            if ( v9 >= 0 )
              ++v19[4];
          }
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v15);
        KeAbPostRelease((ULONG_PTR)v15);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
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
  if ( v22 )
    ObfDereferenceObjectWithTag(v22, 0x63547350u);
  return v9;
}
