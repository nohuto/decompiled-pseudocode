/*
 * XREFs of ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400500B4
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x14004EBFC (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x14004F094 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x14016D28C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x14032AC5C (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x140050238 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??0ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x140051050 (--0ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x140208B5C (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x140329AF0 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x14032BC7C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall vSpWriteToScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v8; // rbx
  struct _CLIPOBJ *v9; // r14
  int v10; // eax
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ecx
  struct _SURFOBJ *v16; // rdx
  struct _POINTL v17; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v18[4]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v19[52]; // [rsp+54h] [rbp-E4h] BYREF
  _BYTE v20[96]; // [rsp+88h] [rbp-B0h] BYREF
  int v21; // [rsp+E8h] [rbp-50h]

  ECLIPOBJTMPIFNEEDED::ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v18);
  v8 = (struct REGION *)*((_QWORD *)a1 + 130);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v18, v10, v8, (struct ERECTL *)a4, 0);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v19) )
    {
      ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v18);
      return;
    }
    v9 = (struct _CLIPOBJ *)v18;
  }
  a3->iUniq = 0;
  p_pvScan0 = 0LL;
  hsurf = (int)a3[1].hsurf;
  if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
  {
    p_pvScan0 = &a3[-1].pvScan0;
    GreLockDisplayDevice(a3->hdev);
  }
  v13 = *((_QWORD *)a1 + 4);
  v14 = 0LL;
  if ( v13 )
  {
    v15 = *(_DWORD *)(v13 + 88);
    if ( (v15 & 0x80004000) != 0 && (v15 & 0x200) == 0 )
    {
      v14 = v13 - 24;
      GreLockDisplayDevice(*(_QWORD *)(v13 - 24 + 48));
    }
  }
  v16 = (struct _SURFOBJ *)*((_QWORD *)a1 + 4);
  v17 = 0LL;
  INVOKEOFFCOPYBITS(&v17, v16, a2, a3, v9, 0LL, a4, (struct _POINTL *)a4);
  if ( v14 )
    GreUnlockDisplayDevice(*(_QWORD *)(v14 + 48));
  if ( p_pvScan0 )
    GreUnlockDisplayDevice(p_pvScan0[6]);
  if ( v21 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v20);
}
