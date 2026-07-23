/*
 * XREFs of ObpSetDeviceMap @ 0x140A73E78
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x14074168C (ObpCreateDosDevicesDirectory.c)
 *     ObSetProcessDeviceMap @ 0x1407428F0 (ObSetProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14096D9AC (SeGetTokenDeviceMap.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     ObpDeleteDeviceMap @ 0x140742944 (ObpDeleteDeviceMap.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     ObDereferenceDeviceMap @ 0x14096DDE4 (ObDereferenceDeviceMap.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ObpSetDeviceMap(PVOID Object, __int64 a2, void *a3, KPROCESSOR_MODE a4, char a5, __int64 *a6)
{
  __int64 v8; // rbx
  NTSTATUS result; // eax
  PVOID v10; // rsi
  __int64 Pool2; // rax
  __int64 v12; // rdi
  NTSTATUS v13; // r14d
  int v14; // ebx
  __int64 v15; // r14
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v18; // r12
  volatile signed __int32 *v19; // rsi
  char *v20; // rax
  char *v21; // rbp
  PVOID v22; // rax
  __int64 *v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  PVOID Objecta; // [rsp+40h] [rbp-28h] BYREF

  Objecta = 0LL;
  v8 = 0LL;
  result = ObReferenceObjectByHandle(a3, 2u, ObpDirectoryObjectType, a4, &Objecta, 0LL);
  if ( result >= 0 )
  {
    v10 = Objecta;
    if ( (a5 & 4) == 0 && (*((_DWORD *)Objecta + 84) & 4) != 0 )
    {
      v14 = -1073741811;
      goto LABEL_8;
    }
    Pool2 = ExAllocatePool2(0x100uLL, 0x128uLL, 0x6D44624Fu);
    v12 = Pool2;
    if ( !Pool2 )
    {
      v14 = -1073741670;
LABEL_8:
      ObfDereferenceObject(v10);
      return v14;
    }
    *(_QWORD *)(Pool2 + 240) = 1LL;
    *(_QWORD *)Pool2 = v10;
    v13 = ObOpenObjectByPointer(v10, 0x200u, 0LL, 0xF000Fu, ObpDirectoryObjectType, 0, (PHANDLE)(Pool2 + 248));
    if ( v13 >= 0 )
    {
      if ( Object )
      {
        ObfReferenceObjectWithTag(Object, 0x6D44624Fu);
        *(_QWORD *)(v12 + 16) = Object;
      }
      v15 = 0LL;
      ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)Object);
      CurrentThread = KeGetCurrentThread();
      v18 = ServerSiloGlobals;
      --CurrentThread->SpecialApcDisable;
      v19 = (volatile signed __int32 *)(ServerSiloGlobals + 120);
      v20 = (char *)KeAbPreAcquire((__int64)(ServerSiloGlobals + 120), 0LL);
      v21 = v20;
      if ( _interlockedbittestandset64(v19, 0LL) )
        ExfAcquirePushLockExclusiveEx(v18 + 15, v20, (__int64)(v18 + 15));
      if ( v21 )
        v21[10] = 1;
      v22 = Objecta;
      v23 = (__int64 *)((char *)Objecta + 304);
      v24 = *((_QWORD *)Objecta + 38);
      if ( v24 )
      {
        v15 = v12;
        v12 = *((_QWORD *)Objecta + 38);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 240), 1uLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        if ( (a5 & 1) != 0 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 240), 0x10uLL) <= 0 )
            __fastfail(0xEu);
          *v18 = v12 + 15;
          v22 = Objecta;
        }
        *v23 = v12;
        if ( (a5 & 2) != 0 )
        {
          v25 = *v18 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v22 != *(PVOID *)v25 )
          {
            *(_QWORD *)(v12 + 8) = *(_QWORD *)v25;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 240), 1uLL) <= 0 )
              __fastfail(0xEu);
            *(_QWORD *)(v12 + 24) = v25;
          }
        }
      }
      if ( a2 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 240), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        v8 = _InterlockedExchange64((volatile __int64 *)(a2 + 792), (v12 | 0xF) & -(__int64)(v12 != 0));
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v18 + 15);
      KeAbPostRelease((ULONG_PTR)(v18 + 15));
      KeLeaveGuardedRegion();
      if ( v15 )
      {
        --*(_QWORD *)(v15 + 240);
        ObpDeleteDeviceMap((char *)v15);
      }
      if ( v8 )
        ObDereferenceDeviceMap((volatile signed __int64 *)(v8 & 0xFFFFFFFFFFFFFFF0uLL), (v8 & 0xF) + 1);
      if ( a6 )
        *a6 = v12;
      else
        ObDereferenceDeviceMap((volatile signed __int64 *)v12, 1u);
      return 0;
    }
    else
    {
      ObfDereferenceObject(v10);
      ExFreePoolWithTag((PVOID)v12, 0x6D44624Fu);
      return v13;
    }
  }
  return result;
}
