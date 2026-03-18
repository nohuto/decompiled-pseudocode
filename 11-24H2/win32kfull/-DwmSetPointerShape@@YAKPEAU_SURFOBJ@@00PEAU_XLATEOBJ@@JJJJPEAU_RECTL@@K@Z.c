/*
 * XREFs of ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14016B470
 * Callers:
 *     EngSetPointerShape @ 0x14016B2D0 (EngSetPointerShape.c)
 * Callees:
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x140023218 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x14002538C (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002569C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14003040C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x14016AD54 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x14016B8D8 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x14016BBF8 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@XZ @ 0x14016BD00 (--0DWMSPRITEREF@@QEAA@XZ.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x14032066C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 */

__int64 __fastcall DwmSetPointerShape(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct _RECTL *a9,
        unsigned int a10)
{
  HDEV hdev; // rbx
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  unsigned int v15; // r12d
  struct Gre::Base::SESSION_GLOBALS *v16; // rsi
  char v17; // bp
  unsigned int v18; // edi
  unsigned int v19; // r14d
  __int64 v20; // r15
  struct _RECTL *v21; // r9
  struct tagRECT *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  HSPRITE v25; // rdx
  HSPRITE v26; // rdi
  HSPRITE NeighborSprite; // r14
  Gre::Base *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  struct DWMSPRITE *v31; // rbx
  HSPRITE v32; // rbx
  struct _RECTL *v33; // r14
  HSPRITE v34; // rdi
  struct _XLATEOBJ *v35; // r9
  __int64 v36; // rdi
  _QWORD *v37; // rbx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  struct W32_PUSH_LOCK *v42; // rdi
  int v43; // eax
  void *SpriteInternal; // rax
  __int64 v45; // rcx
  HSPRITE v46; // rbx
  _BYTE v47[104]; // [rsp+60h] [rbp-68h] BYREF
  struct _XLATEOBJ *v50; // [rsp+E8h] [rbp+20h] BYREF

  v50 = a4;
  hdev = a1->hdev;
  v14 = Gre::Base::Globals((Gre::Base *)a1);
  v15 = 2;
  v16 = v14;
  if ( *(_DWORD *)(*((_QWORD *)v14 + 17) + 100LL) )
  {
    if ( a2 || a3 )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v47);
      v17 = a10;
      v18 = ((a10 >> 8) & 0xF) + 1;
      if ( (unsigned __int8)(a10 >> 12) )
        v19 = 0x3E8u / (unsigned __int8)(a10 >> 12);
      else
        v19 = 0;
      v20 = *(_QWORD *)v16 + 520LL;
      LODWORD(v50) = 0x1000000;
      GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
        (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
        v20);
      v22 = (struct tagRECT *)a9;
      while ( *(_DWORD *)(*((_QWORD *)v16 + 17) + 160LL) < v18 )
      {
        if ( a7 == -1 && a8 == -1 || (v43 = 1, (v17 & 0x40) != 0) )
          v43 = 0;
        SpriteInternal = GreCreateSpriteInternal(a1->hdev, 0LL, v22, 0LL, 0x9900u, 1, v43, 0, 0, 0, 0, 0LL);
        if ( !SpriteInternal )
          break;
        v45 = *((_QWORD *)v16 + 17);
        if ( !*(_QWORD *)(v45 + 136) )
          *(_QWORD *)(v45 + 136) = SpriteInternal;
        *(_QWORD *)(*((_QWORD *)v16 + 17) + 144LL) = SpriteInternal;
        ++*(_DWORD *)(*((_QWORD *)v16 + 17) + 160LL);
      }
      while ( 1 )
      {
        v23 = *((_QWORD *)v16 + 17);
        if ( *(_DWORD *)(v23 + 160) <= v18 )
          break;
        v46 = *(HSPRITE *)(v23 + 144);
        *(_QWORD *)(*((_QWORD *)v16 + 17) + 144LL) = hspGetNeighborSprite(v46, 1, 0);
        GreDeleteSpriteInternal((Gre::Base *)a1->hdev, 0LL, v46, 1);
        --*(_DWORD *)(*((_QWORD *)v16 + 17) + 160LL);
      }
      *(_DWORD *)(v23 + 168) = v19;
      v24 = *((_QWORD *)v16 + 17);
      v25 = *(HSPRITE *)(v24 + 136);
      if ( v25 )
      {
        v26 = *(HSPRITE *)(v24 + 144);
        if ( v26 != v25 )
        {
          do
          {
            NeighborSprite = hspGetNeighborSprite(v26, 1, 0);
            Gre::Base::Globals(v28);
            if ( v26 && (LOBYTE(v29) = 15, v30 = HmgShareLockCheck(v26, v29), (v31 = (struct DWMSPRITE *)v30) != 0LL) )
            {
              v42 = (struct W32_PUSH_LOCK *)(v30 + 88);
              if ( v30 != -88 )
                GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v30 + 88));
              vSpDwmUpdateSpriteVisibility(v31, 0);
              if ( v42 )
                GreReleasePushLockExclusive(v42);
              v26 = NeighborSprite;
              DEC_SHARE_REF_CNT(v31);
            }
            else
            {
              v26 = NeighborSprite;
            }
            v24 = *((_QWORD *)v16 + 17);
          }
          while ( NeighborSprite != *(HSPRITE *)(v24 + 136) );
        }
        v32 = *(HSPRITE *)(v24 + 144);
        v33 = a9;
        while ( 1 )
        {
          if ( !v32 )
          {
            v15 = 2;
            goto LABEL_25;
          }
          v34 = hspGetNeighborSprite(v32, 1, 0);
          if ( !bSpDwmUpdateCursor(
                  v32,
                  a2,
                  a3,
                  v35,
                  v33,
                  (struct _BLENDFUNCTION *)((unsigned __int64)&v50 & -(__int64)((v17 & 0x40) != 0))) )
            break;
          v32 = v34;
        }
        v15 = 0;
LABEL_25:
        *(_DWORD *)(*((_QWORD *)v16 + 17) + 152LL) = a5 - v33->left;
        *(_DWORD *)(*((_QWORD *)v16 + 17) + 156LL) = a6 - v33->top;
      }
      if ( v20 )
        GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v20);
      DwmMovePointer(a1, a7, a8, v21, (v17 & 0x60) != 0 ? 4 : 0);
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v47);
    }
    else
    {
      v36 = *(_QWORD *)v14 + 520LL;
      GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
        (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
        v36);
      v37 = hdev + 880;
      v38 = *v37;
      if ( *(_QWORD **)(*v37 + 8LL) != v37 || (v39 = (_QWORD *)v37[1], (_QWORD *)*v39 != v37) )
        __fastfail(3u);
      *v39 = v38;
      *(_QWORD *)(v38 + 8) = v39;
      v37[1] = v37;
      *v37 = v37;
      v40 = *((_QWORD *)v16 + 17);
      if ( *(_QWORD *)(v40 + 104) == v40 + 104 && *(_QWORD *)(v40 + 120) == v40 + 120 )
        vSpDwmDestroyCursorSprites((Gre::Base *)a1->hdev);
      if ( v36 )
        GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v36);
    }
  }
  return v15;
}
