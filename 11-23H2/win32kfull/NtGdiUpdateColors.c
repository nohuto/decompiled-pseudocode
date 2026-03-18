/*
 * XREFs of NtGdiUpdateColors @ 0x1C02D1F70
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C007A418 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00BB318 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C70 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00C3A60 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00C3A9C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02B1620 (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C02DB5E4 (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 *     ??1XLATEMEMOBJ@@QEAA@XZ @ 0x1C02DB690 (--1XLATEMEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiUpdateColors(HDC a1)
{
  unsigned int v1; // r14d
  __int64 v3; // rbx
  DC *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  __int64 v8; // r10
  struct REGION *v9; // rax
  struct ECLIPOBJ *v10; // rdx
  BOOL (__stdcall *v11)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v12; // rdx
  unsigned int updated; // eax
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  struct _XLATEOBJ *v15; // [rsp+50h] [rbp-B8h] BYREF
  DC *v16[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v17[32]; // [rsp+68h] [rbp-A0h] BYREF
  __m128i rclBounds; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v19[32]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v20[2]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v21[64]; // [rsp+C8h] [rbp-40h] BYREF
  struct _CLIPOBJ v22; // [rsp+108h] [rbp+0h] BYREF
  __int64 v23; // [rsp+140h] [rbp+38h]
  __int64 v24; // [rsp+158h] [rbp+50h]
  int v25; // [rsp+160h] [rbp+58h]
  int v26; // [rsp+188h] [rbp+80h]
  __int64 v27; // [rsp+198h] [rbp+90h]

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v16) )
  {
    v3 = *((_QWORD *)v16[0] + 6);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v20);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v19, (struct XDCOBJ *)v16, 0);
    if ( (*(_DWORD *)(v3 + 2140) & 0x100) != 0 )
    {
      v4 = v16[0];
      v7 = *((_QWORD *)v16[0] + 62);
      if ( v7 == *(_QWORD *)(v3 + 2528) )
      {
        v8 = *(_QWORD *)(v7 + 128);
        v6 = *((_QWORD *)v16[0] + 11);
        if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v16, (DC *)((char *)v16[0] + 1032));
        if ( (v19[24] & 1) != 0 )
        {
          if ( *(_QWORD *)(v6 + 80) && *(_QWORD *)(v6 + 88) )
          {
            XLATEMEMOBJ::XLATEMEMOBJ(&v15, v8, v6);
            if ( v15 )
            {
              v9 = XDCOBJ::prgnEffRao(v16);
              v23 = 0LL;
              v24 = 0LL;
              v25 = 0;
              v27 = 0LL;
              v26 = 1;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v22, v9, (DC *)((char *)v16[0] + 1032), 0);
              if ( ERECTL::bEmpty((ERECTL *)&v22.rclBounds) )
              {
                v1 = 1;
              }
              else
              {
                if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
                {
                  rclBounds = (__m128i)v22.rclBounds;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v16, v10, &rclBounds);
                }
                ++*(_DWORD *)(v7 + 92);
                if ( (*(_DWORD *)(v3 + 40) & 0x20000) != 0 )
                {
                  updated = MulUpdateColors((struct _SURFOBJ *)(v7 + 24), &v22, v15);
                }
                else
                {
                  if ( (*(_DWORD *)(v7 + 112) & 0x400) != 0 )
                    v11 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v3 + 2816);
                  else
                    v11 = EngCopyBits;
                  v12 = (v7 + 24) & -(__int64)(v7 != 0);
                  updated = ((__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))v11)(
                              v12,
                              v12,
                              &v22,
                              v15,
                              &v22.rclBounds,
                              &v22.rclBounds);
                }
                v1 = updated;
              }
            }
            XLATEMEMOBJ::~XLATEMEMOBJ((XLATEMEMOBJ *)&v15);
          }
          else
          {
            v1 = 1;
          }
        }
        else
        {
          v1 = XDCOBJ::bFullScreen((XDCOBJ *)v16);
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19, (__int64)v4, v5, v6);
    if ( v20[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v20);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v21);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
    if ( v16[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v16);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v17);
    return v1;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v16);
    return 0LL;
  }
}
