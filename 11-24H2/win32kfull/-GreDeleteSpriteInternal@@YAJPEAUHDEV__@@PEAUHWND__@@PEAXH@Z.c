/*
 * XREFs of ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14003040C
 * Callers:
 *     GreDeleteSprite @ 0x140030374 (GreDeleteSprite.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x14016AD54 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14016B470 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x140023C64 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002569C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x140027730 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x140030624 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x140030784 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     DwmAsyncDestroySprite @ 0x140030804 (DwmAsyncDestroySprite.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140062CF0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140062D4C (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1400DDD8C (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400E08E8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall GreDeleteSpriteInternal(Gre::Base *a1, HWND a2, HSPRITE a3, int a4)
{
  int v4; // r15d
  int v6; // r12d
  HWND v8; // rdi
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rsi
  struct PDEVOBJ *v12; // rdx
  Gre::Base *v13; // rcx
  __int64 v14; // rcx
  OBJECT *v15; // rsi
  __int64 v16; // rdi
  void *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rbx
  unsigned int v20; // ebp
  OBJECT *v21; // rbx
  __int64 v23; // rax
  _BYTE v24[8]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v25; // [rsp+30h] [rbp-68h] BYREF
  char v26; // [rsp+38h] [rbp-60h]
  _BYTE v27[32]; // [rsp+40h] [rbp-58h] BYREF
  OBJECT *v28; // [rsp+60h] [rbp-38h]

  v4 = 1;
  v6 = 1;
  v8 = a2;
  v11 = Gre::Base::Globals(a1);
  if ( !a4 || !IsDwmActive(v10) )
    return (unsigned int)GdiDeleteSprite((HDEV)a1, v8, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v24, v12, 0, 0);
  v25 = *(_QWORD *)v11 + 520LL;
  v26 = 0;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v25);
  if ( IsDwmActive(v13) )
  {
    v6 = 0;
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v27, v8, a3);
    v15 = v28;
    if ( v28 )
    {
      v16 = *((_QWORD *)v28 + 18);
      v17 = (void *)UserReferenceDwmApiPort(v14);
      v18 = DwmAsyncDestroySprite(v17);
      v19 = *(_QWORD *)(v16 + 184);
      v20 = v18;
      if ( !v19 || !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v19 - 24)) )
        goto LABEL_9;
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v19 + 248));
      if ( *(_DWORD *)(v19 + 300) && (*(_DWORD *)(v19 + 92) & 2) == 0 )
      {
        *((_DWORD *)v15 + 35) |= 0x10u;
        vspRemoveStateReferencesForSprite(v15);
        *(_QWORD *)(v19 + 480) = 0LL;
        *(_QWORD *)(v19 + 472) = a1;
        v23 = *(_QWORD *)v15;
        *(_DWORD *)(v19 + 92) |= 2u;
        *(_DWORD *)(v19 + 496) = 1;
        v4 = 0;
        *(_QWORD *)(v19 + 488) = v23;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v19 + 248));
      if ( v4 )
      {
LABEL_9:
        *((_DWORD *)v15 + 16) = *((_DWORD *)v15 + 14);
        *((_DWORD *)v15 + 17) = *((_DWORD *)v15 + 15);
        v21 = v28;
        if ( v28 )
          OBJECT::InterlockedDecrementExclusiveLockCount(v28);
        v28 = 0LL;
        vspDestroyDwmSpriteObjInternal((HDEV)a1, 0, v21);
      }
      v8 = a2;
    }
    else
    {
      v20 = -2143354870;
    }
    DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v27);
  }
  else
  {
    v20 = -1071775733;
  }
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(&v25);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v24);
  if ( v6 )
    return (unsigned int)GdiDeleteSprite((HDEV)a1, v8, a3);
  return v20;
}
