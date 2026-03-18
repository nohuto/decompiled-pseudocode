/*
 * XREFs of NtGdiLineTo @ 0x14001A120
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x1400D2E9C (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x14030D740 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x14030D768 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x14030D814 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1403214EC (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiLineTo(HDC a1, int a2, int a3)
{
  unsigned int v4; // ebx
  int v6; // esi
  unsigned int v7; // edi
  __int64 v9; // rax
  _QWORD v10[14]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v11[24]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD *v12; // [rsp+A8h] [rbp-60h]

  v4 = 0;
  v6 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v10, a1);
  if ( v10[0] )
  {
    v12 = v10;
    if ( *(_DWORD *)(v10[0] + 492LL)
      && (*(_DWORD *)(v10[0] + 36LL) & 0x4000) != 0
      && !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v11) )
    {
      DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v11);
      if ( (unsigned int)GrepLineTo((struct XDCOBJ *)v10, a2, a3) )
        v6 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v11);
      DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v11);
    }
    v7 = GrepLineTo((struct XDCOBJ *)v10, a2, a3);
    if ( v6 )
    {
      v9 = UserReferenceDwmApiPort();
      DwmSyncFlushAndWaitForBatch(v9);
    }
    v4 = v7;
  }
  else
  {
    EngSetLastError(6u);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
  return v4;
}
