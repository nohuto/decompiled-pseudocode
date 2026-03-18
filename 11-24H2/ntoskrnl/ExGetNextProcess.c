/*
 * XREFs of ExGetNextProcess @ 0x1408EED40
 * Callers:
 *     ExProcessCounterSetCallback @ 0x1408EDBC0 (ExProcessCounterSetCallback.c)
 *     PfpPrivSourceEnum @ 0x1408EE170 (PfpPrivSourceEnum.c)
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 */

__int64 *__fastcall ExGetNextProcess(__int64 *Object, char a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v5; // rsi
  int v6; // r14d
  _QWORD *v7; // rdi
  __int64 *i; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  HANDLE Handle; // [rsp+90h] [rbp+18h] BYREF

  Handle = 0LL;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    v6 = 0;
    --CurrentThread->SpecialApcDisable;
    v7 = KeAbPreAcquire((__int64)&PspActiveProcessLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&PspActiveProcessLock, 0, v7, (__int64)&PspActiveProcessLock);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    for ( i = (__int64 *)(Object ? Object[59] : PsActiveProcessHead); i != &PsActiveProcessHead; i = (__int64 *)*i )
    {
      v5 = i - 59;
      if ( ObReferenceObjectSafeWithTag((__int64)(i - 59), 0x6E457350u) )
      {
        v6 = 1;
        break;
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
    KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v10, v9);
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x6E457350u);
    Object = 0LL;
    if ( v6 )
      Object = v5;
    if ( !Object )
      return 0LL;
    if ( (*((_DWORD *)Object + 125) & 0x4000000) != 0 )
    {
      if ( !a2 )
        return Object;
      if ( ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Handle) >= 0 )
      {
        ObCloseHandle(Handle, 0);
        return Object;
      }
    }
  }
}
