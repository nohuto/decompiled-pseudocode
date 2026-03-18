/*
 * XREFs of ?GreDrawEscape@@YAHPEAUHDC__@@HAEBV?$umptr_r@D@@@Z @ 0x1C0274C3C
 * Callers:
 *     NtGdiDrawEscape @ 0x1C02C1AA0 (NtGdiDrawEscape.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00BB318 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C02745EC (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C02770EC (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GreDrawEscape(HDC a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v5; // r14d
  DC *v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, _BYTE *, struct _RECTL *, int, _QWORD); // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  struct REGION *v16; // rax
  Gre::Base *v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rdi
  DC *v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[32]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v23[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v24[64]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v25; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v26[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v27; // [rsp+110h] [rbp+10h]
  _BYTE v28[4]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v29[52]; // [rsp+124h] [rbp+24h] BYREF
  __int64 v30; // [rsp+158h] [rbp+58h]
  __int64 v31; // [rsp+170h] [rbp+70h]
  int v32; // [rsp+178h] [rbp+78h]
  int v33; // [rsp+1A0h] [rbp+A0h]
  __int64 v34; // [rsp+1B0h] [rbp+B0h]

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  v6 = v20[0];
  if ( !v20[0] )
    goto LABEL_30;
  if ( *((_QWORD *)v20[0] + 62) && (**((_DWORD **)v20[0] + 122) & 1) == 0 )
  {
    if ( a2 == 8 && a3[1] - a3[2] < 4uLL )
    {
      DCOBJ::~DCOBJ((DCOBJ *)v20);
      return 0LL;
    }
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v23);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v22, (struct XDCOBJ *)v20, 0);
    v11 = *((_QWORD *)v20[0] + 6);
    v12 = *(__int64 (__fastcall **)(__int64, __int64, _BYTE *, struct _RECTL *, int, _QWORD))(v11 + 2864);
    if ( !v12 )
      goto LABEL_25;
    if ( a2 == 8 )
    {
      v13 = *((_QWORD *)v20[0] + 62);
      v8 = 88LL;
      v14 = v13 + 112;
      if ( !v13 )
        v14 = 88LL;
      if ( (*(_DWORD *)v14 & 0x200000) == 0 )
        goto LABEL_25;
      v15 = v12(
              (v13 + 24) & -(__int64)(v13 != 0),
              8LL,
              0LL,
              0LL,
              *((_DWORD *)a3 + 2) - *((_DWORD *)a3 + 4),
              *a3 + a3[2]);
    }
    else
    {
      if ( (v22[24] & 1) != 0 )
      {
        v25 = *(struct _RECTL *)((char *)v20[0] + 1032);
        v16 = XDCOBJ::prgnEffRao(v20);
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0;
        v34 = 0LL;
        v33 = 1;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v28, v16, (struct ERECTL *)&v25, 0);
        if ( ERECTL::bEmpty((ERECTL *)v29) )
        {
          v5 = 1;
        }
        else
        {
          v8 = 88LL;
          v17 = (Gre::Base *)*((_QWORD *)v20[0] + 62);
          v18 = (__int64)v17 + 112;
          if ( !v17 )
            v18 = 88LL;
          if ( (*(_DWORD *)v18 & 0x200000) != 0 )
          {
            v19 = (_QWORD *)((char *)Gre::Base::Globals(v17) + 112);
            if ( (*(_DWORD *)(v11 + 40) & 1) != 0 )
            {
              GreAcquireSemaphore(*v19);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *v19, 5LL);
            }
            v27 = 0LL;
            DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v26, (struct XDCOBJ *)v20, &v25);
            ++*(_DWORD *)(*((_QWORD *)v20[0] + 62) + 92LL);
            v5 = v12(
                   (*((_QWORD *)v20[0] + 62) + 24LL) & -(__int64)(*((_QWORD *)v20[0] + 62) != 0LL),
                   a2,
                   v28,
                   &v25,
                   *((_DWORD *)a3 + 2) - *((_DWORD *)a3 + 4),
                   *a3 + a3[2]);
            DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v26);
            if ( (*(_DWORD *)(v11 + 40) & 1) != 0 )
            {
              EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
              GreReleaseSemaphoreInternal(*v19);
            }
          }
        }
        goto LABEL_25;
      }
      v15 = XDCOBJ::bFullScreen((XDCOBJ *)v20);
    }
    v5 = v15;
LABEL_25:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22, v8, v9, v10);
    if ( v23[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v23);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v24);
    v6 = v20[0];
  }
  if ( v6 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v20);
LABEL_30:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v21);
  return v5;
}
