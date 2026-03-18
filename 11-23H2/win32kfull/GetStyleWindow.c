/*
 * XREFs of GetStyleWindow @ 0x1C01199B0
 * Callers:
 *     UpdateRedirectedDCE @ 0x1C00224B0 (UpdateRedirectedDCE.c)
 *     SpbCheckDce @ 0x1C00228B0 (SpbCheckDce.c)
 *     UnsetLayeredWindow @ 0x1C00264A8 (UnsetLayeredWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004E3A0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CalcVisRgn @ 0x1C004FED0 (CalcVisRgn.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     zzzLockWindowUpdate2 @ 0x1C008B518 (zzzLockWindowUpdate2.c)
 *     xxxDesktopPaintCallback @ 0x1C00985F0 (xxxDesktopPaintCallback.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UnredirectDCEs @ 0x1C00B300C (UnredirectDCEs.c)
 *     xxxSetWindowStyle @ 0x1C00EF138 (xxxSetWindowStyle.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00F4184 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F88D0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxSimpleDoSyncPaint @ 0x1C01193C4 (xxxSimpleDoSyncPaint.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C01198D0 (UserGetRedirectedWindowOrigin.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01541B0 (NtUserHwndQueryRedirectionInfo.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0156276 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxPrintWindow @ 0x1C01BC7E4 (xxxPrintWindow.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1C01D44F0 (NtUserHwndSetRedirectionInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStyleWindow(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = a1;
  if ( !a1 )
    return v2;
  while ( ((unsigned __int8)a2 & *(_BYTE *)(*(_QWORD *)(v2 + 40) + BYTE1(a2) + 16LL)) == 0 )
  {
    v2 = *(_QWORD *)(v2 + 104);
    if ( !v2 )
      return v2;
  }
  if ( (*(_WORD *)(*(_QWORD *)(v2 + 40) + 42LL) & 0x2FFF) == 0x29D && v2 != a1 && (a2 == 2848 || a2 == 2568) )
    return 0LL;
  else
    return v2;
}
