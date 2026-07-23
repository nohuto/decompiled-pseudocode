/*
 * XREFs of ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404AD758
 * Callers:
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140484B24 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     ?KiForceIdleParkUnparkDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404AD730 (-KiForceIdleParkUnparkDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x14032DA60 (KiRcuCheckQuiescent.c)
 *     KeTransitionProcessorParkState @ 0x1403D720C (KeTransitionProcessorParkState.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403D7AC0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403D7B30 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     Feature_ForceIdleReschedulingFix__private_IsEnabledNoReportingNoInline @ 0x1405C4A48 (Feature_ForceIdleReschedulingFix__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall KiForceIdleParkUnparkProcessor(struct _KPRCB *a1, char a2)
{
  struct _KAFFINITY_EX *v3; // rcx
  unsigned int Number; // edx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    KiRcuCheckQuiescent((__int64)a1);
    if ( a1->PowerState.Parked )
    {
      if ( !a1->PowerState.SoftParked )
        goto LABEL_7;
      v3 = &KiForceIdleSoftParkRestoreMask;
    }
    else
    {
      v3 = &KiForceIdleUnparkRestoreMask;
    }
    KeInterlockedSetProcessorAffinityEx((__int64)v3, a1->Number);
    KeTransitionProcessorParkState(a1, 1u);
LABEL_7:
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v5);
      while ( a1->PrcbLock );
    }
    a1->QuantumEnd = 0;
    a1->IdleSchedule = 0;
LABEL_20:
    _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
    return;
  }
  Number = a1->Number;
  if ( a1->PowerState.SoftParked )
  {
    KeInterlockedClearProcessorAffinityEx((__int64)&KiForceIdleSoftParkRestoreMask, Number);
    KeTransitionProcessorParkState(a1, 2u);
    if ( !(unsigned int)Feature_ForceIdleReschedulingFix__private_IsEnabledNoReportingNoInline() )
      return;
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v6);
      while ( a1->PrcbLock );
    }
    if ( (a1->IdleState & 1) == 0 )
      a1->IdleSchedule = 1;
    goto LABEL_20;
  }
  KeInterlockedClearProcessorAffinityEx((__int64)&KiForceIdleUnparkRestoreMask, Number);
  KeTransitionProcessorParkState(a1, 0);
}
