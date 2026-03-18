/*
 * XREFs of NtUserSetInteractiveControlFocus @ 0x1402465B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x1400617A8 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     IsShellProcess @ 0x1400F7338 (IsShellProcess.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012B408 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x14022085C (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 */

unsigned __int64 __fastcall NtUserSetInteractiveControlFocus(unsigned __int16 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct InteractiveControlManager *v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  char v19; // [rsp+28h] [rbp-20h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = 0LL;
  v8 = v6;
  if ( !a3 )
    goto LABEL_8;
  if ( (unsigned int)IsShellProcess(*(_QWORD *)(v6 + 464)) )
  {
    CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)&v18, v9);
    v7 = ValidateHwnd(a3);
    if ( v19 )
    {
      v10 = v18;
      *(_BYTE *)(v18 + 1708) = 1;
    }
  }
  else
  {
    v7 = ValidateHwnd(a3);
  }
  if ( v7 )
  {
LABEL_8:
    Win32HM_LockIntoThread<1>(v8, v7, (__int64 *)BugCheckParameter3);
    v14 = InteractiveControlManager::Instance(v13, v12);
    v15 = (unsigned __int64)(unsigned int)~InteractiveControlManager::SetDeviceFocus((__int64)v14, a1, a2, v7) >> 31;
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v16);
    UserSessionSwitchLeaveCrit(v17);
    return v15;
  }
  else
  {
    UserSessionSwitchLeaveCrit(v10);
    return 0LL;
  }
}
