/*
 * XREFs of ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14002C858
 * Callers:
 *     GreHintSpriteShape @ 0x140027AF0 (GreHintSpriteShape.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x14002C62C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1400CAC90 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreTransferDwmStateToSpriteState @ 0x1401325C8 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x140169AB8 (GreTransferSpriteStateToDwmState.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x14016A8C8 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     ?vSpDwmMigrateLSurfShapeReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@@Z @ 0x14021F828 (-vSpDwmMigrateLSurfShapeReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@@Z.c)
 * Callees:
 *     ?SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z @ 0x1400C743C (-SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z.c)
 */

_BOOL8 __fastcall SFMLOGICALSURFACE::SetShape(SFMLOGICALSURFACE *this, HDEV a2, struct _SURFOBJ *a3)
{
  SURFOBJ *v3; // rbp
  BOOL v4; // edi
  char v8; // r15
  SURFOBJ *v10; // rax
  int v11; // ecx

  v3 = (SURFOBJ *)*((_QWORD *)this + 23);
  v4 = 0;
  if ( v3 || !a3 )
  {
    v8 = 0;
    if ( v3 && !a3 )
    {
      SURFACE::RemoveLSurf((SURFACE *)&v3[-1].pvScan0, this);
      EngUnlockSurface(v3);
      if ( a2 )
        SpNotifyLSurfaceRedirSurfAssoc(a2, *(HLSURF *)this, *((struct _SURFOBJ **)this + 23), 0);
      v4 = 1;
      EtwLogicalSurfPhysSurfUnbindEvent(*(_QWORD *)this, *(_QWORD *)(*((_QWORD *)this + 23) + 8LL));
    }
  }
  else
  {
    v8 = 1;
  }
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 61) &= ~2u;
  *((_QWORD *)this + 23) = a3;
  if ( v8 )
  {
    v10 = EngLockSurface(a3->hsurf);
    if ( v10 )
      SURFACE::AddLSurf((SURFACE *)&v10[-1].pvScan0, this);
    *((_DWORD *)this + 61) |= 1u;
    v4 = 1;
    if ( a2 )
    {
      v11 = SpNotifyLSurfaceRedirSurfAssoc(a2, *(HLSURF *)this, a3, 1);
      if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741822 )
        v4 = 0;
    }
    EtwLogicalSurfPhysSurfBindEvent(*(_QWORD *)this, a3->hsurf);
  }
  return v4;
}
