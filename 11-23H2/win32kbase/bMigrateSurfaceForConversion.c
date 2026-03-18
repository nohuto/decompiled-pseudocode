/*
 * XREFs of bMigrateSurfaceForConversion @ 0x1C015A180
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C015AC20 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C003FAF4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C00417D0 (INC_SHARE_REF_CNT.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0042440 (DEC_SHARE_REF_CNT.c)
 *     PushThreadGuardedObject @ 0x1C0049F70 (PushThreadGuardedObject.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C004BD9C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C005E508 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     HmgShareLock @ 0x1C00622A0 (HmgShareLock.c)
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C008F880 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C009CD20 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C00A68A0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00D28A0 (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 *     ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1C00D28D4 (--1-$HmgShareLockResult@VSURFACE@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C0158680 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C0158EC0 (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     HmgQueryAltLock @ 0x1C0159570 (HmgQueryAltLock.c)
 *     HmgSwapLockedHandleContents @ 0x1C0159640 (HmgSwapLockedHandleContents.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0159D38 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0159D84 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x1C02327B4 (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 *     vSpDwmMigrateLSurfShapeReferenceWrap @ 0x1C0232948 (vSpDwmMigrateLSurfShapeReferenceWrap.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(struct OBJECT *a1, SURFACE *this, int a3, _DWORD *a4)
{
  unsigned int v7; // r15d
  struct _SURFOBJ *v8; // r14
  __int64 v9; // rcx
  void *v10; // rdx
  __int64 v11; // rcx
  struct _ERESOURCE *v12; // r8
  int v13; // eax
  struct OBJECT *v14; // r13
  __int64 v15; // rbx
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v17; // rax
  void *v18; // rdx
  struct _ERESOURCE *v19; // r8
  const signed __int16 *v20; // r14
  int v21; // ecx
  int v22; // r12d
  unsigned __int16 AltLock; // bx
  unsigned __int16 v24; // ax
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  struct SFMLOGICALSURFACE *v26; // rbx
  HLSURF v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int16 v33; // dx
  __int16 v34; // r8
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
  struct _EPROCESS *v62; // rdx
  struct _EPROCESS *v63; // rbx
  __int64 v64; // rax
  int v65; // xmm0_4
  int v66; // xmm1_4
  int v67; // ecx
  HLSURF *v68; // rbx
  HLSURF v69; // rdx
  struct SFMLOGICALSURFACE *v70; // rbx
  void *v71; // rdx
  struct _ERESOURCE *v72; // r8
  unsigned __int16 v73; // bx
  unsigned __int16 v74; // ax
  int v75; // eax
  void *v76; // rdx
  struct _ERESOURCE *v77; // r8
  void *v78; // rdx
  struct _ERESOURCE *v79; // r8
  int v81; // [rsp+40h] [rbp-C0h]
  int v83; // [rsp+44h] [rbp-BCh]
  BOOL (__stdcall *v84)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+48h] [rbp-B8h]
  int v85; // [rsp+48h] [rbp-B8h]
  SURFACE *v86[2]; // [rsp+50h] [rbp-B0h] BYREF
  SURFACE *v87[2]; // [rsp+60h] [rbp-A0h] BYREF
  HLSURF v88; // [rsp+70h] [rbp-90h]
  _DWORD *v89; // [rsp+78h] [rbp-88h]
  __int64 v90; // [rsp+80h] [rbp-80h] BYREF
  __int128 v91; // [rsp+88h] [rbp-78h] BYREF
  __int128 v92; // [rsp+98h] [rbp-68h]
  int v93; // [rsp+A8h] [rbp-58h]
  struct SFMLOGICALSURFACE *v94; // [rsp+B0h] [rbp-50h]
  _BYTE v95[32]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v96; // [rsp+D8h] [rbp-28h]
  int v97; // [rsp+E0h] [rbp-20h]
  __int128 v98; // [rsp+F0h] [rbp-10h]
  __int128 v99; // [rsp+100h] [rbp+0h]
  __int128 v100; // [rsp+110h] [rbp+10h]
  __int128 v101; // [rsp+120h] [rbp+20h]
  __int128 v102; // [rsp+130h] [rbp+30h]
  __int128 v103; // [rsp+140h] [rbp+40h]
  __int128 v104; // [rsp+150h] [rbp+50h]
  __int128 v105; // [rsp+160h] [rbp+60h]
  __int128 v106; // [rsp+170h] [rbp+70h]
  __int128 v107; // [rsp+180h] [rbp+80h]
  __int64 v108; // [rsp+190h] [rbp+90h]
  __int64 v109; // [rsp+1A0h] [rbp+A0h] BYREF
  int v110; // [rsp+1A8h] [rbp+A8h]
  int v111; // [rsp+1ACh] [rbp+ACh]

  v110 = *((_DWORD *)a1 + 14);
  v111 = *((_DWORD *)a1 + 15);
  v89 = a4;
  v109 = 0LL;
  v7 = 1;
  v86[0] = 0LL;
  v8 = (struct _SURFOBJ *)(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL));
  SURFREFVIEW::bMap((SURFREFVIEW *)v86, v8);
  v87[0] = 0LL;
  SURFREFVIEW::bMap((SURFREFVIEW *)v87, (struct _SURFOBJ *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)));
  *a4 = 0;
  SGDGetSessionState(v9);
  v13 = *((_DWORD *)a1 + 28);
  if ( (v13 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate(v87, v10, v12);
    v87[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate(v86, v78, v79);
    v86[0] = 0LL;
    goto LABEL_81;
  }
  if ( *((_WORD *)a1 + 50) == 3 )
  {
LABEL_5:
    v14 = a1;
    goto LABEL_8;
  }
  if ( *((_WORD *)this + 50) != 3 )
  {
    if ( (v13 & 0x400000) != 0 )
      goto LABEL_5;
    if ( !_bittest((const signed __int32 *)this + 28, 0x16u) )
    {
LABEL_81:
      v7 = 0;
      goto LABEL_82;
    }
  }
  v14 = this;
LABEL_8:
  v15 = *((_QWORD *)v14 + 6);
  if ( (*(_DWORD *)(v15 + 40) & 0x20000) != 0 )
    *((_DWORD *)a1 + 29) |= 0x10u;
  if ( a3
    || ((*((_DWORD *)v14 + 28) & 0x400) == 0
      ? (v16 = EngCopyBits)
      : (v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2816)),
        v84 = v16,
        v17 = SGDGetSessionState(v11),
        ((unsigned int (__fastcall *)(unsigned __int64, struct _SURFOBJ *, _QWORD, __int64, __int64 *, __int64 *))v84)(
          ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
          v8,
          0LL,
          *(_QWORD *)(v17 + 24) + 6896LL,
          &v109,
          &v109)) )
  {
    if ( (*(_DWORD *)(v15 + 40) & 0x20000) != 0 )
      *((_DWORD *)a1 + 29) &= ~0x10u;
    v20 = (const signed __int16 *)((char *)a1 + 102);
    v85 = *((_DWORD *)a1 + 29) & 0x80;
    v21 = *(_DWORD *)a1 & 0x800000;
    if ( v21 && _bittest16(v20, 9u) )
    {
      v22 = 1;
    }
    else
    {
      v22 = 0;
      if ( !v21 )
        goto LABEL_24;
    }
    if ( (*v20 & 0x400) != 0 )
    {
      v83 = 1;
      goto LABEL_25;
    }
LABEL_24:
    v83 = 0;
LABEL_25:
    AltLock = HmgQueryAltLock(*((_QWORD *)a1 + 4));
    v24 = HmgQueryAltLock(*((_QWORD *)this + 4));
    if ( !(unsigned int)HmgSwapLockedHandleContents(*((_QWORD *)a1 + 4), AltLock, *((_QWORD *)this + 4), v24, 5) )
    {
      v7 = 0;
      goto LABEL_73;
    }
    v81 = 0;
    v88 = 0LL;
    UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>((__int64)v95);
    v96 = 0LL;
    v97 = 0;
    FirstLSurf = SURFACE::GetFirstLSurf(a1);
    v94 = FirstLSurf;
    v26 = FirstLSurf;
    if ( !FirstLSurf )
      goto LABEL_35;
    v81 = -__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3);
    if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3) )
      goto LABEL_35;
    if ( qword_1C02946F0 && (int)qword_1C02946F0() >= 0 )
    {
      v27 = qword_1C02946F8;
      if ( qword_1C02946F8 )
        v27 = (HLSURF)((__int64 (__fastcall *)(_QWORD, struct SFMLOGICALSURFACE *, _QWORD, __int64, int))qword_1C02946F8)(
                        *((_QWORD *)a1 + 6),
                        v26,
                        0LL,
                        1LL,
                        1);
    }
    else
    {
      v27 = v88;
    }
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v95, v27);
    if ( !v96 )
    {
      v7 = 0;
    }
    else
    {
LABEL_35:
      OBJECT::SwapShareCount(a1, this);
      v28 = *((_QWORD *)a1 + 4);
      *((_QWORD *)a1 + 70) = this;
      *((_QWORD *)a1 + 4) = *((_QWORD *)this + 4);
      v29 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 4) = v28;
      v30 = *((_QWORD *)a1 + 18);
      *((_QWORD *)a1 + 18) = v29;
      v31 = *((_QWORD *)this + 20);
      *((_QWORD *)this + 18) = v30;
      v32 = *((_QWORD *)a1 + 20);
      *((_QWORD *)a1 + 20) = v31;
      v33 = *((_WORD *)this + 7);
      *((_QWORD *)this + 20) = v32;
      v34 = v33 & 0x8000 | *((_WORD *)a1 + 7) & 0x4000;
      *((_WORD *)a1 + 7) = *((_WORD *)a1 + 7) & 0x8000 | v33 & 0x4000;
      LODWORD(v31) = *((_DWORD *)this + 42);
      *((_WORD *)this + 7) = v34;
      LODWORD(v32) = *((_DWORD *)a1 + 42);
      *((_DWORD *)a1 + 42) = v31;
      v35 = *((_QWORD *)this + 22);
      *((_DWORD *)this + 42) = v32;
      v36 = *((_QWORD *)a1 + 22);
      *((_QWORD *)a1 + 22) = v35;
      *((_QWORD *)this + 22) = v36;
      v37 = *((_QWORD *)a1 + 19);
      *((_QWORD *)a1 + 19) = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = v37;
      v38 = *((_QWORD *)a1 + 16);
      *((_QWORD *)a1 + 16) = *((_QWORD *)this + 16);
      LODWORD(v37) = *((_DWORD *)this + 80);
      *((_QWORD *)this + 16) = v38;
      LODWORD(v38) = *((_DWORD *)a1 + 80);
      *((_DWORD *)a1 + 80) = v37;
      LODWORD(v37) = *((_DWORD *)this + 81);
      *((_DWORD *)this + 80) = v38;
      LODWORD(v38) = *((_DWORD *)a1 + 81);
      *((_DWORD *)a1 + 81) = v37;
      *((_DWORD *)this + 81) = v38;
      v39 = *((_QWORD *)a1 + 61);
      v40 = *(_OWORD *)((char *)a1 + 344);
      v98 = *(_OWORD *)((char *)a1 + 328);
      v41 = *(_OWORD *)((char *)a1 + 360);
      v99 = v40;
      v42 = *(_OWORD *)((char *)a1 + 376);
      v100 = v41;
      v43 = *(_OWORD *)((char *)a1 + 392);
      v101 = v42;
      v44 = *(_OWORD *)((char *)a1 + 408);
      v102 = v43;
      v45 = *(_OWORD *)((char *)a1 + 424);
      v103 = v44;
      v46 = *(_OWORD *)((char *)a1 + 440);
      v104 = v45;
      v47 = *(_OWORD *)((char *)a1 + 456);
      v105 = v46;
      v48 = *(_OWORD *)((char *)a1 + 472);
      v106 = v47;
      v107 = v48;
      v108 = v39;
      *(_OWORD *)((char *)a1 + 328) = *(_OWORD *)((char *)this + 328);
      *(_OWORD *)((char *)a1 + 344) = *(_OWORD *)((char *)this + 344);
      *(_OWORD *)((char *)a1 + 360) = *(_OWORD *)((char *)this + 360);
      *(_OWORD *)((char *)a1 + 376) = *(_OWORD *)((char *)this + 376);
      *(_OWORD *)((char *)a1 + 392) = *(_OWORD *)((char *)this + 392);
      *(_OWORD *)((char *)a1 + 408) = *(_OWORD *)((char *)this + 408);
      *(_OWORD *)((char *)a1 + 424) = *(_OWORD *)((char *)this + 424);
      *(_OWORD *)((char *)a1 + 440) = *(_OWORD *)((char *)this + 440);
      *(_OWORD *)((char *)a1 + 456) = *(_OWORD *)((char *)this + 456);
      *(_OWORD *)((char *)a1 + 472) = *(_OWORD *)((char *)this + 472);
      *((_QWORD *)a1 + 61) = *((_QWORD *)this + 61);
      v49 = v99;
      *(_OWORD *)((char *)this + 328) = v98;
      v50 = v100;
      *(_OWORD *)((char *)this + 344) = v49;
      v51 = v101;
      *(_OWORD *)((char *)this + 360) = v50;
      v52 = v102;
      *(_OWORD *)((char *)this + 376) = v51;
      v53 = v103;
      *(_OWORD *)((char *)this + 392) = v52;
      v54 = v104;
      *(_OWORD *)((char *)this + 408) = v53;
      v55 = v105;
      *(_OWORD *)((char *)this + 424) = v54;
      v56 = v106;
      *(_OWORD *)((char *)this + 440) = v55;
      v57 = v107;
      v58 = v108;
      *(_OWORD *)((char *)this + 456) = v56;
      v59 = *((_OWORD *)this + 31);
      *(_OWORD *)((char *)this + 472) = v57;
      *((_QWORD *)this + 61) = v58;
      v60 = *((_OWORD *)a1 + 31);
      v61 = *((_OWORD *)a1 + 32);
      *((_OWORD *)a1 + 31) = v59;
      *((_OWORD *)a1 + 32) = *((_OWORD *)this + 32);
      *((_OWORD *)this + 31) = v60;
      *((_OWORD *)this + 32) = v61;
      LODWORD(v38) = *((_DWORD *)a1 + 28);
      *((_DWORD *)a1 + 28) = *((_DWORD *)this + 28) ^ (*((_DWORD *)this + 28) ^ v38) & 0x3B5EF;
      *((_DWORD *)this + 28) = v38 ^ (*((_DWORD *)this + 28) ^ v38) & 0x3B5EF;
      LODWORD(v38) = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 29) = v38 ^ (*((_DWORD *)this + 29) ^ v38) & 0x3FFF;
      *((_DWORD *)this + 29) ^= (*((_DWORD *)this + 29) ^ v38) & 0x3FFF;
      LODWORD(v38) = *((_DWORD *)a1 + 28);
      *((_DWORD *)a1 + 28) = v38 ^ (*((_DWORD *)this + 28) ^ v38) & 0xC00000;
      *((_DWORD *)this + 28) ^= (*((_DWORD *)this + 28) ^ v38) & 0xC00000;
      LODWORD(v38) = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 29) = v38 ^ (*((_DWORD *)this + 29) ^ v38) & 0x390D;
      v62 = (struct _EPROCESS *)*((_QWORD *)this + 80);
      *((_DWORD *)this + 29) ^= (*((_DWORD *)this + 29) ^ v38) & 0x390D;
      v63 = (struct _EPROCESS *)*((_QWORD *)a1 + 80);
      SURFACE::vAppContainerOwner(a1, v62);
      SURFACE::vAppContainerOwner(this, v63);
      if ( (*((_DWORD *)a1 + 29) & 0x800) != 0 )
      {
        v64 = *(_QWORD *)((char *)a1 + 668);
        v65 = *((_DWORD *)a1 + 165);
        v66 = *((_DWORD *)a1 + 166);
        *((_DWORD *)this + 29) |= 0x800u;
        *((_DWORD *)this + 165) = v65;
        *((_DWORD *)this + 166) = v66;
        *(_QWORD *)((char *)this + 668) = v64;
      }
      if ( v22 )
      {
        *v20 &= ~0x200u;
        v67 = *(_DWORD *)this & 0x800000;
        if ( v67 )
          *((_WORD *)this + 51) |= 0x200u;
        if ( v83 && v67 )
          *((_WORD *)this + 51) |= 0x400u;
        *v89 = 1;
      }
      v68 = (HLSURF *)v94;
      if ( v94 )
      {
        UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>((__int64)&v90);
        v69 = *v68;
        *((_QWORD *)&v92 + 1) = 0LL;
        v93 = 1;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v90, v69);
        if ( v81 && qword_1C0294690 && (int)qword_1C0294690() >= 0 && qword_1C0294698 )
          qword_1C0294698(*((_QWORD *)v14 + 6), *((_QWORD *)&v92 + 1), this, v96);
        while ( 1 )
        {
          v70 = SURFACE::GetFirstLSurf(a1);
          if ( !v70 )
            break;
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
            vSpDwmMigrateLSurfShapeReferenceWrap(*((_QWORD *)v14 + 6), v70, this);
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v90);
      }
      if ( (*((_DWORD *)this + 29) & 4) != 0 )
      {
        v90 = HmgShareLock(*((_QWORD *)this + 18), 5);
        v91 = 0LL;
        v92 = 0LL;
        PushThreadGuardedObject(
          &v91,
          (__int64)&v90,
          (__int64)UnexpectedThreadTerminationHandler<HmgShareLockResult<SURFACE>>::OnUnexpectedThreadTerminationStatic);
        if ( v90
          && *(_QWORD *)(v90 + 24)
          && qword_1C02946B0
          && (int)((__int64 (*)(void))qword_1C02946B0)() >= 0
          && qword_1C02946B8 )
        {
          qword_1C02946B8(*(_QWORD *)(v90 + 24), (char *)a1 + 24, (char *)this + 24);
        }
        HmgShareLockResult<SURFACE>::~HmgShareLockResult<SURFACE>((__int64)&v90);
      }
      if ( v85 )
      {
        DEC_SHARE_REF_CNT(a1);
        INC_SHARE_REF_CNT((unsigned int *)this);
      }
      if ( *((_DWORD *)a1 + 2) )
      {
        *v89 = 1;
        goto LABEL_70;
      }
      SURFREF::SURFREF((SURFREF *)&v90, *((HSURF *)a1 + 4));
      SURFREFVIEW::bUnMapImmediate(v86, v71, v72);
      v86[0] = 0LL;
      v7 = SURFREF::bDeleteSurface((SURFREF *)&v90);
      if ( !v7 )
        *((_QWORD *)a1 + 70) = 0LL;
      SURFREF::~SURFREF((SURFREF *)&v90);
      if ( v7 )
      {
LABEL_70:
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v95);
        if ( v7 )
          goto LABEL_79;
LABEL_73:
        if ( v22 )
        {
          *((_WORD *)this + 51) &= ~0x200u;
          v75 = *(_DWORD *)a1 & 0x800000;
          if ( v75 )
            *v20 |= 0x200u;
          if ( v83 && v75 )
            *v20 |= 0x400u;
        }
        goto LABEL_79;
      }
    }
    v73 = HmgQueryAltLock(*((_QWORD *)a1 + 4));
    v74 = HmgQueryAltLock(*((_QWORD *)this + 4));
    HmgSwapLockedHandleContents(*((_QWORD *)this + 4), v74, *((_QWORD *)a1 + 4), v73, 5);
    goto LABEL_70;
  }
  v7 = 0;
LABEL_79:
  SURFREFVIEW::bUnMapImmediate(v87, v18, v19);
  v87[0] = 0LL;
  SURFREFVIEW::bUnMapImmediate(v86, v76, v77);
  v86[0] = 0LL;
LABEL_82:
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v87);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v86);
  return v7;
}
