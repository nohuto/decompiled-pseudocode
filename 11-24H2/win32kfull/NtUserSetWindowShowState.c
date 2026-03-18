/*
 * XREFs of NtUserSetWindowShowState @ 0x14029F460
 * Callers:
 *     <none>
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x140025C9C (GetMonitorWorkRectForWindow.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400F74E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1402D22E0 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, struct tagRECT *a4)
{
  struct tagRECT *v4; // r14
  __int64 v6; // r13
  const struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // rsi
  BOOL v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  const struct tagWND *v15; // r15
  int v16; // ecx
  __int64 v17; // rdx
  int v18; // eax
  const struct tagTHREADINFO *v19; // rax
  struct tagMONITOR *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  ULONG_PTR BugCheckParameter3[4]; // [rsp+20h] [rbp-98h] BYREF
  struct tagRECT *v26; // [rsp+40h] [rbp-78h]
  __int128 v27; // [rsp+48h] [rbp-70h] BYREF
  struct tagRECT v28; // [rsp+60h] [rbp-58h] BYREF
  __int128 v29; // [rsp+70h] [rbp-48h] BYREF

  v4 = a4;
  v6 = a2;
  v26 = a4;
  v8 = (const struct tagTHREADINFO *)EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v11 = (struct tagWND *)v9;
  v12 = 0;
  if ( v9 )
  {
    v10 = (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v8, v9);
      v15 = *(const struct tagWND **)(*((_QWORD *)PtiCurrent(v14, v13) + 62) + 328LL);
      if ( v15
        && (LOBYTE(v18) = IAMThreadAccessGranted(v8), v18)
        && *((_QWORD *)v8 + 58) == *(_QWORD *)(*((_QWORD *)v15 + 2) + 464LL) )
      {
        v19 = (const struct tagTHREADINFO *)*((_QWORD *)v11 + 2);
        if ( v19 != v8 )
        {
          if ( *((_QWORD *)v19 + 89) )
          {
            v16 = 5023;
            goto LABEL_5;
          }
          if ( a3 )
          {
            v16 = 1004;
            goto LABEL_5;
          }
          if ( (unsigned int)v6 <= 5 )
          {
            if ( !v4 )
              goto LABEL_25;
            if ( (unsigned __int64)v4 >= MmUserProbeAddress )
              v4 = (struct tagRECT *)MmUserProbeAddress;
            v28 = *v4;
            v4 = &v28;
            v26 = &v28;
            v20 = _MonitorFromWindowInternal(v11, 2u, 1);
            if ( v20 )
            {
              v27 = *(_OWORD *)GetMonitorWorkRectForWindow((__int64)&v27, (__int64)v20, v15);
              v29 = 0LL;
              if ( (unsigned int)IntersectRect(&v29, &v28.left, (int *)&v27) )
              {
                v22 = v29 - *(_QWORD *)&v28.left;
                if ( (_QWORD)v29 == *(_QWORD *)&v28.left )
                  v22 = *((_QWORD *)&v29 + 1) - *(_QWORD *)&v28.right;
                if ( !v22 )
                {
                  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v21);
                  if ( !(unsigned __int8)ShouldVirtualizeWindowRect(v11, CurrentThreadDpiAwarenessContext)
                    || (unsigned int)TransformRectBetweenCoordinateSpaces(&v28, &v28, v11, v15) )
                  {
LABEL_25:
                    v12 = xxxSetWindowShowState(v11, byte_14035A160[v6], v4);
                    goto LABEL_26;
                  }
                }
              }
            }
          }
        }
        v16 = 87;
      }
      else
      {
        v16 = 5;
      }
LABEL_5:
      UserSetLastError(v16);
LABEL_26:
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v17);
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v12;
}
