/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0280D5C
 * Callers:
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C027FAAC (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0281C7C (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0283C60 (vSpUnTearDownSprites.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004CC34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C006A3B0 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007A678 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C007E42C (--1SURFREF@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FB100 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z40401234@Z @ 0x1C015CADE (-OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C0264524 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C027921C (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??1NEEDDDILOCK@@QEAA@XZ @ 0x1C02792B8 (--1NEEDDDILOCK@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027CC2C (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C027F750 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 */

void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int hsurf; // eax
  __int64 v12; // rsi
  struct _XLATEOBJ *v13; // r12
  __int64 v14; // rbx
  struct Gre::Base::SESSION_GLOBALS *v15; // r13
  __int64 v16; // rdi
  HSURF v17; // rdx
  int (*v18)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rbx
  HDEV hdev; // rax
  struct _XLATEOBJ *v20; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *p_pvScan0; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  struct _CLIPOBJ *v23; // [rsp+78h] [rbp-88h]
  struct _POINTL *v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  struct _RECTL *v26; // [rsp+90h] [rbp-70h]
  struct _POINTL *v27; // [rsp+98h] [rbp-68h]
  _BYTE v28[32]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-40h]
  _BYTE v30[4]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v31[52]; // [rsp+D4h] [rbp-2Ch] BYREF
  __int64 v32; // [rsp+108h] [rbp+8h]
  __int64 v33; // [rsp+120h] [rbp+20h]
  int v34; // [rsp+128h] [rbp+28h]
  int v35; // [rsp+150h] [rbp+50h]
  __int64 v36; // [rsp+160h] [rbp+60h]
  int v37; // [rsp+168h] [rbp+68h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 129);
  v26 = a4;
  v27 = a2;
  v33 = 0LL;
  v34 = 0;
  v35 = 1;
  v36 = 0LL;
  v32 = 0LL;
  v37 = 0;
  v23 = 0LL;
  if ( v4 )
  {
    v8 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v30, v8, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)v31) )
      goto LABEL_67;
    v23 = (struct _CLIPOBJ *)v30;
  }
  v9 = *((_QWORD *)a1 + 4);
  v22 = 0LL;
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 88);
    if ( (v10 & 0x80004000) != 0 && (v10 & 0x200) == 0 )
    {
      v22 = v9 - 24;
      GreLockDisplayDevice(*(_QWORD *)(v9 - 24 + 48));
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
  v12 = *((_QWORD *)a1 + 4);
  v13 = 0LL;
  v20 = 0LL;
  v25 = 0LL;
  v24 = (struct _POINTL *)&v25;
  if ( ((v12 - 24) & -(__int64)(v12 != 0)) == 0 )
    goto LABEL_13;
  v14 = *(_QWORD *)(((v12 - 24) & -(__int64)(v12 != 0)) + 0x30);
  v15 = Gre::Base::Globals((Gre::Base *)(v12 - 24));
  if ( (*(_DWORD *)(((v12 - 24) & -(__int64)(v12 != 0)) + 0x70) & 0x80000) != 0 )
  {
    v16 = *(_QWORD *)(v14 + 24);
    if ( v14 != v16 )
    {
      v17 = *(HSURF *)(((v12 - 24) & -(__int64)(v12 != 0)) + 0x90);
      v24 = (struct _POINTL *)(v14 + 2560);
      SURFREF::SURFREF((SURFREF *)v28, v17);
      if ( !v29 )
      {
        SURFREF::~SURFREF((SURFREF *)v28);
LABEL_13:
        EXLATEOBJ::vAltUnlock((Gre::Base **)&v20);
LABEL_14:
        NEEDDDILOCK::~NEEDDDILOCK((NEEDDDILOCK *)&p_pvScan0);
        NEEDDDILOCK::~NEEDDDILOCK((NEEDDDILOCK *)&v22);
        goto LABEL_67;
      }
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (Gre::Base *)&v20,
                            0LL,
                            0,
                            *(_QWORD *)(v16 + 1776),
                            *(_QWORD *)(v14 + 1776),
                            *((_QWORD *)v15 + 750),
                            *((_QWORD *)v15 + 750),
                            0,
                            0,
                            0,
                            0x2000) )
      {
        if ( v29 )
          DEC_SHARE_REF_CNT(v29);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v28);
        EXLATEOBJ::~EXLATEOBJ((Gre::Base **)&v20);
        goto LABEL_14;
      }
      v13 = v20;
      v12 = v29 + 24;
      if ( !v29 )
        v12 = 0LL;
      v18 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(v16 + 2816);
      if ( v29 )
        DEC_SHARE_REF_CNT(v29);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v28);
      goto LABEL_63;
    }
  }
  if ( _bittest((const signed __int32 *)&a3[1].hsurf, 0xAu) || !*(_QWORD *)(v12 + 24) )
  {
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && _bittest(
             (const signed __int32 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL),
             0xAu) )
      {
        goto LABEL_52;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_62;
      }
    }
    if ( _bittest((const signed __int32 *)&a3[1].hsurf, 0xAu) )
    {
      hdev = a3->hdev;
      goto LABEL_61;
    }
LABEL_62:
    v18 = EngCopyBits;
    goto LABEL_63;
  }
  if ( *(_WORD *)(v12 + 76) != 1 )
  {
LABEL_43:
    if ( _bittest((const signed __int32 *)(v12 + 88), 0xAu) )
    {
      hdev = *(HDEV *)(v12 + 24);
LABEL_61:
      v18 = (int (*)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))*((_QWORD *)hdev + 164);
      goto LABEL_63;
    }
    goto LABEL_62;
  }
  if ( !bAllowShareAccess((struct _SURFOBJ *)v12)
    || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
    || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
    && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
    || !_bittest(
          (const signed __int32 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL),
          0xAu) )
  {
    if ( *(_WORD *)(v12 + 76) == 1
      && bAllowShareAccess((struct _SURFOBJ *)v12)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
    {
      goto LABEL_62;
    }
    goto LABEL_43;
  }
LABEL_52:
  v18 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
LABEL_63:
  OffCopyBitsInternal(v18, v27, a3, v24, (struct _SURFOBJ *)v12, v23, v13, v26, (struct _POINTL *)v26);
  EXLATEOBJ::vAltUnlock((Gre::Base **)&v20);
  if ( p_pvScan0 )
    GreUnlockDisplayDevice(p_pvScan0[6]);
  if ( v22 )
    GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
LABEL_67:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v30);
}
