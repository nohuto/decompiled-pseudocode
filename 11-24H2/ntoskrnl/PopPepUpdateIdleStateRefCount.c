/*
 * XREFs of PopPepUpdateIdleStateRefCount @ 0x1403A6EB0
 * Callers:
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1402BFAA0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1403A5BE4 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopPepDeviceDState @ 0x1403A6948 (PopPepDeviceDState.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x1403A6C80 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPepInitializeVetoMasks @ 0x1404B8B0C (PopPepInitializeVetoMasks.c)
 *     PopPepClearDripsDeviceVetoMask @ 0x1405D86F4 (PopPepClearDripsDeviceVetoMask.c)
 *     PopPepPlatformStateRegistered @ 0x1405D8BE8 (PopPepPlatformStateRegistered.c)
 *     PopPepUnregisterDevice @ 0x140A6F098 (PopPepUnregisterDevice.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     PopFxPlatformStateAvailable @ 0x1403A5E38 (PopFxPlatformStateAvailable.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall PopPepUpdateIdleStateRefCount(int a1, int a2, unsigned int a3, volatile signed __int32 *a4)
{
  unsigned int v6; // r12d
  unsigned __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r8
  char v12; // r13
  unsigned __int8 CurrentIrql; // r15
  int v14; // ebp
  unsigned int v15; // ebp
  bool v16; // zf
  __int64 v17; // rcx
  ULONG_PTR v18; // rbx
  int v19; // ett
  int v20; // eax
  unsigned __int8 v21; // bl
  __int64 v22; // rdi
  ULONG_PTR v23; // rbx
  signed __int32 v24; // eax
  unsigned int v26; // [rsp+24h] [rbp-154h]
  __int64 v27; // [rsp+28h] [rbp-150h]
  ULONG_PTR BugCheckParameter2[32]; // [rsp+30h] [rbp-148h] BYREF

  v6 = 0;
  result = (unsigned __int64)memset_0(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v9 = a3;
  v10 = 0LL;
  v11 = PopPepPlatformState;
  v12 = 0;
  CurrentIrql = 0;
  v27 = PopPepPlatformState;
  v14 = a1;
  if ( a3 )
    v14 = a2;
  v15 = (a1 ^ a2) & v14;
  while ( 1 )
  {
    v16 = !_BitScanForward((unsigned int *)&v17, v15);
    v26 = v17;
    if ( v16 )
      break;
    v15 &= v15 - 1;
    v18 = v11 + 448LL * (unsigned int)v17;
    if ( (_DWORD)v9 )
    {
      result = *(unsigned int *)(v18 + 384);
      if ( a4 )
        _InterlockedIncrement(a4);
      if ( (int)result <= 0
        || (v19 = result,
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)(v18 + 384),
                                     result + 1,
                                     result),
            v19 != (_DWORD)result) )
      {
        BugCheckParameter2[v10] = v18;
        v10 = (unsigned int)(v10 + 1);
      }
    }
    else
    {
      if ( a4 )
      {
        v20 = _InterlockedDecrement(a4);
        if ( v20 < 0 )
          PopFxBugCheck(0x668uLL, v11 + 448LL * (unsigned int)v17, v20, v15);
      }
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 384));
      if ( (int)result < 0x40000000 )
        PopFxBugCheck(0x668uLL, v11 + 448LL * (unsigned int)v17, (int)result, v15);
      if ( (_DWORD)result == 0x40000000 )
      {
        if ( !v12 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v9) = 2;
            LOBYTE(v17) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v17, v9);
            v9 = a3;
            v11 = v27;
          }
          v12 = 1;
        }
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v18 + 384), -1, 0x40000000);
        if ( (_DWORD)result == 0x40000000 )
        {
          PopFxPlatformStateAvailable(v26, 1);
          result = *(int *)(v18 + 384);
          if ( (_DWORD)result != -1 )
            PopFxBugCheck(0x669uLL, v18, *(int *)(v18 + 384), 0LL);
          v9 = a3;
          v11 = v27;
          *(_DWORD *)(v18 + 384) = 0;
        }
      }
    }
  }
  if ( (_DWORD)v10 )
  {
    v21 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = 2;
      LOBYTE(v17) = v21;
      KiRaiseIrqlProcessIrqlFlags(v17, v9);
    }
    CurrentIrql = v21;
    while ( 1 )
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
      v22 = 0LL;
      do
      {
        v23 = BugCheckParameter2[v22];
        v24 = *(_DWORD *)(v23 + 384);
        if ( v24 > 0 )
        {
          if ( v24 == _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 384), v24 + 1, v24) )
            goto LABEL_33;
        }
        else if ( !v24 && !_InterlockedCompareExchange((volatile signed __int32 *)(v23 + 384), -1, 0) )
        {
          PopFxPlatformStateAvailable((__int64)(v23 - v27) / 448, 0);
          if ( *(_DWORD *)(v23 + 384) != -1 )
            PopFxBugCheck(0x669uLL, v23, *(int *)(v23 + 384), 0LL);
          *(_DWORD *)(v23 + 384) = 1073741825;
LABEL_33:
          LODWORD(v10) = v10 - 1;
          BugCheckParameter2[v22] = BugCheckParameter2[(unsigned int)v10];
          continue;
        }
        v22 = (unsigned int)(v22 + 1);
      }
      while ( (unsigned int)v22 < (unsigned int)v10 );
      if ( !(_DWORD)v10 )
      {
LABEL_36:
        if ( KiIrqlFlags )
        {
          LOBYTE(v9) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        return result;
      }
    }
  }
  if ( v12 )
    goto LABEL_36;
  return result;
}
