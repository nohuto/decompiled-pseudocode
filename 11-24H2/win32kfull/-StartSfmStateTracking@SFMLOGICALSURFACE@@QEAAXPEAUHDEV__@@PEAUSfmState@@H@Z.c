/*
 * XREFs of ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x14016C284
 * Callers:
 *     GreHintSpriteShape @ 0x140027AF0 (GreHintSpriteShape.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400CBC4C (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     GreTransferSpriteStateToDwmState @ 0x140169AB8 (GreTransferSpriteStateToDwmState.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x14016A8C8 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 * Callees:
 *     ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x140321408 (-SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z.c)
 */

void __fastcall SFMLOGICALSURFACE::StartSfmStateTracking(SFMLOGICALSURFACE *this, HDEV a2, struct SfmState *a3)
{
  struct SfmState **v6; // r8
  struct SfmState *v7; // rcx
  int v8; // eax
  bool v9; // zf

  INC_SHARE_REF_CNT(this);
  v6 = (struct SfmState **)*((_QWORD *)a3 + 6);
  v7 = (SFMLOGICALSURFACE *)((char *)this + 32);
  if ( *v6 != (struct SfmState *)((char *)a3 + 40) )
    __fastfail(3u);
  *(_QWORD *)v7 = (char *)a3 + 40;
  *((_QWORD *)this + 5) = v6;
  *v6 = v7;
  *((_QWORD *)a3 + 6) = v7;
  ++*((_DWORD *)a3 + 14);
  v8 = *((_DWORD *)this + 61) | 0x18;
  v9 = *((_QWORD *)this + 3) == 0LL;
  *((_DWORD *)this + 61) = v8;
  if ( v9 )
    *((_DWORD *)this + 61) = v8 & 0xFFFFFF7F;
  else
    *((_DWORD *)this + 61) = (((int)SpNotifyLSurfaceTracking(a2, *(HLSURF *)this, 1) >= 0) << 7) | *((_DWORD *)this + 61) & 0xFFFFFF7F;
}
