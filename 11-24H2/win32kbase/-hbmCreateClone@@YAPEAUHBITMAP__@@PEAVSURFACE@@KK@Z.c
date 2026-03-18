/*
 * XREFs of ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x14000DB44
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x14000DD70 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140013D84 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140014520 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x140021560 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x140038680 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140038F80 (--1SURFMEM@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall hbmCreateClone(struct SURFACE *a1, int a2, int a3)
{
  int v3; // eax
  __int64 *v5; // rax
  __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rdi
  int (*v9)(void); // rax
  __int64 SessionState; // rax
  __int64 v11; // r14
  __int64 v12; // r15
  unsigned int (__fastcall *v13)(__int64, unsigned __int64, _QWORD, __int64, __int64 *, __int64 *); // r10
  int v15; // eax
  __int64 v16; // [rsp+60h] [rbp-39h] BYREF
  char v17; // [rsp+68h] [rbp-31h]
  int v18; // [rsp+6Ch] [rbp-2Dh]
  __int64 v19; // [rsp+70h] [rbp-29h] BYREF
  int v20; // [rsp+78h] [rbp-21h] BYREF
  int v21; // [rsp+7Ch] [rbp-1Dh]
  int v22; // [rsp+80h] [rbp-19h]
  int v23; // [rsp+84h] [rbp-15h]
  __int64 v24; // [rsp+88h] [rbp-11h]
  int v25; // [rsp+90h] [rbp-9h]
  int v26; // [rsp+94h] [rbp-5h]
  __int64 v27; // [rsp+98h] [rbp-1h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+Fh] BYREF
  int v30; // [rsp+B0h] [rbp+17h]
  int v31; // [rsp+B4h] [rbp+1Bh]

  v3 = *((_DWORD *)a1 + 24);
  v23 = 0;
  v26 = 0;
  v20 = v3;
  if ( a2 && a3 )
  {
    if ( *((_DWORD *)a1 + 14) < a2 )
      a2 = *((_DWORD *)a1 + 14);
    v15 = *((_DWORD *)a1 + 15);
    v21 = a2;
    if ( v15 < a3 )
      a3 = v15;
    v22 = a3;
  }
  else
  {
    v21 = *((_DWORD *)a1 + 14);
    v22 = *((_DWORD *)a1 + 15);
  }
  v5 = (__int64 *)*((_QWORD *)a1 + 16);
  v24 = 0LL;
  if ( v5 )
    v24 = *v5;
  v6 = 0LL;
  v25 = 1;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  if ( (unsigned int)SURFMEM::bCreateDIB(
                       (SURFMEM *)&v16,
                       (struct _DEVBITMAPINFO *)&v20,
                       0LL,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0,
                       1,
                       0,
                       0) )
  {
    v7 = (*((_DWORD *)a1 + 28) & 0x4000) == 0;
    v8 = 0LL;
    v30 = v21;
    v31 = v22;
    v27 = 0LL;
    v29 = 0LL;
    v19 = 0LL;
    if ( !v7 )
    {
      v28 = *((_QWORD *)a1 + 6);
      v8 = v28;
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v19, (struct PDEVOBJ *)&v28);
      GreAcquireSemaphore<8,PDEVOBJ>(v8);
    }
    v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 624LL);
    if ( !v9
      || v9() < 0
      || (SessionState = W32GetSessionState(),
          v11 = v16,
          v12 = *(_QWORD *)(SessionState + 88),
          (v13 = *(unsigned int (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, __int64 *, __int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 632LL)) != 0LL)
      && v13(
           (v11 + 24) & -(__int64)(v11 != 0),
           ((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL),
           0LL,
           v12 + 4552,
           &v29,
           &v27) )
    {
      v17 |= 1u;
      v6 = *(_QWORD *)(v16 + 32);
    }
    if ( v8 )
    {
      GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *(_QWORD *)(v8 + 48));
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v19);
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v19);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v16);
  return v6;
}
