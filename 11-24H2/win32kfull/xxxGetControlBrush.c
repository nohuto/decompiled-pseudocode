/*
 * XREFs of xxxGetControlBrush @ 0x14003A374
 * Callers:
 *     NtUserGetControlBrush @ 0x14003A730 (NtUserGetControlBrush.c)
 * Callees:
 *     xxxGetControlColor @ 0x1400385D0 (xxxGetControlColor.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall xxxGetControlBrush(__int64 a1, HWND a2, unsigned int a3)
{
  struct tagWND *v6; // rdi
  __int64 ControlColor; // rbx
  struct tagTHREADINFO *v8; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (((*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) + 0x80) & 0xBF) != 0 )
    v6 = *(struct tagWND **)(a1 + 104);
  else
    v6 = *(struct tagWND **)(a1 + 120);
  if ( !v6 )
    v6 = (struct tagWND *)a1;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, v6);
  ControlColor = xxxGetControlColor(v6, (struct tagDRAWITEMSTRUCT **)a1, a2, a3);
  v8 = PtiCurrent();
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v8, (ULONG_PTR)BugCheckParameter3);
  return ControlColor;
}
