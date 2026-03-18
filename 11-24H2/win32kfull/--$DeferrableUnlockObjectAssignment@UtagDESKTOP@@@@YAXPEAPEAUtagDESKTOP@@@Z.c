/*
 * XREFs of ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B4A08
 * Callers:
 *     _DestroyMenu @ 0x140070FA0 (_DestroyMenu.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1400842D0 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     DestroyClass @ 0x1400B4778 (DestroyClass.c)
 *     InternalRegisterClassEx @ 0x1400B54C0 (InternalRegisterClassEx.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x14023AD50 (-CleanupDirtyDesktops@@YAXXZ.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x14023AE10 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x14023AFEC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?InitiateWin32kCleanup@@YAXXZ @ 0x140272F14 (-InitiateWin32kCleanup@@YAXXZ.c)
 *     _CloseDesktop @ 0x14028628C (_CloseDesktop.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1402729BC (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140272A68 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall DeferrableUnlockObjectAssignment<tagDESKTOP>(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  _BYTE v7[48]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (_QWORD *)*a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( IS_USERCRIT_OWNED_SHAREDONLY((__int64)a1, a2, a3) )
    {
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>(v7);
      if ( !v3[45] )
        v3[45] = v3;
      UserSessionState = W32GetUserSessionState(v5, v4);
      LockIntoDeferredUnlockObjectAssignmentList(UserSessionState + 19800, v3 + 45);
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>(v7);
    }
    else
    {
      ObfDereferenceObject(v3);
    }
  }
}
