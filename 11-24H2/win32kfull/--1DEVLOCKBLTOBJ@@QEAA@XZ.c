/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294
 * Callers:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400C3880 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     GreGradientFill @ 0x1400C87D4 (GreGradientFill.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x1400D0464 (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401A37F4 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x1403050D8 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x140014258 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x140020570 (--1DLODCOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x140020810 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400212B0 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400218E4 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140021B3C (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1400221AC (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002B0C8 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreDereferenceObject @ 0x14002CCA4 (GreDereferenceObject.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB398 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9014 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1400CDCC4 (--0SURFREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D2050 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D23D0 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1400D373C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140148174 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401482F0 (--$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1401577F0 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$01@@YAXXZ @ 0x1401862C4 (--$GreReleaseSemaphoreExclusive@$01@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14018AEB4 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ?TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z @ 0x1402FEE10 (-TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this)
{
  _QWORD *v2; // rsi
  int v3; // eax
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  HSEMAPHORE v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  HSURF v13; // rbx
  Gre::Base *v14; // rcx
  struct Gre::Base::SESSION_GLOBALS *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  HSURF v22; // rbx
  Gre::Base *v23; // rcx
  struct Gre::Base::SESSION_GLOBALS *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  char v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  char v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r9
  _QWORD *v36; // rdx
  signed __int32 v37[8]; // [rsp+0h] [rbp-A9h] BYREF
  int v38; // [rsp+20h] [rbp-89h]
  _BYTE v39[32]; // [rsp+30h] [rbp-79h] BYREF
  HSURF *v40; // [rsp+50h] [rbp-59h]
  _BYTE v41[32]; // [rsp+58h] [rbp-51h] BYREF
  struct SURFACE *v42; // [rsp+78h] [rbp-31h]
  DC *v43[10]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v44[16]; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v45; // [rsp+110h] [rbp+67h] BYREF
  __int64 v46; // [rsp+118h] [rbp+6Fh] BYREF

  if ( _bittest((const signed __int32 *)this + 28, 0xCu) )
  {
    DEVLOCKBLTOBJ::vUnMap(this);
    DEVLOCKBLTOBJ::vFlushSpriteUpdates(this);
  }
  v2 = (_QWORD *)((char *)this + 40);
  if ( *((_QWORD *)this + 5) )
  {
    CAutoTGO::vUnguard((DEVLOCKBLTOBJ *)((char *)this + 56));
    DEVLOCKBLTOBJ::TmpSrcThreadCleanup(0LL);
    v36 = (_QWORD *)*((_QWORD *)this + 13);
    if ( *v36 )
    {
      LOBYTE(v35) = 5;
      GrepSelectBitmap(v44, v36, *((_QWORD *)this + 12), v35);
    }
    if ( *v2 )
      DEC_SHARE_REF_CNT(*v2);
    bDeleteSurface(*(_QWORD *)(*v2 + 32LL));
    *v2 = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  v3 = *((_DWORD *)this + 28);
  if ( (v3 & 0x1000) != 0 )
  {
    if ( (v3 & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
      _InterlockedOr(v37, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      *((_DWORD *)this + 28) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      _InterlockedOr(v37, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
    }
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x1000u;
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged )
      v5 = *CurrentThreadNonPaged;
    else
      v5 = 0LL;
    v6 = (v5 + 8) & -(__int64)(v5 != 0);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 304) = 0LL;
      *(_QWORD *)(v6 + 296) = 0LL;
    }
  }
  else if ( (v3 & 0x80000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x80000u;
  }
  if ( *(_QWORD *)this )
  {
    if ( (*((_DWORD *)this + 28) & 0x100000) != 0 )
    {
      GreReleaseSemaphoreExclusive<2>();
      *((_DWORD *)this + 28) &= ~0x100000u;
    }
    else
    {
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)this + 3));
    }
  }
  if ( *((_QWORD *)this + 1) )
  {
    if ( (*((_DWORD *)this + 28) & 0x200000) != 0 )
    {
      GreReleaseSemaphoreExclusive<2>();
      *((_DWORD *)this + 28) &= ~0x200000u;
    }
    else
    {
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)this + 4));
    }
  }
  v7 = *((_DWORD *)this + 28);
  if ( (v7 & 8) != 0 )
    *((_DWORD *)this + 28) = v7 & 0xFFFFFFF7;
  v8 = (HSEMAPHORE)*((_QWORD *)this + 2);
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", *((_QWORD *)this + 2));
    GrepReleaseLockValidate<1>();
    GreReleaseSemaphoreSharedInternal(v8);
  }
  if ( *((_QWORD *)this + 37) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v43, *((HDC *)this + 38));
    SURFREF::SURFREF((SURFREF *)v39);
    SURFREF::SURFREF((SURFREF *)v41);
    LOBYTE(v9) = 5;
    v10 = HmgShareLock(*((_QWORD *)this + 36), v9);
    v11 = *((_QWORD *)this + 37);
    LOBYTE(v12) = 5;
    v40 = (HSURF *)v10;
    v42 = (struct SURFACE *)HmgShareLock(v11, v12);
    v13 = *v40;
    DC::pSurface(v43[0], v42);
    DEC_SHARE_REF_CNT(v40);
    v40 = 0LL;
    DEC_SHARE_REF_CNT(v42);
    v42 = 0LL;
    GreDereferenceObject(v13);
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
    if ( this != (DEVLOCKBLTOBJ *)-116LL )
    {
      v14 = v43[0];
      *((_DWORD *)v43[0] + 9) |= *((_DWORD *)this + 29);
    }
    v15 = Gre::Base::Globals(v14);
    if ( (*((_DWORD *)v43[0] + 9) & 0x200) != 0 )
    {
      v27 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !(unsigned __int8)GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>(v15) )
      {
        GreAcquireSemaphoreShared<2,>(v15);
        v27 = 1;
      }
      SEMOBJSHARED<3>::SEMOBJSHARED<3>(&v45);
      v28 = *((_QWORD *)this + 37);
      LOBYTE(v38) = 5;
      v29 = HmgShareUnlockRemoveObject(v28, 0LL, 0LL, 0LL, v38);
      if ( v29 )
        SURFACE::bDeleteSurface(v29, 0LL, 1LL);
      *((_QWORD *)v43[0] + 63) = 0LL;
      DC::vClearRendering(v43[0]);
      v30 = v45;
      *((_QWORD *)this + 37) = 0LL;
      GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v30);
      if ( v27 )
        GreReleaseSemaphoreShared<2,>(v15);
    }
    else
    {
      v16 = *((_QWORD *)this + 37);
      LOBYTE(v38) = 5;
      v17 = HmgShareUnlockRemoveObject(v16, 0LL, 0LL, 0LL, v38);
      if ( v17 )
        SURFACE::bDeleteSurface(v17, 0LL, 1LL);
      *((_QWORD *)v43[0] + 63) = 0LL;
      *((_QWORD *)this + 37) = 0LL;
    }
    GreReleaseSemaphoreShared<1,>(v15);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v41);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v39);
    DCOBJ::~DCOBJ((DCOBJ *)v43);
  }
  if ( *((_QWORD *)this + 40) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v43, *((HDC *)this + 41));
    SURFREF::SURFREF((SURFREF *)v39);
    SURFREF::SURFREF((SURFREF *)v41);
    LOBYTE(v18) = 5;
    v19 = HmgShareLock(*((_QWORD *)this + 39), v18);
    v20 = *((_QWORD *)this + 40);
    LOBYTE(v21) = 5;
    v40 = (HSURF *)v19;
    v42 = (struct SURFACE *)HmgShareLock(v20, v21);
    v22 = *v40;
    DC::pSurface(v43[0], v42);
    DEC_SHARE_REF_CNT(v40);
    v40 = 0LL;
    DEC_SHARE_REF_CNT(v42);
    v42 = 0LL;
    GreDereferenceObject(v22);
    *((_QWORD *)this + 41) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
    v24 = Gre::Base::Globals(v23);
    if ( (*((_DWORD *)v43[0] + 9) & 0x200) != 0 )
    {
      v31 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !(unsigned __int8)GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>(v24) )
      {
        GreAcquireSemaphoreShared<2,>(v24);
        v31 = 1;
      }
      SEMOBJSHARED<3>::SEMOBJSHARED<3>(&v46);
      v32 = *((_QWORD *)this + 40);
      LOBYTE(v38) = 5;
      v33 = HmgShareUnlockRemoveObject(v32, 0LL, 0LL, 0LL, v38);
      if ( v33 )
        SURFACE::bDeleteSurface(v33, 0LL, 1LL);
      *((_QWORD *)v43[0] + 63) = 0LL;
      DC::vClearRendering(v43[0]);
      v34 = v46;
      *((_QWORD *)this + 40) = 0LL;
      GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v34);
      if ( v31 )
        GreReleaseSemaphoreShared<2,>(v24);
    }
    else
    {
      v25 = *((_QWORD *)this + 40);
      LOBYTE(v38) = 5;
      v26 = HmgShareUnlockRemoveObject(v25, 0LL, 0LL, 0LL, v38);
      if ( v26 )
        SURFACE::bDeleteSurface(v26, 0LL, 1LL);
      *((_QWORD *)v43[0] + 63) = 0LL;
      *((_QWORD *)this + 40) = 0LL;
    }
    GreReleaseSemaphoreShared<1,>(v24);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v41);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v39);
    DCOBJ::~DCOBJ((DCOBJ *)v43);
  }
  DLODCOBJ::~DLODCOBJ((DEVLOCKBLTOBJ *)((char *)this + 200));
  DLODCOBJ::~DLODCOBJ((DEVLOCKBLTOBJ *)((char *)this + 120));
  if ( *((_DWORD *)this + 22) )
  {
    PopThreadGuardedObject((char *)this + 56);
    *((_DWORD *)this + 22) = 0;
  }
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 40));
}
