/*
 * XREFs of ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400B1B20
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400ACD2C (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertMetricsRFONTOBJ @ 0x1400B0180 (xInsertMetricsRFONTOBJ.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B0B2C (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1400B2128 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x140126B60 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?GrepGetGlyphIndicesW@@YA?AV?$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@@@Z @ 0x14018C724 (-GrepGetGlyphIndicesW@@YA-AV-$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z @ 0x14025998C (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14025A468 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x140325F00 (-DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x14002B4D0 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1400FF8C8 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1400FFA30 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z @ 0x1401972BC (-bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z.c)
 */

void __fastcall RFONTOBJ::vXlatGlyphArray(
        RFONTOBJ *this,
        unsigned __int16 *a2,
        int a3,
        unsigned int *a4,
        unsigned int a5,
        int a6)
{
  __int64 v6; // r10
  int v8; // r9d
  RFONTOBJ *v10; // r8
  struct _FD_GLYPHSET *v12; // rbx
  int v13; // ecx
  RFONTOBJ *v14; // r10
  ULONG cRuns; // edx
  int v16; // edx
  unsigned __int16 *p_wcLow; // r14
  unsigned int v18; // r12d
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r13
  int v23; // r9d
  int v24; // eax
  __int64 v25; // r8
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  unsigned __int16 *v34; // r8
  int v35; // ecx
  __int64 v36; // r8
  unsigned __int16 v37; // cx
  int v38; // eax
  int v39; // ecx
  __int64 v40; // rdx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  struct _FD_GLYPHSET *v47; // rax
  int v48; // ecx
  int v49; // [rsp+20h] [rbp-48h]
  RFONTOBJ *v50; // [rsp+28h] [rbp-40h]
  __int64 v51; // [rsp+30h] [rbp-38h] BYREF
  RFONTOBJ *v52; // [rsp+70h] [rbp+8h] BYREF

  v52 = this;
  v6 = *(_QWORD *)this;
  v8 = 0;
  v10 = this;
  v49 = 0;
  v12 = *(struct _FD_GLYPHSET **)(*(_QWORD *)this + 472LL);
  v50 = 0LL;
  v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 8LL);
  if ( a6 && v13 && (v13 & 1) == 0 )
  {
    v14 = *(RFONTOBJ **)(*(_QWORD *)(v6 + 128) + 8LL * ((v13 - 1) & 0xFFFFFFFE) + 224);
    v50 = v14;
    v51 = (__int64)v14;
    if ( v14 )
    {
      v47 = PFEOBJ::pfdg((PFEOBJ *)&v51);
      v10 = v52;
      v14 = v50;
      if ( v47 )
      {
        v8 = 1;
        v12 = v47;
        v49 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  else
  {
    v14 = 0LL;
  }
  cRuns = v12->cRuns;
  if ( !cRuns )
  {
    for ( ; a3; --a3 )
      *a4++ = *(_DWORD *)(*(_QWORD *)v10 + 456LL);
    return;
  }
  v16 = cRuns - 1;
  p_wcLow = &v12->awcrun[0].wcLow;
  if ( a5 == 1 )
    v18 = -1;
  else
    v18 = *(_DWORD *)(*(_QWORD *)v10 + 456LL);
  v19 = 0xFFFF;
  if ( v16 > 0xFFFF )
  {
    v20 = 0xFFFFLL;
    v51 = 0xFFFFLL;
    goto LABEL_12;
  }
  v20 = v16;
  v19 = v16;
  v51 = v16;
  if ( (v16 & 0xF000) != 0 )
  {
LABEL_12:
    v21 = (unsigned int)acBits[(unsigned __int8)(v20 >> 12)] + 12;
    goto LABEL_13;
  }
  if ( (v16 & 0xF00) != 0 )
  {
    v21 = (unsigned int)acBits[BYTE1(v16)] + 8;
  }
  else if ( (v16 & 0xF0) != 0 )
  {
    v21 = (unsigned int)acBits[(unsigned __int8)((__int64)v16 >> 4)] + 4;
  }
  else
  {
    v21 = acBits[v16];
  }
LABEL_13:
  v22 = *((int *)&aiStart + v21);
  if ( !a3 )
    goto LABEL_95;
LABEL_14:
  while ( 1 )
  {
    v23 = *a2;
    if ( (unsigned __int16)v23 < *p_wcLow )
      break;
    v24 = v22;
    v25 = v22;
    if ( (_DWORD)v21 == 8 )
      goto LABEL_16;
    if ( (_DWORD)v21 == 13 )
    {
LABEL_71:
      if ( v24 > v19 || (unsigned __int16)v23 < p_wcLow[8 * v24] )
        v42 = -2048;
      else
        v42 = 2048;
      v24 += v42;
LABEL_75:
      if ( v24 > v19 || (unsigned __int16)v23 < p_wcLow[8 * v24] )
        v43 = -1024;
      else
        v43 = 1024;
      v24 += v43;
LABEL_78:
      if ( v24 > v19 || (unsigned __int16)v23 < p_wcLow[8 * v24] )
        v44 = -512;
      else
        v44 = 512;
      v24 += v44;
LABEL_81:
      if ( v24 > v19 || (unsigned __int16)v23 < p_wcLow[8 * v24] )
        v45 = -256;
      else
        v45 = 256;
      v24 += v45;
LABEL_84:
      if ( v24 > v19 || (unsigned __int16)v23 < p_wcLow[8 * v24] )
        v46 = -128;
      else
        v46 = 128;
      v24 += v46;
LABEL_16:
      if ( v24 > v19 || (v26 = 64, (unsigned __int16)v23 < p_wcLow[8 * v24]) )
        v26 = -64;
      v24 += v26;
LABEL_20:
      if ( v24 > v19 || (v27 = 32, (unsigned __int16)v23 < p_wcLow[8 * v24]) )
        v27 = -32;
      v24 += v27;
LABEL_24:
      if ( v24 > v19 || (v28 = 16, (unsigned __int16)v23 < p_wcLow[8 * v24]) )
        v28 = -16;
      v24 += v28;
LABEL_28:
      if ( v24 > v19 || (v29 = 8, (unsigned __int16)v23 < p_wcLow[8 * v24]) )
        v29 = -8;
      v24 += v29;
LABEL_32:
      if ( v24 > v19 || (v30 = 4, (unsigned __int16)v23 < p_wcLow[8 * v24]) )
        v30 = -4;
      v24 += v30;
LABEL_36:
      if ( v24 > v19 || (v31 = 2, (unsigned __int16)v23 < p_wcLow[8 * v24]) )
        v31 = -2;
      v24 += v31;
      goto LABEL_40;
    }
    if ( (_DWORD)v21 != 2 )
    {
      switch ( (int)v21 )
      {
        case 1:
          goto LABEL_45;
        case 3:
          goto LABEL_36;
        case 4:
          goto LABEL_32;
        case 5:
          goto LABEL_28;
        case 6:
          goto LABEL_24;
        case 7:
          goto LABEL_20;
        case 9:
          goto LABEL_84;
        case 10:
          goto LABEL_81;
        case 11:
          goto LABEL_78;
        case 12:
          goto LABEL_75;
        case 14:
          goto LABEL_67;
        case 15:
          goto LABEL_63;
        case 16:
          v36 = 0x4000LL;
          v37 = p_wcLow[8 * v22];
          v38 = 0x4000;
          if ( (unsigned __int16)v23 < v37 )
            v38 = -16384;
          v24 = v22 + v38;
          if ( (unsigned __int16)v23 < v37 )
            v36 = -16384LL;
          v25 = v22 + v36;
LABEL_63:
          if ( v25 > v51 || (unsigned __int16)v23 < p_wcLow[8 * v25] )
          {
            v39 = -8192;
            v40 = -8192LL;
          }
          else
          {
            v39 = 0x2000;
            v40 = 0x2000LL;
          }
          v24 += v39;
          v25 += v40;
LABEL_67:
          if ( v25 > v51 || (unsigned __int16)v23 < p_wcLow[8 * v25] )
            v41 = -4096;
          else
            v41 = 4096;
          v24 += v41;
          goto LABEL_71;
        default:
          goto LABEL_49;
      }
    }
LABEL_40:
    if ( v24 > v19 || (unsigned __int16)v23 < p_wcLow[8 * v24] )
      v32 = -1;
    else
      v32 = 1;
    v24 += v32;
LABEL_45:
    if ( v24 <= v19 && (unsigned __int16)v23 >= p_wcLow[8 * v24] )
      v33 = 0;
    else
      v33 = -1;
    v24 += v33;
LABEL_49:
    v34 = &p_wcLow[8 * v24];
    v35 = v23 - *v34;
    if ( v35 < v34[1] )
    {
      if ( *((_QWORD *)v34 + 1) )
      {
        while ( 1 )
        {
          ++a2;
          *a4++ = *(_DWORD *)(*((_QWORD *)v34 + 1) + 4LL * v35);
          if ( !--a3 )
            break;
          v35 = *a2 - *v34;
          if ( v35 < 0 || v35 >= v34[1] )
            goto LABEL_14;
        }
      }
      else
      {
        while ( 1 )
        {
          ++a2;
          *a4++ = (unsigned __int16)v23;
          if ( !--a3 )
            break;
          v48 = *a2 - *v34;
          if ( v48 >= 0 )
          {
            LOWORD(v23) = *a2;
            if ( v48 < v34[1] )
              continue;
          }
          goto LABEL_14;
        }
      }
      goto LABEL_94;
    }
    if ( a5 == 2
      || (unsigned int)RFONTOBJ::bIsLinkedGlyph(v52, (unsigned __int16)v23, (__int64)v34)
      || (unsigned int)RFONTOBJ::bIsSystemTTGlyph(v52, *a2) )
    {
      *(_DWORD *)(*(_QWORD *)v52 + 720LL) |= 0x40u;
    }
    *a4 = v18;
    ++a2;
    ++a4;
    if ( !--a3 )
      goto LABEL_94;
  }
  while ( 1 )
  {
    *a4 = v18;
    ++a2;
    ++a4;
    if ( !--a3 )
      break;
    if ( *a2 >= *p_wcLow )
      goto LABEL_14;
  }
LABEL_94:
  v8 = v49;
  v14 = v50;
LABEL_95:
  if ( v8 )
  {
    v52 = v14;
    PFEOBJ::vFreepfdg((PFEOBJ *)&v52);
  }
}
