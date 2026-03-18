/*
 * XREFs of ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404B1BE8
 * Callers:
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140355570 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     ?KiForceIdleParkUnparkDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404B1BC0 (-KiForceIdleParkUnparkDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x14027DA00 (KiRcuCheckQuiescent.c)
 *     KeTransitionProcessorParkState @ 0x1403DFF18 (KeTransitionProcessorParkState.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403E07B0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403E0820 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     Feature_ForceIdleReschedulingFix__private_IsEnabledNoReportingNoInline @ 0x1405C2F78 (Feature_ForceIdleReschedulingFix__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall KiForceIdleParkUnparkProcessor(struct _KPRCB *a1, __int64 a2, unsigned __int64 a3)
{
  struct _KAFFINITY_EX *v4; // rcx
  unsigned int Number; // edx
  int v6; // [rsp+38h] [rbp+10h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (_BYTE)a2 )
  {
    KiRcuCheckQuiescent(a1, a2, a3);
    if ( a1->PowerState.Parked )
    {
      if ( !a1->PowerState.SoftParked )
        goto LABEL_7;
      v4 = &KiForceIdleSoftParkRestoreMask;
    }
    else
    {
      v4 = &KiForceIdleUnparkRestoreMask;
    }
    KeInterlockedSetProcessorAffinityEx((__int64)v4, a1->Number);
    KeTransitionProcessorParkState(a1, 1u);
LABEL_7:
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v6);
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
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( a1->PrcbLock );
    }
    if ( (a1->IdleState & 1) == 0 )
      a1->IdleSchedule = 1;
    goto LABEL_20;
  }
  KeInterlockedClearProcessorAffinityEx((__int64)&KiForceIdleUnparkRestoreMask, Number);
  KeTransitionProcessorParkState(a1, 0);
}
