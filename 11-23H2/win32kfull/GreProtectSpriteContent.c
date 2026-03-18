/*
 * XREFs of GreProtectSpriteContent @ 0x1C02675D8
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z @ 0x1C022C494 (-ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0026D20 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C007AAF0 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C008E520 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00AA9F0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00B4A3C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreProtectSpriteContent(Gre::Base *a1, HWND a2, int a3, char a4)
{
  int v4; // edi
  int v6; // esi
  unsigned int v8; // r14d
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r13
  struct PDEVOBJ *v11; // rdx
  Gre::Base *v12; // rcx
  __int64 v13; // r12
  __int64 *v14; // rbx
  unsigned int v15; // ecx
  int v16; // edx
  int v17; // eax
  __int64 v18; // r15
  int v19; // r14d
  __int64 v20; // rsi
  __int64 v21; // rdi
  char v22; // cl
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // r8
  void *v27; // rax
  _BYTE v29[4]; // [rsp+64h] [rbp-15h] BYREF
  __int64 *v30; // [rsp+68h] [rbp-11h]
  _BYTE v31[32]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v32; // [rsp+90h] [rbp+17h]
  int v33; // [rsp+E0h] [rbp+67h] BYREF
  int v34; // [rsp+E4h] [rbp+6Bh]
  unsigned int v35; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v36; // [rsp+F8h] [rbp+7Fh] BYREF

  v34 = HIDWORD(a1);
  v33 = 0;
  v4 = a4 & 1;
  v36 = 0;
  v35 = 0;
  v6 = (a4 & 0x11) == 17;
  v8 = 0;
  v10 = Gre::Base::Globals(a1);
  if ( a3 && IsDwmActive(v9) )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v29, v11, 0, 0);
    GreAcquireSemaphore(*((_QWORD *)v10 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9), 7LL);
    if ( IsDwmActive(v12) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v31, a2);
      v13 = v32;
      if ( v32 )
      {
        v14 = *(__int64 **)(v32 + 144);
        v30 = v14;
        if ( v14 )
        {
          v15 = *(_DWORD *)(v32 + 140);
          v8 = 1;
          if ( ((v15 >> 3) & 1) != v4 || ((v15 >> 6) & 1) != v6 )
          {
            *(_DWORD *)(v32 + 140) = (v6 << 6) | v15 & 0xFFFFFFB7 | (8 * v4) & 0xFFFFFFBF;
            SFMLOGICALSURFACE::GetRedirectionInfo(
              (SFMLOGICALSURFACE *)v14,
              (enum _HLSURF_REDIRECTIONSTYLE *)&v33,
              &v36,
              &v35,
              0LL,
              0LL);
            v16 = *((_DWORD *)v14 + 63);
            v17 = *(_DWORD *)(v13 + 140);
            v18 = *(_QWORD *)(v13 + 104);
            *(_QWORD *)(v13 + 104) = 0LL;
            v19 = *(_DWORD *)(v13 + 116);
            v20 = *(_QWORD *)v13;
            v21 = *v30;
            v22 = v16;
            v23 = v16 & 0xC;
            v24 = v22 & 1;
            v25 = v17 & 1 | v23 | (2 * (v24 | v17 & 0x40 | (4 * (v17 & 0xE))));
            v27 = (void *)UserReferenceDwmApiPort(v24, v23, v26);
            DwmAsyncUpdateSprite(v27, v20, v21, v25, v13 + 72, 0LL, v33, v36, v35, v19 >= 1, v18);
            v13 = v32;
            v8 = 1;
          }
        }
        if ( v13 )
          _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
      }
      v32 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v31);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v29);
  }
  return v8;
}
