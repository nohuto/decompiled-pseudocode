/*
 * XREFs of ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x14032C664
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14032E380 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1401FEF58 (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x140206DC0 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?vSpAddOpaqueRects@@YAXJJJJJJAEAVRGNMEMOBJTMP@@0AEAVRGNOBJ@@@Z @ 0x14032C0D4 (-vSpAddOpaqueRects@@YAXJJJJJJAEAVRGNMEMOBJTMP@@0AEAVRGNOBJ@@@Z.c)
 */

void __fastcall vSpComputeClipEffective(struct SPRITE *a1, struct RGNOBJ *a2)
{
  struct _SURFOBJ *v4; // rdx
  char v5; // si
  _BYTE *v6; // rax
  char v7; // cl
  LONG v8; // r14d
  __int64 v9; // rax
  LONG v10; // edx
  int v11; // r10d
  LONG v12; // r9d
  LONG v13; // r8d
  int v14; // r12d
  __int64 v15; // rcx
  __int64 i; // rax
  int v17; // [rsp+28h] [rbp-F0h]
  __int64 v18; // [rsp+58h] [rbp-C0h] BYREF
  int v19; // [rsp+60h] [rbp-B8h]
  __int64 v20; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-A8h] BYREF
  LONG v22; // [rsp+78h] [rbp-A0h]
  LONG v23; // [rsp+7Ch] [rbp-9Ch]
  int v24; // [rsp+80h] [rbp-98h]
  int v25; // [rsp+84h] [rbp-94h]
  int v26; // [rsp+88h] [rbp-90h]
  int v27; // [rsp+8Ch] [rbp-8Ch]
  LONG v28; // [rsp+90h] [rbp-88h]
  int v29; // [rsp+94h] [rbp-84h]
  __int64 v30; // [rsp+98h] [rbp-80h]
  __int64 v31; // [rsp+A0h] [rbp-78h]
  __int64 v32; // [rsp+A8h] [rbp-70h]
  unsigned __int8 *v33; // [rsp+B0h] [rbp-68h] BYREF
  _QWORD v34[2]; // [rsp+B8h] [rbp-60h] BYREF
  struct _RECTL v35; // [rsp+C8h] [rbp-50h] BYREF

  v34[0] = 0LL;
  if ( *(_QWORD *)a2 )
  {
    if ( *((_DWORD *)a1 + 1) == 2 && (*(_DWORD *)a1 & 8) == 0 )
    {
      v4 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
      if ( v4 )
      {
        if ( v4->iBitmapFormat == 6 && !v4->iType && SURFREFVIEW::bMap((SURFREFVIEW *)v34, v4) )
        {
          if ( *((_DWORD *)a1 + 56) != 3 || (v5 = 1, *((_BYTE *)a1 + 231)) )
            v5 = 0;
          v6 = (char *)a1 + 202;
          if ( (*((_BYTE *)a1 + 203) & 1) == 0 || (v7 = 1, *v6 != 0xFF) )
            v7 = 0;
          if ( v5 || v7 )
          {
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
            if ( v21 && v18 && v20 )
            {
              RGNOBJ::vSet((RGNOBJ *)&v20);
              RGNOBJ::vSet((RGNOBJ *)&v18);
              RGNOBJ::vSet((RGNOBJ *)&v21);
              v33 = 0LL;
              if ( v5 )
              {
                v35 = (struct _RECTL)*((_OWORD *)a1 + 6);
                vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v35, &v33);
              }
              v8 = 0;
              v9 = *((_QWORD *)a1 + 16);
              v10 = *(_DWORD *)(v9 + 32);
              v23 = v10;
              v28 = v10;
              v11 = *(_DWORD *)(v9 + 36);
              v26 = v11;
              v29 = v11;
              v12 = -1;
              v19 = -1;
              v13 = -1;
              v25 = *(_DWORD *)(v9 + 64);
              v27 = v25;
              v14 = 0;
              v24 = 0;
              v15 = *(_QWORD *)(v9 + 56);
              while ( 1 )
              {
                v32 = v15;
                v31 = v15;
                if ( v14 >= v11 )
                  break;
                v8 = 0;
                v22 = 0;
                for ( i = v15; ; i += 4LL )
                {
                  v30 = i;
                  if ( v8 >= v10 )
                    break;
                  if ( *(_BYTE *)(i + 3) )
                  {
                    if ( v13 == -1 )
                    {
                      v13 = v8;
                      v12 = v14;
                      v19 = v14;
                    }
                  }
                  else if ( v13 != -1 )
                  {
                    vSpAddOpaqueRects(
                      v8,
                      v14,
                      v13,
                      v12,
                      v10,
                      v17,
                      (struct RGNMEMOBJTMP *)&v18,
                      (struct RGNMEMOBJTMP *)&v21,
                      (struct RGNOBJ *)&v20);
                    v13 = -1;
                    v12 = -1;
                    v19 = -1;
                    i = v30;
                  }
                  v22 = ++v8;
                  v10 = v23;
                }
                v24 = ++v14;
                v15 = v25 + v31;
                v11 = v26;
              }
              if ( v13 != -1 )
                vSpAddOpaqueRects(
                  v8,
                  v14,
                  v13,
                  v12,
                  v10,
                  v17,
                  (struct RGNMEMOBJTMP *)&v18,
                  (struct RGNMEMOBJTMP *)&v21,
                  (struct RGNOBJ *)&v20);
              if ( v5 )
              {
                v35 = (struct _RECTL)*((_OWORD *)a1 + 6);
                vSpDeletePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v35, v33);
              }
              if ( RGNOBJ::bMerge((RGNOBJ *)&v18, (struct RGNOBJ *)&v20, a2, 8u) )
                RGNOBJ::vSwap((RGNOBJ *)&v18, a2);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
          }
          else if ( !*v6 )
          {
            RGNOBJ::vSet(a2);
          }
        }
      }
    }
  }
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v34);
}
