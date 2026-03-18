/*
 * XREFs of ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400D68D4
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400D48D8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpUpdateSpriteOverlapPresent@@YAXPEAUHDEV__@@H@Z @ 0x14016D230 (-vSpUpdateSpriteOverlapPresent@@YAXPEAUHDEV__@@H@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140062DFC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1401DC1E4 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     UserGetClientRgn @ 0x140285A48 (UserGetClientRgn.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1403250E0 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall vSpComputeNoPresentRegion(struct _SPRITESTATE *a1, int a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rsi
  HRGN ClientRgn; // rax
  int v7; // eax
  struct RGNOBJ *v8; // r8
  REGION *v9; // [rsp+20h] [rbp-49h] BYREF
  struct _POINTL v10; // [rsp+28h] [rbp-41h] BYREF
  __int64 v11; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v14[7]; // [rsp+48h] [rbp-21h] BYREF
  struct _RECTL v15; // [rsp+80h] [rbp+17h] BYREF
  struct _RECTL v16; // [rsp+90h] [rbp+27h] BYREF

  v2 = *(_QWORD *)a1;
  v15 = 0LL;
  v12 = v2;
  Gre::Base::Globals(a1);
  if ( *((_QWORD *)a1 + 132) )
  {
    v11 = *((_QWORD *)a1 + 132);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
    *((_QWORD *)a1 + 132) = 0LL;
  }
  if ( !a2 && *((_QWORD *)a1 + 131) )
  {
    v11 = *((_QWORD *)a1 + 131);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
    *((_QWORD *)a1 + 131) = 0LL;
  }
  v5 = (_QWORD *)*((_QWORD *)a1 + 10);
  if ( v5 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v9);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
    if ( v9 && v11 )
    {
      *(_QWORD *)&v15.left = 0LL;
      *(_QWORD *)&v15.right = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)&v12);
      RGNOBJ::vSet((RGNOBJ *)&v9, &v15);
      RGNOBJ::vSet((RGNOBJ *)&v11, &v15);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
      if ( v13 )
      {
        do
        {
          v16 = 0LL;
          ClientRgn = (HRGN)UserGetClientRgn(*v5, &v16, 0LL);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v14, ClientRgn, 0, 0);
          if ( v14[0] )
          {
            v10.x = -*(_DWORD *)(v2 + 2576);
            v10.y = -*(_DWORD *)(v2 + 2580);
            RGNOBJ::bOffset((RGNOBJ *)v14, &v10);
            v12 = *((_QWORD *)a1 + 89);
            RGNOBJ::vSet((RGNOBJ *)&v12, &v16);
            v10.x = -*(_DWORD *)(v2 + 2576);
            v10.y = -*(_DWORD *)(v2 + 2580);
            RGNOBJ::bOffset((RGNOBJ *)v14, &v10);
            RGNOBJ::bOffset((RGNOBJ *)&v12, &v10);
            v7 = RGNOBJ::iComplexity((RGNOBJ *)v14);
            v8 = (struct RGNOBJ *)&v12;
            if ( v7 != 1 )
              v8 = (struct RGNOBJ *)v14;
            if ( RGNOBJ::bMerge((RGNOBJ *)&v13, (struct RGNOBJ *)&v9, v8, 4u) )
              RGNOBJ::vSwap((RGNOBJ *)&v13, (struct RGNOBJ *)&v9);
            RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v14);
          }
          v5 = (_QWORD *)v5[1];
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v14);
        }
        while ( v5 );
      }
      REGION::vStamp(v9);
      if ( a2 )
        *((_QWORD *)a1 + 132) = v9;
      else
        *((_QWORD *)a1 + 131) = v9;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
    }
    else
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
  }
  if ( !a2 )
    vSpComputeUnlockedRegion(a1);
}
