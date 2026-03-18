/*
 * XREFs of GreZorderSprite @ 0x140025478
 * Callers:
 *     TrackLayeredZorder @ 0x140075130 (TrackLayeredZorder.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x140075608 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x140023C64 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002569C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x14002778C (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x140060E40 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140062CF0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140062D4C (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x14016CEDC (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x140197928 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

void __fastcall GreZorderSprite(Gre::Base *a1, HWND a2, HWND a3, int a4)
{
  int v8; // ebp
  struct Gre::Base::SESSION_GLOBALS *v9; // r15
  HSEMAPHORE v10; // rdi
  Gre::Base *v11; // rcx
  struct PDEVOBJ *v12; // rdx
  Gre::Base *v13; // rcx
  HSPRITE v14; // rbx
  HSPRITE v15; // r15
  _BYTE v16[8]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  char v18; // [rsp+38h] [rbp-20h]

  v8 = 1;
  v9 = Gre::Base::Globals(a1);
  v10 = (HSEMAPHORE)(*(_QWORD *)v9 + 1144LL);
  GreAcquireSemaphoreInternal(v10);
  GrepAcquireLockValidate<2>();
  if ( !a4 || !IsDwmActive(v11) )
    goto LABEL_8;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v16, v12, 0, 0);
  v17 = *(_QWORD *)v9 + 520LL;
  v18 = 0;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  if ( IsDwmActive(v13) )
  {
    v8 = 0;
    v14 = 0LL;
    v15 = DWMSPRITEREF::hspLookupWindow(a2);
    if ( a3 )
      v14 = DWMSPRITEREF::hspLookupWindow(a3);
    vSpDwmZorderSprite(v15, v14);
  }
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(&v17);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v16);
  if ( v8 )
LABEL_8:
    GdiZorderSprite((HDEV)a1, a2, a3);
  if ( v10 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v10);
}
