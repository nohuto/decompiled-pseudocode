/*
 * XREFs of ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1401DC1E4
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1400D50D4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400D68D4 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x14032AC5C (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x14032CB14 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x14032CDA8 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     vSpUnTearDownSprites @ 0x14032F3B0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401D399C (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x140263E0C (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140264FB0 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DxDdEnumLockedSurfaceRect@@YAPEAXPEAUHDEV__@@PEAXPEAU_RECTL@@@Z @ 0x14032451C (-DxDdEnumLockedSurfaceRect@@YAPEAXPEAUHDEV__@@PEAXPEAU_RECTL@@@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1403250E0 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x140328878 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x14032892C (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall vSpComputeUnlockedRegion(HDEV *a1)
{
  HDEV v1; // rbx
  struct Gre::Base::SESSION_GLOBALS *v3; // rax
  __int64 v4; // rdx
  HDEV v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // r12
  __int64 v7; // r15
  int v8; // r14d
  void *i; // rdx
  void *v10; // rsi
  Gre::Base *v11; // rcx
  struct Gre::Base::SESSION_GLOBALS *v12; // rax
  __int64 j; // rsi
  __int64 k; // rbx
  HSEMAPHORE v15; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v17; // rax
  bool v18; // zf
  REGION *v19; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+28h] [rbp-58h] BYREF
  HDEV v21; // [rsp+30h] [rbp-50h] BYREF
  HSEMAPHORE v22; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-40h] BYREF
  struct _RECTL v24; // [rsp+50h] [rbp-30h] BYREF
  struct _RECTL v25; // [rsp+60h] [rbp-20h] BYREF

  v1 = *a1;
  v24 = 0LL;
  v23[0] = v1;
  v3 = Gre::Base::Globals((Gre::Base *)a1);
  v5 = a1[130];
  v6 = v3;
  if ( v5 )
  {
    v21 = a1[130];
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
    a1[130] = 0LL;
  }
  v7 = *(_QWORD *)(W32GetSessionState((_DWORD)v5, v4) + 96);
  if ( *(_QWORD *)(v7 + 4824) || a1[131] || *((_DWORD *)v1 + 658) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v19);
    if ( v19 )
    {
      v8 = 0;
      *(_QWORD *)&v24.left = 0LL;
      *(_QWORD *)&v24.right = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)v23);
      RGNOBJ::vSet((RGNOBJ *)&v19, &v24);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
      if ( !v21 || !v20 )
        goto LABEL_36;
      v25 = 0LL;
      GreLockDisplayDevice(v1);
      for ( i = 0LL; ; i = v10 )
      {
        v10 = DxDdEnumLockedSurfaceRect(v1, i, &v25);
        if ( !v10 )
          break;
        RGNOBJ::vSet((RGNOBJ *)&v21, &v25);
        RGNOBJ::bCopy((RGNOBJ *)&v20, (struct RGNOBJ *)&v19);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v19, (struct RGNOBJ *)&v20, (struct RGNOBJ *)&v21, 4u) )
          v8 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v19);
      }
      GreUnlockDisplayDevice(v1);
      v12 = Gre::Base::Globals(v11);
      SEMOBJ<33>::SEMOBJ<33>(&v22, v12);
      for ( j = *(_QWORD *)(v7 + 4824); j; j = *(_QWORD *)(j + 8) )
      {
        for ( k = *(_QWORD *)(j + 24); k; k = *(_QWORD *)(k + 160) )
        {
          UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v23, (struct EWNDOBJ *)k, (struct _SPRITESTATE *)a1);
          if ( (*(_DWORD *)(k + 184) & 0x1000000) != 0 )
          {
            RGNOBJ::bCopy((RGNOBJ *)&v20, (struct RGNOBJ *)&v19);
            if ( RGNOBJ::bMerge((RGNOBJ *)&v19, (struct RGNOBJ *)&v20, (struct RGNOBJ *)(k + 56), 4u) )
              v8 = 1;
            else
              RGNOBJ::vSet((RGNOBJ *)&v19);
          }
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v23);
        }
      }
      if ( a1[131] )
      {
        v23[0] = a1[131];
        RGNOBJ::bCopy((RGNOBJ *)&v20, (struct RGNOBJ *)&v19);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v19, (struct RGNOBJ *)&v20, (struct RGNOBJ *)v23, 8u) )
          v8 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v19);
      }
      v15 = v22;
      if ( v22 )
      {
        GlobalLockName = GrepGetGlobalLockName(33);
        EtwTraceGreLockReleaseSemaphore(GlobalLockName, v15);
        v17 = GreGetCurrentThreadCrossSessionCheck();
        if ( v17 )
        {
          v18 = (*(_QWORD *)v17 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
          *(_QWORD *)v17 &= ~0x200000000uLL;
          if ( v18 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v15);
      }
      if ( v8 == 1 )
      {
        REGION::vStamp(v19);
        a1[130] = (HDEV)v19;
      }
      else
      {
LABEL_36:
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
    }
  }
  *((_DWORD *)a1 + 29) = 0;
  vSpComputeSpriteRanges(a1);
  ++*((_DWORD *)v6 + 1060);
}
