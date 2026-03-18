/*
 * XREFs of GreDeleteSpriteDelayDelete @ 0x140321830
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x140020810 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140023E24 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x140027730 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x140030624 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400E08E8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1401987B0 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     ?Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ @ 0x1401A17FC (-Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ.c)
 *     ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x140328D2C (-GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreDeleteSpriteDelayDelete(Gre::Base *a1, HWND a2, HSPRITE a3, int a4)
{
  unsigned int v4; // edi
  int v9; // r14d
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rsi
  Gre::Base *v12; // rcx
  _DWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rbx
  struct DWMSPRITE *v16; // rax
  _BYTE v18[32]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v19[32]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+60h] [rbp-28h]

  v4 = 0;
  v9 = 1;
  v11 = Gre::Base::Globals(a1);
  if ( !a4 || !IsDwmActive(v10) )
    return (unsigned int)GdiDeleteSpriteDelayDelete((HDEV)a1, a2, a3);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v18, v11, (__int64)a1, 0);
  if ( IsDwmActive(v12) )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v19, a2, a3);
    v13 = (_DWORD *)v20;
    v9 = 0;
    if ( v20 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v20 + 144) + 184LL);
      if ( v14 )
      {
        v15 = v14 - 24;
        if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v14 - 24)) )
        {
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v15 + 272));
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v15 + 272));
        }
      }
      v13[16] = v13[14];
      v13[17] = v13[15];
      v16 = DWMSPRITEREF::Detach((DWMSPRITEREF *)v19);
      vspDestroyDwmSpriteObjInternal((HDEV)a1, 0LL, v16);
    }
    DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v19);
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v18);
  if ( v9 )
    return (unsigned int)GdiDeleteSpriteDelayDelete((HDEV)a1, a2, a3);
  return v4;
}
