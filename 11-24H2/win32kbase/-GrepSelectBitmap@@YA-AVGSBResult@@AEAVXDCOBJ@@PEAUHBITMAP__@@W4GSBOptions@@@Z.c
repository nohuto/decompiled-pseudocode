/*
 * XREFs of ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00
 * Callers:
 *     GreSelectBitmap @ 0x14001C680 (GreSelectBitmap.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x140035220 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14000C51C (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x14000D9F4 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x14000F240 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x140015730 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??1MLOCKOBJ@@QEAA@XZ @ 0x14001DE18 (--1MLOCKOBJ@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$01@@QEAA@XZ @ 0x14001DEF4 (--1-$SEMOBJEXORSHARED@$01@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x14001F960 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x14001FED0 (GreAcquireHmgrSemaphore.c)
 *     ??0?$SEMOBJEXORSHARED@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x140021634 (--0-$SEMOBJEXORSHARED@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x14002A6B0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400351C0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1400357D0 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x140036AB0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x140036FD8 (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?bIsDefault@SURFACE@@QEBA_NXZ @ 0x1400C632C (-bIsDefault@SURFACE@@QEBA_NXZ.c)
 *     ?GSBIsSurfaceAllowedInDC@@YA?AW4GSBStatus@GSBResult@@PEAVSURFACE@@PEAUHDEV__@@@Z @ 0x1400CF8F8 (-GSBIsSurfaceAllowedInDC@@YA-AW4GSBStatus@GSBResult@@PEAVSURFACE@@PEAUHDEV__@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400CFA58 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     vMirrorIncludeNotifyWrap @ 0x1400D6200 (vMirrorIncludeNotifyWrap.c)
 *     IsvMirrorIncludeNotifySupported @ 0x1400DCCDC (IsvMirrorIncludeNotifySupported.c)
 *     ?GSBIsCompatible@@YA?AW4GSBStatus@GSBResult@@PEAPEAVPALETTE@@PEAV3@PEAVSURFACE@@PEAUHDEV__@@@Z @ 0x1400DCD50 (-GSBIsCompatible@@YA-AW4GSBStatus@GSBResult@@PEAPEAVPALETTE@@PEAV3@PEAVSURFACE@@PEAUHDEV__@@@Z.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1400DE22C (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140174090 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1401C0B88 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1401C3128 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

__int64 __fastcall GrepSelectBitmap(__int64 a1, XDCOBJ *a2, __int64 a3, char a4)
{
  struct HOBJ__ *v5; // r13
  struct Gre::Base::SESSION_GLOBALS *v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  SURFACE *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // r9
  unsigned int v16; // r15d
  __int64 v17; // r11
  char v18; // al
  __int64 v19; // r11
  struct SURFACE *v20; // rax
  struct SURFACE *v21; // r15
  DC *v22; // rcx
  struct _BASEOBJECT *v23; // rcx
  __int64 v24; // r12
  bool IsDefault; // al
  DC *v26; // rcx
  struct _BASEOBJECT *v27; // rax
  int v28; // eax
  BOOL v29; // r8d
  unsigned int v30; // ecx
  int v31; // edx
  bool v32; // al
  unsigned int v33; // edx
  int v34; // eax
  unsigned int *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  DC *v39; // rcx
  struct Gre::Base::SESSION_GLOBALS *v40; // rbx
  int v41; // edx
  __int64 v43; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v44[16]; // [rsp+28h] [rbp-61h] BYREF
  unsigned int v45; // [rsp+38h] [rbp-51h]
  struct _BASEOBJECT *v46; // [rsp+40h] [rbp-49h] BYREF
  char v47; // [rsp+48h] [rbp-41h]
  _BYTE v48[32]; // [rsp+50h] [rbp-39h] BYREF
  SURFACE *v49; // [rsp+70h] [rbp-19h]
  struct Gre::Base::SESSION_GLOBALS *v50; // [rsp+78h] [rbp-11h]
  _BYTE v51[96]; // [rsp+80h] [rbp-9h] BYREF
  struct _BASEOBJECT *v52; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v53; // [rsp+100h] [rbp+77h]

  v53 = a3;
  v5 = 0LL;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v48);
  v9 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)a2 + 2);
  v50 = v9;
  v49 = 0LL;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v43);
  v49 = (SURFACE *)HmgShareLockCheck(a3, 5);
  if ( v49 )
  {
    SEMOBJEXORSHARED<2>::SEMOBJEXORSHARED<2>((__int64)v44, (struct _ERESOURCE **)v9, (a4 & 2) != 0);
    GreAcquireHmgrSemaphore(v10);
    v11 = *(_QWORD **)a2;
    v12 = v49;
    LODWORD(v52) = 1;
    v46 = 0LL;
    v13 = v11[6];
    v14 = HmgPentryFromPobj(v11);
    v15 = *(_QWORD **)a2;
    v16 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFE;
    if ( *(_DWORD *)(*(_QWORD *)a2 + 32LL) == 1 )
    {
      if ( !*((_DWORD *)v12 + 42) || (unsigned int)SURFACE::bStockSurface(v12) || *((_QWORD *)v12 + 20) == *v15 )
      {
        v18 = GSBIsCompatible(&v46, *((_QWORD *)v12 + 16), v12, v15[6]);
        if ( v18 )
        {
          *(_QWORD *)a1 = v19;
        }
        else
        {
          v18 = GSBIsSurfaceAllowedInDC(v12, *(_QWORD *)(*(_QWORD *)a2 + 48LL));
          if ( !v18 )
          {
            if ( v16 && (*((_DWORD *)v12 + 28) & 0x800) != 0 )
            {
              *(_QWORD *)a1 = 0LL;
              *(_BYTE *)(a1 + 8) = 9;
            }
            else if ( (a4 & 4) != 0 || v16 )
            {
              v20 = XDCOBJ::pSurfaceEff(a2);
              v21 = v20;
              if ( _bittest((const signed __int32 *)v20 + 28, 0x1Au)
                && _bittest((const signed __int32 *)v12 + 28, 0x1Au)
                && (*((_DWORD *)v20 + 29) & 0x200) == 0
                || (a4 & 1) != 0 )
              {
                v22 = *(DC **)a2;
                v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL);
                if ( (v45 & 7) != 0 )
                  DC::dwSetLayout(v22, -1, 0);
                v23 = v46;
                if ( *((struct _BASEOBJECT **)v12 + 16) != v46 )
                {
                  *((_DWORD *)v12 + 28) |= 0x8000000u;
                  *((_QWORD *)v12 + 16) = v23;
                  if ( v23 )
                    HmgIncrementShareReferenceCount(v23);
                }
                if ( (*((_DWORD *)v21 + 28) & 0x1000000) != 0 )
                  v5 = *(struct HOBJ__ **)v21;
                v24 = *((_QWORD *)v21 + 4);
                if ( v53 != v24 )
                {
                  IsDefault = SURFACE::bIsDefault(v12);
                  v26 = *(DC **)a2;
                  if ( IsDefault )
                  {
                    DC::pSurface(v26, 0LL);
                  }
                  else
                  {
                    DC::pSurface(v26, v12);
                    if ( (unsigned int)SURFACE::bStockSurface(v12) || !*((_WORD *)v12 + 50) && *((_DWORD *)v12 + 54) )
                      *(_DWORD *)(*(_QWORD *)a2 + 36LL) |= 0x10000u;
                    else
                      *(_DWORD *)(*(_QWORD *)a2 + 36LL) &= ~0x10000u;
                  }
                  *(_QWORD *)(*(_QWORD *)a2 + 512LL) = *((_QWORD *)v12 + 7);
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 152LL) |= 0xFu;
                  if ( !SURFACE::bIsDefault(v21) )
                  {
                    if ( (*((_DWORD *)v21 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported() >= 0 )
                      vMirrorIncludeNotifyWrap(a2, v21, 0LL);
                    SURFACE::vDec_cRef(v21);
                    if ( !*((_DWORD *)v21 + 42) )
                    {
                      if ( v5 )
                        v5 = *(struct HOBJ__ **)v21;
                      if ( (*((_DWORD *)v21 + 28) & 0x8000000) != 0 )
                      {
                        v27 = (struct _BASEOBJECT *)*((_QWORD *)v21 + 16);
                        *((_QWORD *)v21 + 16) = 0LL;
                        v52 = v27;
                        XEPALOBJ::vUnrefPalette(&v52);
                      }
                      *((_DWORD *)v21 + 28) &= ~0x8000000u;
                    }
                  }
                  if ( (int)IsvMirrorIncludeNotifySupported() >= 0 )
                    vMirrorIncludeNotifyWrap(a2, v12, 1LL);
                  v28 = *((_DWORD *)v12 + 28);
                  v29 = (v28 & 0x4000) != 0 || (v28 & 0x800010) != 0 && (*(_DWORD *)(v13 + 40) & 1) != 0;
                  v30 = *(_DWORD *)(*(_QWORD *)a2 + 36LL) | 0x200;
                  if ( !v29 )
                    v30 = *(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xFFFFFDFF;
                  *(_DWORD *)(*(_QWORD *)a2 + 36LL) = v30;
                  v31 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
                  v32 = (v31 & *((_DWORD *)v12 + 28) & 0x200) != 0;
                  v33 = v31 | 0x8000;
                  if ( !v32 )
                    v33 = *(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xFFFF7FFF;
                  *(_DWORD *)(*(_QWORD *)a2 + 36LL) = v33;
                  if ( !SURFACE::bIsDefault(v12) )
                  {
                    HmgIncrementShareReferenceCount(v12);
                    ++*((_DWORD *)v12 + 42);
                    if ( !(unsigned int)SURFACE::bStockSurface(v12) )
                    {
                      *((_QWORD *)v12 + 20) = **(_QWORD **)a2;
                      *((_QWORD *)v12 + 6) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
                    }
                  }
                  v34 = SURFACE::bDIBSection(v12);
                  *v35 = *v35 & 0xFFFFFFFE | (v34 != 0);
                  if ( (unsigned int)SURFACE::bDIBSection(v12) )
                    v37 = *((_QWORD *)v12 + 25);
                  else
                    v37 = 0LL;
                  *(_QWORD *)(v36 + 24) = v37;
                  HmgDecrementShareReferenceCountEx(v49, 0LL);
                  v49 = 0LL;
                  GreReleaseHmgrSemaphore(v38);
                  v39 = *(DC **)a2;
                  LODWORD(v52) = 0;
                  DC::bSetDefaultRegion(v39);
                  DC::AcquireDcVisRgnShared(*(DC **)a2);
                  DC::vUpdate_VisRect(*(DC **)a2, *(struct REGION **)(*(_QWORD *)a2 + 1136LL));
                  if ( v47 )
                    CPushLock::ReleaseLock((struct _BASEOBJECT *)((char *)v46 + 1112));
                  if ( v5 )
                  {
                    v40 = v50;
                    SURFREF::SURFREF((SURFREF *)v51, v5, v50);
                    SURFREF::bDeleteSurface((SURFREF *)v51, v41);
                    v24 = *(_QWORD *)(*((_QWORD *)v40 + 376) + 168LL);
                    SURFREF::~SURFREF((SURFREF *)v51);
                  }
                }
                if ( (v45 & 7) != 0 )
                  DC::dwSetLayout(*(DC **)a2, -1, v45);
                *(_QWORD *)a1 = v24;
                *(_BYTE *)(a1 + 8) = 0;
              }
              else
              {
                *(_BYTE *)(a1 + 8) = 11;
                *(_QWORD *)a1 = 0LL;
              }
            }
            else
            {
              *(_QWORD *)a1 = 0LL;
              *(_BYTE *)(a1 + 8) = 10;
            }
            goto LABEL_74;
          }
          *(_QWORD *)a1 = 0LL;
        }
        *(_BYTE *)(a1 + 8) = v18;
      }
      else
      {
        *(_QWORD *)a1 = v17;
        *(_BYTE *)(a1 + 8) = 7;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 8) = 6;
      *(_QWORD *)a1 = 0LL;
    }
LABEL_74:
    MLOCKOBJ::~MLOCKOBJ((MLOCKOBJ *)&v52);
    SEMOBJEXORSHARED<2>::~SEMOBJEXORSHARED<2>((__int64)v44);
    goto LABEL_75;
  }
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 5;
LABEL_75:
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v43);
  SURFREF::~SURFREF((SURFREF *)v48);
  return a1;
}
