/*
 * XREFs of ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032A050
 * Callers:
 *     <none>
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x14004F094 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x140050238 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1400505D4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400D5534 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400D5640 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400D5DB8 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400D5E3C (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ @ 0x1400DEA0C (-bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ.c)
 *     ?vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ @ 0x1400DEB48 (-vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1400DECD8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1400DEE44 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1400DEEBC (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DFA4C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400E0798 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400E0854 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1401542B0 (--0XDCOBJ@@QEAA@XZ.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x140154530 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     OffBitBlt @ 0x140180CC4 (OffBitBlt.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x14019CE08 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0?$SEMOBJEXORSHARED@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401A519C (--0-$SEMOBJEXORSHARED@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 *     ??1?$SEMOBJEXORSHARED@$05@@QEAA@XZ @ 0x1401ACD74 (--1-$SEMOBJEXORSHARED@$05@@QEAA@XZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x14020FB00 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x140229BD8 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x140268FD4 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x14032DF7C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bSpBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v11; // esi
  struct _RECTL *v12; // r14
  RECTL rclBounds; // xmm0
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rbx
  int v17; // eax
  int v18; // r12d
  int v19; // edi
  struct _SPRITESTATE *v20; // rbx
  unsigned int v21; // r13d
  struct _CLIPOBJ *v23; // r9
  struct _RECTL *v24; // r8
  struct _SURFOBJ *v25; // r13
  __int64 v26; // rdx
  struct SPRITE *v27; // rbx
  struct _SURFOBJ *v28; // r12
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  HDEV v31; // rcx
  PVOID *v32; // rdi
  int v33; // eax
  __int64 v34; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  struct _GRETHREAD *v36; // r13
  XCLIPOBJ *v37; // r12
  __int64 v38; // r10
  struct REGION *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  HDEV v59; // rax
  int v60; // eax
  __int64 v61; // rdx
  struct _CLIPOBJ *v62; // [rsp+70h] [rbp-90h] BYREF
  int v63; // [rsp+78h] [rbp-88h]
  struct _POINTL v64; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v65; // [rsp+88h] [rbp-78h]
  int v66; // [rsp+8Ch] [rbp-74h]
  int v67; // [rsp+90h] [rbp-70h]
  LONG v68; // [rsp+94h] [rbp-6Ch]
  int v69; // [rsp+98h] [rbp-68h]
  int v70; // [rsp+9Ch] [rbp-64h]
  LONG v71; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v72; // [rsp+A8h] [rbp-58h]
  struct _RECTL v73; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v74; // [rsp+C0h] [rbp-40h]
  HDEV hdev; // [rsp+C8h] [rbp-38h] BYREF
  struct SPRITE *v76; // [rsp+D0h] [rbp-30h] BYREF
  int v77; // [rsp+D8h] [rbp-28h]
  struct SPRITE *v78; // [rsp+E0h] [rbp-20h] BYREF
  struct SPRITE *v79; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v80; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTL *v81; // [rsp+F8h] [rbp-8h]
  struct _POINTL *v82; // [rsp+100h] [rbp+0h]
  struct REGION *v83; // [rsp+108h] [rbp+8h] BYREF
  struct _SPRITESTATE *v84; // [rsp+110h] [rbp+10h]
  struct _POINTL v85; // [rsp+118h] [rbp+18h] BYREF
  int v86; // [rsp+120h] [rbp+20h]
  struct _RECTL v87; // [rsp+128h] [rbp+28h] BYREF
  __int64 v88; // [rsp+138h] [rbp+38h] BYREF
  struct _SURFOBJ *v89; // [rsp+140h] [rbp+40h]
  struct _SURFOBJ *v90; // [rsp+148h] [rbp+48h]
  struct _XLATEOBJ *v91; // [rsp+150h] [rbp+50h]
  struct _POINTL *v92; // [rsp+158h] [rbp+58h]
  __int64 *v93; // [rsp+160h] [rbp+60h]
  struct _BRUSHOBJ *v94; // [rsp+168h] [rbp+68h]
  struct _SURFOBJ *v95; // [rsp+170h] [rbp+70h]
  _QWORD v96[3]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v97[16]; // [rsp+190h] [rbp+90h] BYREF
  DC *v98[6]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v99[96]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v100[80]; // [rsp+230h] [rbp+130h] BYREF
  int v101; // [rsp+280h] [rbp+180h]
  struct _SPRITESTATE *v102[24]; // [rsp+290h] [rbp+190h] BYREF
  struct _RECTL v103; // [rsp+350h] [rbp+250h] BYREF
  struct _RECTL v104; // [rsp+360h] [rbp+260h] BYREF
  struct _RECTL v105; // [rsp+370h] [rbp+270h] BYREF
  RECTL v106; // [rsp+380h] [rbp+280h] BYREF
  RECTL v107; // [rsp+390h] [rbp+290h] BYREF
  struct _RECTL v108; // [rsp+3A0h] [rbp+2A0h] BYREF

  v11 = 0;
  v12 = a6;
  v91 = a5;
  v92 = a8;
  v94 = a9;
  v93 = (__int64 *)a10;
  v95 = a3;
  v90 = a1;
  v62 = a4;
  v63 = 0;
  v80 = 0LL;
  v76 = 0LL;
  v79 = 0LL;
  v78 = 0LL;
  v108 = 0LL;
  v103 = 0LL;
  v87 = 0LL;
  v107 = 0LL;
  v105 = 0LL;
  v104 = 0LL;
  v106 = 0LL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v106 = rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v106) )
      return 1LL;
    v107 = rclBounds;
    ERECTL::operator*=(&v107.left, &a6->left);
    v12 = &v107;
  }
  hdev = a1->hdev;
  *(_QWORD *)&v73.right = 0LL;
  *(_QWORD *)&v73.left = 0LL;
  v74 = 0;
  UNDOGRETHREADPIDLOCKS::vUndo((UNDOGRETHREADPIDLOCKS *)&v73, (__int64)a2);
  v16 = Gre::Base::Globals(v15);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED<6>::SEMOBJEXORSHARED<6>((__int64)v97, v16, v17 != 0);
  if ( !UNDOGRETHREADPIDLOCKS::bRedo((UNDOGRETHREADPIDLOCKS *)&v73) )
    goto LABEL_99;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v102, (struct PDEVOBJ *)&hdev);
  v18 = v12->left - a7->x;
  v19 = v12->top - a7->y;
  v20 = (struct _SPRITESTATE *)(hdev + 20);
  v70 = v18;
  v84 = (struct _SPRITESTATE *)(hdev + 20);
  v69 = v19;
  if ( v18 <= 0 )
  {
    v21 = 0;
    if ( v19 > 0 )
      v21 = 2;
  }
  else
  {
    v21 = 3;
    if ( v19 <= 0 )
      v21 = 1;
  }
  v65 = v21;
  if ( v62 )
  {
    if ( v62->iDComplexity )
      v106 = v62->rclBounds;
    else
      v62 = 0LL;
  }
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(hdev + 50));
  v85 = 0LL;
  if ( !*((_QWORD *)v20 + 130) )
    goto LABEL_23;
  v103.left = v12->left - v18;
  v103.right = v12->right - v18;
  v103.top = v12->top - v19;
  v103.bottom = v12->bottom - v19;
  if ( *((_QWORD *)v20 + 131) )
  {
    v23 = 0LL;
    v24 = &v103;
    goto LABEL_22;
  }
  if ( bIntersect(v12, &v103, &v108) )
  {
    v23 = v62;
    v24 = &v108;
LABEL_22:
    vSpUpdateLockedScreenAreas(v20, &v85, v24, v23, 1);
  }
LABEL_23:
  SPRITERANGELOCK::vUnlockShared((struct _SPRITESTATE *)((char *)v20 + 120));
  v73.left = v12->left - v18;
  v73.top = v12->top - v19;
  v73.right = v12->right - v18;
  v73.bottom = v12->bottom - v19;
  ERECTL::operator+=((__int64)&v73, (__int64)v12);
  PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v96, v20, &v73);
  if ( !v96[0] )
    goto LABEL_96;
  ENUMAREAS::ENUMAREAS((ENUMAREAS *)v100, v20, v12, v21, &v73);
  v88 = 0LL;
  if ( !v101 )
    goto LABEL_95;
  do
  {
    v77 = ENUMAREAS::bEnum((ENUMAREAS *)v100, &v76, &v87);
    v103.left = v87.left - v18;
    v103.right = v87.right - v18;
    v103.top = v87.top - v19;
    v103.bottom = v87.bottom - v19;
    do
    {
      if ( v76 )
      {
        v25 = (struct _SURFOBJ *)*((_QWORD *)v76 + 20);
        v82 = (struct _POINTL *)((char *)v76 + 168);
      }
      else
      {
        v25 = v90;
        v82 = (struct _POINTL *)&v88;
      }
      v72 = v25;
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v99, v20, &v103, v65, 0LL);
      do
      {
        v86 = ENUMAREAS::bEnum((ENUMAREAS *)v99, &v79, &v105);
        if ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v99, &v78) )
        {
          do
          {
            v27 = v78;
            v79 = v78;
          }
          while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v99, &v78) );
        }
        else
        {
          v27 = v79;
        }
        if ( v27 )
        {
          v28 = (struct _SURFOBJ *)*((_QWORD *)v27 + 20);
          v81 = (struct _POINTL *)((char *)v27 + 168);
        }
        else
        {
          v28 = v90;
          v81 = (struct _POINTL *)&v88;
        }
        v104.left = v70 + v105.left;
        v104.right = v70 + v105.right;
        v89 = v28;
        v104.top = v19 + v105.top;
        v104.bottom = v19 + v105.bottom;
        if ( v62 && !bIntersect(&v104, &v106, &v62->rclBounds) )
          goto LABEL_88;
        p_pvScan0 = 0LL;
        *(_QWORD *)&v73.left = 0LL;
        if ( v25 )
        {
          hsurf = (int)v25[1].hsurf;
          if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v25[-1].pvScan0;
            v31 = v25->hdev;
            *(_QWORD *)&v73.left = (char *)v25 - 24;
            GreLockDisplayDevice(v31);
          }
        }
        v32 = 0LL;
        if ( v28 )
        {
          v33 = (int)v28[1].hsurf;
          if ( (v33 & 0x80004000) != 0 && (v33 & 0x200) == 0 )
          {
            v32 = &v28[-1].pvScan0;
            GreLockDisplayDevice(v28->hdev);
          }
        }
        v83 = 0LL;
        v66 = 0;
        v67 = 0;
        v34 = *((unsigned int *)hdev + 644);
        v71 = *((_DWORD *)hdev + 645);
        v64 = 0LL;
        v68 = v34;
        if ( !v62 )
        {
          CurrentThread = GreGetCurrentThread(v34, v26);
          v36 = CurrentThread;
          if ( CurrentThread && (*((_DWORD *)CurrentThread + 86) & 1) != 0 && *((_QWORD *)CurrentThread + 37) )
          {
            XDCOBJ::XDCOBJ((XDCOBJ *)v98);
            v98[0] = *((DC **)v36 + 37);
            v37 = (DC *)((char *)v98[0] + 1768);
            v83 = XDCOBJ::prgnEffRao(v98);
            if ( (*(_DWORD *)(v38 + 40) & 0x20000) != 0 )
            {
              v64.x = -v68;
              v64.y = -v71;
              RGNOBJ::bOffset((RGNOBJ *)&v83, &v64);
              v67 = 1;
            }
            v39 = XDCOBJ::prgnEffRao(v98);
            XCLIPOBJ::vSetup(v37, v39, (const struct ERECTL *)&v104, 1);
            v62 = (struct _CLIPOBJ *)v37;
            v28 = v89;
            v66 = 1;
          }
          v25 = v72;
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v73, &v62) )
        {
          if ( a11 == 52428 )
          {
            INVOKEOFFCOPYBITS(v82, v25, v81, v28, v62, v91, &v104, (struct _POINTL *)&v105);
            goto LABEL_79;
          }
          if ( v92 )
          {
            LODWORD(v80) = v104.left + v92->x - v12->left;
            HIDWORD(v80) = v104.top + v92->y - v12->top;
          }
          *(_QWORD *)&v73.left = v62;
          if ( v25->iType == 1 )
          {
            if ( bAllowShareAccess(v25)
              && GreGetCurrentThread(v41, v40)
              && *((_QWORD *)GreGetCurrentThread(v43, v42) + 34)
              && (*((_DWORD *)GreGetCurrentThread(v45, v44) + 87) || *((_DWORD *)GreGetCurrentThread(v47, v46) + 88)) )
            {
              v49 = *((_QWORD *)GreGetCurrentThread(v47, v46) + 34);
              if ( (*(_DWORD *)(v49 + 20) & 1) != 0 )
              {
                v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread(v49, v48) + 34) + 72LL);
                goto LABEL_77;
              }
            }
            if ( v25->iType == 1
              && bAllowShareAccess(v25)
              && GreGetCurrentThread(v52, v51)
              && *((_QWORD *)GreGetCurrentThread(v54, v53) + 34)
              && (*((_DWORD *)GreGetCurrentThread(v56, v55) + 87) || *((_DWORD *)GreGetCurrentThread(v58, v57) + 88)) )
            {
              goto LABEL_76;
            }
          }
          if ( ((__int64)v25[1].hsurf & 1) == 0 )
          {
LABEL_76:
            v50 = EngBitBlt;
          }
          else
          {
            v59 = v25->hdev;
            v63 |= 1u;
            v50 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v59 + 164);
          }
LABEL_77:
          OffBitBlt(
            (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v50,
            (LONG *)v82,
            (__int64)v25,
            v81,
            (__int64)v28,
            (__int64)v95,
            *(__int64 *)&v73.left,
            (__int64)v91,
            &v104.left,
            (__int64 *)&v105.left,
            (__int64)&v80,
            (__int64)v94,
            v93,
            a11);
          if ( (v63 & 1) != 0 )
            v63 &= ~1u;
        }
LABEL_79:
        if ( v66 == 1 )
        {
          if ( v67 == 1 )
          {
            v64.x = v68;
            v64.y = v71;
            RGNOBJ::bOffset((RGNOBJ *)&v83, &v64);
          }
          v62 = 0LL;
        }
        if ( v32 )
          GreUnlockDisplayDevice(v32[6]);
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
        v19 = v69;
LABEL_88:
        if ( v62 )
          v62->rclBounds = v106;
      }
      while ( v86 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v99);
      v60 = ENUMAREAS::bEnumLayers((ENUMAREAS *)v100, &v76);
      v20 = v84;
    }
    while ( v60 );
    if ( v76 )
      vSpRedrawArea(v84, &v87, 0);
    v18 = v70;
  }
  while ( v77 );
LABEL_95:
  ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v100);
LABEL_96:
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v96);
  SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)v20 + 120));
  if ( *((_QWORD *)v20 + 130) )
    vSpUpdateLockedScreenAreas(v20, &v85, v12, v62, 0);
  SPRITERANGELOCK::vUnlockExclusive((struct _SPRITESTATE *)((char *)v20 + 120));
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v96);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v102, v61);
  v11 = 1;
LABEL_99:
  SEMOBJEXORSHARED<6>::~SEMOBJEXORSHARED<6>((__int64)v97);
  return v11;
}
