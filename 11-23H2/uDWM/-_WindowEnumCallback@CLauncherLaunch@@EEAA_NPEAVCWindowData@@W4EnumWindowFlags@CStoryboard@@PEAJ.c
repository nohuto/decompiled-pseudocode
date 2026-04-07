/*
 * XREFs of ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1E80
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x18000B080 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x180021304 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z @ 0x1800D9A3C (-CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z.c)
 *     ?_WillWindowEndCloaked@CStoryboard@@KA_NPEBVCWindowData@@@Z @ 0x1800DE9F0 (-_WillWindowEndCloaked@CStoryboard@@KA_NPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E0E10 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 */

char __fastcall CLauncherLaunch::_WindowEnumCallback(struct tagRECT *a1, struct tagRECT *a2, char a3, int *a4)
{
  char v8; // al
  char v9; // r14
  CBaseObject *v10; // rdi
  int v11; // esi
  int v12; // ecx
  int v13; // eax
  struct CAnimationComponent *v15; // [rsp+68h] [rbp+20h] BYREF

  v8 = CFlyoutPopup::_WindowEnumCallback((CStoryboard *)a1, (__int64)a2, a3, a4);
  v9 = v8;
  if ( *a4 < 0 || !v8 )
    return v9;
  v10 = 0LL;
  v11 = 0;
  v15 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    v12 = a2[42].right & 0xFFF;
    if ( v12 == 2 )
    {
      if ( a2[8].top == 1 )
        a2[42].right |= 0x4000000u;
      if ( CStoryboard::_WillWindowEndCloaked((const struct CWindowData *)a2) )
        goto LABEL_14;
      v13 = CLauncherLaunch::CommonAnimate((CLauncherLaunch *)a1, (struct CWindowData *)a2, &v15);
      v10 = v15;
      goto LABEL_13;
    }
    if ( v12 == 22 && CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)a2) && ContainsRect(a1 + 8, a2 + 3) )
    {
      v13 = CLauncherLaunch::CommonAnimate((CLauncherLaunch *)a1, (struct CWindowData *)a2, 0LL);
LABEL_13:
      v11 = v13;
    }
  }
LABEL_14:
  *a4 = v11;
  if ( v10 )
    CBaseObject::Release(v10);
  return v9;
}
