/*
 * XREFs of ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140093C68
 * Callers:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x140093938 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x140093B44 (-MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x140093BC8 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 * Callees:
 *     GreMovePointer @ 0x1400240B0 (GreMovePointer.c)
 *     GreSetPointer @ 0x1400285BC (GreSetPointer.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 *     ??0EnterLeaveSharedCritIfNotHeld@@QEAA@XZ @ 0x1402130E8 (--0EnterLeaveSharedCritIfNotHeld@@QEAA@XZ.c)
 *     ?ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z @ 0x140219AE8 (-ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x14021E9EC (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x1402D9D08 (-DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ.c)
 *     ?DwmMovePointer@CursorApiRouter@@AEAAXHHW4CursorMoveMode@1@PEAX_K@Z @ 0x1402D9D6C (-DwmMovePointer@CursorApiRouter@@AEAAXHHW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z @ 0x1402D9E20 (-DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z.c)
 *     ?EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ @ 0x1402D9E74 (-EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ.c)
 *     ?HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z @ 0x1402DA510 (-HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z.c)
 *     ?IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ @ 0x1402DA5E0 (-IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ.c)
 *     ?UpdateRoutingState@CursorApiRouter@@AEAA?AW4RoutingStateActionNeeded@1@_N@Z @ 0x1402DAFA0 (-UpdateRoutingState@CursorApiRouter@@AEAA-AW4RoutingStateActionNeeded@1@_N@Z.c)
 */

void __fastcall CursorApiRouter::MovePointerImpl(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int updated; // eax
  unsigned int v17; // r14d
  unsigned int v18; // edi
  CursorApiRouter *v19; // rcx
  CursorApiRouter *v20; // rcx
  CursorApiRouter *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  int v25; // [rsp+20h] [rbp-38h]
  int v26; // [rsp+28h] [rbp-30h]
  char v27; // [rsp+70h] [rbp+18h] BYREF

  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 40), 0);
  v12 = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 24) = a3;
  *(_DWORD *)(a1 + 28) = a4;
  LOBYTE(v15) = *(_DWORD *)(W32GetUserSessionState(v14, v13) + 36348) != 0;
  updated = CursorApiRouter::UpdateRoutingState(a1, v15);
  v17 = *(_DWORD *)(a1 + 32);
  v18 = updated;
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 40), 0LL);
  CursorApiRouter::HandleRoutingStateAction(a1, v18);
  if ( v17 == 1 )
  {
    if ( v12 == 2 )
    {
      EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld((EnterLeaveSharedCritIfNotHeld *)&v27);
      CursorApiRouter::DestroyGreTrailsTimerIfExists(v21);
      GreSetPointer(0LL, *(_DWORD *)a1, 0, 0);
      if ( v27 )
        UserSessionSwitchLeaveCrit();
    }
    CursorApiRouter::DwmMovePointer(a1, a3, a4, a6, a7, a8);
  }
  else if ( v17 == 2 )
  {
    if ( v12 == 1 )
    {
      EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld((EnterLeaveSharedCritIfNotHeld *)&v27);
      CursorApiRouter::DwmSetPointer((CursorApiRouter *)a1, 0LL);
      if ( CursorApiRouter::IsGreTrailsTimerNeeded(v19) )
        CursorApiRouter::EnsureGreTrailsTimer(v20);
      if ( v27 )
        UserSessionSwitchLeaveCrit();
    }
    GreMovePointer(a2, a3, a4, a5);
  }
  if ( v17 != v12 )
  {
    EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld((EnterLeaveSharedCritIfNotHeld *)&v27);
    CursorApiRouter::ForceSetCurrentCursorShape((CursorApiRouter *)a1);
    if ( v27 )
      UserSessionSwitchLeaveCrit();
    LOBYTE(v26) = IsInputProcessingActivated();
    LOBYTE(v25) = (unsigned int)IsRemoteConnection() != 0;
    LOBYTE(v24) = *(_DWORD *)(W32GetUserSessionState(v23, v22) + 19152) != 0;
    InputTraceLogging::Cursor::Api::ChangeCursorApiMode(0LL, v12, v17, v24, v25, v26);
  }
}
