/*
 * XREFs of NtUserUpdateWindowTrackingInfo @ 0x1402A1AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x140067FA4 (-IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     ?GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ @ 0x14021E180 (-GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ.c)
 *     UpdateSizeTrackingInfo @ 0x1402AAA4C (UpdateSizeTrackingInfo.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1402C1144 (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 */

__int64 __fastcall NtUserUpdateWindowTrackingInfo(__int64 a1, __int64 *a2, __int64 *a3)
{
  const struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  const struct tagWND *v9; // rsi
  int updated; // edi
  unsigned int v11; // edx
  __int64 v12; // rdx
  ShellWindowManagement *v13; // rcx
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD v20[2]; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  v6 = (const struct tagTHREADINFO *)EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v9 = (const struct tagWND *)v7;
  updated = 0;
  if ( v7 )
  {
    v8 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v6, v7);
      if ( IsShellParticipatesInSizing(v9, v11) )
      {
        if ( *((_QWORD *)v6 + 58) == *((_QWORD *)ShellWindowManagement::GetThread(v13, v12) + 58)
          && (LOBYTE(v16) = IAMThreadAccessGranted(v6), v16) )
        {
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (__int64 *)MmUserProbeAddress;
          v17 = *a2;
          v20[0] = *a2;
          if ( (unsigned __int64)a3 >= MmUserProbeAddress )
            a3 = (__int64 *)MmUserProbeAddress;
          v18 = *a3;
          v22 = *a3;
          if ( (int)v17 > 0
            && SHIDWORD(v17) > 0
            && (int)v18 > 0
            && SHIDWORD(v18) > 0
            && (int)v17 >= (int)v18
            && SHIDWORD(v20[0]) >= SHIDWORD(v22) )
          {
            ((void (__fastcall *)(const struct tagWND *, _QWORD *, __int64 *, __int64))ShellWindowManagement::TransformWindowTrackInfo)(
              v9,
              v20,
              &v22,
              1LL);
            updated = UpdateSizeTrackingInfo(v9, v20, &v22);
            goto LABEL_6;
          }
          v14 = 87;
        }
        else
        {
          v14 = 5;
        }
      }
      else
      {
        v14 = 5023;
      }
      UserSetLastError(v14);
LABEL_6:
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v15);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return updated;
}
