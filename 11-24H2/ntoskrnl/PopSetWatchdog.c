/*
 * XREFs of PopSetWatchdog @ 0x140458BDC
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140458FA8 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PopCacheDisplayOnPhaseDuration @ 0x1404C8B4C (PopCacheDisplayOnPhaseDuration.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char *__fastcall PopSetWatchdog(char *P, unsigned int *a2, char a3)
{
  __int64 InterruptTimePrecise; // r12
  unsigned __int64 v7; // r14
  unsigned int v8; // r13d
  KIRQL v9; // bp
  __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  _QWORD *v13; // rcx
  PVOID *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  char *result; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v22);
  LOBYTE(v22) = 0;
  v7 = 0LL;
  v8 = 0;
  if ( P )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  }
  else
  {
    result = (char *)ExAllocatePool2(0x40uLL);
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
    *((_QWORD *)P + 37) = v16;
    *((_QWORD *)P + 38) = v15 + v16;
    *((_QWORD *)P + 36) = KeGetCurrentThread();
    *((_WORD *)P + 104) = 1;
    if ( !(unsigned __int8)KiSetTimerEx((__int64)(P + 48), -v15, 0, 0, (__int64)(P + 112)) )
    {
      P[20] = 1;
      PopUpdateWatchdogNoWorkersEvent(P);
    }
    *((_QWORD *)P + 39) = InterruptTimePrecise;
    *((_QWORD *)P + 40) = RtlGetInterruptTimePrecise(&v23);
    goto LABEL_18;
  }
  *((_QWORD *)P + 41) = InterruptTimePrecise;
  v11 = RtlGetInterruptTimePrecise(&v23);
  v12 = *((_DWORD *)P + 56) == 412;
  *((_QWORD *)P + 42) = v11;
  if ( v12 && *((_QWORD *)P + 29) > 0x20uLL )
  {
    v21 = v11 - *((_QWORD *)P + 37);
    v8 = *((_DWORD *)P + 58);
    LOBYTE(v22) = 1;
    v7 = v21 / 0xA;
  }
  P[208] = 0;
  if ( KeCancelTimer((PKTIMER)(P + 48)) )
  {
    P[20] = 0;
    PopUpdateWatchdogNoWorkersEvent(P);
  }
  *((_QWORD *)P + 43) = RtlGetInterruptTimePrecise(&v23);
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
  v13 = *(_QWORD **)P;
  if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v14 = (PVOID *)*((_QWORD *)P + 1), *v14 != P) )
LABEL_13:
    __fastfail(3u);
  *v14 = v13;
  v13[1] = v14;
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
  if ( (_BYTE)v22 )
    PopCacheDisplayOnPhaseDuration(v8, v7);
  return P;
}
