/*
 * XREFs of PopFxRegisterPluginEx @ 0x1405CF188
 * Callers:
 *     PoFxRegisterPluginEx @ 0x1405CDB90 (PoFxRegisterPluginEx.c)
 *     PoFxRegisterPlugin @ 0x14074BD00 (PoFxRegisterPlugin.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopFxInitializeWorkPool @ 0x14074C390 (PopFxInitializeWorkPool.c)
 *     PopDiagTraceFxPluginRegistration @ 0x140A927C4 (PopDiagTraceFxPluginRegistration.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxRegisterPluginEx(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 v4; // cx
  int v7; // ebx
  _WORD *v8; // rax
  __int16 v10; // ax
  __int64 Pool2; // rax
  _DWORD *v12; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char *v14; // rax
  char *v15; // r15
  _QWORD *v16; // rax
  __int64 v17; // rdx
  bool v18; // cf

  v4 = *a3;
  if ( *a3 > 3u )
    return (unsigned int)-1073700860;
  v8 = a3 + 1;
  if ( v4 == 3 && *v8 < 0x60u )
    return (unsigned int)-1073741811;
  if ( v4 == 2 )
  {
    if ( *v8 < 0x58u )
      return (unsigned int)-1073741811;
  }
  else if ( !v4 )
  {
    return (unsigned int)-1073741811;
  }
  if ( *v8 < 0x38u )
    return (unsigned int)-1073741811;
  v10 = *a1;
  if ( *a1 > 3u )
    return (unsigned int)-1073700859;
  if ( v10 == 3 )
  {
    if ( a1[1] < 0x20u || !*((_QWORD *)a1 + 1) && !*((_QWORD *)a1 + 3) )
      return (unsigned int)-1073741811;
  }
  else if ( v10 != 2 || a1[1] < 0x18u || !*((_QWORD *)a1 + 1) )
  {
    return (unsigned int)-1073741811;
  }
  Pool2 = ExAllocatePool2(0x40uLL, 0x1A8uLL, 0x4D584650u);
  v12 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    v7 = PopFxInitializeWorkPool(Pool2 + 120, Pool2);
    if ( v7 >= 0 )
    {
      v12[4] = *a1;
      *((_QWORD *)v12 + 3) = a2;
      *((_QWORD *)v12 + 12) = *((_QWORD *)a1 + 1);
      *((_QWORD *)v12 + 13) = *((_QWORD *)a1 + 2);
      if ( *a1 >= 3u )
        *((_QWORD *)v12 + 14) = *((_QWORD *)a1 + 3);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v14 = (char *)KeAbPreAcquire((__int64)&PopFxPluginLock, 0LL);
      v15 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&PopFxPluginLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&PopFxPluginLock, v14, (__int64)&PopFxPluginLock);
      if ( v15 )
        v15[10] = 1;
      v16 = (_QWORD *)PopFxDeviceRegisterHead;
      v17 = *(_QWORD *)PopFxDeviceRegisterHead;
      if ( *(_QWORD *)(*(_QWORD *)PopFxDeviceRegisterHead + 8LL) != PopFxDeviceRegisterHead )
        __fastfail(3u);
      *(_QWORD *)v12 = v17;
      *((_QWORD *)v12 + 1) = v16;
      *(_QWORD *)(v17 + 8) = v12;
      *v16 = v12;
      if ( (a2 & 0x80000000) != 0 )
        PopFxDeviceRegisterHead = (__int64)v12;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxPluginLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PopFxPluginLock);
      KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
      KeLeaveCriticalRegion();
      PopDiagTraceFxPluginRegistration(v12, a2, 0LL);
      *((_QWORD *)a3 + 4) = 0LL;
      *((_QWORD *)a3 + 5) = 0LL;
      *((_QWORD *)a3 + 3) = 0LL;
      v18 = *a3 < 2u;
      *((_QWORD *)a3 + 2) = PopFxRequestWorker;
      *((_QWORD *)a3 + 6) = PopFxTransitionCriticalResource;
      *((_QWORD *)a3 + 1) = v12;
      if ( !v18 )
      {
        *((_QWORD *)a3 + 7) = PopFxProcessorIdleVeto;
        *((_QWORD *)a3 + 8) = PopFxPlatformIdleVeto;
        *((_QWORD *)a3 + 9) = PopFxUpdateProcessorIdleState;
        *((_QWORD *)a3 + 10) = PopFxUpdatePlatformIdleState;
      }
      if ( *a1 >= 3u )
      {
        *((_QWORD *)a3 + 11) = PopFxRequestCommon;
        if ( *a1 == 3 )
        {
          if ( *((_QWORD *)a1 + 3) )
            PopFxAcpiPepRegistered = 1;
        }
      }
      return 0;
    }
    else
    {
      ExFreePoolWithTag(v12, 0x4D584650u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
