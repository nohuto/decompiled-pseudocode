/*
 * XREFs of GreSfmOpenCompositorRef @ 0x14019C97C
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x14019C6A0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002569C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1400CAC50 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1400CCA5C (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreSfmOpenCompositorRef(Gre::Base *a1, HLSURF a2)
{
  __int64 v3; // rsi
  Gre::Base *v4; // rcx
  __int64 v5; // rdi
  struct W32_PUSH_LOCK *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v3 = *(_QWORD *)Gre::Base::Globals(a1) + 520LL;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v3);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( IsDwmActive(v4) )
    {
      SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((__int64)v10, a2);
      v5 = v11;
      if ( v11 )
      {
        v6 = (struct W32_PUSH_LOCK *)(v11 + 256);
        if ( v11 != -256 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v11 + 256));
        v7 = *(_DWORD *)(v5 + 244);
        if ( (v7 & 8) != 0 )
        {
          if ( (v7 & 0x10) != 0 )
            *(_DWORD *)(v5 + 244) = v7 & 0xFFFFFFEF;
          ++*(_DWORD *)(v5 + 248);
          v8 = 0;
        }
        else
        {
          v8 = -2147020579;
        }
        if ( v6 )
          GreReleasePushLockExclusive(v6);
      }
      else
      {
        v8 = -1073741816;
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v10);
    }
    else
    {
      v8 = -1071775733;
    }
  }
  else
  {
    v8 = -1073741790;
  }
  if ( v3 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v3);
  return v8;
}
