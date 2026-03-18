/*
 * XREFs of GreWindowResizeComplete @ 0x1401DA938
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140023E24 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140029324 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400308A8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140062CF0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140062D4C (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1400CF068 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x14019C228 (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1401DAD5C (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z @ 0x140211448 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreWindowResizeComplete(__int64 a1, HWND a2)
{
  unsigned int v4; // r14d
  struct Gre::Base::SESSION_GLOBALS *v5; // rbx
  __int64 v6; // rsi
  Gre::Base *v7; // rcx
  Gre::Base *v8; // rcx
  struct DWMSPRITE *v9; // rbx
  int v10; // eax
  int v11; // r12d
  SFMLOGICALSURFACE *v12; // r15
  _BYTE v14[8]; // [rsp+20h] [rbp-A9h] BYREF
  _BYTE v15[8]; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-89h] BYREF
  struct DWMSPRITE *v18; // [rsp+60h] [rbp-69h]
  HDC v19[18]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v20; // [rsp+140h] [rbp+77h] BYREF
  struct _LUID v21; // [rsp+148h] [rbp+7Fh] BYREF

  v4 = 0;
  v5 = Gre::Base::Globals((Gre::Base *)a1);
  v6 = *(_QWORD *)v5 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v6);
  if ( IsDwmActive(v7) )
  {
    ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v14, v5, a1, 0);
    if ( IsDwmActive(v8) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v17, a2);
      v9 = v18;
      if ( v18 )
      {
        v10 = *((_DWORD *)v18 + 29);
        v11 = 0;
        v12 = (SFMLOGICALSURFACE *)*((_QWORD *)v18 + 18);
        if ( v10 >= 1 )
        {
          if ( v10 == 2 )
          {
            if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(*((SFMLOGICALSURFACE **)v18 + 18)) )
            {
              v20 = a1;
              DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19, (struct PDEVOBJ *)&v20);
              if ( a1 && *(_QWORD *)(a1 + 3504) )
              {
                if ( (*(_DWORD *)(a1 + 40) & 0x4000000) != 0 )
                {
                  SFMLOGICALSURFACE::AdapterLuid(v12, &v21);
                  PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v20, &v21);
                }
                v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3504))(*(_QWORD *)(a1 + 1784), *(_QWORD *)v12);
              }
              DEVLOCKOBJ::~DEVLOCKOBJ(v19);
            }
            if ( v11 )
            {
              *((_DWORD *)v9 + 29) = 3;
            }
            else
            {
              *((_DWORD *)v9 + 29) = 1;
              CheckAndProcessWindowResizeComplete(v9, 0, 0LL);
            }
          }
          v4 = 1;
        }
      }
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v17);
    }
    SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)v16);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v15);
  }
  if ( v6 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v6);
  return v4;
}
