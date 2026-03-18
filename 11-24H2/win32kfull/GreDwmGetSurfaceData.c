/*
 * XREFs of GreDwmGetSurfaceData @ 0x14002A1E4
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x14017B400 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x140022D24 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140022FAC (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140023E24 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002A350 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x14002AB4C (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140062CF0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140062D4C (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmGetSurfaceData(Gre::Base *a1, HLSURF a2, struct tagDWMSURFACEDATA *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rbx
  __int64 v7; // rsi
  Gre::Base *v8; // rcx
  SFMLOGICALSURFACE *v9; // rcx
  unsigned int SoSurfaceData; // edi
  struct W32_PUSH_LOCK *v11; // rbx
  __int64 v13; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v14[8]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-48h] BYREF
  SFMLOGICALSURFACE *v17; // [rsp+60h] [rbp-28h]
  __int64 v18; // [rsp+A8h] [rbp+20h] BYREF

  v6 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v18, v6);
  v7 = *(_QWORD *)v6;
  GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
    (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal,
    *(_QWORD *)v6 + 1040LL);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)&v13, v6, (__int64)a1, 3);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( IsDwmActive(v8) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v13 + 2544) + 96LL) == 6 )
      {
        SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v16, a2);
        v9 = v17;
        if ( v17 )
        {
          v11 = (SFMLOGICALSURFACE *)((char *)v17 + 256);
          if ( v17 != (SFMLOGICALSURFACE *)-256LL )
          {
            GreAcquirePushLockShared((SFMLOGICALSURFACE *)((char *)v17 + 256));
            v9 = v17;
          }
          SoSurfaceData = SFMLOGICALSURFACE::GetSoSurfaceData(v9, a3);
          if ( v11 )
            GreReleasePushLockShared(v11);
        }
        else
        {
          SoSurfaceData = -1073741816;
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v16);
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
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(v15);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v14);
  GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v7 + 1040);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v18);
  return SoSurfaceData;
}
