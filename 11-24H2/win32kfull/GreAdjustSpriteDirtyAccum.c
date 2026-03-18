/*
 * XREFs of GreAdjustSpriteDirtyAccum @ 0x140039684
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002569C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140039A0C (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x1400C7410 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x140328BD4 (-GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z.c)
 */

__int64 __fastcall GreAdjustSpriteDirtyAccum(
        Gre::Base *a1,
        HWND a2,
        struct _RECTL *a3,
        __int64 a4,
        struct _POINTL *a5,
        struct _POINTL *a6)
{
  unsigned int v6; // r15d
  struct _RECTL *v7; // rdi
  HWND v8; // rbx
  HDEV v9; // rsi
  int v10; // r13d
  Gre::Base *v11; // rcx
  struct _RECTL *v12; // r9
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  Gre::Base *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v18; // [rsp+30h] [rbp-18h] BYREF
  struct REGION *v19[2]; // [rsp+38h] [rbp-10h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+60h] BYREF

  v23 = a4;
  v6 = 0;
  v7 = a3;
  v8 = a2;
  v9 = (HDEV)a1;
  v10 = 1;
  if ( !IsDwmActive(a1) )
    return (unsigned int)GdiAdjustSpriteDirtyAccum(v9, v8, v7, v12, a5, a6);
  v13 = Gre::Base::Globals(v11);
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
    (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal,
    *(_QWORD *)v13 + 520LL);
  if ( IsDwmActive(v14) )
  {
    v10 = 0;
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v23, v8);
    v15 = v23;
    if ( v23 )
    {
      v16 = *(_QWORD *)(v23 + 144);
      if ( v23 != -88 )
        GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v23 + 88));
      if ( v16 != -256 )
        GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v16 + 256));
      if ( *(_QWORD *)(v16 + 80) )
      {
        v19[0] = *(struct REGION **)(v16 + 80);
        Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v18);
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v18, 0x70u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v18);
        Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v23);
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v23, 0x70u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v23);
        if ( v19[0] )
        {
          if ( v18 )
          {
            if ( v23 )
            {
              if ( RGNOBJ::bOffset((RGNOBJ *)v19, a5) )
              {
                RGNOBJ::vSet((RGNOBJ *)&v18, a3);
                if ( RGNOBJ::bMerge((RGNOBJ *)&v23, (struct RGNOBJ *)v19, (struct RGNOBJ *)&v18, 8u) )
                {
                  RGNOBJ::vSwap((RGNOBJ *)&v23, (struct RGNOBJ *)v19);
                  SFMLOGICALSURFACE::vDirtyRegionAccum((SFMLOGICALSURFACE *)v16, v19[0]);
                  v6 = 1;
                }
              }
            }
          }
        }
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v23);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v18);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
      }
      if ( v16 != -256 )
        GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v16 + 256));
      if ( v15 != -88 )
        GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v15 + 88));
      v9 = (HDEV)a1;
      v7 = a3;
      if ( v15 )
        DEC_SHARE_REF_CNT(v15);
    }
    v8 = a2;
  }
  GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal);
  if ( v10 )
    return (unsigned int)GdiAdjustSpriteDirtyAccum(v9, v8, v7, v12, a5, a6);
  return v6;
}
