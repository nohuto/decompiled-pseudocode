/*
 * XREFs of ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140484B24
 * Callers:
 *     ?KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x140484A60 (-KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404B6CC0 (-KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     KiCheckPrcbAffinityEx @ 0x140370D80 (KiCheckPrcbAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x14039E490 (KeCountSetBitsAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     KiSendSoftwareInterrupt @ 0x14040F180 (KiSendSoftwareInterrupt.c)
 *     KeRemoveQueueDpcEx @ 0x14045A7C0 (KeRemoveQueueDpcEx.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404AD758 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 *     Feature_ForceIdleReschedulingFix__private_IsEnabledDeviceUsageNoInline @ 0x1405C49F4 (Feature_ForceIdleReschedulingFix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KiForceIdleUpdateSchedulerParkState(unsigned __int8 a1)
{
  unsigned __int64 v1; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  int v3; // ebx
  unsigned int i; // ebx
  int v5; // ebx
  struct _KPRCB *v6; // rax
  unsigned int j; // edi
  __int64 Prcb; // rbx
  struct _KPRCB *v9; // rdx
  char v10; // r14
  int v11; // ecx
  signed __int32 v12[8]; // [rsp+8h] [rbp-100h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v14; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v15[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v16; // [rsp+40h] [rbp-C8h]
  int v17; // [rsp+42h] [rbp-C6h]
  __int16 v18; // [rsp+46h] [rbp-C2h]
  struct _KAFFINITY_EX v19; // [rsp+48h] [rbp-C0h] BYREF
  struct _KAFFINITY_EX v20; // [rsp+158h] [rbp+50h] BYREF

  v1 = a1;
  memset_0(&v19.8, 0, sizeof(v19.8));
  memset_0(&v20.8, 0, sizeof(v20.8));
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)&v20.Count = 2097153LL;
  memset_0(&v20.8, 0, sizeof(v20.8));
  if ( KiForceIdlePendingDpcCount )
  {
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      if ( KeRemoveQueueDpcEx(KiProcessorBlock[i] + 35480, 0) )
        _InterlockedDecrement(&KiForceIdlePendingDpcCount);
      else
        KeAddProcessorAffinityEx(&v20.Count, i);
    }
    v3 = 0;
  }
  else
  {
    v3 = 1;
  }
  while ( KiForceIdlePendingDpcCount )
    _mm_pause();
  if ( (_BYTE)v1 )
  {
    *(_QWORD *)&v19.Count = 2097153LL;
    memset_0(&v19.8, 0, sizeof(v19.8));
    KiCopyAffinityEx(&v19, 0x20u, &KeActiveProcessors);
  }
  else
  {
    _InterlockedOr(v12, 0);
    *(_QWORD *)&v19.Count = 2097153LL;
    memset_0(&v19.8, 0, sizeof(v19.8));
    KiCopyAffinityEx(&v19, v19.Size, &KiForceIdleUnparkRestoreMask);
    KiOrAffinityEx(&v19, &KiForceIdleSoftParkRestoreMask, &v19, v19.Size);
  }
  if ( !v3 )
    KeAndAffinityEx2(&v19, &v20, (__int64)&v19);
  v5 = KeCountSetBitsAffinityEx(&v19.Count);
  if ( (unsigned int)KeCheckProcessorAffinityEx(&v19.Count, CurrentPrcb->Number) )
    KiForceIdlePendingDpcCount = v5 - 1;
  else
    KiForceIdlePendingDpcCount = v5;
  if ( (unsigned int)Feature_ForceIdleReschedulingFix__private_IsEnabledDeviceUsageNoInline() )
  {
    for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
    {
      Prcb = KeGetPrcb(j);
      if ( KiCheckPrcbAffinityEx(&v19, Prcb) )
      {
        if ( v9 == KeGetCurrentPrcb() )
          KiForceIdleParkUnparkProcessor((struct _KPRCB *)Prcb, v1);
        else
          KeInsertQueueDpc((PRKDPC)(Prcb + 35480), (PVOID)v1, 0LL);
      }
      else if ( !(_BYTE)v1 )
      {
        v10 = 0;
        v14 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(Prcb + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v14);
          while ( *(_QWORD *)(Prcb + 48) );
        }
        if ( (*(_BYTE *)(Prcb + 35) & 1) == 0
          && (*(_DWORD *)(Prcb + 33752) | *(_DWORD *)(*(_QWORD *)(Prcb + 36424) + 8LL) || *(_QWORD *)(Prcb + 33840)) )
        {
          *(_BYTE *)(Prcb + 14523) = 1;
          v10 = 1;
        }
        _InterlockedAnd64((volatile signed __int64 *)(Prcb + 48), 0LL);
        if ( v10 )
        {
          v11 = *(_DWORD *)(Prcb + 36);
          if ( KeGetPcr()->Prcb.Number != v11 )
            KiSendSoftwareInterrupt(v11, 2);
        }
      }
    }
  }
  else
  {
    v15[1] = (unsigned __int16 *)v19.Bitmap[0];
    v15[0] = (unsigned __int16 *)&v19;
    v13 = 0;
    v17 = 0;
    v18 = 0;
    v16 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v13, v15) )
    {
      v6 = (struct _KPRCB *)KeGetPrcb(v13);
      if ( v6 == KeGetCurrentPrcb() )
        KiForceIdleParkUnparkProcessor(v6, v1);
      else
        KeInsertQueueDpc(&v6->ForceIdleDpc, (PVOID)v1, 0LL);
    }
  }
}
