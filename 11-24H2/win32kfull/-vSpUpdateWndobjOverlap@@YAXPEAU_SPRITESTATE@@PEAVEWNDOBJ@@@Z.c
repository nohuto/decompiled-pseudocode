/*
 * XREFs of ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14032E380
 * Callers:
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x140212870 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x14032C528 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x14032CDA8 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140300D20 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x140300FAC (-vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x14032C664 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 */

void __fastcall vSpUpdateWndobjOverlap(struct _SPRITESTATE *a1, struct EWNDOBJ *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 i; // rdi
  __int64 v8; // rdx
  unsigned __int8 v9; // cf
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r8d
  __int64 j; // rdx
  __int64 k; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // esi
  struct RGNOBJ *v21; // r8
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v26[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v27; // [rsp+80h] [rbp+38h] BYREF
  struct _POINTL v28; // [rsp+88h] [rbp+40h] BYREF
  __int64 v29; // [rsp+90h] [rbp+48h] BYREF
  __int64 v30; // [rsp+98h] [rbp+50h] BYREF

  if ( !_bittest((const signed __int32 *)a2 + 46, 9u)
    || (v4 = *(_QWORD *)(*((_QWORD *)a2 + 21) + 32LL), (v5 = *(_QWORD *)(v4 + 48)) == 0)
    || v4 != *(_QWORD *)(v5 + 2544)
    || v5 == *(_QWORD *)a1 )
  {
    v24 = *((_QWORD *)a1 + 89);
    v26[0] = *((_QWORD *)a2 + 24);
    RGNOBJ::vSet((RGNOBJ *)&v24);
    for ( i = *((_QWORD *)a1 + 1); i; i = *(_QWORD *)(i + 24) )
    {
      if ( ((unsigned int)bIntersect((char *)a2 + 4, i + 80, v6) || _bittest((const signed __int32 *)a2 + 46, 9u))
        && (RGNOBJ::bInside((struct EWNDOBJ *)((char *)a2 + 56), (struct _RECTL *)(i + 80)) == 2
         || _bittest((const signed __int32 *)a2 + 46, 9u)
         && v26[0]
         && RGNOBJ::bInside((RGNOBJ *)v26, (struct _RECTL *)(i + 80)) == 2) )
      {
        v9 = _bittest((const signed __int32 *)a2 + 46, 9u);
        v10 = *(_QWORD *)(i + 184);
        v29 = v10;
        if ( v9 )
        {
          if ( (*(_DWORD *)i & 1) == 0 && *(_QWORD *)(i + 72) )
          {
            for ( j = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v10, v8) + 96) + 4824LL); j; j = *(_QWORD *)(j + 8) )
            {
              for ( k = *(_QWORD *)(j + 24); k; k = *(_QWORD *)(k + 160) )
              {
                if ( _bittest((const signed __int32 *)(k + 184), 9u) && *(_QWORD *)(k + 176) == *(_QWORD *)(i + 72) )
                  goto LABEL_55;
              }
            }
            v16 = *(_QWORD *)(i + 16);
            if ( *(_QWORD *)(i + 72) )
            {
              v17 = *(_QWORD *)(v16 + 8);
              v18 = *(_QWORD *)(v16 + 1128);
              if ( v17 != v18 )
              {
                v6 = *((_QWORD *)a2 + 22);
                do
                {
                  if ( *(_QWORD *)(v17 + 72) == v6 )
                    break;
                  v17 = *(_QWORD *)(v17 + 24);
                }
                while ( v17 != v18 );
              }
              v19 = 0LL;
              if ( v17 != *(_QWORD *)(v16 + 1128) )
                v19 = v17;
              if ( !v19 || *(_DWORD *)(i + 64) > *(_DWORD *)(v19 + 64) )
              {
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v25);
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
                if ( v30 && v25 && v27 )
                {
                  RGNOBJ::vSet((RGNOBJ *)&v25, (const struct _RECTL *const)(i + 80));
                  v20 = 1;
                  if ( v29 )
                  {
                    if ( RGNOBJ::bMerge((RGNOBJ *)&v30, (struct RGNOBJ *)&v29, (struct RGNOBJ *)v26, 8u)
                      && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v30) == 1
                      || !RGNOBJ::bCopy((RGNOBJ *)&v27, (struct RGNOBJ *)&v29)
                      || (v28.x = -*(_DWORD *)(i + 80),
                          v28.y = -*(_DWORD *)(i + 84),
                          RGNOBJ::bOffset((RGNOBJ *)&v27, &v28),
                          vSpComputeClipEffective((struct SPRITE *)i, (struct RGNOBJ *)&v27),
                          (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v27) == 1) )
                    {
                      v20 = 0;
                    }
                    else
                    {
                      v28.x = -v28.x;
                      v28.y = -v28.y;
                      RGNOBJ::bOffset((RGNOBJ *)&v27, &v28);
                    }
                  }
                  if ( !v29 || v20 == 1 )
                  {
                    v21 = (struct RGNOBJ *)&v25;
                    if ( v29 )
                      v21 = (struct RGNOBJ *)&v27;
                    if ( RGNOBJ::bMerge((RGNOBJ *)&v30, (struct RGNOBJ *)&v24, v21, 0xEu) )
                    {
                      RGNOBJ::vSwap((RGNOBJ *)&v30, (struct RGNOBJ *)&v24);
                      *((_QWORD *)a1 + 89) = v24;
                    }
                  }
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v25);
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
              }
            }
          }
        }
        else if ( !v10 || RGNOBJ::bInside((RGNOBJ *)&v29, (struct _RECTL *)((char *)a2 + 4)) == 2 )
        {
          v11 = *((_DWORD *)a2 + 46);
          if ( (v11 & 0x2000000) == 0 )
          {
            v12 = v11 | 0x2000000;
            *((_DWORD *)a2 + 46) = v12;
            if ( (v12 & 0x80u) != 0 )
            {
              v13 = 128;
LABEL_59:
              TRACKOBJ::vUpdateDrv(*((TRACKOBJ **)a2 + 21), a2, v13);
              goto LABEL_60;
            }
          }
          goto LABEL_60;
        }
      }
LABEL_55:
      ;
    }
    v22 = *((_DWORD *)a2 + 46);
    if ( (v22 & 0x2000000) != 0 )
    {
      v23 = v22 & 0xFDFFFFFF;
      *((_DWORD *)a2 + 46) = v23;
      if ( (v23 & 0x80u) != 0 )
      {
        v13 = 256;
        goto LABEL_59;
      }
    }
LABEL_60:
    if ( _bittest((const signed __int32 *)a2 + 46, 9u) )
    {
      vUpdateClientRgnOnSpriteOverlap(a2, (struct RGNOBJ *)&v24);
      *((_QWORD *)a1 + 89) = v24;
    }
  }
}
