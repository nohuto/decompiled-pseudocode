/*
 * XREFs of xxxMNEndMenuState @ 0x14009A5F0
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxUnlockMenuState @ 0x14009A520 (xxxUnlockMenuState.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x14009A560 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x14009A5A4 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxCallHandleMenuMessages @ 0x1402270AC (xxxCallHandleMenuMessages.c)
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14006EFFC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxMNEndMenuStateInternal @ 0x14009AEB0 (xxxMNEndMenuStateInternal.c)
 *     MNFlushDestroyedPopups @ 0x14021A820 (MNFlushDestroyedPopups.c)
 *     MNFreePopup @ 0x14024F1F0 (MNFreePopup.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x140264D88 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstr.c)
 *     NullifyLookasideRef @ 0x140264DB0 (NullifyLookasideRef.c)
 *     MNUnlinkDelayedFreePopups @ 0x1402B40A0 (MNUnlinkDelayedFreePopups.c)
 */

_QWORD *__fastcall xxxMNEndMenuState(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF

  v3 = PtiCurrent(a1, a2);
  v6 = PtiCurrent(v5, v4);
  v16 = (_QWORD *)gSmartObjNullRef;
  v7 = *((_QWORD *)v6 + 209);
  v17 = v7;
  *((_QWORD *)v6 + 209) = &v17;
  *(_DWORD *)(a1 + 8) |= 0x1000000u;
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( *(_QWORD *)a1 )
    {
      MNFlushDestroyedPopups();
      MNUnlinkDelayedFreePopups(*(_QWORD *)a1);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v16, *(_QWORD *)a1);
      *(_DWORD *)*v16 |= 0x20000000u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v18, *(_QWORD *)a1);
      MNFreePopup(v18);
    }
    xxxMNEndMenuStateInternal(v3, a1);
    if ( !*v16 || (*(_DWORD *)*v16 & 0x40000000) != 0 )
    {
      if ( *v16 )
        *(_DWORD *)*v16 &= ~0x20000000u;
    }
    else
    {
      v8 = (_DWORD *)*v16;
      if ( v8 == (_DWORD *)(W32GetUserSessionState(*v16, v7) + 65832) )
      {
        UserSessionState = W32GetUserSessionState(v10, v9);
        *(_DWORD *)(UserSessionState + 67056) &= ~0x800000u;
        v14 = W32GetUserSessionState(v13, v12);
        NullifyLookasideRef(*(_QWORD *)(v14 + 65920));
      }
      else
      {
        FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU,NSInstrumentation::CTypeIsolation<24576,96>>(*v16);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v16, v7);
}
