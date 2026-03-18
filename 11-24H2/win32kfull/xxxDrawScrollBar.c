/*
 * XREFs of xxxDrawScrollBar @ 0x1402E695C
 * Callers:
 *     xxxEnableWndSBArrows @ 0x1401E1A30 (xxxEnableWndSBArrows.c)
 *     xxxDrawWindowFrame @ 0x140255644 (xxxDrawWindowFrame.c)
 * Callees:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x140257BE8 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     CalcSBStuff @ 0x140258028 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1402585DC (GetWndSBDisableFlags.c)
 *     WPP_RECORDER_AND_TRACE_SF_ql @ 0x1402E4580 (WPP_RECORDER_AND_TRACE_SF_ql.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall xxxDrawScrollBar(struct tagWND *a1, HDC a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdi
  char v8; // bp
  char v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  struct tagSBCALC *v13; // rbx
  char WndSBDisableFlags; // al
  _BYTE v15[64]; // [rsp+50h] [rbp-88h] BYREF

  memset_0(v15, 0, sizeof(v15));
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 752LL);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v8 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v9 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v9 = 0;
  }
  if ( v8 || v9 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_ql(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69416),
      5);
  }
  if ( v7 && a1 == *(struct tagWND **)(v7 + 8) && a3 == ((*(_DWORD *)v7 >> 1) & 1) )
    v13 = *(struct tagSBCALC **)(v7 + 96);
  else
    v13 = (struct tagSBCALC *)v15;
  CalcSBStuff((__int64)a1, (__int64)v13, a3);
  WndSBDisableFlags = GetWndSBDisableFlags((__int64 *)a1, a3);
  xxxDrawSB2((struct tagTHREADINFO **)a1, v13, a2, a3, WndSBDisableFlags);
}
