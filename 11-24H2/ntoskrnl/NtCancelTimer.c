/*
 * XREFs of NtCancelTimer @ 0x1402BCF30
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x1402BC528 (PoDestroyReasonContext.c)
 *     ExpCancelTimer @ 0x1402BE0F0 (ExpCancelTimer.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpSetTimerObject2 @ 0x1403B09D8 (ExpSetTimerObject2.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
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
  int v11; // r12d
  _QWORD *v12; // r13
  char *v13; // r15
  signed __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  PVOID P; // [rsp+38h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-58h]
  PVOID v25; // [rsp+48h] [rbp-50h]
  __int64 v26; // [rsp+50h] [rbp-48h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  KIRQL v28; // [rsp+A8h] [rbp+10h]
  BOOLEAN v29; // [rsp+A8h] [rbp+10h]
  char v30; // [rsp+B0h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v18 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CurrentState < 0x7FFFFFFF0000LL )
      v18 = (__int64)CurrentState;
    *(_BYTE *)v18 = *(_BYTE *)v18;
  }
  v5 = 0;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, PreviousMode, &Object, 0LL);
  if ( v6 < 0 )
    return v6;
  v7 = Object;
  v26 = (unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v8 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v26 ^ (unsigned __int8)*((char *)Object - 24)];
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
      v30 = 0;
      v9 = (volatile signed __int64 *)((char *)Object + 64);
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 8);
      v28 = v10;
      P = (PVOID)*((_QWORD *)v7 + 32);
      v25 = P;
      if ( P )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)v7 + 8, v10);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v16 = KeAbPreAcquire(&ExpWakeTimerLock, 0LL, 0LL);
        v17 = v16;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v16, &ExpWakeTimerLock);
        if ( v17 )
          *(_BYTE *)(v17 + 10) = 1;
        v30 = 1;
        v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 8);
        P = (PVOID)*((_QWORD *)v7 + 32);
        v25 = P;
        *((_QWORD *)v7 + 32) = 0LL;
        v7 = Object;
      }
      v11 = ExpCancelTimer((PKTIMER)v7) + 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64(v9, 0LL);
      else
        KiReleaseSpinLockInstrumented(v9, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28);
      __writecr8(v28);
      v12 = P;
      if ( v30 )
      {
        if ( P )
        {
          v19 = (char *)Object + 264;
          v20 = *((_QWORD *)Object + 33);
          v21 = (_QWORD *)*((_QWORD *)Object + 34);
          if ( *(PVOID *)(v20 + 8) != (char *)Object + 264 || (_QWORD *)*v21 != v19 )
            __fastfail(3u);
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          *v19 = 0LL;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
        KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      }
      v29 = *((_BYTE *)Object + 4);
      v13 = (char *)Object - 48;
      LOBYTE(v5) = ObpTraceFlags != 0;
      if ( v5 )
        ObpPushStackInfo((_DWORD)Object - 48);
      v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v13, -v11) - v11;
      if ( v14 <= 0 )
      {
        if ( *((_QWORD *)v13 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v26 ^ (unsigned __int64)(unsigned __int8)*((char *)Object - 24)],
            (ULONG_PTR)Object,
            6uLL,
            *((_QWORD *)v13 + 1));
        if ( v14 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v14);
        ObpDeferObjectDeletion(v13);
      }
      if ( CurrentState )
        *CurrentState = v29;
      if ( v12 )
        PoDestroyReasonContext(v12);
      return v6;
    }
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return -1073741788;
  }
}
