/*
 * XREFs of UntrapAppContainerRenderingWrap @ 0x140147F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x140020810 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140021B3C (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002B0C8 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreDereferenceObject @ 0x14002CCA4 (GreDereferenceObject.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB398 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9014 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1400CDCC4 (--0SURFREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D2050 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D23D0 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140148174 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401482F0 (--$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 */

void __fastcall UntrapAppContainerRenderingWrap(HDC *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  HSURF v12; // rbx
  Gre::Base *v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // rbx
  __int64 v15; // rax
  char v16; // si
  __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // [rsp+28h] [rbp-69h]
  char v20; // [rsp+28h] [rbp-69h]
  _BYTE v21[32]; // [rsp+38h] [rbp-59h] BYREF
  HSURF *v22; // [rsp+58h] [rbp-39h]
  _BYTE v23[32]; // [rsp+60h] [rbp-31h] BYREF
  struct SURFACE *v24; // [rsp+80h] [rbp-11h]
  DC *v25[10]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v26; // [rsp+100h] [rbp+6Fh] BYREF

  if ( *a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v25, *a1);
    SURFREF::SURFREF((SURFREF *)v21);
    SURFREF::SURFREF((SURFREF *)v23);
    LOBYTE(v8) = 5;
    v9 = HmgShareLock(*a3, v8);
    v10 = *a2;
    LOBYTE(v11) = 5;
    v22 = (HSURF *)v9;
    v24 = (struct SURFACE *)HmgShareLock(v10, v11);
    v12 = *v22;
    DC::pSurface(v25[0], v24);
    DEC_SHARE_REF_CNT(v22);
    v22 = 0LL;
    DEC_SHARE_REF_CNT(v24);
    v24 = 0LL;
    GreDereferenceObject(v12, 1u);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
    {
      v13 = v25[0];
      *((_DWORD *)v25[0] + 9) |= *a4;
    }
    v14 = Gre::Base::Globals(v13);
    if ( (*((_DWORD *)v25[0] + 9) & 0x200) != 0 )
    {
      v16 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !(unsigned __int8)GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>(v14) )
      {
        GreAcquireSemaphoreShared<2,>(v14);
        v16 = 1;
      }
      SEMOBJSHARED<3>::SEMOBJSHARED<3>((Gre::Base *)&v26);
      v20 = 5;
      v17 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v20);
      if ( v17 )
        SURFACE::bDeleteSurface(v17, 0LL, 1LL);
      *((_QWORD *)v25[0] + 63) = 0LL;
      DC::vClearRendering(v25[0]);
      v18 = v26;
      *a2 = 0LL;
      GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v18);
      if ( v16 )
        GreReleaseSemaphoreShared<2,>((__int64 *)v14);
    }
    else
    {
      v19 = 5;
      v15 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v19);
      if ( v15 )
        SURFACE::bDeleteSurface(v15, 0LL, 1LL);
      *((_QWORD *)v25[0] + 63) = 0LL;
      *a2 = 0LL;
    }
    GreReleaseSemaphoreShared<1,>((__int64 *)v14);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v23);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v21);
    DCOBJ::~DCOBJ((DCOBJ *)v25);
  }
}
