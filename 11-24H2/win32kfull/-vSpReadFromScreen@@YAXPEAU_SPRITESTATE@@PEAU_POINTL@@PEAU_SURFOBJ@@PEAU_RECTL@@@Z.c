/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032D444
 * Callers:
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032C37C (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x14032DC70 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     vSpUnTearDownSprites @ 0x14032F3B0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140029E08 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1400505D4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x140051050 (--0ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z40401234@Z @ 0x140171568 (-OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x140208B5C (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x140329AF0 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x14032BC7C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  __int64 v7; // rdx
  struct REGION *v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // ecx
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  char *p_hdev; // r15
  __int64 v16; // rsi
  struct Gre::Base::SESSION_GLOBALS *v17; // rax
  bool v18; // zf
  __int64 v19; // r14
  struct HOBJ__ *v20; // rdx
  int (*v21)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  HDEV hdev; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  struct _XLATEOBJ *v57; // [rsp+60h] [rbp-A0h] BYREF
  struct _XLATEOBJ *v58; // [rsp+68h] [rbp-98h]
  struct _CLIPOBJ *v59; // [rsp+70h] [rbp-90h]
  struct _POINTL *v60; // [rsp+78h] [rbp-88h]
  __int64 v61; // [rsp+80h] [rbp-80h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v62; // [rsp+88h] [rbp-78h]
  struct _RECTL *v63; // [rsp+90h] [rbp-70h]
  struct _POINTL *v64; // [rsp+98h] [rbp-68h]
  _BYTE v65[32]; // [rsp+A0h] [rbp-60h] BYREF
  struct _SURFOBJ *v66; // [rsp+C0h] [rbp-40h]
  _BYTE v67[4]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v68[156]; // [rsp+D4h] [rbp-2Ch] BYREF

  v63 = a4;
  v64 = a2;
  ECLIPOBJTMPIFNEEDED::ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v67);
  v8 = (struct REGION *)*((_QWORD *)a1 + 130);
  v59 = 0LL;
  if ( v8 )
  {
    v9 = bConcurrent(a1, v7);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v67, v9, v8, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)v68) )
      goto LABEL_61;
    v59 = (struct _CLIPOBJ *)v67;
  }
  v10 = *((_QWORD *)a1 + 4);
  v11 = 0LL;
  if ( v10 )
  {
    v12 = *(_DWORD *)(v10 + 88);
    if ( (v12 & 0x80004000) != 0 && (v12 & 0x200) == 0 )
    {
      v11 = v10 - 24;
      GreLockDisplayDevice(*(_QWORD *)(v10 - 24 + 48));
    }
  }
  p_pvScan0 = 0LL;
  if ( a3 )
  {
    hsurf = (int)a3[1].hsurf;
    if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
    {
      p_pvScan0 = &a3[-1].pvScan0;
      GreLockDisplayDevice(a3->hdev);
    }
  }
  p_hdev = (char *)*((_QWORD *)a1 + 4);
  v58 = 0LL;
  v57 = 0LL;
  v61 = 0LL;
  v60 = (struct _POINTL *)&v61;
  if ( ((unsigned __int64)(p_hdev - 24) & -(__int64)(p_hdev != 0LL)) == 0 )
    goto LABEL_57;
  v16 = *(_QWORD *)(((unsigned __int64)(p_hdev - 24) & -(__int64)(p_hdev != 0LL)) + 0x30);
  v17 = Gre::Base::Globals((Gre::Base *)(p_hdev - 24));
  v18 = (*(_DWORD *)(((unsigned __int64)(p_hdev - 24) & -(__int64)(p_hdev != 0LL)) + 0x70) & 0x80000) == 0;
  v62 = v17;
  if ( v18 || (v19 = *(_QWORD *)(v16 + 24), v16 == v19) )
  {
    if ( !_bittest((const signed __int32 *)&a3[1].hsurf, 0xAu) && *((_QWORD *)p_hdev + 3) )
    {
      if ( *((_WORD *)p_hdev + 38) != 1 )
      {
LABEL_36:
        if ( _bittest((const signed __int32 *)p_hdev + 22, 0xAu) )
        {
          hdev = (HDEV)*((_QWORD *)p_hdev + 3);
LABEL_54:
          v21 = (int (*)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))*((_QWORD *)hdev + 165);
          goto LABEL_56;
        }
        goto LABEL_55;
      }
      if ( !bAllowShareAccess((struct _SURFOBJ *)p_hdev)
        || !GreGetCurrentThread(v23, v22)
        || !*((_QWORD *)GreGetCurrentThread(v25, v24) + 34)
        || !*((_DWORD *)GreGetCurrentThread(v27, v26) + 87) && !*((_DWORD *)GreGetCurrentThread(v29, v28) + 88)
        || (v31 = *((_QWORD *)GreGetCurrentThread(v29, v28) + 34), !_bittest((const signed __int32 *)(v31 + 20), 0xAu)) )
      {
        if ( *((_WORD *)p_hdev + 38) == 1
          && bAllowShareAccess((struct _SURFOBJ *)p_hdev)
          && GreGetCurrentThread(v33, v32)
          && *((_QWORD *)GreGetCurrentThread(v35, v34) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v37, v36) + 87) || *((_DWORD *)GreGetCurrentThread(v39, v38) + 88)) )
        {
          goto LABEL_55;
        }
        goto LABEL_36;
      }
LABEL_45:
      v21 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*((_QWORD *)GreGetCurrentThread(v31, v30) + 34) + 80LL);
LABEL_56:
      OffCopyBitsInternal(v21, v64, a3, v60, (struct _SURFOBJ *)p_hdev, v59, v58, v63, (struct _POINTL *)v63);
      goto LABEL_57;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && GreGetCurrentThread(v42, v41)
        && *((_QWORD *)GreGetCurrentThread(v44, v43) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v46, v45) + 87) || *((_DWORD *)GreGetCurrentThread(v48, v47) + 88)) )
      {
        v31 = *((_QWORD *)GreGetCurrentThread(v48, v47) + 34);
        if ( _bittest((const signed __int32 *)(v31 + 20), 0xAu) )
          goto LABEL_45;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && GreGetCurrentThread(v50, v49)
        && *((_QWORD *)GreGetCurrentThread(v52, v51) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v54, v53) + 87) || *((_DWORD *)GreGetCurrentThread(v56, v55) + 88)) )
      {
        goto LABEL_55;
      }
    }
    if ( _bittest((const signed __int32 *)&a3[1].hsurf, 0xAu) )
    {
      hdev = a3->hdev;
      goto LABEL_54;
    }
LABEL_55:
    v21 = EngCopyBits;
    goto LABEL_56;
  }
  v20 = *(struct HOBJ__ **)(((unsigned __int64)(p_hdev - 24) & -(__int64)(p_hdev != 0LL)) + 0x90);
  v60 = (struct _POINTL *)(v16 + 2576);
  SURFREF::SURFREF((SURFREF *)v65, v20, v17);
  if ( v66
    && (unsigned int)EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)&v57,
                       0LL,
                       0,
                       *(_QWORD *)(v19 + 1792),
                       *(_QWORD *)(v16 + 1792),
                       *((_QWORD *)v62 + 471),
                       *((_QWORD *)v62 + 471),
                       0,
                       0,
                       0,
                       0x2000) )
  {
    p_hdev = (char *)v66;
    v58 = v57;
    if ( v66 )
      p_hdev = (char *)&v66->hdev;
    v21 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(v19 + 2832);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v65);
    goto LABEL_56;
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v65);
LABEL_57:
  EXLATEOBJ::vAltUnlock((Gre::Base **)&v57);
  if ( p_pvScan0 )
    GreUnlockDisplayDevice(p_pvScan0[6]);
  if ( v11 )
    GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
LABEL_61:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v67);
}
