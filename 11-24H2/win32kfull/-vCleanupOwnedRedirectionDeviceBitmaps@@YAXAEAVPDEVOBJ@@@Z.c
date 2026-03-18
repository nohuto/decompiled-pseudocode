/*
 * XREFs of ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z @ 0x1400DD5C0
 * Callers:
 *     vCleanupOwnedRedirectionDeviceBitmapsWrap @ 0x1400DD5A0 (vCleanupOwnedRedirectionDeviceBitmapsWrap.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001F0D0 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140029E08 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D2050 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400DD150 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400DD250 (--$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400DD84C (--$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 */

void __fastcall vCleanupOwnedRedirectionDeviceBitmaps(struct PDEVOBJ *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // r14
  Gre::Base *v3; // rcx
  char v4; // bp
  struct Gre::Base::SESSION_GLOBALS *v5; // rdi
  __int64 v6; // rcx
  SURFACE *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // esi
  struct HOBJ__ *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  _BYTE v13[32]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]
  SURFACE *v15; // [rsp+88h] [rbp+10h] BYREF
  __int64 v16; // [rsp+90h] [rbp+18h] BYREF

  v2 = Gre::Base::Globals(a1);
  if ( (unsigned __int8)GrepIsLockOwnedByCurrentThread<1,Gre::Base::SESSION_GLOBALS>(v2) )
  {
    v4 = 0;
    v5 = Gre::Base::Globals(v3);
  }
  else
  {
    v4 = 1;
    v5 = Gre::Base::Globals(v3);
    GreAcquireSemaphoreShared<1,>(v5);
  }
  LOBYTE(v6) = 5;
  HmgPrefetchAllObjt(v6, 952LL);
  SEMOBJ<20>::SEMOBJ<20>((Gre::Base *)&v16);
  v8 = 0LL;
  v15 = 0LL;
  while ( 1 )
  {
    LOBYTE(v7) = 5;
    v9 = HmgSafeNextObjt(v8, v7, &v15);
    if ( !v9 )
      break;
    v7 = v15;
    if ( *((_QWORD *)v15 + 6) == *(_QWORD *)a1 && (*((_DWORD *)v15 + 29) & 1) != 0 )
    {
      if ( *((_DWORD *)v15 + 2) )
      {
        SURFACE::vDeleteDriverRealization(v15);
      }
      else
      {
        v10 = *(struct HOBJ__ **)v15;
        GreMarkDeletableBitmap(*(_QWORD *)v15);
        SURFREF::SURFREF((SURFREF *)v13, v10, v2);
        v11 = SURFACE::bDeleteSurface(v14, 0LL, 0LL);
        v12 = v14;
        if ( v11 )
          v12 = 0LL;
        v14 = v12;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v13);
      }
    }
    v8 = v9;
  }
  if ( v16 )
    GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v16);
  if ( v4 )
    GreReleaseSemaphoreShared<1,>((__int64 *)v5);
}
