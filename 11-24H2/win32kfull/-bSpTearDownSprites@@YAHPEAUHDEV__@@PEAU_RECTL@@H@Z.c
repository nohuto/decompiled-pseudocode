/*
 * XREFs of ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x14032AC5C
 * Callers:
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x14032460C (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x14032940C (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400500B4 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400D5534 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400D5640 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1400DECD8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1400DEE44 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1400DEEBC (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1401DC1E4 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bSpTearDownSprites(HDEV a1, struct _RECTL *a2, int a3)
{
  HDEV v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // esi
  struct SPRITE *v10; // [rsp+30h] [rbp-D0h] BYREF
  HDEV v11; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[96]; // [rsp+40h] [rbp-C0h] BYREF
  struct _SPRITESTATE *v13[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v14; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v15; // [rsp+170h] [rbp+70h] BYREF

  v10 = 0LL;
  v15 = 0LL;
  v11 = a1;
  v14 = 0LL;
  if ( ((_DWORD)a1[10] & 1) == 0 )
    return 0LL;
  v6 = a1 + 20;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v13, (struct PDEVOBJ *)&v11);
  v8 = 0;
  if ( *((_DWORD *)v6 + 14) && bIntersect(a2, (const struct _RECTL *)(v6 + 10), &v14) )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v12, (struct _SPRITESTATE *)v6, &v14, 0, 0LL);
    do
    {
      v9 = ENUMAREAS::bEnum((ENUMAREAS *)v12, &v10, &v15);
      if ( v10 )
      {
        v8 = 1;
        vSpWriteToScreen((struct _SPRITESTATE *)v6, (struct _POINTL *)v10 + 21, *((struct _SURFOBJ **)v10 + 20), &v15);
      }
    }
    while ( v9 );
    if ( a3 )
      vSpComputeUnlockedRegion((HDEV *)v6);
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v12);
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v13, v7);
  return v8;
}
