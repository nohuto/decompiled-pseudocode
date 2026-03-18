/*
 * XREFs of xxxDrawScrollBar @ 0x1C00149C0
 * Callers:
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C007B730 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxDrawWindowFrame @ 0x1C00E28A0 (xxxDrawWindowFrame.c)
 * Callees:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0014A64 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     GetWndSBDisableFlags @ 0x1C00E1B48 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x1C00E1B78 (CalcSBStuff.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

void __fastcall xxxDrawScrollBar(struct tagWND *a1, HDC a2, unsigned int a3)
{
  __int64 v6; // rcx
  struct tagSBCALC *v7; // rbx
  unsigned int WndSBDisableFlags; // eax
  _BYTE v9[64]; // [rsp+30h] [rbp-68h] BYREF

  memset_0(v9, 0, sizeof(v9));
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
  if ( v6 && a1 == *(struct tagWND **)(v6 + 8) && (*(_DWORD *)v6 & 4) == 0 && a3 == ((*(_DWORD *)v6 >> 1) & 1) )
    v7 = *(struct tagSBCALC **)(v6 + 96);
  else
    v7 = (struct tagSBCALC *)v9;
  CalcSBStuff(a1, v7, a3);
  WndSBDisableFlags = GetWndSBDisableFlags(a1, a3);
  xxxDrawSB2(a1, v7, a2, a3, WndSBDisableFlags);
}
