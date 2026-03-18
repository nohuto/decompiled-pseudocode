/*
 * XREFs of ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x140035564
 * Callers:
 *     xxxBeginPaint @ 0x140034CB0 (xxxBeginPaint.c)
 * Callees:
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032E40 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x140036318 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall xxxSendChildNCPaint(struct tagWND *a1)
{
  struct tagTHREADINFO *v2; // rax
  struct tagWND *i; // rbx
  __int64 v4; // rax
  struct tagTHREADINFO *v5; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = PtiCurrent();
  BugCheckParameter3[0] = *((_QWORD *)v2 + 57);
  *((_QWORD *)v2 + 57) = BugCheckParameter3;
  BugCheckParameter3[1] = 0LL;
  for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    v4 = *((_QWORD *)i + 5);
    if ( !*(_QWORD *)(v4 + 136) && (*(_BYTE *)(v4 + 17) & 8) != 0 )
    {
      Win32HM_ExchangeThreadLock<1>((__int64)i, (__int64)BugCheckParameter3);
      xxxSendNCPaint(i, (HRGN)1);
    }
  }
  v5 = PtiCurrent();
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v5, (ULONG_PTR)BugCheckParameter3);
}
