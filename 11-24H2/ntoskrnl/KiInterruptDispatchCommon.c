/*
 * XREFs of KiInterruptDispatchCommon @ 0x1403AE3B8
 * Callers:
 *     IopPassiveInterruptWorker @ 0x14044C700 (IopPassiveInterruptWorker.c)
 *     KeDispatchSecondaryInterrupt @ 0x14046F5A0 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     KiGetInterruptObjectFromVector @ 0x1403AE208 (KiGetInterruptObjectFromVector.c)
 *     KiProcessPendingDisconnect @ 0x1403AE7B0 (KiProcessPendingDisconnect.c)
 *     KiProcessDisconnectList @ 0x1403AE80C (KiProcessDisconnectList.c)
 *     IoProcessPassiveInterrupts @ 0x1403AE864 (IoProcessPassiveInterrupts.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403AE8E8 (KiInvokeInterruptServiceRoutine.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  _WORD *InterruptObjectFromVector; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int16 Group; // ax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rbx
  __int64 v23; // rbx
  unsigned int v24; // r15d
  char v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbp
  char v30; // [rsp+20h] [rbp-A8h]
  unsigned int v32; // [rsp+28h] [rbp-A0h]
  volatile signed __int64 *SpinLock; // [rsp+30h] [rbp-98h]
  int v35; // [rsp+3Ch] [rbp-8Ch]
  __int128 *v36; // [rsp+40h] [rbp-88h]
  unsigned __int8 CurrentIrql; // [rsp+48h] [rbp-80h]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-70h] BYREF
  __int128 v39; // [rsp+68h] [rbp-60h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+78h] [rbp-50h] BYREF

  v5 = a1;
  v6 = 0LL;
  v7 = 0;
  v39 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v10 = &v39;
  v30 = 0;
  if ( a4 )
    v10 = a4;
  v32 = 0;
  v36 = v10;
  v11 = 0;
  PreviousAffinity = 0LL;
  *((_QWORD *)v10 + 1) = v10;
  *(_QWORD *)v10 = v10;
  if ( v5 )
  {
    v12 = a2 - 256;
    v13 = (KSPIN_LOCK *)(48 * v12 + KiGlobalSecondaryIDT);
    SpinLock = (volatile signed __int64 *)v13;
    v14 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = v14;
      KiRaiseIrqlProcessIrqlFlags(v6, 12LL);
    }
    KxAcquireSpinLock(v13);
    InterruptObjectFromVector = 0LL;
    if ( (unsigned int)v12 < 0x100 )
    {
      _mm_lfence();
      InterruptObjectFromVector = *(_WORD **)(48 * v12 + KiGlobalSecondaryIDT + 40);
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
      LOBYTE(v19) = 15;
      LOBYTE(v20) = v14;
      KiRaiseIrqlProcessIrqlFlags(v20, v19);
    }
    InterruptObjectFromVector = KiGetInterruptObjectFromVector(a2);
  }
  if ( InterruptObjectFromVector )
  {
    v21 = 0xFFFFLL;
    ++InterruptObjectFromVector[51];
    v22 = InterruptObjectFromVector;
    if ( (a3 & 1) == 0 )
      goto LABEL_20;
    while ( *((_BYTE *)v22 + 93) )
    {
      v23 = v22[1];
      if ( !v23 )
        goto LABEL_18;
      v22 = (_QWORD *)(v23 - 8);
      if ( v22 == (_QWORD *)InterruptObjectFromVector )
      {
        if ( !*((_BYTE *)v22 + 93) )
          break;
LABEL_18:
        v22 = 0LL;
        break;
      }
    }
    if ( v22 )
    {
LABEL_20:
      v24 = 0;
      v25 = 0;
      v35 = *((_DWORD *)InterruptObjectFromVector + 27);
      while ( CurrentIrql <= 2u || *((_BYTE *)v22 + 93) )
      {
        if ( (v22[13] & 1) != 0 )
        {
          v28 = v22[1];
        }
        else
        {
          ++*((_WORD *)v22 + 51);
          ++v24;
          if ( v5 )
          {
            HalpReleaseHighLevelLock(SpinLock, v14);
          }
          else
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v21) = v14;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
            }
            __writecr8(v14);
          }
          LOBYTE(v21) = v14;
          v11 = KiInvokeInterruptServiceRoutine(v22, v21, a2);
          v7 = 2;
          v14 = KeGetCurrentIrql();
          if ( v5 )
          {
            __writecr8(0xCuLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v26) = 12;
              LOBYTE(v27) = v14;
              KiRaiseIrqlProcessIrqlFlags(v27, v26);
            }
            KxAcquireSpinLock((PKSPIN_LOCK)SpinLock);
          }
          else
          {
            __writecr8(0xFuLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v26) = 15;
              LOBYTE(v27) = v14;
              KiRaiseIrqlProcessIrqlFlags(v27, v26);
            }
          }
          --*((_WORD *)v22 + 51);
          v28 = v22[1];
          KiProcessPendingDisconnect(a1, v22, v36);
        }
        v22 = (_QWORD *)(v28 - 8);
        if ( v35 )
        {
          if ( v11 )
            v25 = 1;
          if ( v22 == (_QWORD *)InterruptObjectFromVector )
          {
            if ( !v25 || v24 <= 1 )
            {
              v11 = 1;
LABEL_34:
              v5 = a1;
              goto LABEL_35;
            }
            v24 = 0;
            v25 = 0;
            v11 = 0;
          }
        }
        else if ( v11 || v22 == (_QWORD *)InterruptObjectFromVector )
        {
          goto LABEL_34;
        }
        v5 = a1;
      }
      v30 = 1;
      if ( v7 != 2 )
        v7 = 1;
      v32 = *((_DWORD *)v22 + 22);
    }
LABEL_35:
    --InterruptObjectFromVector[51];
    v10 = v36;
    KiProcessPendingDisconnect(v5, InterruptObjectFromVector, v36);
  }
  if ( v5 )
  {
    HalpReleaseHighLevelLock(SpinLock, v14);
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
  if ( v30 )
    IoProcessPassiveInterrupts(v32);
  if ( CurrentIrql < 2u )
    KiProcessDisconnectList(v10);
  if ( a5 )
    *a5 = v7;
  return v11;
}
