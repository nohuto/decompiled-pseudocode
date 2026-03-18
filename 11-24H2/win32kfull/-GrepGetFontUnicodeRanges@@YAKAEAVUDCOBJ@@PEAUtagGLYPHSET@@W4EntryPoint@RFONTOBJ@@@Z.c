/*
 * XREFs of ?GrepGetFontUnicodeRanges@@YAKAEAVUDCOBJ@@PEAUtagGLYPHSET@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401BD138
 * Callers:
 *     NtGdiGetFontUnicodeRanges @ 0x14025FEE0 (NtGdiGetFontUnicodeRanges.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DB50 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1400FF8C8 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1400FFA30 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 */

__int64 __fastcall GrepGetFontUnicodeRanges(struct UDCOBJ *a1, int *a2)
{
  __int64 v2; // rax
  ULONG v3; // ebx
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _FD_GLYPHSET *v8; // rax
  __int64 v9; // rdx
  __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(_QWORD *)a1;
  v3 = 0;
  LODWORD(v13) = 13;
  v5 = 0;
  HIDWORD(v13) = *(unsigned __int16 *)(v2 + 12);
  v12 = 0LL;
  RFONTOBJ::vInit((RFONTOBJ *)&v12, a1, 0, 2u, (const struct RFONTOBJ::Tag *)&v13);
  if ( !v12 )
  {
LABEL_5:
    v3 = v5;
    goto LABEL_6;
  }
  v13 = *(__int64 **)(v12 + 120);
  v8 = PFEOBJ::pfdg(&v13, v6, v7);
  if ( v8 )
  {
    v5 = 4 * v8->cRuns + 16;
    if ( a2 )
    {
      if ( *a2 == v5 )
      {
        *a2 = v5;
        a2[2] = v8->cGlyphsSupported;
        a2[3] = v8->cRuns;
        a2[1] = 0;
        if ( (v8->flAccel & 2) != 0 )
          a2[1] = 1;
        if ( v8->cRuns )
        {
          do
          {
            v9 = v3;
            v11 = v3++;
            v11 *= 2LL;
            LOWORD(a2[v9 + 4]) = *(&v8->awcrun[0].wcLow + 4 * v11);
            HIWORD(a2[v9 + 4]) = *(&v8->awcrun[0].cGlyphs + 4 * v11);
          }
          while ( v3 < v8->cRuns );
        }
      }
      else
      {
        v5 = 0;
      }
    }
    PFEOBJ::vFreepfdg(&v13, v9, (__int64)v8);
    goto LABEL_5;
  }
LABEL_6:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
  return v3;
}
