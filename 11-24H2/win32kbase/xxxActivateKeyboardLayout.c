/*
 * XREFs of xxxActivateKeyboardLayout @ 0x140096850
 * Callers:
 *     NtUserActivateKeyboardLayout @ 0x14016B3B0 (NtUserActivateKeyboardLayout.c)
 * Callees:
 *     HKLtoPKL @ 0x140096C10 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x140096CA0 (xxxInternalActivateKeyboardLayout.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14009702C (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x14020F75C (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 */

struct tagKL *__fastcall xxxActivateKeyboardLayout(
        struct tagWINDOWSTATION *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v8; // rbp
  struct tagKL *result; // rax
  struct tagKL *v10; // rbx
  __int64 v11; // rbx
  struct tagTHREADINFO *v12; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+20h] [rbp-18h] BYREF
  struct tagKL *v14; // [rsp+28h] [rbp-10h]

  v8 = PtiCurrent();
  result = (struct tagKL *)HKLtoPKL(v8, a2);
  v10 = result;
  if ( result )
  {
    if ( (a3 & 8) != 0 )
      ReorderKeyboardLayouts(a1, result);
    BugCheckParameter3 = *((_QWORD *)v8 + 57);
    *((_QWORD *)v8 + 57) = &BugCheckParameter3;
    v14 = v10;
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    v11 = xxxInternalActivateKeyboardLayout(a1, v10, a3, a4, BugCheckParameter3, v14);
    v12 = PtiCurrent();
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v12, (ULONG_PTR)&BugCheckParameter3);
    return (struct tagKL *)v11;
  }
  return result;
}
