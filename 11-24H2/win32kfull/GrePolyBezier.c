/*
 * XREFs of GrePolyBezier @ 0x140330E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x140182824 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x14030D740 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x14030D768 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x14030D814 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1403214EC (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z @ 0x140330C60 (-GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyBezier(HDC a1, const struct _POINTL *a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v6; // esi
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rax
  DC *v11[14]; // [rsp+20h] [rbp-99h] BYREF
  _BYTE v12[24]; // [rsp+90h] [rbp-29h] BYREF
  DC **v13; // [rsp+A8h] [rbp-11h]

  v4 = 0;
  v6 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v13 = v11;
    if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v12)
      && !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v12) )
    {
      DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v12);
      if ( (unsigned int)GrepPolyBezier(v11, a2, a3) )
        v6 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v12);
      DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v12);
    }
    v8 = GrepPolyBezier(v11, a2, a3);
    if ( v6 )
    {
      v9 = UserReferenceDwmApiPort(v7);
      DwmSyncFlushAndWaitForBatch(v9);
    }
    v4 = v8;
  }
  else
  {
    EngSetLastError(6u);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
  return v4;
}
