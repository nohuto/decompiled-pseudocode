/*
 * XREFs of GreUpdateSpriteClipRgn @ 0x1C0023A1C
 * Callers:
 *     SelectWindowRgn @ 0x1C002387C (SelectWindowRgn.c)
 *     xxxSetLayeredWindow @ 0x1C00ABE84 (xxxSetLayeredWindow.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0026D20 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0027228 (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     UserGetWindowRect @ 0x1C0027404 (UserGetWindowRect.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00AA9F0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00B4A3C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00C7D10 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00C9A30 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C011C44C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall GreUpdateSpriteClipRgn(Gre::Base *a1, HWND a2, HRGN a3, int a4)
{
  struct Gre::Base::SESSION_GLOBALS *v7; // rsi
  struct PDEVOBJ *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rbx
  REGION *v11; // rcx
  __int64 v12; // [rsp+28h] [rbp-59h] BYREF
  struct _POINTL v13; // [rsp+30h] [rbp-51h] BYREF
  __int64 v14; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v16[8]; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v17[4]; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v18[32]; // [rsp+60h] [rbp-21h] BYREF
  __int64 v19; // [rsp+80h] [rbp-1h]
  _QWORD v20[8]; // [rsp+88h] [rbp+7h] BYREF
  Gre::Base *v21; // [rsp+E8h] [rbp+67h] BYREF

  v21 = a1;
  v7 = Gre::Base::Globals(a1);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v21, v8, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v7 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v7 + 9), 7LL);
  if ( (unsigned int)IsDwmActive() )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a3, 0, 0);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v18, a2);
    v9 = v19;
    if ( !v19 )
    {
LABEL_24:
      v19 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v18);
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
      goto LABEL_25;
    }
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v16, (struct _EX_PUSH_LOCK *)(v19 + 88));
    v10 = *(_QWORD *)(v9 + 144);
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v15, (struct _EX_PUSH_LOCK *)(v10 + 256));
    if ( v20[0] && (unsigned int)UserGetWindowRect(*(_QWORD *)(v9 + 40), v17) )
    {
      if ( !*(_QWORD *)(v10 + 88) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
        if ( v14 )
          *(_QWORD *)(v10 + 88) = v14;
      }
      if ( !*(_QWORD *)(v10 + 88) )
        goto LABEL_19;
      v12 = *(_QWORD *)(v10 + 88);
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v12, (struct RGNOBJ *)v20) )
        goto LABEL_19;
      v13.x = -v17[0];
      v13.y = -v17[1];
      if ( RGNOBJ::bOffset((RGNOBJ *)&v12, &v13) )
      {
        if ( (*(_DWORD *)(v9 + 140) & 0x20) != 0 )
          RGNOBJ::vScale(
            &v12,
            _mm_unpacklo_ps((__m128)*(unsigned int *)(v9 + 132), (__m128)*(unsigned int *)(v9 + 136)).m128_u64[0]);
        *(_QWORD *)(v10 + 88) = v12;
        goto LABEL_18;
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
    }
    else
    {
      v11 = *(REGION **)(v10 + 88);
      if ( !v11 )
        goto LABEL_19;
      REGION::vDeleteREGION(v11);
    }
    *(_QWORD *)(v10 + 88) = 0LL;
LABEL_18:
    *(_DWORD *)(v10 + 252) |= 0x20u;
LABEL_19:
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v15);
    if ( (*(_DWORD *)(v10 + 252) & 1) == 0 || !a4 )
      vSpDwmFlushSpriteClipRgnChange((struct SFMLOGICALSURFACE *)v10);
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v16);
    if ( v19 )
      _InterlockedDecrement((volatile signed __int32 *)(v19 + 12));
    goto LABEL_24;
  }
LABEL_25:
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v7 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v21);
}
