/*
 * XREFs of PopSetWatchdog @ 0x1402BC81C
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1402BC7E4 (PopUpdateWatchdogNoWorkersEvent.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PopCacheDisplayOnPhaseDuration @ 0x1404C2000 (PopCacheDisplayOnPhaseDuration.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char *__fastcall PopSetWatchdog(char *P, unsigned int *a2, char a3)
{
  LARGE_INTEGER InterruptTimePrecise; // r12
  unsigned __int64 v7; // r14
  unsigned int v8; // r13d
  KIRQL v9; // bp
  __int64 v10; // rax
  LARGE_INTEGER v11; // rax
  bool v12; // zf
  LARGE_INTEGER v13; // rcx
  PVOID *v14; // rax
  __int64 v15; // rbx
  LARGE_INTEGER v16; // rax
  __int64 v17; // rdx
  char *result; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp+8h] BYREF
  LARGE_INTEGER v23; // [rsp+88h] [rbp+20h] BYREF

  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  LOBYTE(PerformanceCounter.LowPart) = 0;
  v7 = 0LL;
  v8 = 0;
  if ( P )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  }
  else
  {
    result = (char *)ExAllocatePool2(0x40uLL, 0x190uLL, 0x44574F50u);
    P = result;
    if ( !result )
      return result;
    *((_DWORD *)result + 4) = 1146572624;
    *((_WORD *)result + 12) = 0;
    result[26] = 6;
    *((_DWORD *)result + 7) = 1;
    v19 = result + 32;
    v19[1] = v19;
    *v19 = v19;
    *((_QWORD *)P + 6) = 0LL;
    P[48] = 8;
    *((_QWORD *)P + 8) = P + 56;
    *((_QWORD *)P + 7) = P + 56;
    *((_QWORD *)P + 9) = 0LL;
    *((_DWORD *)P + 27) = 0;
    *((_WORD *)P + 52) = 0;
    *((_QWORD *)P + 17) = PopWatchdogDpc;
    *((_QWORD *)P + 21) = 0LL;
    *((_QWORD *)P + 16) = 0LL;
    *((_DWORD *)P + 28) = 275;
    *((_QWORD *)P + 18) = P;
    *((_QWORD *)P + 22) = 0LL;
    *((_QWORD *)P + 24) = PopWatchdogWorker;
    *((_QWORD *)P + 25) = P;
    v9 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    v20 = PopWatchdogList;
    if ( *(__int64 **)(PopWatchdogList + 8) != &PopWatchdogList )
      goto LABEL_13;
    *(_QWORD *)P = PopWatchdogList;
    *((_QWORD *)P + 1) = &PopWatchdogList;
    *(_QWORD *)(v20 + 8) = P;
    PopWatchdogList = (__int64)P;
  }
  if ( *((_DWORD *)P + 4) != 1146572624 )
    __fastfail(5u);
  v10 = *a2;
  if ( (_DWORD)v10 && !a3 )
  {
    v15 = 10000 * v10;
    *(_OWORD *)(P + 216) = *(_OWORD *)a2;
    *(_OWORD *)(P + 232) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(P + 248) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(P + 264) = *((_OWORD *)a2 + 3);
    *((_QWORD *)P + 35) = *((_QWORD *)a2 + 8);
    v16 = RtlGetInterruptTimePrecise(&v23);
    *((LARGE_INTEGER *)P + 37) = v16;
    *((_QWORD *)P + 38) = v15 + v16.QuadPart;
    *((_QWORD *)P + 36) = KeGetCurrentThread();
    *((_WORD *)P + 104) = 1;
    if ( !(unsigned __int8)KiSetTimerEx((int)P + 48, -(int)v15, 0, 0, (__int64)(P + 112)) )
    {
      P[20] = 1;
      PopUpdateWatchdogNoWorkersEvent((__int64)P);
    }
    *((LARGE_INTEGER *)P + 39) = InterruptTimePrecise;
    *((LARGE_INTEGER *)P + 40) = RtlGetInterruptTimePrecise(&v23);
    goto LABEL_18;
  }
  *((LARGE_INTEGER *)P + 41) = InterruptTimePrecise;
  v11 = RtlGetInterruptTimePrecise(&v23);
  v12 = *((_DWORD *)P + 56) == 412;
  *((LARGE_INTEGER *)P + 42) = v11;
  if ( v12 && *((_QWORD *)P + 29) > 0x20uLL )
  {
    v21 = v11.QuadPart - *((_QWORD *)P + 37);
    v8 = *((_DWORD *)P + 58);
    LOBYTE(PerformanceCounter.LowPart) = 1;
    v7 = v21 / 0xA;
  }
  P[208] = 0;
  if ( KeCancelTimer((PKTIMER)(P + 48)) )
  {
    P[20] = 0;
    PopUpdateWatchdogNoWorkersEvent((__int64)P);
  }
  *((LARGE_INTEGER *)P + 43) = RtlGetInterruptTimePrecise(&v23);
  if ( !*((_DWORD *)P + 7) )
  {
    KeReleaseSpinLock(&PopWatchdogLock, v9);
    KeWaitForSingleObject(P + 24, Executive, 0, 0, 0LL);
    v9 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  }
  RtlGetInterruptTimePrecise(&v23);
  memset_0(P + 288, 0, 0x70uLL);
  if ( !a3 )
    goto LABEL_18;
  v13 = *(LARGE_INTEGER *)P;
  if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v14 = (PVOID *)*((_QWORD *)P + 1), *v14 != P) )
LABEL_13:
    __fastfail(3u);
  *v14 = (PVOID)v13.QuadPart;
  *(_QWORD *)(v13.QuadPart + 8) = v14;
  *((_DWORD *)P + 4) = 1330532174;
  ExFreePoolWithTag(P, 0x44574F50u);
  P = 0LL;
LABEL_18:
  KxReleaseSpinLock((volatile signed __int64 *)&PopWatchdogLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v17) = v9;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
  }
  __writecr8(v9);
  if ( LOBYTE(PerformanceCounter.LowPart) )
    PopCacheDisplayOnPhaseDuration(v8, v7);
  return P;
}
