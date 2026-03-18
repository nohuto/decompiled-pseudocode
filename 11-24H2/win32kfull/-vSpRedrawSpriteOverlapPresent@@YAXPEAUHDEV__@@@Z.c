/*
 * XREFs of ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1400D50D4
 * Callers:
 *     GreRedrawSpriteOverlapPresent @ 0x1400D4F5C (GreRedrawSpriteOverlapPresent.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x140009EBC (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14000C23C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x14004F094 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400D5534 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400D5640 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z @ 0x1400D5DD8 (--$GreReleaseSemaphoreExclusive@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreAcquireSemaphore@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z @ 0x1400D5E5C (--$GreAcquireSemaphore@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1401DC1E4 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x14020FB00 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x140229BD8 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall vSpRedrawSpriteOverlapPresent(HDEV a1)
{
  HDEV v1; // rbx
  struct REGION *v2; // rsi
  int v3; // edi
  struct REGION *v4; // rdx
  int v5; // eax
  int v6; // edx
  int v7; // esi
  int v8; // r14d
  unsigned int v9; // edi
  int v10; // r15d
  int v11; // eax
  int v12; // eax
  unsigned int i; // edx
  __int64 v14; // r15
  int v15; // edi
  struct _RECTL v16; // xmm0
  unsigned int j; // esi
  struct REGION *v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  HDEV v21; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v22[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[192]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v24; // [rsp+130h] [rbp+30h] BYREF
  struct _RECTL v25[20]; // [rsp+134h] [rbp+34h] BYREF
  int v26; // [rsp+280h] [rbp+180h] BYREF
  struct _RECTL v27; // [rsp+284h] [rbp+184h] BYREF
  char v28; // [rsp+294h] [rbp+194h]
  _BYTE v29[4]; // [rsp+3D0h] [rbp+2D0h] BYREF
  char v30[16]; // [rsp+3D4h] [rbp+2D4h] BYREF
  char v31; // [rsp+3E4h] [rbp+2E4h]
  _BYTE v32[4]; // [rsp+470h] [rbp+370h] BYREF
  char v33[16]; // [rsp+474h] [rbp+374h] BYREF
  char v34; // [rsp+484h] [rbp+384h]

  v21 = a1;
  v1 = a1 + 20;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v23, (struct PDEVOBJ *)&v21);
  if ( !*((_BYTE *)v1 + 128) )
    GreAcquireSemaphore<9,HSEMAPHORE__ *>(*((_QWORD *)v1 + 15));
  if ( !*((_QWORD *)v1 + 131) )
    goto LABEL_4;
  v2 = (struct REGION *)*((_QWORD *)v1 + 132);
  if ( !v2 )
    goto LABEL_4;
  v3 = 1;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v29);
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v32);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v29, v4, (const struct ERECTL *)(v1 + 10), 0);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v32, v2, (const struct ERECTL *)(v1 + 10), 0);
  ERECTL::bEmpty((ERECTL *)v30);
  v5 = ERECTL::bEmpty((ERECTL *)v33);
  if ( v6 == v5 )
  {
    if ( !v31 && !v34 )
      goto LABEL_29;
    if ( v31 == v34 )
    {
      memset_0(v25, 0, sizeof(v25));
      memset_0(&v27, 0, 0x140uLL);
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v29, 0, 0, 4u, 0x64u);
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v32, 0, 0, 4u, 0x64u);
      v7 = 1;
      v8 = 1;
      while ( 1 )
      {
        v9 = 0;
        v10 = 0;
        v24 = 0;
        v26 = 0;
        if ( v8 )
        {
          v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)v29, 0x144u, (char *)&v24, 0LL);
          v9 = v24;
          v8 = v11;
        }
        if ( v7 )
        {
          v12 = XCLIPOBJ::bEnum((XCLIPOBJ *)v32, 0x144u, (char *)&v26, 0LL);
          v10 = v26;
          v7 = v12;
        }
        if ( v9 != v10 )
          break;
        for ( i = 0; i < v9; ++i )
        {
          if ( *(&v27.left + 4 * i) != v25[i].left
            || *(&v27.top + 4 * i) != v25[i].top
            || *(&v27.right + 4 * i) != v25[i].right
            || *(&v27.bottom + 4 * i) != v25[i].bottom )
          {
            goto LABEL_28;
          }
        }
        if ( !v8 )
        {
          v3 = 1;
          if ( !v7 )
            goto LABEL_29;
        }
      }
    }
  }
LABEL_28:
  v3 = 0;
LABEL_29:
  if ( !v3 )
  {
    v14 = *((_QWORD *)v1 + 131);
    *((_QWORD *)v1 + 131) = *((_QWORD *)v1 + 132);
    vSpComputeUnlockedRegion((struct _SPRITESTATE *)v1);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
    if ( !v20 )
      goto LABEL_47;
    if ( !v18 )
      goto LABEL_47;
    RGNOBJ::vSet((RGNOBJ *)&v20, (const struct _RECTL *const)(v1 + 10));
    v19 = v14;
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v18, (struct RGNOBJ *)&v20, (struct RGNOBJ *)&v19, 4u) )
      goto LABEL_47;
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v26);
    XCLIPOBJ::vSetup((XCLIPOBJ *)&v26, v18, (const struct ERECTL *)(v1 + 10), 1);
    memset_0(&v24, 0, 0x144uLL);
    if ( v28 )
    {
      if ( v28 != 1 )
      {
        if ( v28 == 3 )
        {
          v15 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)&v26, 0, 0, 4u, 0x14u);
LABEL_40:
          if ( !v15 )
            goto LABEL_42;
          do
          {
            v15 = XCLIPOBJ::bEnum((XCLIPOBJ *)&v26, 0x144u, (char *)&v24, 0LL);
LABEL_42:
            for ( j = 0; j < v24; ++j )
            {
              PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v22, (struct _SPRITESTATE *)v1, &v25[j]);
              if ( v22[0] )
                vSpRedrawArea((struct _SPRITESTATE *)v1, &v25[j], 0);
              PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v22);
            }
          }
          while ( v15 );
        }
LABEL_47:
        v19 = v14;
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
        *((_QWORD *)v1 + 132) = 0LL;
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
        goto LABEL_4;
      }
      v16 = v27;
    }
    else
    {
      v16 = *(struct _RECTL *)(v1 + 10);
    }
    v25[0] = v16;
    v24 = 1;
    v15 = 0;
    goto LABEL_40;
  }
  v19 = *((_QWORD *)v1 + 132);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
  *((_QWORD *)v1 + 132) = 0LL;
LABEL_4:
  if ( !*((_BYTE *)v1 + 128) )
    GreReleaseSemaphoreExclusive<9,HSEMAPHORE__ *>(*((_QWORD *)v1 + 15));
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v23);
}
