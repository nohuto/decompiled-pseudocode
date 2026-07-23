/*
 * XREFs of HalpTimerClockArm @ 0x140375660
 * Callers:
 *     HalpTimerSwitchToNormalClock @ 0x1405449A4 (HalpTimerSwitchToNormalClock.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140314930 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpHvWatchdogArm @ 0x140375C90 (HalpHvWatchdogArm.c)
 *     HalpTimerSetProblemEx @ 0x1404F71C4 (HalpTimerSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpTimerSwitchToNormalClock @ 0x1405449A4 (HalpTimerSwitchToNormalClock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerClockArm(int a1, ULONG_PTR a2, unsigned __int64 *a3)
{
  ULONG_PTR v3; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v7; // rbx
  int v8; // r11d
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  int v12; // r10d
  int v13; // edi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r9
  unsigned int v16; // ecx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  __int64 InternalData; // rax
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // ecx
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // eax

  v3 = HalpClockTimer;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = a2;
  if ( a2 > HalpTimerMaxIncrement )
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x25uLL, a2, 0LL);
  if ( a2 < (unsigned int)HalpTimerMinIncrement )
    v7 = (unsigned int)HalpTimerMinIncrement;
  if ( (CurrentPrcb->PendingTickFlags & 2) != 0 )
    HalpTimerSwitchToNormalClock(0LL);
  v8 = *(_DWORD *)(v3 + 224);
  if ( a1 != 1 )
  {
    v13 = 0;
    v14 = 0LL;
    if ( (v8 & 0x50) != 0 )
    {
      v15 = *(_QWORD *)(v3 + 192);
      if ( is_mul_ok(v15, v7) )
      {
        v16 = *(_DWORD *)(v3 + 220);
        v17 = v15 * v7 / 0x989680;
        if ( v16 < 0x40 && v17 >= 1LL << v16 )
        {
          v9 = 0LL;
          v12 = -1073741811;
          goto LABEL_30;
        }
        if ( is_mul_ok(v17, 0x2540BE400uLL) )
          v18 = v17 * (unsigned __int128)0x2540BE400uLL / v15;
        else
          v18 = HalpTimerScaleCounter(v17, *(_QWORD *)(v3 + 192), 10000000000LL);
        *(_QWORD *)(v3 + 16) = v17;
        *(_DWORD *)(v3 + 52) = 1;
        v14 = v18 / 0x3E8;
        LOBYTE(v13) = (v8 & 0x40) != 0;
        InternalData = HalpTimerGetInternalData(v3);
        v20 = (unsigned int)(v13 + 1);
        if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v3 + 128) == HalpHvWatchdogArm )
          v21 = HalpHvWatchdogArm(InternalData, v20, v17);
        else
          v21 = guard_dispatch_icall_no_overrides(InternalData, v20);
        v12 = v21;
        if ( v21 < 0 )
          HalpTimerSetProblemEx(v3, 18, v21, (unsigned int)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 782);
      }
      else
      {
        v12 = -1073741675;
      }
    }
    else
    {
      HalpTimerSetProblemEx(v3, 17, 0, (unsigned int)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 683);
    }
    v9 = v14;
    goto LABEL_30;
  }
  v9 = 0LL;
  if ( (v8 & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(v3 + 192);
    v11 = v10 * v7;
    if ( is_mul_ok(v10, v7) && v11 + 9999999 >= v11 )
    {
      v22 = *(_DWORD *)(v3 + 220);
      v23 = (v11 + 9999999) / 0x989680;
      if ( v22 >= 0x40 || v23 < 1LL << v22 )
      {
        if ( is_mul_ok(v23, 0x2540BE400uLL) )
          v24 = v23 * (unsigned __int128)0x2540BE400uLL / v10;
        else
          v24 = HalpTimerScaleCounter(v23, *(_QWORD *)(v3 + 192), 10000000000LL);
        *(_QWORD *)(v3 + 16) = v23;
        *(_DWORD *)(v3 + 52) = 1;
        v9 = v24 / 0x3E8;
        if ( (*(_DWORD *)(v3 + 224) & 0x10000) != 0 )
          v25 = *(_QWORD *)(v3 + 72) + *(_DWORD *)(v3 + 80) * KeGetPcr()->Prcb.Number;
        else
          v25 = *(_QWORD *)(v3 + 72);
        if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v3 + 128) == HalpHvWatchdogArm )
          v26 = HalpHvWatchdogArm(v25, 3LL, v23);
        else
          v26 = guard_dispatch_icall_no_overrides(v25, 3LL);
        v12 = v26;
        if ( v26 < 0 )
          HalpTimerSetProblemEx(v3, 18, v26, (unsigned int)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 782);
      }
      else
      {
        v12 = -1073741811;
      }
    }
    else
    {
      v12 = -1073741675;
    }
  }
  else
  {
    HalpTimerLastProblem = 17;
    *(_QWORD *)(v3 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
    v12 = -1073741637;
    *(_QWORD *)(v3 + 252) = 17LL;
    *(_DWORD *)(v3 + 272) = 671;
  }
LABEL_30:
  *a3 = v9;
  if ( v12 < 0 )
    KeBugCheckEx(0x5Cu, 0x110uLL, v3, HalpTimerLastProblem, v12);
  return (unsigned int)v12;
}
