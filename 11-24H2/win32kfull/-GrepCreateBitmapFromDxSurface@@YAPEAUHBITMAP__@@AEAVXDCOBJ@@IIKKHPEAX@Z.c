/*
 * XREFs of ?GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z @ 0x1401C83CC
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1401C8320 (NtGdiCreateBitmapFromDxSurface2.c)
 *     NtGdiCreateBitmapFromDxSurface @ 0x140336E40 (NtGdiCreateBitmapFromDxSurface.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1400148B8 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     GreDwmUseDeviceBitmaps @ 0x140014E60 (GreDwmUseDeviceBitmaps.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002569C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GrepCreateBitmapFromDxSurface(
        struct XDCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        int a6,
        void *a7)
{
  __int64 v7; // rbx
  __int64 v12; // rdi
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  __int64 v14; // r12
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v18; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v19[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v20; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v21[32]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-48h]
  HDC v23[18]; // [rsp+C8h] [rbp-40h] BYREF

  v7 = 0LL;
  if ( !a2 || !a3 || a3 * (unsigned __int64)a2 > 0xFFFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) == 1 )
    return 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v18 = v12;
  if ( (*(_DWORD *)(v12 + 40) & 0x8000) != 0 )
    return 0LL;
  v13 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v20, v13);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v19, a1);
  v14 = **((_QWORD **)a1 + 2);
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
    (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal,
    v14 + 520);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23, (struct PDEVOBJ *)&v18);
  if ( (unsigned int)GreDwmUseDeviceBitmaps() )
  {
    v15 = 0LL;
    if ( (*(_DWORD *)(v12 + 2156) & 0x100) == 0 )
      v15 = **(_QWORD **)(v12 + 1792);
    CreateCompatibleSurface(
      (SURFREF *)v21,
      *(_QWORD *)(*(_QWORD *)a1 + 48LL),
      *(_DWORD *)(v12 + 2092),
      v15,
      a2,
      a3,
      1u,
      0,
      0,
      0,
      1,
      a6,
      0,
      a4,
      a5,
      (__int64)a7);
    if ( v22 )
    {
      LOBYTE(v16) = 5;
      HmgSetOwner(*(_QWORD *)(v22 + 32), 2147483650LL, v16);
      v7 = *(_QWORD *)(v22 + 32);
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v21);
  }
  DEVLOCKOBJ::~DEVLOCKOBJ(v23);
  GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v14 + 520);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v19);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v20);
  return v7;
}
