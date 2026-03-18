/*
 * XREFs of EditionDeactivateMitInput @ 0x14023FCE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WakeRIT @ 0x1401E1108 (WakeRIT.c)
 *     WaitForRitToCompleteLastCommand @ 0x1401E1228 (WaitForRitToCompleteLastCommand.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x140220B98 (MasterInputThreadPrepareForRitTakeover.c)
 *     ?CleanupMitIocpSupport@@YAX_N@Z @ 0x14026B918 (-CleanupMitIocpSupport@@YAX_N@Z.c)
 *     ??4?$SGWINEVENTgdwDeferWinEvent@K@@QEAAAEAKAEBK@Z @ 0x14026C6D0 (--4-$SGWINEVENTgdwDeferWinEvent@K@@QEAAAEAKAEBK@Z.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140274CD4 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     EditionPrepareHidForInputThreadMigration @ 0x140279AD0 (EditionPrepareHidForInputThreadMigration.c)
 */

void EditionDeactivateMitInput()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  bool v12; // cl
  __int64 v13; // rcx
  bool v14; // di
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  bool v31; // cl
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // [rsp+50h] [rbp+8h] BYREF

  EtwTraceDitShutdown();
  if ( *(_DWORD *)(W32GetUserSessionState(v1, v0) + 18800) )
  {
    if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_DWORD *)(W32GetUserSessionState(v3, v2) + 18800) = 0;
      EditionPrepareHidForInputThreadMigration();
      if ( *(_BYTE *)(W32GetUserSessionState(v5, v4) + 19288) )
      {
        UserSessionState = W32GetUserSessionState(v7, v6);
        KeSetEvent(*(PRKEVENT *)(UserSessionState + 19312), 1, 0);
      }
      if ( *(_BYTE *)(W32GetUserSessionState(v7, v6) + 18844) )
      {
        v11 = W32GetUserSessionState(v10, v9);
        KeSetEvent(*(PRKEVENT *)(v11 + 18856), 1, 0);
      }
      v35 = 0;
      SGWINEVENTgdwDeferWinEvent<unsigned long>::operator=(v10, &v35);
      CleanupMitIocpSupport(v12);
    }
    else
    {
      v13 = *(_QWORD *)&WPP_GLOBAL_Control;
      v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v2);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v18,
          v17,
          *(_QWORD *)(v16 + 69416),
          4,
          20,
          10,
          (__int64)&WPP_695bd6c02b8a3c654c69143288436f58_Traceguids);
      }
      *(_DWORD *)(W32GetUserSessionState(v13, v2) + 18784) = 1;
      _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v20, v19) + 16340), 0);
      MasterInputThreadPrepareForRitTakeover();
      *(_DWORD *)(W32GetUserSessionState(v22, v21) + 18800) = 0;
      if ( *(_BYTE *)(W32GetUserSessionState(v24, v23) + 19288) )
      {
        v27 = W32GetUserSessionState(v26, v25);
        KeSetEvent(*(PRKEVENT *)(v27 + 19312), 1, 0);
      }
      if ( *(_BYTE *)(W32GetUserSessionState(v26, v25) + 18844) )
      {
        v30 = W32GetUserSessionState(v29, v28);
        KeSetEvent(*(PRKEVENT *)(v30 + 18856), 1, 0);
      }
      v35 = 0;
      SGWINEVENTgdwDeferWinEvent<unsigned long>::operator=(v29, &v35);
      CleanupMitIocpSupport(v31);
      WakeRIT(8LL, v32);
      WaitForRitToCompleteLastCommand();
      *(_DWORD *)(W32GetUserSessionState(v34, v33) + 18784) = 0;
      EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters();
    }
  }
}
