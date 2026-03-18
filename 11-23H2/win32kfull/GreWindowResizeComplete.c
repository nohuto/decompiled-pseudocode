/*
 * XREFs of GreWindowResizeComplete @ 0x1C0267BC4
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EBD4C (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0026D20 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00AA9F0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00B4A3C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00C42A0 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C0158F48 (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0264EC4 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowResizeComplete(__int64 a1, HWND a2)
{
  unsigned int v4; // esi
  struct Gre::Base::SESSION_GLOBALS *v5; // r14
  Gre::Base *v6; // rcx
  struct PDEVOBJ *v7; // rdx
  Gre::Base *v8; // rcx
  struct DWMSPRITE *v9; // rbx
  int v10; // eax
  int v11; // r12d
  SFMLOGICALSURFACE *v12; // r15
  __int64 v13; // rdx
  Gre::Base *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _BYTE v21[32]; // [rsp+20h] [rbp-69h] BYREF
  struct DWMSPRITE *v22; // [rsp+40h] [rbp-49h]
  __int64 v23; // [rsp+48h] [rbp-41h] BYREF
  __int128 v24; // [rsp+50h] [rbp-39h] BYREF
  __int64 v25; // [rsp+60h] [rbp-29h]
  int v26; // [rsp+68h] [rbp-21h]
  _QWORD v27[2]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v28[40]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+1Fh]
  __int64 v30; // [rsp+B0h] [rbp+27h]
  char v31; // [rsp+100h] [rbp+77h] BYREF
  __int64 v32; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = 0;
  v5 = Gre::Base::Globals((Gre::Base *)a1);
  v32 = *((_QWORD *)v5 + 15);
  GreAcquireSemaphore(v32);
  if ( IsDwmActive(v6) )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v31, v7, 0, 0);
    GreAcquireSemaphore(*((_QWORD *)v5 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v5 + 9), 7LL);
    if ( IsDwmActive(v8) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v21, a2);
      v9 = v22;
      if ( v22 )
      {
        v10 = *((_DWORD *)v22 + 29);
        v11 = 0;
        v12 = (SFMLOGICALSURFACE *)*((_QWORD *)v22 + 18);
        if ( v10 >= 1 )
        {
          if ( v10 == 2 )
          {
            if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(*((SFMLOGICALSURFACE **)v22 + 18)) )
            {
              DLODCOBJ::DLODCOBJ((DLODCOBJ *)v27);
              v30 = 0LL;
              v29 = 0LL;
              v27[0] = 0LL;
              v17 = *(_DWORD *)(a1 + 40);
              v24 = 0LL;
              v26 = 1;
              if ( (v17 & 1) != 0 )
              {
                Gre::Base::Globals(v14);
                *(_QWORD *)&v24 = *(_QWORD *)(a1 + 48);
                v25 = a1;
                GreAcquireSemaphore(v24);
                EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v24, 11LL);
              }
              if ( *(_QWORD *)(a1 + 3488) )
              {
                if ( (*(_DWORD *)(a1 + 40) & 0x4000000) != 0 )
                {
                  v18 = (_QWORD *)SFMLOGICALSURFACE::AdapterLuid(v12, &v23);
                  v19 = *(_QWORD *)(a1 + 1768);
                  if ( v19 )
                    *(_QWORD *)(v19 + 104) = *v18;
                }
                v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3488))(*(_QWORD *)(a1 + 1768), *(_QWORD *)v12);
              }
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v24, v13, v15, v16);
              if ( v27[0] )
                DLODCOBJ::vUnlock((DLODCOBJ *)v27);
              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v28);
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
            v9 = v22;
          }
          v4 = 1;
        }
        if ( v9 )
          _InterlockedDecrement((volatile signed __int32 *)v9 + 3);
      }
      v22 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v21);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v5 + 9));
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v31);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v32);
  return v4;
}
