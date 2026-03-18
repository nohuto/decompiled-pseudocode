/*
 * XREFs of GreSetRedirectionSurfaceSignaling @ 0x14019CA8C
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x14019C6A0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x140022D24 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002569C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreSetRedirectionSurfaceSignaling(Gre::Base *a1, HLSURF a2, __int64 a3, __int64 a4, int a5)
{
  Gre::Base *v9; // rcx
  unsigned int v10; // esi
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  Gre::Base *v12; // rcx
  __int64 v13; // r13
  Gre::Base *v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v19[32]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v20; // [rsp+58h] [rbp-30h]

  v10 = 0;
  if ( IsDwmActive(a1) )
  {
    v11 = Gre::Base::Globals(v9);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v18, v11);
    v13 = *(_QWORD *)Gre::Base::Globals(v12);
    GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal,
      v13 + 520);
    if ( IsDwmActive(v14) )
    {
      if ( (unsigned int)UserIsCurrentProcessDwm() )
      {
        if ( *((_QWORD *)a1 + 431) )
        {
          SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v19, a2);
          v15 = v20;
          if ( v20 )
          {
            if ( v20 != -256 )
              GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v20 + 256));
            v16 = *(_QWORD *)(v15 + 184);
            if ( v16 && (*(_DWORD *)(v16 + 92) & 1) != 0 )
            {
              if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, HLSURF, _QWORD))a1 + 431))(
                     *(_QWORD *)(v15 + 184),
                     a3,
                     a2,
                     *(_QWORD *)(v16 + 32)) )
              {
                *(_DWORD *)(v15 + 244) = (2 * a5) ^ (*(_DWORD *)(v15 + 244) ^ (2 * a5)) & 0xFFFFFFFD;
                EtwLogicalSurfEnableDirtyNotificationEvent(a2, a3);
              }
              *(_QWORD *)(v15 + 192) = *(_QWORD *)(v16 + 544);
              *(_QWORD *)(v15 + 200) = *(_QWORD *)(v16 + 552);
              *(_DWORD *)(v15 + 208) = *(_DWORD *)(v16 + 100);
              if ( (*(_DWORD *)(v16 + 92) & 0x400) != 0 )
                *(_DWORD *)(v15 + 244) |= 0x100u;
            }
            else
            {
              *(_QWORD *)(v15 + 192) = a3;
              *(_QWORD *)(v15 + 200) = a4;
            }
            if ( v15 != -256 )
              GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v15 + 256));
          }
          else
          {
            v10 = -1073741811;
          }
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v19);
        }
        else
        {
          v10 = -1073741822;
        }
      }
      else
      {
        v10 = -1073741790;
      }
    }
    else
    {
      v10 = -1071775733;
    }
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v13 + 520);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v18);
  }
  else
  {
    return (unsigned int)-1071775733;
  }
  return v10;
}
