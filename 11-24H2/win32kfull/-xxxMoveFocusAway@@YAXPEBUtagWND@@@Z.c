/*
 * XREFs of ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x14008A638
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxDW_SendDestroyMessages @ 0x14008A4B0 (xxxDW_SendDestroyMessages.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     zzzDestroyCaret @ 0x140094F8C (zzzDestroyCaret.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140183378 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall xxxMoveFocusAway(const struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  struct tagTHREADINFO *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = PtiCurrent((__int64)a1, a2);
  v4 = v3;
  if ( a1 == *(const struct tagWND **)(*((_QWORD *)v3 + 59) + 120LL) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
    {
      Win32HM_LockIntoThread<1>((__int64)v3, *((_QWORD *)a1 + 13), (__int64 *)BugCheckParameter3);
      xxxSetFocus(*((struct tagWND **)a1 + 13));
      v7 = PtiCurrent(v6, v5);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v7, BugCheckParameter3);
    }
    else
    {
      xxxSetFocus(0LL);
    }
  }
  if ( a1 == *(const struct tagWND **)(*((_QWORD *)v4 + 59) + 344LL) )
    zzzDestroyCaret();
}
