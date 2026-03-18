/*
 * XREFs of HalpSetTimer @ 0x1403BC5B0
 * Callers:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14033A0D0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpTimerWatchdogResetCountdown @ 0x14033A1F0 (HalpTimerWatchdogResetCountdown.c)
 *     HalpSetTimerAnyMode @ 0x1403BB348 (HalpSetTimerAnyMode.c)
 *     HalpTimerInitializeClock @ 0x140546CF4 (HalpTimerInitializeClock.c)
 *     HalpTimerRestartProfileInterrupt @ 0x140549F74 (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerSetTimerBackedProfileInterval @ 0x14054A044 (HalpTimerSetTimerBackedProfileInterval.c)
 *     HalpTimerStartProfileInterrupt @ 0x14054A0DC (HalpTimerStartProfileInterrupt.c)
 *     HalpTimerTestHypervisorTimer @ 0x14054A490 (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerWatchdogStart @ 0x14054AFE0 (HalpTimerWatchdogStart.c)
 *     HalpWatchdogDelayExpiration @ 0x14054B1B0 (HalpWatchdogDelayExpiration.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x14030AA50 (HalpTimerScaleCounter.c)
 *     HalpHvWatchdogArm @ 0x1403BC810 (HalpHvWatchdogArm.c)
 *     HalpTimerSetProblemEx @ 0x1404F98E4 (HalpTimerSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpSetTimer(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int v5; // r11d
  char v6; // r14
  unsigned int v7; // esi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int128 v11; // rax
  unsigned int v12; // ecx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  int v18; // r8d
  int v19; // edx
  int v20; // [rsp+20h] [rbp-38h]

  v5 = 0;
  v6 = a4;
  v7 = a2;
  v9 = 0LL;
  if ( a2 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 224) & 0x20) == 0 )
    {
      HalpTimerLastProblem = 17;
      *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
      v5 = -1073741637;
      *(_QWORD *)(a1 + 252) = 17LL;
      *(_DWORD *)(a1 + 272) = 671;
      goto LABEL_15;
    }
    goto LABEL_3;
  }
  if ( a2 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 224) & 0x10) != 0 )
      goto LABEL_3;
    v20 = 692;
LABEL_36:
    v18 = 0;
    v19 = 17;
    goto LABEL_32;
  }
  if ( a2 != 2 )
  {
LABEL_27:
    v5 = -1073741811;
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(a1 + 224) & 0x50) == 0 )
  {
    v20 = 683;
    goto LABEL_36;
  }
LABEL_3:
  v10 = *(_QWORD *)(a1 + 192) * a3;
  if ( !is_mul_ok(*(_QWORD *)(a1 + 192), a3) )
    goto LABEL_17;
  if ( a2 == 3 )
  {
    if ( *(_QWORD *)(a1 + 192) * a3 + 9999999 >= v10 )
    {
      v10 = *(_QWORD *)(a1 + 192) * a3 + 9999999;
      goto LABEL_5;
    }
LABEL_17:
    v5 = -1073741675;
    goto LABEL_15;
  }
LABEL_5:
  v11 = v10 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  v12 = *(_DWORD *)(a1 + 220);
  v13 = *((_QWORD *)&v11 + 1) >> 23;
  if ( v12 < 0x40 && v13 >= 1LL << v12 )
    goto LABEL_27;
  if ( is_mul_ok(v13, 0x2540BE400uLL) )
    v14 = v13 * (unsigned __int128)0x2540BE400uLL / *(unsigned __int64 *)(a1 + 192);
  else
    v14 = HalpTimerScaleCounter(v13, *(_QWORD *)(a1 + 192), 10000000000LL);
  *(_QWORD *)(a1 + 16) = v13;
  *(_DWORD *)(a1 + 52) = 1;
  v9 = v14 / 0x3E8;
  if ( v7 == 2 && (*(_BYTE *)(a1 + 224) & 0x40) == 0 )
    v7 = 1;
  if ( v6 )
  {
    v15 = (*(_DWORD *)(a1 + 224) & 0x10000) != 0
        ? *(_QWORD *)(a1 + 72) + *(_DWORD *)(a1 + 80) * KeGetPcr()->Prcb.Number
        : *(_QWORD *)(a1 + 72);
    v16 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 128) == HalpHvWatchdogArm
        ? HalpHvWatchdogArm(v15, v7, v13)
        : guard_dispatch_icall_no_overrides(v15, v7, v13, a4);
    v5 = v16;
    if ( v16 < 0 )
    {
      v20 = 782;
      v18 = v16;
      v19 = 18;
LABEL_32:
      HalpTimerSetProblemEx(a1, v19, v18, (unsigned int)"minkernel\\hals\\lib\\timers\\common\\timersup.c", v20);
    }
  }
LABEL_15:
  *a5 = v9;
  return v5;
}
