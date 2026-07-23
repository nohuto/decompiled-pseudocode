/*
 * XREFs of SepIsParentOfChildAppContainer @ 0x140785BC0
 * Callers:
 *     SeIsParentOfChildAppContainer @ 0x140780560 (SeIsParentOfChildAppContainer.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x14047E744 (SepGetTokenSessionMapEntry.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406EF480 (RtlIsParentOfChildAppContainer.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x140785758 (SepFindMatchingLowBoxNumberEntries.c)
 */

BOOLEAN __fastcall SepIsParentOfChildAppContainer(unsigned int a1, int a2, int a3)
{
  BOOLEAN result; // al
  BOOLEAN IsParentOfChildAppContainer; // r13
  char v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rdi
  struct _KTHREAD *v11; // rax
  volatile signed __int32 *v12; // rdi
  ULONG_PTR v13; // rcx
  __int64 *v14; // rax
  signed __int8 v15; // cf
  ULONG_PTR v16; // rdi
  __int64 *v17; // rsi
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v19; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+48h] BYREF

  result = 0;
  BugCheckParameter2 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  IsParentOfChildAppContainer = 0;
  v8 = 0;
  if ( a2 && a3 )
  {
    if ( a1 >= 5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v10 = KeAbPreAcquire((__int64)&LowboxSessionMapLock, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)&LowboxSessionMapLock,
          0,
          v10,
          (unsigned __int64)&LowboxSessionMapLock);
      if ( v10 )
        *((_BYTE *)v10 + 10) = 1;
      v8 = 1;
      if ( (int)SepGetTokenSessionMapEntry(a1, 0, (__int64 *)&BugCheckParameter2) < 0 )
      {
LABEL_19:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
        KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
        KeLeaveCriticalRegion();
        return IsParentOfChildAppContainer;
      }
    }
    else
    {
      BugCheckParameter2 = (ULONG_PTR)&g_SessionLowboxArray + 40 * a1;
    }
    v11 = KeGetCurrentThread();
    v12 = (volatile signed __int32 *)BugCheckParameter2;
    v13 = BugCheckParameter2;
    --v11->KernelApcDisable;
    v14 = KeAbPreAcquire(v13, 0LL);
    v15 = _interlockedbittestandset64(v12, 0LL);
    v16 = BugCheckParameter2;
    v17 = v14;
    if ( v15 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v14, BugCheckParameter2);
    if ( v17 )
      *((_BYTE *)v17 + 10) = 1;
    if ( (int)SepFindMatchingLowBoxNumberEntries(
                *(PRTL_DYNAMIC_HASH_TABLE *)(v16 + 24),
                a2,
                a3,
                &v19,
                (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&v18) >= 0 )
      IsParentOfChildAppContainer = RtlIsParentOfChildAppContainer(v19[1].Linkage.Blink, *(PSID *)(v18 + 32));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    if ( !v8 )
      return IsParentOfChildAppContainer;
    goto LABEL_19;
  }
  return result;
}
