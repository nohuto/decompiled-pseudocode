/*
 * XREFs of NtUserSetWindowRgnEx @ 0x14029F2D0
 * Callers:
 *     <none>
 * Callees:
 *     SelectWindowRgn @ 0x140030A9C (SelectWindowRgn.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowRgn @ 0x1400F4A4C (xxxSetWindowRgn.c)
 *     MirrorRegion @ 0x1400F553C (MirrorRegion.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C (-IsCurrentProcessDwm@@YAHXZ.c)
 */

__int64 __fastcall NtUserSetWindowRgnEx(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // esi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagWND *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 1;
  v7 = EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v8;
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 40), (((*(_WORD *)(v9 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0) )
  {
    v5 = 0;
    goto LABEL_20;
  }
  Win32HM_LockIntoThread<0>(v7, v8, BugCheckParameter3);
  if ( (unsigned int)IsCurrentProcessDwm(v11) )
  {
    if ( (a3 & 4) != 0 )
    {
      if ( a2 )
      {
        v13 = UserValidateCopyRgn(a2);
        v14 = v13;
        if ( !v13
          || (v15 = *((_QWORD *)v10 + 5), (*(_BYTE *)(v15 + 26) & 0x40) != 0)
          && v13 > 2
          && (!(unsigned int)GreOffsetRgn(
                               v13,
                               (unsigned int)-*(_DWORD *)(v15 + 88),
                               (unsigned int)-*(_DWORD *)(v15 + 92))
           || !(unsigned int)MirrorRegion((__int64)v10, v14, 0)
           || !(unsigned int)GreOffsetRgn(
                               v14,
                               *(unsigned int *)(*((_QWORD *)v10 + 5) + 88LL),
                               *(unsigned int *)(*((_QWORD *)v10 + 5) + 92LL))) )
        {
          v5 = 0;
          goto LABEL_5;
        }
      }
      else
      {
        v14 = 1LL;
      }
      SelectWindowRgn(v10, v14, 0);
      goto LABEL_5;
    }
    v5 = xxxSetWindowRgn((__int64)v10, a2, a3 & 2);
  }
  else
  {
    v5 = 0;
    UserSetLastError(5);
  }
LABEL_5:
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v12);
LABEL_20:
  UserSessionSwitchLeaveCrit(v9);
  return v5;
}
