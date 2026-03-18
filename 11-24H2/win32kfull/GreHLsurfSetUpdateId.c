/*
 * XREFs of GreHLsurfSetUpdateId @ 0x140321DA4
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x14019C6A0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x140022D24 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140028C4C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1400CF068 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401708D4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ??0?$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140196DC0 (--0-$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreHLsurfSetUpdateId(struct W32_PUSH_LOCK *a1, HLSURF a2, __int64 a3)
{
  unsigned int v5; // edi
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  Gre::Base *v8; // rcx
  __int64 v9; // rdx
  SFMLOGICALSURFACE *v10; // rbx
  struct W32_PUSH_LOCK *v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[32]; // [rsp+28h] [rbp-30h] BYREF
  SFMLOGICALSURFACE *v15; // [rsp+48h] [rbp-10h]
  struct W32_PUSH_LOCK *v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = a1;
  v5 = -1071775733;
  if ( IsDwmActive(a1) )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v13);
    v7 = Gre::Base::Globals(v6);
    SEMOBJSHARED<7>::SEMOBJSHARED<7>((HSEMAPHORE *)&v17, v7);
    if ( IsDwmActive(v8) )
    {
      if ( (unsigned int)UserIsCurrentProcessDwm() )
      {
        v5 = -1073741811;
        SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v14, a2);
        v10 = v15;
        if ( v15 )
        {
          v11 = (SFMLOGICALSURFACE *)((char *)v15 + 256);
          v16 = (SFMLOGICALSURFACE *)((char *)v15 + 256);
          if ( v15 != (SFMLOGICALSURFACE *)-256LL )
            GreAcquirePushLockExclusive(v11);
          if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)v11, v9) + 96) + 92LL)
            && *((_QWORD *)v10 + 23)
            && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v10) )
          {
            *((_QWORD *)v10 + 35) = a3;
            v5 = 0;
          }
          Gre::PUSHLOCKEX::vUnlock(&v16, 0);
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v14);
      }
      else
      {
        v5 = -1073741790;
      }
    }
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v17);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v13);
  }
  return v5;
}
