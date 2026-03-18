/*
 * XREFs of PopPepUpdateIdleStateRefCount @ 0x140315390
 * Callers:
 *     PopPepDeviceDState @ 0x1403137A0 (PopPepDeviceDState.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x140315160 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140316EF0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1404A64E8 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopPepInitializeVetoMasks @ 0x1404BD99C (PopPepInitializeVetoMasks.c)
 *     PopPepClearDripsDeviceVetoMask @ 0x1405DB824 (PopPepClearDripsDeviceVetoMask.c)
 *     PopPepPlatformStateRegistered @ 0x1405DBD18 (PopPepPlatformStateRegistered.c)
 *     PopPepUnregisterDevice @ 0x140A74D78 (PopPepUnregisterDevice.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     PopFxPlatformStateAvailable @ 0x1403CAA54 (PopFxPlatformStateAvailable.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v16; // r9
  bool v17; // zf
  __int64 v18; // rcx
  ULONG_PTR v19; // rbx
  int v20; // ett
  int v21; // eax
  unsigned __int8 v22; // bl
  __int64 v23; // rdi
  ULONG_PTR v24; // rbx
  signed __int32 v25; // eax
  unsigned int v27; // [rsp+24h] [rbp-154h]
  __int64 v28; // [rsp+28h] [rbp-150h]
  ULONG_PTR BugCheckParameter2[32]; // [rsp+30h] [rbp-148h] BYREF

  v6 = 0;
  result = (unsigned __int64)memset_0(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v9 = a3;
  v10 = 0LL;
  v11 = PopPepPlatformState;
  v12 = 0;
  CurrentIrql = 0;
  v28 = PopPepPlatformState;
  v14 = a1;
  if ( a3 )
    v14 = a2;
  v15 = (a1 ^ a2) & v14;
LABEL_4:
  v16 = 0xFFFFFFFFLL;
  while ( 1 )
  {
    v17 = !_BitScanForward((unsigned int *)&v18, v15);
    v27 = v18;
    if ( v17 )
      break;
    v15 &= v15 - 1;
    v19 = v11 + 448LL * (unsigned int)v18;
    if ( (_DWORD)v9 )
    {
      result = *(unsigned int *)(v19 + 384);
      if ( a4 )
        _InterlockedIncrement(a4);
      if ( (int)result <= 0
        || (v20 = result,
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)(v19 + 384),
                                     result + 1,
                                     result),
            v20 != (_DWORD)result) )
      {
        BugCheckParameter2[v10] = v19;
        v10 = (unsigned int)(v10 + 1);
      }
    }
    else
    {
      if ( a4 )
      {
        v21 = _InterlockedDecrement(a4);
        if ( v21 < 0 )
          PopFxBugCheck(0x668uLL, v11 + 448LL * (unsigned int)v18, v21, v15);
      }
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 384));
      if ( (int)result < 0x40000000 )
        PopFxBugCheck(0x668uLL, v11 + 448LL * (unsigned int)v18, (int)result, v15);
      if ( (_DWORD)result == 0x40000000 )
      {
        if ( !v12 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v9) = 2;
            LOBYTE(v18) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v18, v9);
            v9 = a3;
            v16 = 0xFFFFFFFFLL;
            v11 = v28;
          }
          v12 = 1;
        }
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 384), -1, 0x40000000);
        if ( (_DWORD)result == 0x40000000 )
        {
          LOBYTE(v9) = 1;
          PopFxPlatformStateAvailable(v27, v9, v11, 0xFFFFFFFFLL);
          result = *(int *)(v19 + 384);
          if ( (_DWORD)result != -1 )
            PopFxBugCheck(0x669uLL, v19, *(int *)(v19 + 384), 0LL);
          v9 = a3;
          v11 = v28;
          *(_DWORD *)(v19 + 384) = 0;
          goto LABEL_4;
        }
      }
    }
  }
  if ( (_DWORD)v10 )
  {
    v22 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = 2;
      LOBYTE(v18) = v22;
      KiRaiseIrqlProcessIrqlFlags(v18, v9);
    }
    CurrentIrql = v22;
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
      v23 = 0LL;
      do
      {
        v24 = BugCheckParameter2[v23];
        v25 = *(_DWORD *)(v24 + 384);
        if ( v25 > 0 )
        {
          if ( v25 == _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 384), v25 + 1, v25) )
            goto LABEL_34;
        }
        else if ( !v25 && !_InterlockedCompareExchange((volatile signed __int32 *)(v24 + 384), -1, 0) )
        {
          PopFxPlatformStateAvailable((__int64)(v24 - v28) / 448, 0LL, v11, v16);
          if ( *(_DWORD *)(v24 + 384) != -1 )
            PopFxBugCheck(0x669uLL, v24, *(int *)(v24 + 384), 0LL);
          *(_DWORD *)(v24 + 384) = 1073741825;
LABEL_34:
          LODWORD(v10) = v10 - 1;
          BugCheckParameter2[v23] = BugCheckParameter2[(unsigned int)v10];
          continue;
        }
        v23 = (unsigned int)(v23 + 1);
      }
      while ( (unsigned int)v23 < (unsigned int)v10 );
      if ( !(_DWORD)v10 )
      {
LABEL_37:
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
    goto LABEL_37;
  return result;
}
