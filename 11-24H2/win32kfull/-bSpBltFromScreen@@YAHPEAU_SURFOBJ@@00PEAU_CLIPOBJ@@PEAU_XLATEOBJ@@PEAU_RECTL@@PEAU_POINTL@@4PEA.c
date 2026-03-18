/*
 * XREFs of ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400DE040
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140022FAC (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002A350 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x140050238 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1400505D4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400D5534 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400D5640 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ @ 0x1400DEA0C (-bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ.c)
 *     ?vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ @ 0x1400DEB48 (-vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1400DEC24 (-bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1400DECD8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1400DEE44 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1400DEEBC (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DFA4C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400E0798 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400E0854 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     OffBitBlt @ 0x140180CC4 (OffBitBlt.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x14020FB00 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x140229BD8 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14032D89C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x14032DF7C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bSpBltFromScreen(
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
  struct _CLIPOBJ *v12; // rdi
  HDEV v14; // r14
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rbx
  int v17; // eax
  __int64 v18; // r12
  PVOID *v19; // rbx
  void (__fastcall *v20)(__int64); // rcx
  __int64 v21; // r12
  int v22; // r8d
  struct _RECTL *v23; // r13
  LONG v24; // eax
  struct _POINTL *v25; // r15
  unsigned int v26; // r9d
  BYTE iDComplexity; // bl
  int v28; // eax
  __int64 v29; // r12
  __int64 v30; // rdx
  __int64 (__fastcall *v31)(__int64); // rcx
  struct _SURFOBJ *v33; // rdx
  struct _POINTL *v34; // rax
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  struct _SURFOBJ *v37; // rcx
  PVOID *v38; // rbx
  int v39; // eax
  RECTL rclBounds; // xmm0
  __int64 v41; // rdx
  PVOID *v42; // rdi
  int v43; // eax
  int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // rdx
  unsigned int v47; // esi
  __int64 (__fastcall *v48)(__int64); // rcx
  __int64 (__fastcall *v49)(__int64); // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  BOOL (__stdcall *v60)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  LONG y; // r8d
  LONG v70; // ecx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  BOOL (__stdcall *v81)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  BYTE v90; // [rsp+70h] [rbp-90h]
  int v91; // [rsp+74h] [rbp-8Ch]
  struct _POINTL v92; // [rsp+78h] [rbp-88h] BYREF
  struct _RECTL *v93; // [rsp+80h] [rbp-80h]
  int v94; // [rsp+88h] [rbp-78h]
  int v95; // [rsp+8Ch] [rbp-74h]
  struct _CLIPOBJ *v96; // [rsp+90h] [rbp-70h]
  int v97; // [rsp+98h] [rbp-68h]
  struct _POINTL *v98; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v99; // [rsp+A8h] [rbp-58h]
  struct _XLATEOBJ *v100; // [rsp+B0h] [rbp-50h]
  __int64 v101; // [rsp+B8h] [rbp-48h] BYREF
  HDEV hdev; // [rsp+C0h] [rbp-40h] BYREF
  struct SPRITE *v103; // [rsp+C8h] [rbp-38h] BYREF
  struct _POINTL *v104; // [rsp+D0h] [rbp-30h]
  struct _BRUSHOBJ *v105; // [rsp+D8h] [rbp-28h]
  struct _POINTL *v106; // [rsp+E0h] [rbp-20h]
  struct _SURFOBJ *v107; // [rsp+E8h] [rbp-18h]
  _QWORD v108[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v109; // [rsp+100h] [rbp+0h]
  __int64 v110; // [rsp+108h] [rbp+8h]
  struct _SPRITESTATE *v111[24]; // [rsp+110h] [rbp+10h] BYREF
  struct _SPRITESTATE *v112[24]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _RECTL v113; // [rsp+290h] [rbp+190h] BYREF
  struct _RECTL v114; // [rsp+2A0h] [rbp+1A0h] BYREF
  RECTL v115; // [rsp+2B0h] [rbp+1B0h] BYREF
  RECTL v116; // [rsp+2C0h] [rbp+1C0h] BYREF

  v100 = a5;
  v12 = a4;
  v106 = a8;
  v105 = a9;
  v104 = a10;
  v96 = a4;
  v107 = a3;
  v93 = a6;
  v91 = 0;
  v101 = 0LL;
  v103 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v116 = 0LL;
  v115 = 0LL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v115 = rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v115) )
      return 1LL;
    v116 = rclBounds;
    ERECTL::operator*=(&v116, v41);
    v93 = &v116;
  }
  hdev = a2->hdev;
  v108[1] = 0LL;
  v108[0] = 0LL;
  v14 = hdev + 20;
  v109 = 0;
  v98 = (struct _POINTL *)(hdev + 20);
  UNDOGRETHREADPIDLOCKS::vUndo((UNDOGRETHREADPIDLOCKS *)v108);
  v16 = Gre::Base::Globals(v15);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  v18 = *(_QWORD *)v16;
  v19 = 0LL;
  v20 = (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal;
  v21 = v18 + 1040;
  v95 = v17;
  v110 = v21;
  if ( !v17 )
    v20 = (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal;
  GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v20, v21);
  if ( UNDOGRETHREADPIDLOCKS::bRedo((UNDOGRETHREADPIDLOCKS *)v108) )
  {
    if ( !(unsigned int)bInsideDriverCall((struct _SPRITESTATE *)v14) && !(unsigned int)SURFACE::bIncludeSprites() )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v112, (struct PDEVOBJ *)&hdev);
      v113.left = a7->x;
      v22 = v93->left - v113.left;
      v23 = v93;
      v113.top = a7->y;
      v97 = v22;
      v24 = v93->right - v22;
      v94 = v93->top - v113.top;
      v113.right = v24;
      v113.bottom = v93->bottom - v94;
      SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v14 + 30));
      v25 = v98;
      v92 = 0LL;
      if ( v98[130] )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v98, &v92, v93, v12, 1);
      SPRITERANGELOCK::vUnlockShared((SPRITERANGELOCK *)(v14 + 30));
      if ( v97 > 0 )
      {
        v26 = 3;
        if ( v94 <= 0 )
          v26 = 1;
      }
      else
      {
        v26 = 0;
        if ( v94 > 0 )
          v26 = 2;
      }
      if ( v12 )
      {
        iDComplexity = v12->iDComplexity;
        v90 = iDComplexity;
        if ( iDComplexity )
          v115 = v12->rclBounds;
      }
      else
      {
        iDComplexity = 0;
        v90 = 0;
      }
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v111, (struct _SPRITESTATE *)v25, &v113, v26, 0LL);
      while ( 1 )
      {
        v28 = ENUMAREAS::bEnum((ENUMAREAS *)v111, &v103, &v113);
        v114.left = v97 + v113.left;
        v114.right = v97 + v113.right;
        v114.top = v94 + v113.top;
        LODWORD(v93) = v28;
        v114.bottom = v94 + v113.bottom;
        if ( !iDComplexity || bIntersect(&v114, &v115, &v12->rclBounds) )
          break;
LABEL_18:
        if ( !(_DWORD)v93 )
        {
          v29 = v110;
          if ( iDComplexity )
            v12->rclBounds = v115;
          ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v111);
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v112, v30);
          v31 = (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal;
          if ( !v95 )
            v31 = (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal;
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v31, v29);
          return 1LL;
        }
      }
      if ( v103 )
      {
        v33 = (struct _SURFOBJ *)*((_QWORD *)v103 + 20);
        v34 = (struct _POINTL *)((char *)v103 + 168);
      }
      else
      {
        v33 = (struct _SURFOBJ *)v25[4];
        v34 = &v92;
      }
      p_pvScan0 = 0LL;
      v98 = v34;
      v99 = v33;
      if ( a1 )
      {
        hsurf = (int)a1[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &a1[-1].pvScan0;
          GreLockDisplayDevice(a1->hdev);
        }
      }
      v37 = v99;
      v38 = 0LL;
      if ( v99 )
      {
        v39 = (int)v99[1].hsurf;
        if ( (v39 & 0x80004000) != 0 && (v39 & 0x200) == 0 )
        {
          v38 = &v99[-1].pvScan0;
          GreLockDisplayDevice(v99->hdev);
          v37 = v99;
        }
      }
      if ( a11 == 52428 )
      {
        INVOKEOFFCOPYBITS(&v92, a1, v98, v37, v96, v100, &v114, (struct _POINTL *)&v113);
LABEL_36:
        if ( v38 )
          GreUnlockDisplayDevice(v38[6]);
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
        iDComplexity = v90;
        v12 = v96;
        goto LABEL_18;
      }
      if ( v106 )
      {
        LODWORD(v101) = v114.left + v106->x - v23->left;
        HIDWORD(v101) = v114.top + v106->y - v23->top;
      }
      if ( a1->iType == 1 )
      {
        if ( bAllowShareAccess(a1)
          && GreGetCurrentThread(v51, v50)
          && *((_QWORD *)GreGetCurrentThread(v53, v52) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v55, v54) + 87) || *((_DWORD *)GreGetCurrentThread(v57, v56) + 88)) )
        {
          v59 = *((_QWORD *)GreGetCurrentThread(v57, v56) + 34);
          if ( (*(_DWORD *)(v59 + 20) & 1) != 0 )
          {
            v60 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread(v59, v58) + 34) + 72LL);
            goto LABEL_90;
          }
        }
        if ( a1->iType == 1
          && bAllowShareAccess(a1)
          && GreGetCurrentThread(v62, v61)
          && *((_QWORD *)GreGetCurrentThread(v64, v63) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v66, v65) + 87) || *((_DWORD *)GreGetCurrentThread(v68, v67) + 88)) )
        {
          goto LABEL_89;
        }
      }
      if ( ((__int64)a1[1].hsurf & 1) == 0 )
      {
LABEL_89:
        v60 = EngBitBlt;
      }
      else
      {
        v91 |= 2u;
        v60 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 164);
      }
LABEL_90:
      OffBitBlt(
        (_DWORD)v60,
        (unsigned int)&v92,
        (_DWORD)a1,
        (_DWORD)v98,
        (__int64)v99,
        (__int64)v107,
        (__int64)v96,
        (__int64)v100,
        (__int64)&v114,
        (__int64)&v113,
        (__int64)&v101,
        (__int64)v105,
        (__int64)v104,
        a11);
      if ( (v91 & 2) != 0 )
        v91 &= ~2u;
      goto LABEL_36;
    }
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v111, (struct PDEVOBJ *)&hdev);
    if ( *((_QWORD *)v14 + 167) )
    {
      y = a7->y;
      v113.left = a7->x;
      v70 = v113.left + v93->right - v93->left;
      v113.top = y;
      v113.right = v70;
      v113.bottom = y + v93->bottom - v93->top;
      PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v108, (struct _SPRITESTATE *)v14, &v113);
      if ( v108[0] )
        vSpRedrawAreaExMirror((struct _SPRITESTATE *)v14, &v113);
      a2 = (struct _SURFOBJ *)*((_QWORD *)v14 + 167);
      PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v108);
    }
    v42 = 0LL;
    if ( a1 )
    {
      v43 = (int)a1[1].hsurf;
      if ( (v43 & 0x80004000) != 0 && (v43 & 0x200) == 0 )
      {
        v42 = &a1[-1].pvScan0;
        GreLockDisplayDevice(a1->hdev);
      }
    }
    if ( a2 )
    {
      v44 = (int)a2[1].hsurf;
      if ( (v44 & 0x80004000) != 0 && (v44 & 0x200) == 0 )
      {
        v19 = &a2[-1].pvScan0;
        GreLockDisplayDevice(a2->hdev);
      }
    }
    v92 = 0LL;
    if ( a11 == 52428 )
    {
      v45 = INVOKEOFFCOPYBITS(&v92, a1, &v92, a2, v96, v100, v93, a7);
LABEL_59:
      v47 = v45;
      if ( v19 )
        GreUnlockDisplayDevice(v19[6]);
      if ( v42 )
        GreUnlockDisplayDevice(v42[6]);
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v111, v46);
      v48 = (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal;
      if ( !v95 )
        v48 = (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal;
      GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v48, v21);
      return v47;
    }
    if ( a1->iType != 1 )
      goto LABEL_109;
    if ( bAllowShareAccess(a1)
      && GreGetCurrentThread(v72, v71)
      && *((_QWORD *)GreGetCurrentThread(v74, v73) + 34)
      && (*((_DWORD *)GreGetCurrentThread(v76, v75) + 87) || *((_DWORD *)GreGetCurrentThread(v78, v77) + 88)) )
    {
      v80 = *((_QWORD *)GreGetCurrentThread(v78, v77) + 34);
      if ( (*(_DWORD *)(v80 + 20) & 1) != 0 )
      {
        v81 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread(v80, v79) + 34) + 72LL);
LABEL_112:
        v45 = OffBitBlt(
                (_DWORD)v81,
                (unsigned int)&v92,
                (_DWORD)a1,
                (unsigned int)&v92,
                (__int64)a2,
                (__int64)v107,
                (__int64)v96,
                (__int64)v100,
                (__int64)v93,
                (__int64)a7,
                (__int64)v106,
                (__int64)v105,
                (__int64)v104,
                a11);
        goto LABEL_59;
      }
    }
    if ( a1->iType != 1
      || !bAllowShareAccess(a1)
      || !GreGetCurrentThread(v83, v82)
      || !*((_QWORD *)GreGetCurrentThread(v85, v84) + 34)
      || !*((_DWORD *)GreGetCurrentThread(v87, v86) + 87) && !*((_DWORD *)GreGetCurrentThread(v89, v88) + 88) )
    {
LABEL_109:
      if ( ((__int64)a1[1].hsurf & 1) != 0 )
      {
        v81 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 164);
        goto LABEL_112;
      }
    }
    v81 = EngBitBlt;
    goto LABEL_112;
  }
  v49 = (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal;
  if ( !v95 )
    v49 = (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal;
  GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v49, v21);
  return 0LL;
}
