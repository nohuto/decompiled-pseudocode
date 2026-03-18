/*
 * XREFs of ?GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z @ 0x14020C298
 * Callers:
 *     NtGdiResetDC @ 0x14020C100 (NtGdiResetDC.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400DD150 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140148174 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1401541FC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepResetDC(
        struct XDCOBJ *this,
        struct _devicemodeW *a2,
        int *a3,
        struct _DRIVER_INFO_2W *a4,
        void *a5)
{
  BOOL v6; // r14d
  __int64 v7; // rcx
  HDC v8; // r12
  unsigned int v9; // edi
  int *v10; // r13
  bool v11; // zf
  int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // r13d
  BOOL v16; // r15d
  HDC v17; // rax
  DC *v18; // rdx
  void (__fastcall *v19)(_QWORD, _QWORD); // rax
  HSEMAPHORE v20; // rbx
  struct _GRETHREAD *v21; // rax
  DC *v22; // rcx
  HDC v23; // rdx
  __int64 v24; // rax
  void (__fastcall *v25)(__int64, _QWORD, _QWORD); // rax
  int v27; // [rsp+28h] [rbp-91h]
  HDC v28; // [rsp+48h] [rbp-71h] BYREF
  HSEMAPHORE v29; // [rsp+50h] [rbp-69h] BYREF
  DC *v30[22]; // [rsp+58h] [rbp-61h] BYREF
  int v31; // [rsp+118h] [rbp+5Fh]

  v6 = 0;
  v7 = *(_QWORD *)this;
  v8 = 0LL;
  v9 = 0;
  v10 = a3;
  v11 = (*(_DWORD *)(v7 + 36) & 0x800) == 0;
  v12 = *(_DWORD *)(v7 + 36) & 0x800;
  v31 = v12;
  v28 = *(HDC *)v7;
  if ( !v11 )
    DC::bMakeInfoDC((DC *)v7, 0);
  v13 = *(_QWORD *)this;
  v14 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x100) == 0
    && *(_DWORD *)(v13 + 32) != 1
    && (*(_DWORD *)(v14 + 40) & 0x80u) != 0 )
  {
    v15 = *(_DWORD *)(v13 + 108);
    v16 = *(_QWORD *)(v13 + 496) != 0LL;
    v6 = v16;
    if ( XDCOBJ::bCleanDC(this, 0) )
    {
      if ( *(_DWORD *)(v14 + 8) == 1 )
      {
        v17 = (HDC)hdcOpenDCW(&pszFormat, a2, 0LL, 0LL, *(_QWORD *)(v14 + 2552), a4, a5, 0);
        v8 = v17;
        if ( v17 )
        {
          *(_QWORD *)(v14 + 2552) = 0LL;
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v30, v17);
          v18 = v30[0];
          if ( v30[0] )
          {
            if ( v15 > 0 )
            {
              *((_DWORD *)v30[0] + 27) = *((_DWORD *)v30[0] + 26);
              v18 = v30[0];
            }
            *((_QWORD *)v18 + 259) = *(_QWORD *)(*(_QWORD *)this + 2072LL);
            *(_QWORD *)(*(_QWORD *)this + 2072LL) = 0LL;
            *((_QWORD *)v30[0] + 260) = *(_QWORD *)(*(_QWORD *)this + 2080LL);
            *(_QWORD *)(*(_QWORD *)this + 2080LL) = 0LL;
            v19 = *(void (__fastcall **)(_QWORD, _QWORD))(v14 + 2736);
            if ( v19 )
              v19(*(_QWORD *)(v14 + 1784), *(_QWORD *)(*((_QWORD *)v30[0] + 6) + 1784LL));
            SEMOBJ<20>::SEMOBJ<20>((Gre::Base *)&v29);
            LOBYTE(v27) = 1;
            HmgSwapLockedHandleContents(v28, 0LL, v8, 0LL, v27);
            v20 = v29;
            if ( v29 )
            {
              EtwTraceGreLockReleaseSemaphore(L"Hmgr", v29);
              v21 = GreGetCurrentThreadCrossSessionCheck();
              if ( v21 )
              {
                v11 = (*((_BYTE *)v21 + 28))-- == 1;
                if ( v11 )
                  *(_QWORD *)v21 &= ~0x100000uLL;
                if ( !*(_QWORD *)v21 )
                  GrepOnAllLocksReleased();
              }
              GreReleaseSemaphoreExclusiveInternal(v20);
            }
            v9 = 1;
          }
          else
          {
            EngSetLastError(6u);
          }
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v30);
          v6 = v16;
        }
      }
    }
    v10 = a3;
    v12 = v31;
  }
  XDCOBJ::vUnlockNoNullSet(this);
  *(_QWORD *)this = 0LL;
  if ( v9 )
  {
    GrepDeleteDC(v8, 0x400000LL);
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v30, v28);
    v22 = v30[0];
    if ( v30[0] )
    {
      v28 = (HDC)*((_QWORD *)v30[0] + 6);
      if ( v6 )
      {
        if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)&v28, 0LL) )
          goto LABEL_34;
        DC::pSurface(v30[0], *((struct SURFACE **)v28 + 318));
        v23 = v28;
        v24 = *((_QWORD *)v28 + 318);
        v11 = (*(_DWORD *)(v24 + 112) & 0x2000000) == 0;
        *v10 = *(_DWORD *)(v24 + 112) & 0x2000000;
        if ( !v11 )
          *((_QWORD *)v30[0] + 64) = *(_QWORD *)(*((_QWORD *)v23 + 318) + 56LL);
        DC::bSetDefaultRegion(v30[0]);
        v25 = (void (__fastcall *)(__int64, _QWORD, _QWORD))*((_QWORD *)v28 + 370);
        if ( v25 )
          v25((*((_QWORD *)v28 + 318) + 24LL) & -(__int64)(*((_QWORD *)v28 + 318) != 0LL), 0LL, 0LL);
        else
LABEL_34:
          v9 = 0;
        if ( !v9 )
          goto LABEL_40;
        v22 = v30[0];
      }
      else
      {
        *v10 = 0;
      }
      if ( v12 )
        DC::bMakeInfoDC(v22, 1);
    }
    else
    {
      EngSetLastError(6u);
      v9 = 0;
    }
LABEL_40:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v30);
  }
  return v9;
}
