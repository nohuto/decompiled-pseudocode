/*
 * XREFs of NtUserSetWindowBand @ 0x140246BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1400F4310 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1400F5A44 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     IsPseudoHwnd @ 0x1401C2E54 (IsPseudoHwnd.c)
 *     Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline @ 0x140292678 (Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserSetWindowBand(__int64 a1, struct tagWND *a2, int a3)
{
  int v3; // esi
  int v7; // r15d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // r13
  char v12; // di
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  int v16; // ecx
  __int64 v17; // rdx
  ULONG_PTR v19[2]; // [rsp+20h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF
  struct tagWND *v21; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v21 = 0LL;
  v7 = 1;
  v8 = EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v11 = (struct tagWND *)v9;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 40);
    if ( (((*(_WORD *)(v10 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v8, v9, v19);
      v12 = 1;
      if ( (unsigned int)Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( (unsigned int)IsPseudoHwnd((unsigned __int64)a2) )
        {
          v12 = 0;
        }
        else
        {
          a2 = (struct tagWND *)ValidateHwndStrict(v14);
          if ( !a2 )
            goto LABEL_26;
        }
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, &v21) )
          goto LABEL_26;
        a2 = v21;
      }
      UserSessionState = W32GetUserSessionState(v14, v13);
      if ( GetProp((__int64)v11, *(unsigned __int16 *)(UserSessionState + 41418), 1u) )
      {
        v16 = 5;
      }
      else
      {
        if ( (unsigned __int64)a2 < 0xFFFFFFFFFFFFFFFEuLL || a3 == 1 )
        {
          BugCheckParameter3[0] = -1LL;
          BugCheckParameter3[1] = 0LL;
          if ( !(unsigned int)Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFCuLL || (v12 = 1, a2 == (struct tagWND *)1) )
              v12 = 0;
          }
          if ( v12 )
            Win32HM_LockIntoThread<1>(v8, (__int64)a2, (__int64 *)BugCheckParameter3);
          if ( (unsigned int)Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline()
            && (unsigned int)IsImmersiveBroker(*(_QWORD *)(v8 + 464)) )
          {
            v7 = 3;
          }
          v3 = xxxSetWindowBand(v11, (__int64)a2, a3, v7);
          Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v17);
          goto LABEL_26;
        }
        v16 = 87;
      }
      UserSetLastError(v16);
LABEL_26:
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v19, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v3;
}
