/*
 * XREFs of NtCancelTimer @ 0x1402EB010
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     ExpCancelTimer @ 0x1402EC9C0 (ExpCancelTimer.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     ExpSetTimerObject2 @ 0x140370C68 (ExpSetTimerObject2.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x1404E90C0 (PoDestroyReasonContext.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v5; // edi
  int v6; // ebx
  PVOID v7; // r15
  struct _OBJECT_TYPE *v8; // rax
  volatile signed __int64 *v9; // r13
  KIRQL v10; // cl
  __int64 v11; // rdx
  __int64 v12; // r8
  signed int v13; // r12d
  PVOID v14; // r13
  char *v15; // r15
  signed __int64 v16; // rcx
  __int64 *v18; // rax
  __int64 *v19; // r12
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  PVOID P; // [rsp+38h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-58h]
  PVOID v30; // [rsp+48h] [rbp-50h]
  __int64 v31; // [rsp+50h] [rbp-48h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  KIRQL v33; // [rsp+A8h] [rbp+10h]
  BOOLEAN v34; // [rsp+A8h] [rbp+10h]
  char v35; // [rsp+B0h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CurrentState < 0x7FFFFFFF0000LL )
      v20 = (__int64)CurrentState;
    *(_BYTE *)v20 = *(_BYTE *)v20;
  }
  v5 = 0;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, PreviousMode, &Object, 0LL);
  if ( v6 < 0 )
    return v6;
  v7 = Object;
  v31 = (unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v8 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v31 ^ (unsigned __int8)*((char *)Object - 24)];
  if ( v8 == ExpIRTimerObjectType )
  {
    if ( CurrentState )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741811;
    }
    else
    {
      return ExpSetTimerObject2((ULONG_PTR)Object);
    }
  }
  else
  {
    if ( v8 == ExTimerObjectType )
    {
      CurrentThread = 0LL;
      v35 = 0;
      v9 = (volatile signed __int64 *)((char *)Object + 64);
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 8);
      v33 = v10;
      P = (PVOID)*((_QWORD *)v7 + 32);
      v30 = P;
      if ( P )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)v7 + 8, v10);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v18 = KeAbPreAcquire((__int64)&ExpWakeTimerLock, 0LL);
        v19 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v18, (__int64)&ExpWakeTimerLock);
        if ( v19 )
          *((_BYTE *)v19 + 10) = 1;
        v35 = 1;
        v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 8);
        P = (PVOID)*((_QWORD *)v7 + 32);
        v30 = P;
        *((_QWORD *)v7 + 32) = 0LL;
        v7 = Object;
      }
      v13 = ExpCancelTimer((PKTIMER)v7) + 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (v11 = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
        _InterlockedAnd64(v9, 0LL);
      else
        KiReleaseSpinLockInstrumented(v9, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v33);
      __writecr8(v33);
      v14 = P;
      if ( v35 )
      {
        if ( P )
        {
          v21 = (char *)Object + 264;
          v22 = *((_QWORD *)Object + 33);
          v23 = (_QWORD *)*((_QWORD *)Object + 34);
          if ( *(PVOID *)(v22 + 8) != (char *)Object + 264 || (_QWORD *)*v23 != v21 )
            __fastfail(3u);
          *v23 = v22;
          *(_QWORD *)(v22 + 8) = v23;
          *v21 = 0LL;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&ExpWakeTimerLock);
        KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v24, v25, v26);
      }
      v34 = *((_BYTE *)Object + 4);
      v15 = (char *)Object - 48;
      LOBYTE(v5) = ObpTraceFlags != 0;
      if ( v5 )
        ObpPushStackInfo((__int64)Object - 48, 0, v13, 0x746C6644u);
      v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v15, -v13) - v13;
      if ( v16 <= 0 )
      {
        if ( *((_QWORD *)v15 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v31 ^ (unsigned __int64)(unsigned __int8)*((char *)Object - 24)],
            (ULONG_PTR)Object,
            6uLL,
            *((_QWORD *)v15 + 1));
        if ( v16 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v16);
        ObpDeferObjectDeletion(v15, v11, v12, 0LL);
      }
      if ( CurrentState )
        *CurrentState = v34;
      if ( v14 )
        PoDestroyReasonContext(v14);
      return v6;
    }
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return -1073741788;
  }
}
