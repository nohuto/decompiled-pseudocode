/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x14001E530
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x14001E510 (TrapAppContainerRenderingWrap.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400D076C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x140013C4C (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001F0D0 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x140020810 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140021B3C (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002B0C8 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9120 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1400CDCC4 (--0SURFREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D23D0 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DF75C (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400E08E8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140148174 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401482F0 (--$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall TrapAppContainerRenderingWorker(struct XDCOBJ *a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  Gre::Base **CurrentThreadNonPaged; // rax
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  __int64 v11; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // r13
  unsigned int v17; // esi
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 CompatibleBitmap; // rdi
  SURFACE *v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // esi
  unsigned int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rdi
  SURFACE *v27; // rax
  __int64 v28; // rdx
  SURFACE *v29; // rcx
  char v30; // [rsp+30h] [rbp-D0h]
  __int64 v31; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v33[32]; // [rsp+48h] [rbp-B8h] BYREF
  struct SURFACE *v34; // [rsp+68h] [rbp-98h]
  _BYTE v35[32]; // [rsp+70h] [rbp-90h] BYREF
  SURFACE *v36; // [rsp+90h] [rbp-70h]
  _BYTE v37[128]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v38[96]; // [rsp+120h] [rbp+20h] BYREF

  *a2 = 0LL;
  if ( !(unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
    return 1;
  CurrentThreadNonPaged = (Gre::Base **)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged )
  {
    v9 = *CurrentThreadNonPaged;
    if ( *CurrentThreadNonPaged )
    {
      if ( v9 != (Gre::Base *)-8LL && (*((_DWORD *)v9 + 88) & 4) != 0 )
        return 1;
    }
  }
  v10 = Gre::Base::Globals(v9);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v31, v10);
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
  if ( !v11 )
    goto LABEL_10;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    CurrentProcessWin32Process = 0LL;
  if ( *(_QWORD **)(v11 + 640) == CurrentProcessWin32Process && *(int *)(v11 + 112) >= 0 )
    goto LABEL_10;
  v14 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 472LL) && *(_DWORD *)(v14 + 488) && !*(_DWORD *)(v14 + 492) )
  {
    v15 = (_QWORD *)PsGetCurrentProcessWin32Process();
    if ( v15 && !*v15 )
      v15 = 0LL;
    if ( v15 == *(_QWORD **)(*(_QWORD *)a1 + 480LL) )
    {
LABEL_10:
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v31);
      return 1;
    }
  }
  SURFREF::SURFREF((SURFREF *)v35);
  SURFREF::SURFREF((SURFREF *)v33);
  v16 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x200) != 0 )
  {
    v30 = 0;
    if ( !(unsigned int)GreGetLockCount()
      && !(unsigned __int8)GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>(v16) )
    {
      GreAcquireSemaphore<2,>(v16);
      v30 = 1;
    }
    SEMOBJSHARED<3>::SEMOBJSHARED<3>(&v32);
    DC::vSetRendering(*(DC **)a1);
    v17 = *(_DWORD *)(v11 + 56);
    v18 = *(_DWORD *)(v11 + 60);
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v37, a1);
    ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v38);
    CompatibleBitmap = GrepCreateCompatibleBitmap((struct OPTAPIDCOBJ *)v37, v17, v18, 0, 0LL, 0LL);
    if ( CompatibleBitmap )
    {
      LOBYTE(v19) = 5;
      v21 = (SURFACE *)HmgShareLock(**(_QWORD **)(*(_QWORD *)a1 + 496LL), v19);
      LOBYTE(v22) = 5;
      v36 = v21;
      v34 = (struct SURFACE *)HmgShareLock(CompatibleBitmap, v22);
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v38);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v37);
      GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v32);
      if ( v30 )
        GreReleaseSemaphoreShared<2,>(v16);
      goto LABEL_30;
    }
    DC::vClearRendering(*(DC **)a1);
    if ( v30 )
      GreReleaseSemaphoreShared<2,>(v16);
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v38);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v37);
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v32);
LABEL_37:
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v33);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v35);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v31);
    return 0;
  }
  v23 = *(_DWORD *)(v11 + 56);
  v24 = *(_DWORD *)(v11 + 60);
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v37, a1);
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v38);
  v26 = GrepCreateCompatibleBitmap((struct OPTAPIDCOBJ *)v37, v23, v24, 0, 0LL, 0LL);
  if ( !v26 )
  {
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v38);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v37);
    goto LABEL_37;
  }
  LOBYTE(v25) = 5;
  v27 = (SURFACE *)HmgShareLock(**(_QWORD **)(*(_QWORD *)a1 + 496LL), v25);
  LOBYTE(v28) = 5;
  v36 = v27;
  v34 = (struct SURFACE *)HmgShareLock(v26, v28);
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v38);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v37);
LABEL_30:
  v29 = v36;
  *a2 = *(HSURF *)v36;
  *a3 = *(HSURF *)v34;
  INC_SHARE_REF_CNT(v29);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v36) )
    ++*((_DWORD *)v34 + 81);
  *(_QWORD *)(*(_QWORD *)a1 + 504LL) = *a2;
  DC::pSurface(*(DC **)a1, v34);
  INC_SHARE_REF_CNT(v34);
  if ( a4 )
  {
    *a4 = *(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0;
    *(_DWORD *)(*(_QWORD *)a1 + 36LL) &= 0xFFFFFF1F;
  }
  GreAcquireSemaphoreShared<1,>(v16);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v33);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v35);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v31);
  return 1;
}
