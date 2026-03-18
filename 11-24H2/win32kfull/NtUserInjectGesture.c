/*
 * XREFs of NtUserInjectGesture @ 0x140298D20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _PostMessageCheckIL @ 0x140085AB8 (_PostMessageCheckIL.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     _FreeGestureInfo @ 0x140266FF0 (_FreeGestureInfo.c)
 *     AllocGestureInfo @ 0x14026761C (AllocGestureInfo.c)
 *     ValidateGestureInfo @ 0x14026CA44 (ValidateGestureInfo.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ValidateGestureCaller @ 0x1402B7FFC (ValidateGestureCaller.c)
 */

__int64 __fastcall NtUserInjectGesture(__int64 a1, int a2, __int64 a3, void *a4, volatile void *Address)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // ebx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  _BYTE v27[16]; // [rsp+30h] [rbp-C8h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-B8h] BYREF
  int v29; // [rsp+58h] [rbp-A0h]
  const void *v30; // [rsp+60h] [rbp-98h]
  __int128 v31; // [rsp+70h] [rbp-88h] BYREF
  __int128 v32; // [rsp+80h] [rbp-78h]
  __int128 v33; // [rsp+90h] [rbp-68h]
  SIZE_T Length; // [rsp+A0h] [rbp-58h]
  __int128 v35; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-40h]
  __int128 v37; // [rsp+C8h] [rbp-30h]
  SIZE_T v38; // [rsp+D8h] [rbp-20h]

  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v30 = 0LL;
  v9 = EnterCrit(0LL, 0LL);
  v10 = ValidateHwnd(a1);
  v12 = v10;
  if ( v10 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v9, v10);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v27);
    if ( a3 || !a4 || a2 )
    {
      v14 = 87;
    }
    else
    {
      v15 = *(_QWORD *)(v12 + 40);
      if ( *(char *)(v15 + 20) >= 0 && *(char *)(v15 + 19) >= 0 )
      {
        if ( !(unsigned int)ValidateGestureCaller(v9, v12) )
        {
LABEL_10:
          v13 = 0;
LABEL_24:
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v27);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v25);
          goto LABEL_25;
        }
        v31 = 0LL;
        v32 = 0LL;
        v33 = 0LL;
        Length = 0LL;
        RtlCopyFromUser(&v31, a4, 0x38uLL);
        v35 = v31;
        v36 = v32;
        v37 = v33;
        v38 = Length;
        v19 = Length;
        if ( (_DWORD)Length )
        {
          if ( Address )
            goto LABEL_16;
        }
        else if ( !Address )
        {
LABEL_16:
          if ( Address )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v16, v18);
            ProbeForRead(Address, v19, CurrentProcessWow64Process != 0 ? 1 : 4);
            v30 = (const void *)Address;
          }
          if ( (unsigned int)ValidateGestureInfo(&v35) )
          {
            v22 = AllocGestureInfo(v12, 0, (__int64)&v35, v30);
            v23 = v22;
            if ( v22 )
            {
              EtwTracePostInjectedGestureMessage(v12, v22);
              v24 = _HMObjectFromHandle(v23);
              v13 = PostMessageCheckIL(v12, 0x119u, *(unsigned int *)(v24 + 40), v23);
              if ( !v13 )
                FreeGestureInfo(v23);
              goto LABEL_24;
            }
          }
          goto LABEL_10;
        }
        v13 = 0;
        v29 = 0;
        UserSetLastError(87);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v27);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v20);
        goto LABEL_25;
      }
      v14 = 1400;
    }
    v13 = 0;
    UserSetLastError(v14);
    goto LABEL_24;
  }
  v13 = 0;
LABEL_25:
  UserSessionSwitchLeaveCrit(v11);
  return v13;
}
