/*
 * XREFs of KiInterruptDispatchCommon @ 0x140206264
 * Callers:
 *     IopPassiveInterruptWorker @ 0x140456A40 (IopPassiveInterruptWorker.c)
 *     KeDispatchSecondaryInterrupt @ 0x1404742F0 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     KiProcessPendingDisconnect @ 0x14020665C (KiProcessPendingDisconnect.c)
 *     KiProcessDisconnectList @ 0x1402066B8 (KiProcessDisconnectList.c)
 *     IoProcessPassiveInterrupts @ 0x140206710 (IoProcessPassiveInterrupts.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140206C50 (KiInvokeInterruptServiceRoutine.c)
 *     KiGetInterruptObjectFromVector @ 0x140207374 (KiGetInterruptObjectFromVector.c)
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall KiInterruptDispatchCommon(unsigned int a1, unsigned int a2, char a3, __int128 *a4, int *a5)
{
  unsigned int v5; // ebp
  __int64 v6; // rcx
  int v7; // r12d
  __int128 *v10; // rbx
  char v11; // r13
  __int64 v12; // rbp
  KSPIN_LOCK *v13; // r15
  unsigned __int8 v14; // si
  __int64 v15; // rdx
  __int64 InterruptObjectFromVector; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int16 Group; // ax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rbx
  unsigned int v23; // r15d
  char v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rbp
  char v28; // [rsp+20h] [rbp-A8h]
  unsigned int v30; // [rsp+28h] [rbp-A0h]
  KSPIN_LOCK *SpinLock; // [rsp+30h] [rbp-98h]
  int v33; // [rsp+3Ch] [rbp-8Ch]
  __int128 *v34; // [rsp+40h] [rbp-88h]
  unsigned __int8 CurrentIrql; // [rsp+48h] [rbp-80h]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-70h] BYREF
  __int128 v37; // [rsp+68h] [rbp-60h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+78h] [rbp-50h] BYREF

  v5 = a1;
  v6 = 0LL;
  v7 = 0;
  v37 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v10 = &v37;
  v28 = 0;
  if ( a4 )
    v10 = a4;
  v30 = 0;
  v34 = v10;
  v11 = 0;
  PreviousAffinity = 0LL;
  *((_QWORD *)v10 + 1) = v10;
  *(_QWORD *)v10 = v10;
  if ( v5 )
  {
    v12 = a2 - 256;
    v13 = (KSPIN_LOCK *)(48 * v12 + KiGlobalSecondaryIDT);
    SpinLock = v13;
    v14 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = v14;
      KiRaiseIrqlProcessIrqlFlags(v6);
    }
    KxAcquireSpinLock(v13);
    InterruptObjectFromVector = 0LL;
    if ( (unsigned int)v12 < 0x100 )
    {
      _mm_lfence();
      InterruptObjectFromVector = *(_QWORD *)(48 * v12 + KiGlobalSecondaryIDT + 40);
    }
    v5 = a1;
  }
  else
  {
    SpinLock = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    Affinity = 0LL;
    Group = CurrentPrcb->Group;
    LOBYTE(CurrentPrcb) = CurrentPrcb->GroupIndex;
    Affinity.Group = Group;
    Affinity.Mask = 1LL << (char)CurrentPrcb;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v14 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v19) = v14;
      KiRaiseIrqlProcessIrqlFlags(v19);
    }
    InterruptObjectFromVector = KiGetInterruptObjectFromVector(a2);
  }
  if ( InterruptObjectFromVector )
  {
    v20 = 0xFFFFLL;
    ++*(_WORD *)(InterruptObjectFromVector + 102);
    v21 = InterruptObjectFromVector;
    if ( (a3 & 1) == 0 )
      goto LABEL_20;
    while ( *(_BYTE *)(v21 + 93) )
    {
      v22 = *(_QWORD *)(v21 + 8);
      if ( !v22 )
        goto LABEL_18;
      v21 = v22 - 8;
      if ( v21 == InterruptObjectFromVector )
      {
        if ( !*(_BYTE *)(v21 + 93) )
          break;
LABEL_18:
        v21 = 0LL;
        break;
      }
    }
    if ( v21 )
    {
LABEL_20:
      v23 = 0;
      v24 = 0;
      v33 = *(_DWORD *)(InterruptObjectFromVector + 108);
      while ( CurrentIrql <= 2u || *(_BYTE *)(v21 + 93) )
      {
        if ( (*(_DWORD *)(v21 + 104) & 1) != 0 )
        {
          v26 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          ++*(_WORD *)(v21 + 102);
          ++v23;
          if ( v5 )
          {
            HalpReleaseHighLevelLock((__int64)SpinLock, v14);
          }
          else
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v20) = v14;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
            }
            __writecr8(v14);
          }
          LOBYTE(v20) = v14;
          v11 = KiInvokeInterruptServiceRoutine(v21, v20, a2);
          v7 = 2;
          v14 = KeGetCurrentIrql();
          if ( v5 )
          {
            __writecr8(0xCuLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v25) = v14;
              KiRaiseIrqlProcessIrqlFlags(v25);
            }
            KxAcquireSpinLock(SpinLock);
          }
          else
          {
            __writecr8(0xFuLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v25) = v14;
              KiRaiseIrqlProcessIrqlFlags(v25);
            }
          }
          --*(_WORD *)(v21 + 102);
          v26 = *(_QWORD *)(v21 + 8);
          KiProcessPendingDisconnect(a1, v21, v34);
        }
        v21 = v26 - 8;
        if ( v33 )
        {
          if ( v11 )
            v24 = 1;
          if ( v21 == InterruptObjectFromVector )
          {
            if ( !v24 || v23 <= 1 )
            {
              v11 = 1;
LABEL_34:
              v5 = a1;
              goto LABEL_35;
            }
            v23 = 0;
            v24 = 0;
            v11 = 0;
          }
        }
        else if ( v11 || v21 == InterruptObjectFromVector )
        {
          goto LABEL_34;
        }
        v5 = a1;
      }
      v28 = 1;
      if ( v7 != 2 )
        v7 = 1;
      v30 = *(_DWORD *)(v21 + 88);
    }
LABEL_35:
    --*(_WORD *)(InterruptObjectFromVector + 102);
    v10 = v34;
    KiProcessPendingDisconnect(v5, InterruptObjectFromVector, v34);
  }
  if ( v5 )
  {
    HalpReleaseHighLevelLock((__int64)SpinLock, v14);
  }
  else
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v15) = v14;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
    }
    __writecr8(v14);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  if ( v28 )
    IoProcessPassiveInterrupts(v30);
  if ( CurrentIrql < 2u )
    KiProcessDisconnectList(v10);
  if ( a5 )
    *a5 = v7;
  return v11;
}
