/*
 * XREFs of GreGetWindowResizeDCompositionSynchronizationObject @ 0x1401BCA70
 * Callers:
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1401BC96C (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002569C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140029324 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400308A8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreGetWindowResizeDCompositionSynchronizationObject(Gre::Base *a1, _QWORD *a2)
{
  unsigned int v4; // ebp
  struct Gre::Base::SESSION_GLOBALS *v5; // rbx
  __int64 v6; // rsi
  Gre::Base *v7; // rcx
  __int64 v8; // rbx
  Gre::Base *v9; // rcx
  __int64 v10; // rdi
  void *v11; // rcx
  _BYTE v13[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v4 = 0;
  v5 = Gre::Base::Globals(a1);
  v6 = *(_QWORD *)v5 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v6);
  if ( IsDwmActive(v7) )
  {
    v8 = *(_QWORD *)v5 + 520LL;
    GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v8);
    if ( IsDwmActive(v9) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v13, (HWND)a1);
      v10 = v14;
      if ( v14 )
      {
        v11 = *(void **)(v14 + 96);
        if ( v11 )
          ObfReferenceObject(v11);
        v4 = 1;
        *a2 = *(_QWORD *)(v10 + 96);
      }
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v13);
    }
    if ( v8 )
      GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v8);
  }
  if ( v6 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v6);
  return v4;
}
