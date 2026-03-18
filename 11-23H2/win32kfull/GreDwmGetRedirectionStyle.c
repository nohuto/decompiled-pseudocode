/*
 * XREFs of GreDwmGetRedirectionStyle @ 0x1C0266EE4
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C00C7670 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C006ADEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C008E520 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00B4A3C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00C4108 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C00C414C (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013D794 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmGetRedirectionStyle(Gre::Base *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r14d
  struct Gre::Base::SESSION_GLOBALS *v6; // r15
  HSEMAPHORE v7; // rdx
  __int64 v8; // rdx
  SFMLOGICALSURFACE *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  _BYTE v13[8]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v14[2]; // [rsp+38h] [rbp-28h] BYREF
  SFMLOGICALSURFACE *v15; // [rsp+58h] [rbp-8h]
  Gre::Base *v16; // [rsp+90h] [rbp+30h] BYREF
  char v17; // [rsp+A8h] [rbp+48h] BYREF

  v16 = a1;
  v5 = -1073741811;
  v6 = Gre::Base::Globals(a1);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v6 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v6 + 10));
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v13, *((HSEMAPHORE *)v6 + 14));
  v7 = (HSEMAPHORE)*((_QWORD *)v6 + 9);
  LODWORD(v16) = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v17, v7, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v14);
    v9 = 0LL;
    v15 = 0LL;
    if ( a2 )
    {
      LOBYTE(v8) = 18;
      v10 = HmgShareLockCheck(a2, v8);
      v15 = (SFMLOGICALSURFACE *)v10;
      v9 = (SFMLOGICALSURFACE *)v10;
      if ( v10 )
      {
        v11 = v10 + 256;
        if ( v10 != -256 )
        {
          KeEnterCriticalRegion();
          GreAcquirePushLockShared(v11);
          v9 = v15;
        }
        SFMLOGICALSURFACE::GetRedirectionInfo(
          v9,
          (enum _HLSURF_REDIRECTIONSTYLE *)a3,
          (unsigned int *)(a3 + 4),
          (unsigned int *)(a3 + 8),
          (void **)(a3 + 24),
          (struct _LUID *)(a3 + 12));
        v5 = 0;
        if ( v11 )
        {
          GreReleasePushLockShared(v11);
          KeLeaveCriticalRegion();
          v9 = v15;
        }
      }
    }
    if ( v9 )
      DEC_SHARE_REF_CNT(v9);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v14);
  }
  else
  {
    v5 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
  GreReleaseSemaphoreInternal(*((_QWORD *)v6 + 10));
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v17);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v16);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v13);
  return v5;
}
