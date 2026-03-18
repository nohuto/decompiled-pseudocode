/*
 * XREFs of ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x140023C64
 * Callers:
 *     GreZorderSprite @ 0x140025478 (GreZorderSprite.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1400258BC (GreDwmNotifySpriteMonitorChange.c)
 *     GreHintSpriteShape @ 0x140027AF0 (GreHintSpriteShape.c)
 *     vCleanupUMWindowlessSprite @ 0x14002A590 (vCleanupUMWindowlessSprite.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14003040C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x140023FC8 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

DWMSPRITELOCK *__fastcall DWMSPRITELOCK::DWMSPRITELOCK(DWMSPRITELOCK *this, struct PDEVOBJ *a2, int a3, int a4)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx

  *(_DWORD *)this = 0;
  if ( !a3 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(this, a2);
    if ( CurrentThreadNonPaged )
      v7 = *CurrentThreadNonPaged;
    else
      v7 = 0LL;
    v8 = v7 + 8;
    v9 = -v7;
    if ( (v8 & -(__int64)(v9 != 0)) == 0
      || a4 == 1
      || !*(_DWORD *)((v8 & -(__int64)(v9 != 0)) + 0x15C) && !*(_DWORD *)((v8 & -(__int64)(v9 != 0)) + 0x160) )
    {
      v10 = *(_QWORD *)Gre::Base::Globals((Gre::Base *)(v8 & -(__int64)(v9 != 0)));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"Sprite", v10 + 1040, 0LL);
      GreAcquireSemaphoreInternal((HSEMAPHORE)(v10 + 1040));
      GrepAcquireLockValidate<6>();
      *(_DWORD *)this = 1;
    }
  }
  return this;
}
