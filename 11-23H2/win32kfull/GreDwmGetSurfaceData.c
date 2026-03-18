/*
 * XREFs of GreDwmGetSurfaceData @ 0x1C00C3F38
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C00C7670 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C006ADEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00B4A3C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00C4108 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C00C414C (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C00C41A4 (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013D794 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmGetSurfaceData(Gre::Base *a1, __int64 a2, struct tagDWMSURFACEDATA *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rsi
  HSEMAPHORE v7; // rdx
  Gre::Base *v8; // rcx
  __int64 v9; // rdx
  SFMLOGICALSURFACE *v10; // rax
  char *v11; // rbx
  unsigned int SoSurfaceData; // edi
  _BYTE v14[8]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v15[32]; // [rsp+28h] [rbp-28h] BYREF
  SFMLOGICALSURFACE *v16; // [rsp+48h] [rbp-8h]
  int v17; // [rsp+70h] [rbp+20h] BYREF
  char v18; // [rsp+88h] [rbp+38h] BYREF

  v6 = Gre::Base::Globals(a1);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v6 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v6 + 10));
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v14, *((HSEMAPHORE *)v6 + 14));
  v7 = (HSEMAPHORE)*((_QWORD *)v6 + 9);
  v17 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v18, v7, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( IsDwmActive(v8) )
    {
      if ( *(_DWORD *)(*((_QWORD *)a1 + 316) + 96LL) == 6 )
      {
        UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v15);
        v10 = 0LL;
        v16 = 0LL;
        if ( a2 && (LOBYTE(v9) = 18, v10 = (SFMLOGICALSURFACE *)HmgShareLockCheck(a2, v9), (v16 = v10) != 0LL) )
        {
          v11 = (char *)v10 + 256;
          if ( v10 != (SFMLOGICALSURFACE *)-256LL )
          {
            KeEnterCriticalRegion();
            GreAcquirePushLockShared(v11);
            v10 = v16;
          }
          SoSurfaceData = SFMLOGICALSURFACE::GetSoSurfaceData(v10, a3);
          if ( v11 )
          {
            GreReleasePushLockShared(v11);
            KeLeaveCriticalRegion();
          }
          v10 = v16;
        }
        else
        {
          SoSurfaceData = -1073741816;
        }
        if ( v10 )
          DEC_SHARE_REF_CNT(v10);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v15);
      }
      else
      {
        SoSurfaceData = -1073741811;
      }
    }
    else
    {
      SoSurfaceData = -1071775733;
    }
  }
  else
  {
    SoSurfaceData = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
  GreReleaseSemaphoreInternal(*((_QWORD *)v6 + 10));
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v18);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v17);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v14);
  return SoSurfaceData;
}
