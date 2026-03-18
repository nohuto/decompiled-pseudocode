/*
 * XREFs of OffBitBlt @ 0x140180CC4
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14004F4C0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140053DDC (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14005474C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140056810 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400DE040 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032A050 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x14032CDFC (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall OffBitBlt(
        __int64 (__fastcall *a1)(__int64, __int64, __int64, __int64, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int),
        LONG *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        __int64 *a10,
        __int64 a11,
        __int64 a12,
        __int64 *a13,
        int a14)
{
  __int64 v15; // r11
  __int64 v16; // r9
  __int64 (__fastcall *v17)(__int64, __int64, __int64, __int64, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int); // r10
  __int64 *v18; // r15
  __int64 *v19; // r14
  LONG v20; // esi
  LONG v21; // edi
  __int64 v22; // r8
  int v23; // ecx
  LONG v24; // edi
  LONG v25; // esi
  unsigned int v26; // r14d
  struct _POINTL v28; // [rsp+60h] [rbp-71h] BYREF
  __int64 v29; // [rsp+68h] [rbp-69h] BYREF
  __int64 v30; // [rsp+70h] [rbp-61h] BYREF
  __int64 (__fastcall *v31)(__int64, __int64, __int64, __int64, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int); // [rsp+78h] [rbp-59h]
  __int64 v32; // [rsp+80h] [rbp-51h]
  __int64 v33; // [rsp+88h] [rbp-49h]
  __int64 v34; // [rsp+90h] [rbp-41h]
  __int64 v35; // [rsp+98h] [rbp-39h]
  __int64 v36; // [rsp+A0h] [rbp-31h]
  __int64 v37; // [rsp+A8h] [rbp-29h]
  _DWORD v38[4]; // [rsp+B0h] [rbp-21h] BYREF

  v15 = a3;
  v16 = a8;
  v17 = a1;
  v18 = a10;
  v19 = a13;
  v20 = *a2;
  v21 = a2[1];
  v37 = a5;
  v36 = a11;
  v32 = a3;
  v22 = a6;
  v35 = a12;
  v31 = a1;
  v33 = a6;
  v34 = a8;
  if ( a7 && (v20 || v21) )
  {
    *(_DWORD *)(a7 + 4) += v20;
    *(_DWORD *)(a7 + 12) += v20;
    *(_DWORD *)(a7 + 8) += v21;
    *(_DWORD *)(a7 + 16) += v21;
    if ( *(_BYTE *)(a7 + 20) )
    {
      v28.x = v20;
      v28.y = v21;
      RGNOBJ::bOffset((RGNOBJ *)(a7 + 56), &v28);
      v17 = v31;
      v15 = v32;
      v22 = v33;
      v16 = v34;
    }
  }
  v23 = *a9;
  v29 = 0LL;
  v38[0] = v20 + v23;
  v38[2] = v20 + a9[2];
  v38[1] = v21 + a9[1];
  v38[3] = v21 + a9[3];
  if ( a10 )
  {
    LODWORD(v29) = *(_DWORD *)a10 + *a4;
    v18 = &v29;
    HIDWORD(v29) = a4[1] + *((_DWORD *)a10 + 1);
  }
  v30 = 0LL;
  if ( a13 )
  {
    LODWORD(v30) = v20 + *(_DWORD *)a13;
    v19 = &v30;
    HIDWORD(v30) = v21 + *((_DWORD *)a13 + 1);
  }
  v24 = -v21;
  v25 = -v20;
  v26 = v17(v15, v37, v22, a7, v16, v38, v18, v36, v35, v19, a14);
  if ( a7 && (v25 || v24) )
  {
    *(_DWORD *)(a7 + 4) += v25;
    *(_DWORD *)(a7 + 12) += v25;
    *(_DWORD *)(a7 + 8) += v24;
    *(_DWORD *)(a7 + 16) += v24;
    if ( *(_BYTE *)(a7 + 20) )
    {
      v28.x = v25;
      v28.y = v24;
      RGNOBJ::bOffset((RGNOBJ *)(a7 + 56), &v28);
    }
  }
  return v26;
}
