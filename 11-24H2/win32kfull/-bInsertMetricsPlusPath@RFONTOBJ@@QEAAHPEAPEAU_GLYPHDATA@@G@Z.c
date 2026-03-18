/*
 * XREFs of ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x140126B60
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400ACD2C (xInsertMetricsPlusRFONTOBJ.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400AFDC4 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400B03C4 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400B1B20 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x140126220 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x140128C48 (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall RFONTOBJ::bInsertMetricsPlusPath(RFONTOBJ *this, struct _GLYPHDATA **a2, unsigned __int16 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  unsigned int v7; // r14d
  __int64 result; // rax
  __int64 v9; // r8
  struct _GLYPHDATA *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r15d
  EPATHFONTOBJ *v13; // rax
  EPATHFONTOBJ *v14; // rsi
  EPATHOBJ *v15; // rcx
  unsigned __int16 v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  struct _GLYPHDATA v21; // [rsp+E0h] [rbp-20h] BYREF

  v3 = *(_QWORD *)this;
  v4 = a3;
  if ( *(_QWORD *)(*(_QWORD *)this + 480LL)
    || (result = RFONTOBJ::bAllocateCache(this, (struct RFONTOBJ *)a2), (_DWORD)result) )
  {
    v7 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 2) != 0 )
    {
      v16 = v4;
      v17 = 0;
      RFONTOBJ::vXlatGlyphArray(this, &v16, 1, &v17, 0, 0);
      v4 = v17;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v19);
    if ( !v20 )
      goto LABEL_5;
    memset_0(&v21, 0, sizeof(v21));
    v9 = *(_QWORD *)this;
    v18 = *(_QWORD *)(*(_QWORD *)this + 128LL);
    v10 = &v21;
    if ( !*(_DWORD *)(v9 + 648) )
      v10 = *(struct _GLYPHDATA **)(v3 + 512);
    if ( (unsigned int)PFFOBJ::QueryFontData(
                         (PFFOBJ *)&v18,
                         *(struct DHPDEV__ **)(v9 + 112),
                         (struct _FONTOBJ *)v9,
                         2u,
                         v4,
                         v10,
                         v19,
                         0) == -1 )
    {
LABEL_5:
      v7 = 0;
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 648LL) )
      {
        v11 = *(_QWORD *)(v3 + 512);
        *(_OWORD *)v11 = *(_OWORD *)&v21.gdf.pgb;
        *(_QWORD *)(v11 + 16) = *(_QWORD *)&v21.fxA;
      }
      v12 = EPATHOBJ::cjSize((EPATHOBJ *)v19) + 424;
      v13 = (EPATHFONTOBJ *)RFONTOBJ::pgbCheckGlyphCache(this, v12);
      v14 = v13;
      if ( v13 )
      {
        EPATHFONTOBJ::vInit(v13, v12);
        EPATHOBJ::bClone(v15, (const struct EPATHOBJ *)v19);
        **(_QWORD **)(v3 + 512) = v14;
      }
      else
      {
        **(_QWORD **)(v3 + 512) = 0LL;
      }
      *a2 = *(struct _GLYPHDATA **)(v3 + 512);
      *(_QWORD *)(v3 + 512) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 648LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
      if ( v14 )
        *(_QWORD *)(v3 + 584) += v12;
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v19);
    return v7;
  }
  return result;
}
