/*
 * XREFs of NtUserChangeWindowMessageFilterEx @ 0x1401998D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _ChangeWindowMessageFilterEx @ 0x14024ED84 (_ChangeWindowMessageFilterEx.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     RtlCopyToUser @ 0x1403D00E8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserChangeWindowMessageFilterEx(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // rdi
  int v12; // ebx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 Src; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v18[3]; // [rsp+28h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  Src = 0LL;
  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateReceivingHwnd(a1, 1LL);
  v11 = (struct tagWND *)v9;
  if ( v9 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v8, v9);
    if ( *(_QWORD *)(v8 + 464) != *(_QWORD *)(*((_QWORD *)v11 + 2) + 464LL) )
    {
      v13 = 5;
LABEL_22:
      v12 = 0;
      UserSetLastError(v13);
      goto LABEL_23;
    }
    v14 = *((_QWORD *)v11 + 5);
    if ( *(char *)(v14 + 20) < 0 || *(char *)(v14 + 19) < 0 )
    {
      v13 = 1400;
      goto LABEL_22;
    }
    if ( a3 <= 2 )
    {
      if ( a3 )
      {
        if ( a2 )
          goto LABEL_12;
      }
      else if ( !a2 )
      {
LABEL_12:
        if ( a4 )
        {
          v18[0] = 0LL;
          RtlCopyFromUser(v18, a4, 8uLL);
          Src = v18[0];
          if ( LODWORD(v18[0]) != 8 )
          {
            UserSetLastError(87);
            v12 = 0;
LABEL_23:
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v15);
            goto LABEL_24;
          }
        }
        else
        {
          LODWORD(Src) = 8;
        }
        v12 = ChangeWindowMessageFilterEx(v11, a2);
        if ( v12 && a4 )
          RtlCopyToUser(a4, &Src, 8uLL);
        goto LABEL_23;
      }
    }
    v13 = 87;
    goto LABEL_22;
  }
  v12 = 0;
LABEL_24:
  UserSessionSwitchLeaveCrit(v10);
  return v12;
}
