/*
 * XREFs of PoGetIdleTimes @ 0x14036F560
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x1409D78F0 (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopGetIdleTimesCallback @ 0x14036F8B0 (PopGetIdleTimesCallback.c)
 *     PopQueueTargetDpc @ 0x1403702F0 (PopQueueTargetDpc.c)
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PoGetIdleTimes(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3)
{
  __int64 Group; // rax
  __int64 Number; // rdx
  int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char *v12; // rdi
  unsigned __int8 CurrentIrql; // di
  int IdleTimesCallback; // esi
  signed __int64 v15; // rdx
  ULONG_PTR v16; // rtt
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  __int64 v20; // rcx
  __int64 *v21; // rdx
  __int64 v22; // rcx
  __int64 Object; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v26; // [rsp+58h] [rbp-A8h]
  int v27; // [rsp+5Ah] [rbp-A6h]
  __int16 v28; // [rsp+5Eh] [rbp-A2h]
  __int64 (__fastcall *v29)(_QWORD, _QWORD, _QWORD); // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 *p_Object; // [rsp+78h] [rbp-88h]
  _QWORD *v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+88h] [rbp-78h]
  int v35; // [rsp+8Ch] [rbp-74h]
  struct _KDPC Dpc; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v38[33]; // [rsp+E8h] [rbp-18h] BYREF

  memset_0(&v37, 0, 0x108uLL);
  if ( ProcNumber->Reserved )
    goto LABEL_27;
  Group = ProcNumber->Group;
  if ( !(_WORD)Group && !ProcNumber->Number )
  {
    v9 = 0;
    goto LABEL_9;
  }
  if ( (unsigned __int16)Group >= (unsigned __int16)KiActiveGroups
    || (Number = ProcNumber->Number, (unsigned __int8)Number >= 0x40u) )
  {
LABEL_27:
    v9 = -1;
    goto LABEL_9;
  }
  v8 = *((_DWORD *)qword_140F22998 + 64 * Group + Number);
  if ( !v8 )
    v8 = -1;
  v9 = v8;
LABEL_9:
  if ( v9 >= (unsigned int)KeNumberProcessors_0 )
    v10 = 0LL;
  else
    v10 = KiProcessorBlock[v9];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (char *)KeAbPreAcquire((__int64)&PpmIdlePolicyLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PpmIdlePolicyLock, 0, v12, (__int64)&PpmIdlePolicyLock);
  if ( v12 )
    v12[10] = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  IdleTimesCallback = PopGetIdleTimesCallback(v10, a2, a3);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( IdleTimesCallback < 0 )
  {
    v37 = 2097153LL;
    memset_0(v38, 0, 0x100uLL);
    v18 = *((_DWORD *)KiGlobalState + KeGetProcessorIndexFromNumber(ProcNumber));
    v19 = v18 & 0x3F;
    v20 = v18 >> 6;
    if ( (unsigned __int16)v37 <= (unsigned int)v20 )
    {
      if ( WORD1(v37) <= (unsigned int)v20 )
        goto LABEL_30;
      LOWORD(v37) = v20 + 1;
    }
    v21 = &v38[v20];
    v22 = *v21;
    _bittestandset64(&v22, v19);
    *v21 = v22;
LABEL_30:
    v35 = 0;
    v27 = 0;
    v28 = 0;
    v24[1] = v24;
    v24[0] = v24;
    v25[1] = v38[0];
    v25[0] = &v37;
    v29 = PopGetIdleTimesCallback;
    v33 = v25;
    p_Object = &Object;
    memset(&Dpc, 0, 60);
    Object = 393217LL;
    v26 = 0;
    v30 = a2;
    v31 = a3;
    v34 = 0;
    PopQueueTargetDpc(&Dpc);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
  if ( qword_140F0B268 )
    qword_140F0B268 = 0LL;
  _m_prefetchw(&PpmIdlePolicyLock);
  v15 = PpmIdlePolicyLock - 16;
  if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v15 = 0LL;
  if ( (PpmIdlePolicyLock & 2) != 0
    || (v16 = PpmIdlePolicyLock,
        v16 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v15, PpmIdlePolicyLock)) )
  {
    ExfReleasePushLock(&PpmIdlePolicyLock);
  }
  KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
  return KeLeaveCriticalRegionThread();
}
