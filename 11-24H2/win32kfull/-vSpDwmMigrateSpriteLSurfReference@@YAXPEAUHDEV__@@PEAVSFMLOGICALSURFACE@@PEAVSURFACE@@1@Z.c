/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x14016A8C8
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x14016A8B0 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1400278E4 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14002C858 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x14016AADC (DwmAsyncUpdateSprite.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x14016B1E8 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x14016C284 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(
        HDEV a1,
        struct SFMLOGICALSURFACE *this,
        struct SURFACE *a3,
        struct SFMLOGICALSURFACE *a4)
{
  struct _SURFOBJ *v4; // rsi
  int v8; // r15d
  Gre::Base *v9; // rcx
  HDEV v10; // rdx
  DWMSPRITE *v11; // r13
  HDEV v12; // rdx
  Gre::Base *v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  int v15; // r9d
  _DWORD *v16; // rcx
  int v17; // r12d
  int v18; // ecx
  __int64 v19; // rbp
  int v20; // esi
  void *v21; // rax
  _BYTE v22[32]; // [rsp+60h] [rbp-68h] BYREF
  DWMSPRITE *v23; // [rsp+80h] [rbp-48h]
  __int64 v24; // [rsp+D8h] [rbp+10h] BYREF
  HSPRITE v25; // [rsp+E0h] [rbp+18h]

  v4 = (struct _SURFOBJ *)((char *)a3 + 24);
  v25 = (HSPRITE)*((_QWORD *)this + 37);
  v8 = 0;
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v22, v25);
  Gre::Base::Globals(v9);
  v11 = v23;
  if ( v23 )
  {
    DWMSPRITE::SetLogicalSurface(v23, v10, 0LL);
    DWMSPRITE::SetLogicalSurface(v11, v12, a4);
    SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
    SFMLOGICALSURFACE::SetShape(a4, a1, v4);
    if ( *((_QWORD *)a4 + 16) )
    {
      v24 = *((_QWORD *)a4 + 16);
      RGNOBJ::vSet((RGNOBJ *)&v24);
      *((_DWORD *)a4 + 63) &= ~2u;
    }
    *((_DWORD *)a4 + 63) |= 8u;
    v14 = Gre::Base::Globals(v13);
    SFMLOGICALSURFACE::StartSfmStateTracking(a4, a1, *((struct SfmState **)v14 + 529), v15);
    v16 = (_DWORD *)*((_QWORD *)a4 + 23);
    if ( v16 )
    {
      v17 = v16[8];
      LODWORD(v24) = v16[9];
      if ( (v16[23] & 1) != 0 )
      {
        v8 = 2;
      }
      else if ( (v16[22] & 0x800) != 0 )
      {
        v8 = 1;
      }
    }
    else
    {
      v17 = 0;
      LODWORD(v24) = 0;
    }
    v18 = *((_DWORD *)v11 + 35);
    v19 = *((_QWORD *)v11 + 13);
    *((_QWORD *)v11 + 13) = 0LL;
    v20 = *((_DWORD *)v11 + 29);
    v21 = (void *)UserReferenceDwmApiPort(v18 & 1);
    DwmAsyncUpdateSprite(v21, (__int64)v11 + 72, 0LL, v8, v17, v24, v20 >= 1, v19);
    *((_DWORD *)a4 + 63) &= ~8u;
  }
  DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v22);
}
