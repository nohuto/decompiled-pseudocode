/*
 * XREFs of ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F4E58
 * Callers:
 *     ?zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1401F4F34 (-zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1401F5048 (-zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 *     ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1401F50FC (-zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 * Callees:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x140054FA0 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ResetAccelerationCurves @ 0x1401289C0 (ResetAccelerationCurves.c)
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401433C0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     RIMOnDisplayStateChange @ 0x14017B684 (RIMOnDisplayStateChange.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1401F3A34 (-Broadcast@InputConfig@@SAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CInputConfig::_zzzNotifyExternalComponents(CInputConfig *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  unsigned int i; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int (*v9)(void); // rax
  __int64 v10; // rdx
  void (*v11)(void); // rax

  if ( CInputConfig::LockExclusivelyHeld((__int64)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 767);
  RIMOnDisplayStateChange();
  v2 = *((_BYTE *)this + 1505);
  UserSessionState = W32GetUserSessionState(v3);
  CCursorClip::OnDisplayStateChange(*(_QWORD *)(UserSessionState + 36296), v2 != 0);
  for ( i = 0; i < 2; ++i )
    ResetAccelerationCurves(i);
  v8 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48);
  v9 = *(int (**)(void))(v8 + 2720);
  if ( v9 )
  {
    if ( v9() >= 0 )
    {
      v8 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, v10) + 48);
      v11 = *(void (**)(void))(v8 + 2728);
      if ( v11 )
        v11();
    }
  }
  InputConfig::Broadcast(v8);
}
