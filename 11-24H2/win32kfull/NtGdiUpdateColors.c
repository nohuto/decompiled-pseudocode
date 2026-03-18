/*
 * XREFs of NtGdiUpdateColors @ 0x14030F8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140028C4C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1400596DC (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1400C384C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x140311920 (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 *     ??1XLATEMEMOBJ@@QEAA@XZ @ 0x1403119CC (--1XLATEMEMOBJ@@QEAA@XZ.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1403318A4 (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiUpdateColors(HDC a1)
{
  unsigned int v1; // esi
  DC *v2; // rbx
  __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v6; // r10
  __int64 v7; // r9
  struct REGION *v8; // rax
  struct ECLIPOBJ *v9; // rdx
  BOOL (__stdcall *v10)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v11; // rdx
  int updated; // eax
  struct _XLATEOBJ *v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14[3]; // [rsp+50h] [rbp-B8h] BYREF
  DC *v15[14]; // [rsp+68h] [rbp-A0h] BYREF
  HDC v16[3]; // [rsp+D8h] [rbp-30h] BYREF
  char v17; // [rsp+F0h] [rbp-18h]
  struct _CLIPOBJ v18; // [rsp+168h] [rbp+60h] BYREF

  v1 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v15, a1);
  v2 = v15[0];
  if ( !v15[0] || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v15) )
    goto LABEL_5;
  v3 = *((_QWORD *)v2 + 6);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)v14);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v16, (struct XDCOBJ *)v15, 0) )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ(v16);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v14[0]);
LABEL_5:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v15);
    return 0LL;
  }
  if ( (*(_DWORD *)(v3 + 2156) & 0x100) != 0 )
  {
    v5 = *((_QWORD *)v15[0] + 62);
    if ( v5 == *(_QWORD *)(v3 + 2544) )
    {
      v6 = *(_QWORD *)(v5 + 128);
      v7 = *((_QWORD *)v15[0] + 11);
      if ( (*((_DWORD *)v15[0] + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v15, (DC *)((char *)v15[0] + 1032));
      if ( (v17 & 1) != 0 )
      {
        if ( *(_QWORD *)(v7 + 80) && *(_QWORD *)(v7 + 88) )
        {
          XLATEMEMOBJ::XLATEMEMOBJ(&v13, v6, v7);
          if ( v13 )
          {
            v8 = XDCOBJ::prgnEffRao(v15);
            ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v18, v8, (DC *)((char *)v15[0] + 1032));
            if ( ERECTL::bEmpty((ERECTL *)&v18.rclBounds) )
            {
              v1 = 1;
            }
            else
            {
              if ( (*((_DWORD *)v15[0] + 9) & 0xE0) != 0 )
              {
                *(RECTL *)&v14[1] = v18.rclBounds;
                XDCOBJ::vAccumulateTight((XDCOBJ *)v15, v9, (__m128i *)&v14[1]);
              }
              ++*(_DWORD *)(v5 + 92);
              if ( (*(_DWORD *)(v3 + 40) & 0x20000) != 0 )
              {
                updated = MulUpdateColors((struct _SURFOBJ *)(v5 + 24), &v18, v13);
              }
              else
              {
                if ( (*(_DWORD *)(v5 + 112) & 0x400) != 0 )
                  v10 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v3 + 2832);
                else
                  v10 = EngCopyBits;
                v11 = (v5 + 24) & -(__int64)(v5 != 0);
                updated = ((__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))v10)(
                            v11,
                            v11,
                            &v18,
                            v13,
                            &v18.rclBounds,
                            &v18.rclBounds);
              }
              v1 = updated;
            }
          }
          XLATEMEMOBJ::~XLATEMEMOBJ((XLATEMEMOBJ *)&v13);
        }
        else
        {
          v1 = 1;
        }
      }
      else
      {
        v1 = XDCOBJ::bFullScreen((XDCOBJ *)v15);
      }
    }
  }
  DEVLOCKOBJ::~DEVLOCKOBJ(v16);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v14[0]);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v15);
  return v1;
}
