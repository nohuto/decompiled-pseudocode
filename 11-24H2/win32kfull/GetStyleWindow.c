/*
 * XREFs of GetStyleWindow @ 0x14002F5E0
 * Callers:
 *     UnredirectDCEs @ 0x14002DEE0 (UnredirectDCEs.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x14002E5E8 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     UpdateRedirectedDCE @ 0x14002F480 (UpdateRedirectedDCE.c)
 *     SpbCheckDce @ 0x14002F820 (SpbCheckDce.c)
 *     UnsetLayeredWindow @ 0x14002FF88 (UnsetLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDesktopPaintCallback @ 0x1401FA6B0 (xxxDesktopPaintCallback.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14022B0AC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxPrintWindow @ 0x14023A30C (xxxPrintWindow.c)
 *     NtUserHwndSetRedirectionInfo @ 0x140298780 (NtUserHwndSetRedirectionInfo.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BCCD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStyleWindow(__int64 a1, int a2)
{
  __int64 v2; // r10
  __int64 v3; // r8

  v2 = a1;
  if ( !a1 )
    return a1;
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( ((unsigned __int8)a2 & *(_BYTE *)(BYTE1(a2) + v3 + 16)) != 0 )
      break;
    a1 = *(_QWORD *)(a1 + 104);
    if ( !a1 )
      return a1;
  }
  if ( a1 != v2 && (*(_WORD *)(v3 + 42) & 0x2FFF) == 0x29D && (a2 == 2848 || a2 == 2568) )
    return 0LL;
  else
    return a1;
}
