/*
 * XREFs of ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C006BFA8
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C006BEF0 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C00F9720 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027DF04 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C028044C (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02806EC (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0283C60 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C006C104 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vStamp@REGION@@QEAAXXZ @ 0x1C006C3C8 (-vStamp@REGION@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B7130 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C834 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C026E8B0 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     DxDdEnumLockedSurfaceRect @ 0x1C026E8DC (DxDdEnumLockedSurfaceRect.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C0279124 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C02792EC (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 */

void __fastcall vSpComputeUnlockedRegion(REGION **a1)
{
  REGION *v1; // rbx
  struct Gre::Base::SESSION_GLOBALS *v3; // rax
  REGION *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // r12
  __int64 v6; // r15
  Gre::Base *v7; // rcx
  int v8; // edi
  int v9; // r14d
  __int64 i; // rdx
  __int64 locked; // rdi
  Gre::Base *v12; // rcx
  __int64 j; // rdi
  __int64 k; // rbx
  REGION *v15; // [rsp+28h] [rbp-99h] BYREF
  __int64 v16; // [rsp+30h] [rbp-91h] BYREF
  __int64 v17; // [rsp+38h] [rbp-89h] BYREF
  __int64 v18; // [rsp+40h] [rbp-81h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-79h] BYREF
  __int128 v20; // [rsp+58h] [rbp-69h] BYREF
  REGION *v21; // [rsp+68h] [rbp-59h]
  int v22; // [rsp+70h] [rbp-51h]
  _QWORD v23[10]; // [rsp+78h] [rbp-49h] BYREF
  struct _RECTL v24; // [rsp+C8h] [rbp+7h] BYREF
  struct _RECTL v25; // [rsp+D8h] [rbp+17h] BYREF

  v1 = *a1;
  v24 = 0LL;
  v19[0] = v1;
  v3 = Gre::Base::Globals((Gre::Base *)a1);
  v4 = a1[129];
  v5 = v3;
  if ( v4 )
  {
    REGION::vDeleteREGION(v4);
    a1[129] = 0LL;
  }
  v6 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
  if ( *(_QWORD *)(v6 + 23664) || a1[130] )
    goto LABEL_9;
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v23);
  v23[8] = 0LL;
  v20 = 0LL;
  v23[7] = 0LL;
  v23[0] = 0LL;
  v22 = 1;
  if ( (*((_DWORD *)v1 + 10) & 1) != 0 )
  {
    Gre::Base::Globals(v7);
    *(_QWORD *)&v20 = *((_QWORD *)v1 + 6);
    v21 = v1;
    GreAcquireSemaphore(v20);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v20, 11LL);
  }
  v8 = *((_DWORD *)v1 + 654);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v20);
  if ( v8 )
  {
LABEL_9:
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
    if ( v15 )
    {
      *(_QWORD *)&v24.left = 0LL;
      v9 = 0;
      *(_QWORD *)&v24.right = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)v19);
      RGNOBJ::vSet((RGNOBJ *)&v15, &v24);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
      if ( !v17 || !v16 )
        goto LABEL_34;
      v25 = 0LL;
      GreLockDisplayDevice(v1);
      for ( i = 0LL; ; i = locked )
      {
        locked = DxDdEnumLockedSurfaceRect(v1, i, &v25);
        if ( !locked )
          break;
        RGNOBJ::vSet((RGNOBJ *)&v17, &v25);
        RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v15);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v15, (struct RGNOBJ *)&v16, (struct RGNOBJ *)&v17, 4u) )
          v9 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v15);
      }
      GreUnlockDisplayDevice(v1);
      v18 = *((_QWORD *)Gre::Base::Globals(v12) + 7);
      GreAcquireSemaphore(v18);
      for ( j = *(_QWORD *)(v6 + 23664); j; j = *(_QWORD *)(j + 8) )
      {
        for ( k = *(_QWORD *)(j + 24); k; k = *(_QWORD *)(k + 160) )
        {
          UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v19, (struct EWNDOBJ *)k, (struct _SPRITESTATE *)a1);
          if ( (*(_DWORD *)(k + 184) & 0x1000000) != 0 )
          {
            RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v15);
            if ( RGNOBJ::bMerge((RGNOBJ *)&v15, (struct RGNOBJ *)&v16, (struct RGNOBJ *)(k + 56), 4u) )
              v9 = 1;
            else
              RGNOBJ::vSet((RGNOBJ *)&v15);
          }
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v19);
        }
      }
      if ( a1[130] )
      {
        v19[0] = a1[130];
        RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v15);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v15, (struct RGNOBJ *)&v16, (struct RGNOBJ *)v19, 8u) )
          v9 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v15);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
      if ( v9 == 1 )
      {
        REGION::vStamp(v15);
        a1[129] = v15;
      }
      else
      {
LABEL_34:
        REGION::vDeleteREGION(v15);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
    }
  }
  *((_DWORD *)a1 + 29) = 0;
  vSpComputeSpriteRanges((struct _SPRITESTATE *)a1);
  ++*((_DWORD *)v5 + 1620);
}
