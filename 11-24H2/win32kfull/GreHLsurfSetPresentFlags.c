/*
 * XREFs of GreHLsurfSetPresentFlags @ 0x140321CA0
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x14019C6A0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x140022D24 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140028C4C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401708D4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ??0?$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140196DC0 (--0-$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreHLsurfSetPresentFlags(struct W32_PUSH_LOCK *a1, HLSURF a2, int a3)
{
  unsigned int v5; // ebx
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  Gre::Base *v8; // rcx
  __int64 v9; // rdi
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[32]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]
  struct W32_PUSH_LOCK *v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v14 = a1;
  v5 = -1071775733;
  if ( IsDwmActive(a1) )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v11);
    v7 = Gre::Base::Globals(v6);
    SEMOBJSHARED<7>::SEMOBJSHARED<7>((HSEMAPHORE *)&v15, v7);
    if ( IsDwmActive(v8) )
    {
      if ( (unsigned int)UserIsCurrentProcessDwm() )
      {
        v5 = -1073741811;
        SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v12, a2);
        v9 = v13;
        if ( v13 )
        {
          v14 = (struct W32_PUSH_LOCK *)(v13 + 256);
          if ( v13 != -256 )
            GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v13 + 256));
          v5 = 0;
          *(_DWORD *)(v9 + 212) = a3;
          Gre::PUSHLOCKEX::vUnlock(&v14, 0);
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v12);
      }
      else
      {
        v5 = -1073741790;
      }
    }
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v15);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v11);
  }
  return v5;
}
