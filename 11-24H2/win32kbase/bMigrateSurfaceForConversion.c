/*
 * XREFs of bMigrateSurfaceForConversion @ 0x1400848F4
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1400846A0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14000C51C (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x14000DF20 (--0ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x14000EA60 (--1ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002EB90 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1400357D0 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x140036FD8 (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x140047820 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     PushThreadGuardedObject @ 0x140068920 (PushThreadGuardedObject.c)
 *     HmgQueryAltLock @ 0x140084650 (HmgQueryAltLock.c)
 *     HmgSwapLockedHandleContents @ 0x1400B6AD0 (HmgSwapLockedHandleContents.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1400B7860 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1400B7A90 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1400B80A0 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z @ 0x1400BF050 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1400DE22C (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     ?bUndoStockSurfaceDelayed@SURFACE@@QEAAHXZ @ 0x1400EDAD0 (-bUndoStockSurfaceDelayed@SURFACE@@QEAAHXZ.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x14013DF58 (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x1401431C8 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x140145AEC (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x14014D66C (SFMLOGICALSURFACE_CreateHLSURFCloneWrap.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x140152080 (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x140174424 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1401C30D0 (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 *     ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1401C3104 (--1-$HmgShareLockResult@VSURFACE@@@@QEAA@XZ.c)
 *     MulReplaceRedirectionChild @ 0x14023AC14 (MulReplaceRedirectionChild.c)
 *     vSpDwmMigrateLSurfShapeReferenceWrap @ 0x14023ACF4 (vSpDwmMigrateLSurfShapeReferenceWrap.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(struct _BASEOBJECT *a1, struct _BASEOBJECT *a2, int a3, _DWORD *a4)
{
  char *v4; // r15
  unsigned int v9; // r14d
  __int64 v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rdx
  int v12; // eax
  struct _BASEOBJECT *v13; // r13
  __int64 v14; // rbx
  BOOL (__stdcall *v15)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  HLSURF *v16; // r12
  char *v17; // rcx
  SURFACE *v18; // rcx
  int v19; // r15d
  int AltLock; // ebx
  int v21; // eax
  int v22; // r15d
  HLSURF HLSURFCloneWrap; // rbx
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int (*v27)(void); // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int16 v33; // r8
  __int16 v34; // dx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int64 v58; // rax
  __int128 v59; // xmm0
  __int128 v60; // xmm2
  __int128 v61; // xmm3
  int v62; // edx
  int v63; // edx
  int v64; // edx
  int v65; // edx
  struct _W32PROCESS *v66; // rdx
  struct _W32PROCESS *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rax
  int v70; // xmm0_4
  int v71; // xmm1_4
  int v72; // eax
  HLSURF v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  int (*v76)(void); // rax
  struct SFMLOGICALSURFACE *v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  int (*v80)(void); // rax
  int v81; // ebx
  int v82; // eax
  int v83; // eax
  int v85; // [rsp+44h] [rbp-BCh]
  int v86; // [rsp+48h] [rbp-B8h]
  _QWORD v87[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v88[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v89; // [rsp+70h] [rbp-90h]
  _DWORD *v90; // [rsp+78h] [rbp-88h]
  struct Gre::Base::SESSION_GLOBALS *v91; // [rsp+80h] [rbp-80h]
  _BYTE v92[32]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v93; // [rsp+A8h] [rbp-58h]
  int v94; // [rsp+B0h] [rbp-50h]
  __int64 v95; // [rsp+B8h] [rbp-48h] BYREF
  int v96; // [rsp+C0h] [rbp-40h]
  int v97; // [rsp+C4h] [rbp-3Ch]
  _BYTE v98[48]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v99; // [rsp+100h] [rbp+0h]
  __int128 v100; // [rsp+110h] [rbp+10h]
  __int128 v101; // [rsp+120h] [rbp+20h]
  __int128 v102; // [rsp+130h] [rbp+30h]
  __int128 v103; // [rsp+140h] [rbp+40h]
  __int128 v104; // [rsp+150h] [rbp+50h]
  __int128 v105; // [rsp+160h] [rbp+60h]
  __int64 v106; // [rsp+170h] [rbp+70h]

  v4 = (char *)a1 + 24;
  v96 = *((_DWORD *)a1 + 14);
  v97 = *((_DWORD *)a1 + 15);
  v90 = a4;
  v95 = 0LL;
  v88[0] = 0LL;
  v9 = 1;
  SURFREFVIEW::bMap(
    (SURFREFVIEW *)v88,
    (struct _SURFOBJ *)(((unsigned __int64)a1 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64)));
  v87[0] = 0LL;
  SURFREFVIEW::bMap(
    (SURFREFVIEW *)v87,
    (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)));
  *a4 = 0;
  v11 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v10) + 88);
  v12 = *((_DWORD *)a1 + 28);
  v91 = v11;
  if ( (v12 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v87);
    v87[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v88);
    v88[0] = 0LL;
  }
  else
  {
    if ( *((_WORD *)a1 + 50) == 3 )
    {
LABEL_5:
      v13 = a1;
      goto LABEL_8;
    }
    if ( *((_WORD *)a2 + 50) == 3 )
      goto LABEL_7;
    if ( (v12 & 0x400000) != 0 )
      goto LABEL_5;
    if ( _bittest((const signed __int32 *)a2 + 28, 0x16u) )
    {
LABEL_7:
      v13 = a2;
LABEL_8:
      v14 = *((_QWORD *)v13 + 6);
      if ( (*(_DWORD *)(v14 + 40) & 0x20000) != 0 )
        *((_DWORD *)a1 + 29) |= 0x10u;
      if ( a3 )
      {
        v16 = 0LL;
      }
      else
      {
        if ( _bittest((const signed __int32 *)v13 + 28, 0xAu) )
          v15 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v14 + 2832);
        else
          v15 = EngCopyBits;
        v16 = 0LL;
        v17 = (char *)a2 + 24;
        if ( !a2 )
          v17 = 0LL;
        if ( !((unsigned int (__fastcall *)(char *, char *, _QWORD, char *, __int64 *, __int64 *))v15)(
                v17,
                v4,
                0LL,
                (char *)v11 + 4552,
                &v95,
                &v95) )
        {
          v9 = 0;
LABEL_72:
          SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v87);
          v87[0] = v16;
          SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v88);
          v88[0] = v16;
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v87);
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v88);
          return v9;
        }
      }
      if ( (*(_DWORD *)(v14 + 40) & 0x20000) != 0 )
        *((_DWORD *)a1 + 29) &= ~0x10u;
      v89 = *((_DWORD *)a1 + 29) & 0x80;
      v86 = SURFACE::bStockSurface(a1);
      v19 = SURFACE::bUndoStockSurfaceDelayed(v18);
      v85 = v19;
      AltLock = HmgQueryAltLock(*((_QWORD *)a1 + 4));
      v21 = HmgQueryAltLock(*((_QWORD *)a2 + 4));
      if ( !(unsigned int)HmgSwapLockedHandleContents(*((_QWORD *)a1 + 4), AltLock, *((_QWORD *)a2 + 4), v21, 5) )
      {
        v9 = 0;
        goto LABEL_66;
      }
      v22 = 0;
      HLSURFCloneWrap = 0LL;
      UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(
        v92,
        65023LL);
      v93 = 0LL;
      v94 = 0;
      FirstLSurf = SURFACE::GetFirstLSurf(a1);
      v16 = (HLSURF *)FirstLSurf;
      if ( !FirstLSurf )
        goto LABEL_28;
      v22 = -__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3);
      if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3) )
        goto LABEL_28;
      ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v98);
      v27 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v26, v25) + 24) + 736LL);
      if ( v27 && v27() >= 0 )
        HLSURFCloneWrap = (HLSURF)SFMLOGICALSURFACE_CreateHLSURFCloneWrap(*((_QWORD *)a1 + 6), v16);
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v92, HLSURFCloneWrap);
      v9 = v93 != 0;
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v98);
      if ( !v9 )
      {
        v16 = 0LL;
      }
      else
      {
LABEL_28:
        OBJECT::SwapShareCount(a1, a2);
        v28 = *((_QWORD *)a1 + 4);
        *((_QWORD *)a1 + 70) = a2;
        *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
        v29 = *((_QWORD *)a2 + 18);
        *((_QWORD *)a2 + 4) = v28;
        v30 = *((_QWORD *)a1 + 18);
        *((_QWORD *)a1 + 18) = v29;
        v31 = *((_QWORD *)a2 + 20);
        *((_QWORD *)a2 + 18) = v30;
        v32 = *((_QWORD *)a1 + 20);
        *((_QWORD *)a1 + 20) = v31;
        v33 = *((_WORD *)a2 + 7);
        *((_QWORD *)a2 + 20) = v32;
        v34 = v33 & 0x80 | *((_WORD *)a1 + 7) & 0x60;
        *((_WORD *)a1 + 7) = v33 & 0x60 | *((_WORD *)a1 + 7) & 0x80;
        LODWORD(v31) = *((_DWORD *)a2 + 42);
        *((_WORD *)a2 + 7) = v34;
        LODWORD(v32) = *((_DWORD *)a1 + 42);
        *((_DWORD *)a1 + 42) = v31;
        v35 = *((_QWORD *)a2 + 22);
        *((_DWORD *)a2 + 42) = v32;
        v36 = *((_QWORD *)a1 + 22);
        *((_QWORD *)a1 + 22) = v35;
        *((_QWORD *)a2 + 22) = v36;
        v37 = *((_QWORD *)a1 + 19);
        *((_QWORD *)a1 + 19) = *((_QWORD *)a2 + 19);
        *((_QWORD *)a2 + 19) = v37;
        v38 = *((_QWORD *)a1 + 16);
        *((_QWORD *)a1 + 16) = *((_QWORD *)a2 + 16);
        LODWORD(v37) = *((_DWORD *)a2 + 80);
        *((_QWORD *)a2 + 16) = v38;
        LODWORD(v38) = *((_DWORD *)a1 + 80);
        *((_DWORD *)a1 + 80) = v37;
        LODWORD(v37) = *((_DWORD *)a2 + 81);
        *((_DWORD *)a2 + 80) = v38;
        LODWORD(v38) = *((_DWORD *)a1 + 81);
        *((_DWORD *)a1 + 81) = v37;
        *((_DWORD *)a2 + 81) = v38;
        v39 = *((_QWORD *)a1 + 61);
        v40 = *(_OWORD *)((char *)a1 + 344);
        *(_OWORD *)v98 = *(_OWORD *)((char *)a1 + 328);
        v41 = *(_OWORD *)((char *)a1 + 360);
        *(_OWORD *)&v98[16] = v40;
        v42 = *(_OWORD *)((char *)a1 + 376);
        *(_OWORD *)&v98[32] = v41;
        v43 = *(_OWORD *)((char *)a1 + 392);
        v99 = v42;
        v44 = *(_OWORD *)((char *)a1 + 408);
        v100 = v43;
        v45 = *(_OWORD *)((char *)a1 + 424);
        v101 = v44;
        v46 = *(_OWORD *)((char *)a1 + 440);
        v102 = v45;
        v47 = *(_OWORD *)((char *)a1 + 456);
        v103 = v46;
        v48 = *(_OWORD *)((char *)a1 + 472);
        v104 = v47;
        v105 = v48;
        v106 = v39;
        *(_OWORD *)((char *)a1 + 328) = *(_OWORD *)((char *)a2 + 328);
        *(_OWORD *)((char *)a1 + 344) = *(_OWORD *)((char *)a2 + 344);
        *(_OWORD *)((char *)a1 + 360) = *(_OWORD *)((char *)a2 + 360);
        *(_OWORD *)((char *)a1 + 376) = *(_OWORD *)((char *)a2 + 376);
        *(_OWORD *)((char *)a1 + 392) = *(_OWORD *)((char *)a2 + 392);
        *(_OWORD *)((char *)a1 + 408) = *(_OWORD *)((char *)a2 + 408);
        *(_OWORD *)((char *)a1 + 424) = *(_OWORD *)((char *)a2 + 424);
        *(_OWORD *)((char *)a1 + 440) = *(_OWORD *)((char *)a2 + 440);
        *(_OWORD *)((char *)a1 + 456) = *(_OWORD *)((char *)a2 + 456);
        *(_OWORD *)((char *)a1 + 472) = *(_OWORD *)((char *)a2 + 472);
        *((_QWORD *)a1 + 61) = *((_QWORD *)a2 + 61);
        v49 = *(_OWORD *)&v98[16];
        *(_OWORD *)((char *)a2 + 328) = *(_OWORD *)v98;
        v50 = *(_OWORD *)&v98[32];
        *(_OWORD *)((char *)a2 + 344) = v49;
        v51 = v99;
        *(_OWORD *)((char *)a2 + 360) = v50;
        v52 = v100;
        *(_OWORD *)((char *)a2 + 376) = v51;
        v53 = v101;
        *(_OWORD *)((char *)a2 + 392) = v52;
        v54 = v102;
        *(_OWORD *)((char *)a2 + 408) = v53;
        v55 = v103;
        *(_OWORD *)((char *)a2 + 424) = v54;
        v56 = v104;
        *(_OWORD *)((char *)a2 + 440) = v55;
        v57 = v105;
        v58 = v106;
        *(_OWORD *)((char *)a2 + 456) = v56;
        v59 = *((_OWORD *)a2 + 31);
        *(_OWORD *)((char *)a2 + 472) = v57;
        *((_QWORD *)a2 + 61) = v58;
        v60 = *((_OWORD *)a1 + 31);
        v61 = *((_OWORD *)a1 + 32);
        *((_OWORD *)a1 + 31) = v59;
        *((_OWORD *)a1 + 32) = *((_OWORD *)a2 + 32);
        LODWORD(v58) = *((_DWORD *)a2 + 28);
        *((_OWORD *)a2 + 31) = v60;
        *((_OWORD *)a2 + 32) = v61;
        v62 = *((_DWORD *)a1 + 28);
        *((_DWORD *)a1 + 28) = v58 ^ (v62 ^ v58) & 0x3B5EF;
        *((_DWORD *)a2 + 28) = v62 ^ (*((_DWORD *)a2 + 28) ^ v62) & 0x3B5EF;
        v63 = *((_DWORD *)a1 + 29);
        *((_DWORD *)a1 + 29) = v63 ^ (*((_DWORD *)a2 + 29) ^ v63) & 0x7FFF;
        *((_DWORD *)a2 + 29) ^= (v63 ^ *((_DWORD *)a2 + 29)) & 0x7FFF;
        v64 = *((_DWORD *)a1 + 28);
        *((_DWORD *)a1 + 28) = v64 ^ (*((_DWORD *)a2 + 28) ^ v64) & 0xE00000;
        *((_DWORD *)a2 + 28) ^= (v64 ^ *((_DWORD *)a2 + 28)) & 0xE00000;
        v65 = *((_DWORD *)a1 + 29);
        *((_DWORD *)a1 + 29) = v65 ^ (*((_DWORD *)a2 + 29) ^ v65) & 0x390D;
        LODWORD(v38) = v65 ^ *((_DWORD *)a2 + 29);
        v66 = (struct _W32PROCESS *)*((_QWORD *)a2 + 80);
        *((_DWORD *)a2 + 29) ^= v38 & 0x390D;
        v67 = (struct _W32PROCESS *)*((_QWORD *)a1 + 80);
        SURFACE::vAppContainerOwner(a1, v66);
        SURFACE::vAppContainerOwner(a2, v67);
        if ( (*((_DWORD *)a1 + 29) & 0x800) != 0 )
        {
          v69 = *(_QWORD *)((char *)a1 + 668);
          v70 = *((_DWORD *)a1 + 165);
          v71 = *((_DWORD *)a1 + 166);
          *((_DWORD *)a2 + 29) |= 0x800u;
          *((_DWORD *)a2 + 165) = v70;
          *((_DWORD *)a2 + 166) = v71;
          *(_QWORD *)((char *)a2 + 668) = v69;
        }
        if ( v86 )
        {
          *((_WORD *)a1 + 51) &= ~0x200u;
          v72 = *(_DWORD *)a2 & 0x800000;
          if ( v72 )
            *((_WORD *)a2 + 51) |= 0x200u;
          if ( v85 && v72 )
            *((_WORD *)a2 + 51) |= 0x400u;
          *v90 = 1;
        }
        if ( v16 )
        {
          UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(
            v98,
            v68);
          v73 = *v16;
          *(_QWORD *)&v98[32] = 0LL;
          *(_DWORD *)&v98[40] = 1;
          SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v98, v73);
          v16 = 0LL;
          if ( v22 )
          {
            v76 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v75, v74) + 24) + 640LL);
            if ( v76 )
            {
              if ( v76() >= 0 )
                vSpDwmMigrateSpriteLSurfReferenceWrap(*((_QWORD *)v13 + 6), *(_QWORD *)&v98[32], a2, v93);
            }
          }
          while ( 1 )
          {
            v77 = SURFACE::GetFirstLSurf(a1);
            if ( !v77 )
              break;
            if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
              vSpDwmMigrateLSurfShapeReferenceWrap(*((_QWORD *)v13 + 6), v77, a2);
          }
          SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v98);
        }
        if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
        {
          *(_QWORD *)v98 = HmgShareLockEx(*((_QWORD *)a2 + 18), 5, 0);
          memset(&v98[8], 0, 32);
          PushThreadGuardedObject(
            &v98[8],
            (__int64)v98,
            (__int64)UnexpectedThreadTerminationHandler<HmgShareLockResult<SURFACE>>::OnUnexpectedThreadTerminationStatic);
          if ( *(_QWORD *)v98 )
          {
            if ( *(HLSURF **)(*(_QWORD *)v98 + 24LL) != v16 )
            {
              v80 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v79, v78) + 24) + 672LL);
              if ( v80 )
              {
                if ( v80() >= 0 )
                  MulReplaceRedirectionChild(*(_QWORD *)(*(_QWORD *)v98 + 24LL), (char *)a1 + 24, (char *)a2 + 24);
              }
            }
          }
          HmgShareLockResult<SURFACE>::~HmgShareLockResult<SURFACE>(v98);
        }
        if ( v89 != (_DWORD)v16 )
        {
          HmgDecrementShareReferenceCountEx(a1, 0LL);
          HmgIncrementShareReferenceCount(a2);
        }
        if ( *((_DWORD *)a1 + 2) != (_DWORD)v16 )
        {
          *v90 = 1;
LABEL_63:
          SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v92);
          if ( v9 )
            goto LABEL_72;
          v19 = v85;
LABEL_66:
          if ( v86 != (_DWORD)v16 )
          {
            *((_WORD *)a2 + 51) &= ~0x200u;
            v83 = *(_DWORD *)a1 & 0x800000;
            if ( v83 )
              *((_WORD *)a1 + 51) |= 0x200u;
            if ( v19 )
            {
              if ( v83 )
                *((_WORD *)a1 + 51) |= 0x400u;
            }
          }
          goto LABEL_72;
        }
        SURFREF::SURFREF((SURFREF *)v98, *((struct HOBJ__ **)a1 + 4), v91);
        SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v87);
        v87[0] = v16;
        SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v88);
        v88[0] = v16;
        v9 = SURFREF::bDeleteSurface((SURFREF *)v98);
        if ( !v9 )
          *((_QWORD *)a1 + 70) = v16;
        SURFREF::~SURFREF((SURFREF *)v98);
        if ( v9 )
          goto LABEL_63;
      }
      v81 = HmgQueryAltLock(*((_QWORD *)a1 + 4));
      v82 = HmgQueryAltLock(*((_QWORD *)a2 + 4));
      HmgSwapLockedHandleContents(*((_QWORD *)a2 + 4), v82, *((_QWORD *)a1 + 4), v81, 5);
      goto LABEL_63;
    }
  }
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v87);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v88);
  return 0LL;
}
