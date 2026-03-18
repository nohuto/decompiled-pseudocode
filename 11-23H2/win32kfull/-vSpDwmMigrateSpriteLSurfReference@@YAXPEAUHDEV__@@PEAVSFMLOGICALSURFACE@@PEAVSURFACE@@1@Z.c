/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C0266820
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x1C0268140 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0026D64 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C007AAF0 (DwmAsyncUpdateSprite.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C008C180 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C008E520 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00C4690 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00C5C10 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013DC74 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(
        HDEV a1,
        struct SFMLOGICALSURFACE *this,
        struct SURFACE *a3,
        struct SFMLOGICALSURFACE *a4)
{
  HSPRITE v4; // r13
  struct _SURFOBJ *v5; // rsi
  Gre::Base *v9; // rcx
  HDEV v10; // rdx
  DWMSPRITE *v11; // r15
  HDEV v12; // rdx
  Gre::Base *v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  int v15; // eax
  int v16; // edx
  __int64 v17; // r14
  int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // ebx
  __int64 v23; // r8
  void *v24; // rax
  int v25; // [rsp+60h] [rbp-19h] BYREF
  __int64 v26; // [rsp+68h] [rbp-11h] BYREF
  _OWORD v27[2]; // [rsp+70h] [rbp-9h] BYREF
  DWMSPRITE *v28; // [rsp+90h] [rbp+17h]
  unsigned int v29; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v30; // [rsp+F0h] [rbp+77h] BYREF

  v4 = (HSPRITE)*((_QWORD *)this + 37);
  v5 = (struct _SURFOBJ *)((char *)a3 + 24);
  v30 = 0;
  v29 = 0;
  v25 = 0;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v27);
  v28 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v27, v4);
  Gre::Base::Globals(v9);
  v11 = v28;
  if ( v28 )
  {
    DWMSPRITE::SetLogicalSurface(v28, v10, 0LL);
    DWMSPRITE::SetLogicalSurface(v11, v12, a4);
    SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
    SFMLOGICALSURFACE::SetShape(a4, a1, v5);
    if ( *((_QWORD *)a4 + 16) )
    {
      v26 = *((_QWORD *)a4 + 16);
      RGNOBJ::vSet((RGNOBJ *)&v26);
      *((_DWORD *)a4 + 63) &= ~2u;
    }
    *((_DWORD *)a4 + 63) |= 8u;
    v14 = Gre::Base::Globals(v13);
    SFMLOGICALSURFACE::StartSfmStateTracking(a4, a1, *((struct SfmState **)v14 + 809));
    SFMLOGICALSURFACE::GetRedirectionInfo(a4, (enum _HLSURF_REDIRECTIONSTYLE *)&v25, &v30, &v29, 0LL, 0LL);
    v15 = *((_DWORD *)v11 + 35);
    v16 = *((_DWORD *)a4 + 63);
    v17 = *((_QWORD *)v11 + 13);
    *((_QWORD *)v11 + 13) = 0LL;
    v18 = *((_DWORD *)v11 + 29);
    v19 = *(_QWORD *)a4;
    v20 = v16 & 1;
    v21 = v16 & 0xC;
    v22 = v15 & 1 | v21 | (2 * (v20 | v15 & 0x40 | (4 * (v15 & 0xE))));
    v24 = (void *)UserReferenceDwmApiPort(v20, v21, v23);
    DwmAsyncUpdateSprite(v24, (__int64)v4, v19, v22, (__int64)v11 + 72, 0LL, v25, v30, v29, v18 >= 1, v17);
    *((_DWORD *)a4 + 63) &= ~8u;
    if ( v28 )
      _InterlockedDecrement((volatile signed __int32 *)v28 + 3);
  }
  v28 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v27);
}
