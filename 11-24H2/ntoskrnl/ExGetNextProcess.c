/*
 * XREFs of ExGetNextProcess @ 0x140860570
 * Callers:
 *     ExProcessCounterSetCallback @ 0x14085F3F0 (ExProcessCounterSetCallback.c)
 *     PfpPrivSourceEnum @ 0x14085F9A0 (PfpPrivSourceEnum.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 */

__int64 *__fastcall ExGetNextProcess(__int64 *Object, char a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v5; // rsi
  int v6; // r14d
  char *v7; // rdi
  __int64 *i; // rdi
  bool v9; // zf
  HANDLE Handle; // [rsp+90h] [rbp+18h] BYREF

  Handle = 0LL;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    v6 = 0;
    --CurrentThread->SpecialApcDisable;
    v7 = (char *)KeAbPreAcquire((__int64)&PspActiveProcessLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&PspActiveProcessLock, 0, v7, (__int64)&PspActiveProcessLock);
    if ( v7 )
      v7[10] = 1;
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
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
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
