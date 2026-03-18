/*
 * XREFs of GreProtectSpriteContent @ 0x14022472C
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z @ 0x1402DC8EC (-ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140023E24 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140029324 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x14016AADC (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x140197880 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1401987B0 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 */

__int64 __fastcall GreProtectSpriteContent(__int64 a1, HWND a2, int a3, char a4)
{
  int v5; // esi
  int v6; // r14d
  unsigned int v10; // r13d
  Gre::Base *v11; // rcx
  Gre::Base *v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rbx
  unsigned int v15; // ecx
  int v16; // ecx
  __int64 v17; // r15
  int v18; // edx
  int v19; // eax
  int v20; // ebx
  int v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdi
  int v25; // ebx
  void *v26; // rax
  int v28; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v29; // [rsp+68h] [rbp-31h]
  _BYTE v30[32]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v31[32]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+17h]
  unsigned int v33; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v34; // [rsp+118h] [rbp+7Fh] BYREF

  v5 = a4 & 1;
  v28 = 0;
  v34 = 0;
  v6 = (a4 & 0x11) == 17;
  v33 = 0;
  v10 = 0;
  v29 = (__int64 *)Gre::Base::Globals(0LL);
  if ( a3 && IsDwmActive(v11) )
  {
    ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v30, v29, a1, 0);
    if ( IsDwmActive(v12) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v31, a2);
      v13 = v32;
      if ( v32 )
      {
        v14 = *(_QWORD *)(v32 + 144);
        v29 = (__int64 *)v14;
        if ( v14 )
        {
          v15 = *(_DWORD *)(v32 + 140);
          v10 = 1;
          if ( ((v15 >> 3) & 1) != v5 || ((v15 >> 6) & 1) != v6 )
          {
            *(_DWORD *)(v32 + 140) = (v6 << 6) | (v15 & 0xFFFFFFF7 ^ (8 * (a4 & 1))) & 0xFFFFFFBF;
            SFMLOGICALSURFACE::GetRedirectionInfo(
              (SFMLOGICALSURFACE *)v14,
              (enum _HLSURF_REDIRECTIONSTYLE *)&v28,
              &v34,
              &v33,
              0LL,
              0LL);
            v16 = *(_DWORD *)(v13 + 140);
            v17 = *(_QWORD *)(v13 + 104);
            v18 = v16 & 0x40;
            *(_QWORD *)(v13 + 104) = 0LL;
            v19 = *(_DWORD *)(v14 + 252);
            v20 = v16 & 0xE;
            v21 = *(_DWORD *)(v13 + 116);
            v22 = v16 & 1;
            v23 = *(_QWORD *)v13;
            v24 = *v29;
            v25 = v22 | v19 & 0xC | (2 * (v19 & 1 | v18 | (4 * v20)));
            v26 = (void *)UserReferenceDwmApiPort(v22);
            DwmAsyncUpdateSprite(v26, v23, v24, v25, v13 + 72, 0LL, v28, v34, v33, v21 >= 1, v17);
          }
        }
      }
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v31);
    }
    ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v30);
  }
  return v10;
}
