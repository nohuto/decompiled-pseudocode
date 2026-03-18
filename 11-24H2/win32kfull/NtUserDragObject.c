/*
 * XREFs of NtUserDragObject @ 0x140293D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     xxxDragObject @ 0x1402DF924 (xxxDragObject.c)
 */

__int64 __fastcall NtUserDragObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rdx
  ULONG_PTR v20[2]; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-38h] BYREF
  ULONG_PTR v22[2]; // [rsp+50h] [rbp-28h] BYREF

  v9 = EnterCrit(0LL, 0LL);
  v10 = ValidateReceivingHwnd(a1, 1);
  v12 = 0;
  v13 = v10;
  if ( v10 )
  {
    Win32HM_LockIntoThread<0>(v9, v10, v20);
    if ( a2 )
    {
      v15 = ValidateHwnd(a2);
      if ( !v15 )
        goto LABEL_11;
    }
    else
    {
      v15 = 0LL;
    }
    if ( a5 )
    {
      LOBYTE(v14) = 3;
      v16 = HMValidateHandleWithDescriptor(a5, v14);
      if ( !v16 )
        goto LABEL_11;
    }
    else
    {
      v16 = 0LL;
    }
    Win32HM_LockIntoThread<1>(v9, v15, (__int64 *)v22);
    Win32HM_LockIntoThread<1>(v9, v16, (__int64 *)BugCheckParameter3);
    v12 = xxxDragObject(v13, v15, a3, a4, v16);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v17);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v22, v18);
LABEL_11:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v20, v14);
  }
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
