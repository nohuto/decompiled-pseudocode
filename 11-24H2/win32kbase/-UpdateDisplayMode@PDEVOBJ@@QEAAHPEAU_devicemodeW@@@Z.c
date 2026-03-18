/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x14003E0F8
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140159430 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x14000C950 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x14000D9F4 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x14003D870 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x14003DC88 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x14003E410 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     GreHideSprites @ 0x14003E520 (GreHideSprites.c)
 *     HmgSafeNextObjt @ 0x140086CD0 (HmgSafeNextObjt.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x140109048 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall PDEVOBJ::UpdateDisplayMode(PDEVOBJ *this, struct _devicemodeW *Src)
{
  __int64 v4; // r14
  unsigned int (__fastcall *v5)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *); // rbx
  __int64 v7; // rcx
  struct SURFACE *v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  WORD dmSize; // cx
  __int64 v12; // rdx
  __int64 v13; // rcx
  DC *v14; // rbx
  unsigned int v15; // esi
  DC *v16; // [rsp+40h] [rbp-C0h] BYREF
  HSURF v17; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v18[32]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h]
  _DWORD v20[80]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(this) + 88);
  v5 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(*(_QWORD *)this + 2672LL);
  if ( !v5 )
  {
    WdLogSingleEntry1(4LL, 0LL);
    WdLogGlobalForLineNumber = 2568;
    return 0LL;
  }
  GreHideSprites(*(_QWORD *)this, 1LL);
  memset(v20, 0, sizeof(v20));
  v7 = *(_QWORD *)this;
  v17 = 0LL;
  if ( !v5(*(_QWORD *)(v7 + 1784), *(_QWORD *)(v7 + 2584), Src, v7 + 2120, v20, &v17) )
  {
    WdLogSingleEntry1(3LL, 0LL);
    WdLogGlobalForLineNumber = 2591;
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2687;
    return 0LL;
  }
  *(_DWORD *)(*(_QWORD *)this + 2136LL) = v20[4];
  *(_DWORD *)(*(_QWORD *)this + 2140LL) = v20[5];
  *(_DWORD *)(*(_QWORD *)this + 2128LL) = v20[2];
  *(_DWORD *)(*(_QWORD *)this + 2132LL) = v20[3];
  *(_DWORD *)(*(_QWORD *)this + 2160LL) = v20[10];
  *(_DWORD *)(*(_QWORD *)this + 2164LL) = v20[11];
  *(_DWORD *)(*(_QWORD *)this + 2376LL) = v20[64];
  *(_DWORD *)(*(_QWORD *)this + 2380LL) = v20[65];
  *(_DWORD *)(*(_QWORD *)this + 2184LL) = v20[16];
  *(_DWORD *)(*(_QWORD *)this + 2188LL) = v20[17];
  *(_DWORD *)(*(_QWORD *)this + 2532LL) = (((Src->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | *(_DWORD *)(*(_QWORD *)this + 2532LL) & 0xFFFFFF7F;
  v8 = *(struct SURFACE **)(*(_QWORD *)this + 2544LL);
  PDEVOBJ::vDisableSurface(this, 0);
  SURFREF::SURFREF((SURFREF *)v18, v8);
  HmgDecrementShareReferenceCountEx(v8, 0LL);
  v9 = SURFACE::bDeleteSurface(v19, 0, 0);
  v10 = v19;
  if ( v9 )
    v10 = 0LL;
  v19 = v10;
  SURFREF::~SURFREF((SURFREF *)v18);
  PDEVOBJ::bMakeSurface(this, (struct HOBJ__ *)v17);
  dmSize = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 2584LL) + 68LL);
  if ( dmSize >= Src->dmSize )
    dmSize = Src->dmSize;
  memmove(*(void **)(*(_QWORD *)this + 2584LL), Src, dmSize);
  v13 = 0LL;
  v16 = 0LL;
  while ( 1 )
  {
    LOBYTE(v12) = 1;
    v15 = HmgSafeNextObjt(v13, v12, &v16);
    if ( !v15 )
      break;
    v14 = v16;
    if ( (*((_DWORD *)v16 + 9) & 0x2000) == 0 )
    {
      if ( *((struct SURFACE **)v16 + 62) == v8 )
      {
        DC::pSurface(v16, *(struct SURFACE **)(*(_QWORD *)this + 2544LL));
        *((_QWORD *)v14 + 64) = **(_QWORD **)&PDEVOBJ::sizl(this);
        *((_DWORD *)v14 + 79) |= 0xFu;
      }
      v12 = *((unsigned int *)v14 + 9);
      if ( (v12 & 0x200) != 0 && (*(_DWORD *)(*((_QWORD *)v14 + 62) + 112LL) & 0x200) != 0 )
        LODWORD(v12) = v12 | 0x8000;
      else
        LODWORD(v12) = v12 & 0xFFFF7FFF;
      *((_DWORD *)v14 + 9) = v12;
    }
    v13 = v15;
  }
  vResetSurfacePalette(*(HDEV *)this);
  ++*(_DWORD *)(v4 + 3640);
  return 1LL;
}
