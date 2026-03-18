/*
 * XREFs of DpiPowerArbiterThread @ 0x1402BBB00
 * Callers:
 *     <none>
 * Callees:
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x140013AB0 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x14002A258 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x14002A980 (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x14002AE04 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x140042A14 (-DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z.c)
 *     DpiRemoveAdapter @ 0x14007C36C (DpiRemoveAdapter.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1401912BC (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkResumeMemorySegments @ 0x14019E428 (DxgkResumeMemorySegments.c)
 *     DxgkSuspendMemorySegments @ 0x14019E758 (DxgkSuspendMemorySegments.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402BA104 (DxgkReleaseAdapterCoreSync.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1402BA7DC (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     DxgkShutdownBootGraphics @ 0x1402BC5C0 (DxgkShutdownBootGraphics.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1402BC7C8 (DxgkIsAdapterCoreSyncAcquired.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1402BC8D0 (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     ?MonitorAdapterPowerChange@@YAJPEAXEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402BCA3C (-MonitorAdapterPowerChange@@YAJPEAXEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DmmAdapterPowerChange@@YAJQEAXE@Z @ 0x1402BCF08 (-DmmAdapterPowerChange@@YAJQEAXE@Z.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1402BD284 (DpiIsPowerRuntimeDStateTransition.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1402BD2E0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1402BDF08 (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 */

void __fastcall DpiPowerArbiterThread(_QWORD *StartContext)
{
  __int64 v1; // rdi
  char v2; // r15
  NTSTATUS v3; // esi
  bool v4; // zf
  void *v5; // rax
  NTSTATUS v6; // eax
  struct _LIST_ENTRY *PowerActionQueueEntry; // r13
  GUID *v8; // rcx
  int Blink; // edx
  __int64 Blink_low; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // r12
  bool v12; // r14
  bool v13; // bl
  int v14; // eax
  DXGADAPTER **v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  char started; // al
  __int64 v19; // r8
  __int64 v20; // rcx
  DXGADAPTER *v21; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v22; // r8
  int v23; // r15d
  __int64 v24; // r8
  char IsPowerRuntimeDStateTransition; // r12
  __int64 v26; // rcx
  unsigned int v27; // edx
  char *v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rbx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // r15d
  struct _KTIMER *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  unsigned int v45; // edx
  int v46; // r14d
  int v47; // eax
  int v48; // edx
  DXGADAPTER *v49; // rcx
  char v50; // [rsp+31h] [rbp-2Fh]
  unsigned __int8 v51[8]; // [rsp+38h] [rbp-28h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v52; // [rsp+40h] [rbp-20h] BYREF
  GUID ActivityId; // [rsp+48h] [rbp-18h] BYREF

  v1 = StartContext[8];
  v2 = 0;
  v3 = 0;
  v4 = *(_DWORD *)(v1 + 4120) == 7;
  *(_QWORD *)(v1 + 4096) = KeGetCurrentThread();
  if ( !v4 )
  {
    v5 = (void *)(v1 + 4072);
    do
    {
      v6 = KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
      v3 = v6;
      if ( v6 )
      {
        WdLogSingleEntry1(2LL, v6);
        WdLogGlobalForLineNumber = 2025;
      }
      else
      {
        PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
        if ( PowerActionQueueEntry )
        {
          while ( 1 )
          {
            v8 = (GUID *)((char *)&PowerActionQueueEntry[4].Blink + 4);
            v50 = 0;
            v51[0] = 0;
            v3 = 0;
            ActivityId = 0LL;
            if ( PowerActionQueueEntry == (struct _LIST_ENTRY *)-76LL )
              goto LABEL_6;
            v28 = (char *)(*(_QWORD *)&v8->Data1 - *(_QWORD *)&ActivityId.Data1);
            if ( *(_QWORD *)&v8->Data1 == *(_QWORD *)&ActivityId.Data1 )
              v28 = *(char **)((char *)&PowerActionQueueEntry[5].Flink + 4) - *(_QWORD *)ActivityId.Data4;
            if ( !v28 )
LABEL_6:
              EtwActivityIdControl(3u, &ActivityId);
            else
              ActivityId = *v8;
            DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x45u, 0, &v52, v51);
            Blink = (int)PowerActionQueueEntry[2].Blink;
            Blink_low = LODWORD(PowerActionQueueEntry[1].Blink);
            v11 = v52;
            v12 = Blink != 64;
            v13 = Blink != 64;
            if ( LODWORD(PowerActionQueueEntry[1].Blink) == 1 )
              break;
            if ( LODWORD(PowerActionQueueEntry[1].Blink) != 2 )
            {
              if ( LODWORD(PowerActionQueueEntry[1].Blink) == 3 || LODWORD(PowerActionQueueEntry[1].Blink) == 4 )
              {
                v41 = *(_DWORD *)(v1 + 4120);
                if ( v41 == 3 || !*(_QWORD *)(v1 + 4032) )
                {
                  *(_DWORD *)(v1 + 4120) = 3;
                  v2 = 0;
                }
                else
                {
                  if ( (_DWORD)Blink_low == 4 )
                  {
                    KeClearEvent((PRKEVENT)(v1 + 4264));
                    LODWORD(PowerActionQueueEntry[4].Blink) = 0;
                    v13 = 0;
                    KeSetEvent((PRKEVENT)&PowerActionQueueEntry[3], 0, 0);
                    PowerActionQueueEntry = 0LL;
                  }
                  if ( v41 != 1 )
                    v3 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 4032), 3LL);
                  v42 = *(struct _KTIMER **)(v1 + 4032);
                  if ( v42 )
                    DXGADAPTER::PrepareToRemove(v42);
                  if ( v41 != 1 )
                    v3 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 4032), 3u, Blink_low);
                  if ( *(_QWORD *)(v1 + 488) )
                  {
                    KeSetEvent((PRKEVENT)(v1 + 4240), 0, 0);
                    PoFxUnregisterDevice(*(_QWORD *)(v1 + 488), v43, v44);
                    *(_QWORD *)(*(_QWORD *)(v1 + 4032) + 3232LL) = 0LL;
                    *(_QWORD *)(v1 + 488) = 0LL;
                  }
                  if ( v41 == 1 )
                  {
                    v45 = 5;
                    if ( (*(_BYTE *)(v1 + 4040) & 0x18) == 0 && *(_BYTE *)(v1 + 1160) )
                      v45 = 2;
                    v3 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 4032), v45, Blink_low);
                  }
                  DpiRemoveAdapter(v1, *(_BYTE *)(v1 + 1160), *(_BYTE *)(v1 + 1161), 1);
                  *(_DWORD *)(v1 + 4120) = 3;
                  KeSetEvent((PRKEVENT)(v1 + 4264), 0, 0);
LABEL_36:
                  v2 = 0;
                }
LABEL_37:
                if ( v3 >= 0 )
                  goto LABEL_38;
              }
              else
              {
                if ( LODWORD(PowerActionQueueEntry[1].Blink) != 5 )
                {
                  if ( LODWORD(PowerActionQueueEntry[1].Blink) == 6 )
                  {
                    v30 = *(_DWORD *)(v1 + 4124);
                    if ( (v30 & 4) != 0 )
                    {
                      v31 = *(_QWORD *)(v1 + 3000);
                      *(_DWORD *)(v1 + 4124) = v30 & 0xFFFFFFFB;
                      v32 = (*(__int64 (__fastcall **)(__int64))(v1 + 3032))(v31);
                      if ( v32 < 0 )
                      {
                        WdLogSingleEntry4(0LL, 275LL, 21LL, *(_QWORD *)(v1 + 3032), v32);
                        WdLogGlobalForLineNumber = 2661;
                      }
                    }
                    v33 = *(_DWORD *)(v1 + 4124);
                    v34 = *(_QWORD *)(v1 + 4032);
                    if ( (v33 & 1) != 0 )
                    {
                      *(_DWORD *)(v1 + 4124) = v33 & 0xFFFFFFFE;
                      v35 = DxgkReleaseAdapterCoreSync(v34, 5u, Blink_low);
                      v3 = v35;
                      if ( v35 < 0 )
                      {
                        WdLogSingleEntry3(0LL, 275LL, 21LL, v35);
                        WdLogGlobalForLineNumber = 2682;
                      }
                    }
                    else
                    {
                      v36 = DxgkResumeMemorySegments(v34);
                      v3 = v36;
                      v37 = v36;
                      if ( v36 < 0 )
                      {
                        WdLogSingleEntry1(2LL, v36);
                        WdLogGlobalForLineNumber = 2701;
                      }
                      if ( (*(_DWORD *)(v1 + 4124) & 2) == 0
                        && (int)DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 4032), 2u, Blink_low) < 0 )
                      {
                        WdLogSingleEntry3(0LL, 275LL, 21LL, v37);
                        WdLogGlobalForLineNumber = 2725;
                      }
                      *(_DWORD *)(v1 + 4124) &= ~2u;
                    }
                    *(_DWORD *)(v1 + 4120) = 6;
                    v13 = v12;
                  }
                  else
                  {
                    if ( LODWORD(PowerActionQueueEntry[1].Blink) != 7 )
                      goto LABEL_39;
                    if ( *(_DWORD *)(v1 + 4120) == 1 )
                      v3 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 4032), 5u, Blink_low);
                    *(_DWORD *)(v1 + 4120) = 7;
                  }
                  goto LABEL_37;
                }
                if ( (Blink & 1) != 0 )
                {
                  DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 4032), 3LL);
                  DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 4032), 1);
                  v2 = 1;
                }
                else if ( (Blink & 2) != 0 )
                {
                  v2 = 0;
                }
                else
                {
                  v38 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 4032), 2LL);
                  v3 = v38;
                  if ( v38 < 0 )
                  {
                    WdLogSingleEntry1(2LL, v38);
                    WdLogGlobalForLineNumber = 2571;
                    goto LABEL_39;
                  }
                  v2 = 1;
                }
                if ( ((__int64)PowerActionQueueEntry[2].Blink & 1) == 0 )
                {
                  v39 = DxgkSuspendMemorySegments(*(_QWORD *)(v1 + 4032));
                  v3 = v39;
                  if ( v39 < 0 )
                  {
                    WdLogSingleEntry1(3LL, v39);
                    WdLogGlobalForLineNumber = 2598;
LABEL_120:
                    if ( v2 == 1 )
                    {
                      v47 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 4032), 5u, Blink_low);
                      v2 = 0;
                      if ( v47 < 0 )
                      {
                        WdLogSingleEntry3(0LL, 275LL, 21LL, v47);
                        WdLogGlobalForLineNumber = 2801;
                      }
                      goto LABEL_39;
                    }
LABEL_38:
                    v2 = 0;
                    goto LABEL_39;
                  }
                  v50 = 1;
                }
                if ( ((__int64)PowerActionQueueEntry[2].Blink & 4) == 0
                  || (v40 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 3024))(*(_QWORD *)(v1 + 3000)), v3 = v40, v40 >= 0) )
                {
                  *(_DWORD *)(v1 + 4120) = 5;
                  *(_DWORD *)(v1 + 4124) |= LODWORD(PowerActionQueueEntry[2].Blink);
                  goto LABEL_37;
                }
                WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 3024), v40);
                WdLogGlobalForLineNumber = 2621;
              }
              if ( v50 == 1 )
              {
                v46 = DxgkResumeMemorySegments(*(_QWORD *)(v1 + 4032));
                if ( v46 < 0 )
                {
                  WdLogSingleEntry1(2LL, v3);
                  WdLogGlobalForLineNumber = 2781;
                  v3 = v46;
                }
              }
              goto LABEL_120;
            }
            if ( *(_DWORD *)(v1 + 4120) == 1 )
            {
              v21 = *(DXGADAPTER **)(v1 + 4032);
              v22 = v52;
              *(_DWORD *)(v1 + 4120) = 2;
              v23 = (int)PowerActionQueueEntry[2].Blink;
              MonitorAdapterPowerChange(v21, 0, v22);
              IsPowerRuntimeDStateTransition = DpiIsPowerRuntimeDStateTransition(v1);
              if ( IsPowerRuntimeDStateTransition )
              {
                if ( v23 != 64 )
                {
                  WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
                  LODWORD(PowerActionQueueEntry[4].Blink) = 0;
                  WdLogGlobalForLineNumber = 2317;
                  v13 = 0;
                  KeSetEvent((PRKEVENT)&PowerActionQueueEntry[3], 0, 0);
                  PowerActionQueueEntry = 0LL;
                  if ( *(_BYTE *)(v1 + 5816) )
                    DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 4032), PowerDeviceD0, 0);
                }
              }
              v3 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 4032), 5u, v24);
              if ( IsPowerRuntimeDStateTransition )
              {
                if ( v23 == 64 )
                {
                  DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
                  if ( *(_BYTE *)(v1 + 5816) )
                    DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 4032), PowerDeviceD0, 0);
                }
                KeSetEvent((PRKEVENT)(v1 + 4240), 0, 0);
                DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel(v1);
              }
              goto LABEL_36;
            }
LABEL_39:
            if ( v13 )
            {
              LODWORD(PowerActionQueueEntry[4].Blink) = v3;
              KeSetEvent((PRKEVENT)&PowerActionQueueEntry[3], 0, 0);
            }
            if ( v51[0] )
              DisplayScenarioContextDissociate(&v52);
            PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
            if ( !PowerActionQueueEntry )
              goto LABEL_44;
          }
          if ( ((*(_DWORD *)(v1 + 4120) - 1) & 0xFFFFFFFD) == 0 )
          {
            if ( (unsigned __int8)DpiIsPowerRuntimeDStateTransition(v1) )
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v26, 5, 0);
            goto LABEL_39;
          }
          DxgkShutdownBootGraphics(0LL, 0LL);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3928), 1u);
          ExReleaseResourceLite((PERESOURCE)(v1 + 3928));
          KeLeaveCriticalRegion();
          v14 = (int)PowerActionQueueEntry[2].Blink;
          v15 = (DXGADAPTER **)(v1 + 4032);
          v16 = *(_QWORD *)(v1 + 4032);
          if ( (v14 & 0x40) != 0 )
          {
            DxgkAcquireAdapterCoreSync(v16, 4LL);
            if ( (unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*v15, 2LL) )
            {
              WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
              WdLogGlobalForLineNumber = 2108;
              goto LABEL_12;
            }
            WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
            WdLogGlobalForLineNumber = 2099;
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
            v3 = -1073741823;
LABEL_26:
            v13 = v12;
            goto LABEL_39;
          }
          v29 = 6LL;
          if ( (v14 & 0x98) == 0 )
            v29 = 3LL;
          DxgkAcquireAdapterCoreSync(v16, v29);
LABEL_12:
          if ( *(_DWORD *)(v1 + 284) == 1 )
          {
            MonitorAdapterPowerChange(*v15, 1u, v11);
            DmmAdapterPowerChange(*v15, 1u);
          }
          DmmResetModeState(*v15, 0xFFFFFFFF);
          v17 = (int)PowerActionQueueEntry[2].Blink;
          if ( (v17 & 0x20) != 0 )
          {
            v48 = 4;
          }
          else if ( (v17 & 0x10) != 0 )
          {
            v48 = 3;
          }
          else if ( (v17 & 8) != 0 )
          {
            v48 = 2;
          }
          else
          {
            if ( (v17 & 0x80u) == 0 )
            {
              if ( (v17 & 0x40) != 0 )
              {
                WdLogSingleEntry3(9LL, v1, 1LL, 0LL);
                WdLogGlobalForLineNumber = 2173;
                if ( *(_BYTE *)(v1 + 5816) )
                  DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 4032), PowerDeviceD3, 1u);
                started = DpiStartSuspendingAdapter((KSPIN_LOCK *)v1);
                v20 = *(_QWORD *)(v1 + 4032);
                if ( started )
                {
                  DXGADAPTER::ApplyCoreSyncAction(v20, 3);
                  DpiFinishSuspendAdapter((struct _FDO_CONTEXT *)v1);
                  if ( *(_DWORD *)(v1 + 4120) == 1 )
                  {
                    if ( *(_BYTE *)(v1 + 5816) )
                      DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 4032), PowerDeviceD3, 0);
                    goto LABEL_25;
                  }
                  WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
                  v20 = *(_QWORD *)(v1 + 4032);
                  v27 = 5;
                  WdLogGlobalForLineNumber = 2213;
                }
                else
                {
                  v27 = 2;
                }
                DxgkReleaseAdapterCoreSync(v20, v27, v19);
                DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
                if ( *(_BYTE *)(v1 + 5816) )
                  DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 4032), PowerDeviceD0, 0);
                goto LABEL_26;
              }
              v49 = *(DXGADAPTER **)(v1 + 4032);
              v48 = 1;
LABEL_131:
              DXGADAPTER::ApplyCoreSyncAction((__int64)v49, v48);
LABEL_25:
              *(_DWORD *)(v1 + 4120) = 1;
              goto LABEL_26;
            }
            v48 = 5;
          }
          v49 = *v15;
          goto LABEL_131;
        }
      }
LABEL_44:
      v5 = (void *)(v1 + 4072);
    }
    while ( *(_DWORD *)(v1 + 4120) != 7 );
  }
  PsTerminateSystemThread(v3);
}
