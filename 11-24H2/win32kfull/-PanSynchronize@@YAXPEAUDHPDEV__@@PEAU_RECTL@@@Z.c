/*
 * XREFs of ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x140263A70
 * Callers:
 *     ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x140263960 (-PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z.c)
 *     ?PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140309C20 (-PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x140009EBC (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x140054E20 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x140224EF0 (-vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnLockBmp1AndRemovePunt@MULTIPANSURFLOCK@@QEAAXXZ @ 0x14030B420 (-vUnLockBmp1AndRemovePunt@MULTIPANSURFLOCK@@QEAAXXZ.c)
 *     ?vUnLockShadow@PANSURFLOCK@@QEAAXXZ @ 0x14030B59C (-vUnLockShadow@PANSURFLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall PanSynchronize(struct DHPDEV__ *a1, __m128i *a2)
{
  __m128i *v3; // rdx
  __int64 v5; // rcx
  HSEMAPHORE v6; // rbx
  __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // kr00_8
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+48h] [rbp-B8h]
  int v14; // [rsp+4Ch] [rbp-B4h]
  __int128 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+60h] [rbp-A0h] BYREF
  struct DHPDEV__ *v17; // [rsp+70h] [rbp-90h]
  struct _CLIPOBJ v18; // [rsp+D0h] [rbp-30h] BYREF

  v12 = 0LL;
  v3 = (__m128i *)&v12;
  v5 = *((_QWORD *)a1 + 8);
  v15 = 0LL;
  if ( a2 )
    v3 = a2;
  v16 = 0LL;
  v13 = *(_DWORD *)(v5 + 32);
  v14 = *(_DWORD *)(v5 + 36);
  v17 = a1;
  PANSURFLOCK::vLockShadow((PANSURFLOCK *)&v16, v3, 0LL, 1);
  v6 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
  EngAcquireSemaphore(v6);
  if ( *((_DWORD *)a1 + 26) )
  {
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v18);
    XCLIPOBJ::vSetup((XCLIPOBJ *)&v18, *((struct REGION **)a1 + 10), (const struct ERECTL *)(a1 + 4), 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v18.rclBounds) )
    {
      CLIPOBJ_vOffset(&v18, -*((_DWORD *)a1 + 4), -*((_DWORD *)a1 + 5));
      *(_QWORD *)(*((_QWORD *)a1 + 9) + 16LL) = *((_QWORD *)a1 + 4);
      v7 = *((_QWORD *)a1 + 8);
      v8 = *((_QWORD *)a1 + 9) - 24LL;
      v9 = *((_QWORD *)a1 + 9);
      v10 = v8 & ((unsigned __int128)-(__int128)v9 >> 64);
      DWORD2(v15) = *(_DWORD *)(v10 + 0x38);
      HIDWORD(v15) = *(_DWORD *)(v10 + 0x3C);
      if ( v7 )
      {
        if ( (*(_DWORD *)((v8 & ((unsigned __int128)-(__int128)v9 >> 64)) + 0x70) & 0x400) != 0 )
          (*((void (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, _QWORD, __int128 *, struct DHPDEV__ *))a1 + 118))(
            (v10 + 24) & -(__int64)(v10 != 0),
            v7,
            &v18,
            0LL,
            &v15,
            a1 + 4);
        else
          ((void (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, _QWORD, __int128 *, struct DHPDEV__ *))EngCopyBits)(
            (v10 + 24) & -(__int64)(v10 != 0),
            v7,
            &v18,
            0LL,
            &v15,
            a1 + 4);
      }
    }
    v11 = *((_QWORD *)a1 + 10);
    *((_DWORD *)a1 + 26) = 0;
    v12 = v11;
    RGNOBJ::vSet((RGNOBJ *)&v12);
  }
  if ( v6 )
    EngReleaseSemaphore(v6);
  if ( (_QWORD)v16 )
    MULTIPANSURFLOCK::vUnLockBmp1AndRemovePunt((MULTIPANSURFLOCK *)&v16);
  if ( v17 )
    PANSURFLOCK::vUnLockShadow((PANSURFLOCK *)&v16);
}
