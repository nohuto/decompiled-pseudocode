/*
 * XREFs of GreAddLogicalSurfaceToDirtyQueue @ 0x1400CAAA4
 * Callers:
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400CBC4C (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1400CFA94 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x1403212B0 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 * Callees:
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1400CAC50 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1400CCA5C (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GreAddLogicalSurfaceToDirtyQueue(Gre::Base *a1, ULONG a2, UINT_PTR a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // r14
  struct W32_PUSH_LOCK *v7; // rdi
  __int64 v8; // rax
  struct W32_PUSH_LOCK *v9; // rbx
  unsigned int v10; // esi
  _BYTE v12[32]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v14; // [rsp+50h] [rbp-B0h] BYREF

  v6 = Gre::Base::Globals(a1);
  memset_0(&v14, 0, sizeof(v14));
  v14.Model = D3DKMT_PM_REDIRECTED_GDI_SYSMEM;
  v14.Token.GdiSysMem.dwDirtyFlags = a2;
  v14.Token.Flip.FenceValue = (UINT64)a1;
  v14.Token.Flip.dxgContext = a3;
  v7 = (struct W32_PUSH_LOCK *)(*((_QWORD *)v6 + 529) + 32LL);
  if ( *((_QWORD *)v6 + 529) != -32LL )
    GreAcquirePushLockExclusive(v7);
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(v12, a1);
  v8 = v13;
  if ( v13 )
  {
    v9 = (struct W32_PUSH_LOCK *)(v13 + 256);
    if ( v13 != -256 )
    {
      GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v13 + 256));
      v8 = v13;
    }
    EtwGdiSysMemToken(
      (unsigned __int8)-__CFSHR__(*(_DWORD *)(v8 + 244), 2),
      a2,
      v14.Token.Flip.FenceValue,
      v14.Token.Flip.dxgContext);
    if ( __CFSHR__(*(_DWORD *)(v13 + 244), 2) )
    {
      v10 = SfmTokenArray::AddNotificationToken(*((SfmTokenArray **)v6 + 529), &v14);
      if ( !v10 )
        SfmSignalTokenEvent();
    }
    else
    {
      v10 = SfmTokenArray::AddNotificationToken((SfmTokenArray *)(v13 + 216), &v14);
    }
    if ( v9 )
      GreReleasePushLockExclusive(v9);
  }
  else
  {
    v10 = -1073741816;
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v12);
  if ( v7 )
    GreReleasePushLockExclusive(v7);
  return v10;
}
