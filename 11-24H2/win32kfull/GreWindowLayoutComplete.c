/*
 * XREFs of GreWindowLayoutComplete @ 0x1400873CC
 * Callers:
 *     NtUserLayoutCompleted @ 0x1400874F0 (NtUserLayoutCompleted.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002569C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140029324 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400308A8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1401DAD5C (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowLayoutComplete(Gre::Base *a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // ebp
  unsigned int v7; // esi
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  __int64 v9; // rdi
  Gre::Base *v10; // rcx
  __int64 v11; // rbx
  Gre::Base *v12; // rcx
  struct DWMSPRITE *v13; // rcx
  int v14; // eax
  _BYTE v16[32]; // [rsp+20h] [rbp-48h] BYREF
  struct DWMSPRITE *v17; // [rsp+40h] [rbp-28h]
  int v18; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  v18 = 0;
  v7 = 0;
  v8 = Gre::Base::Globals(a1);
  v9 = *(_QWORD *)v8 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v9);
  if ( IsDwmActive(v10) )
  {
    v11 = *(_QWORD *)v8 + 520LL;
    GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      v11);
    if ( IsDwmActive(v12) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v16, (HWND)a1);
      v13 = v17;
      if ( v17 )
      {
        v7 = 1;
        if ( *((int *)v17 + 29) >= 1 )
        {
          v14 = *((_DWORD *)v17 + 30);
          if ( v14 > 0 )
          {
            *((_DWORD *)v17 + 30) = v14 - 1;
            CheckAndProcessWindowResizeComplete(v13, 0, &v18);
            v4 = v18;
          }
        }
      }
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v16);
    }
    if ( v11 )
      GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal);
  }
  *a4 = v4;
  if ( v9 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v9);
  return v7;
}
