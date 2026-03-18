/*
 * XREFs of ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400AF180
 * Callers:
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400AD4E8 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1400AE350 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400AE8F0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400AEEE0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400AF42C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400AF620 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B04DC (-GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400C1F00 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

struct GPRUN *__fastcall RFONTOBJ::gprunFindRun(RFONTOBJ *this, unsigned __int16 a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // r8d
  _DWORD *v4; // rcx
  int v5; // r9d
  _DWORD *v6; // rbx
  struct GPRUN *v7; // rdx
  struct GPRUN *result; // rax
  __int64 v9; // rdx
  int v10; // r11d
  int v11; // ecx
  int v12; // r10d
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  int v26; // edx
  int v27; // eax
  int v28; // eax

  v2 = *(_DWORD **)this;
  v3 = a2;
  v4 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  v5 = v2[151];
  v6 = v4 + 4;
  if ( !v5 )
  {
    v7 = (struct GPRUN *)&v4[4 * (*v4 - 1) + 4];
    if ( v3 <= *(_DWORD *)v7 + *((_DWORD *)v7 + 1) - 1 )
    {
      for ( result = (struct GPRUN *)(v4 + 4); result <= v7; result = (struct GPRUN *)((char *)result + 16) )
      {
        if ( v3 - *(_DWORD *)result < *((_DWORD *)result + 1) )
          return result;
      }
    }
    return (struct GPRUN *)(v4 + 4);
  }
  if ( (unsigned int)a2 < *v6 )
    return (struct GPRUN *)(v4 + 4);
  v9 = (int)v2[152];
  v10 = -1;
  v11 = v2[153];
  v12 = v2[152];
  if ( v11 != 9 )
  {
    if ( v11 != 13 )
    {
      switch ( v11 )
      {
        case 1:
          goto LABEL_66;
        case 2:
          goto LABEL_61;
        case 3:
          goto LABEL_56;
        case 4:
          goto LABEL_51;
        case 5:
          goto LABEL_46;
        case 6:
          goto LABEL_42;
        case 7:
          goto LABEL_37;
        case 8:
          goto LABEL_33;
        case 10:
          goto LABEL_24;
        case 11:
          goto LABEL_20;
        case 12:
          goto LABEL_16;
        case 14:
          goto LABEL_82;
        case 15:
          goto LABEL_78;
        case 16:
          v25 = 2 * v9;
          v26 = 0x4000;
          if ( v3 < v6[2 * v25] )
            v26 = -16384;
          LODWORD(v9) = v12 + v26;
LABEL_78:
          if ( (int)v9 > v5 || (v27 = 0x2000, v3 < v6[4 * (int)v9]) )
            v27 = -8192;
          LODWORD(v9) = v27 + v9;
LABEL_82:
          if ( (int)v9 > v5 || (v28 = 4096, v3 < v6[4 * (int)v9]) )
            v28 = -4096;
          LODWORD(v9) = v28 + v9;
          break;
        default:
          goto LABEL_70;
      }
    }
    if ( (int)v9 > v5 || (v13 = 2048, v3 < v6[4 * (int)v9]) )
      v13 = -2048;
    LODWORD(v9) = v13 + v9;
LABEL_16:
    if ( (int)v9 > v5 || (v14 = 1024, v3 < v6[4 * (int)v9]) )
      v14 = -1024;
    LODWORD(v9) = v14 + v9;
LABEL_20:
    if ( (int)v9 > v5 || (v15 = 512, v3 < v6[4 * (int)v9]) )
      v15 = -512;
    LODWORD(v9) = v15 + v9;
LABEL_24:
    if ( (int)v9 > v5 || (v16 = 256, v3 < v6[4 * (int)v9]) )
      v16 = -256;
    LODWORD(v9) = v16 + v9;
  }
  if ( (int)v9 > v5 || v3 < v6[4 * (int)v9] )
    v17 = -128;
  else
    v17 = 128;
  LODWORD(v9) = v17 + v9;
LABEL_33:
  if ( (int)v9 > v5 || (v18 = 64, v3 < v6[4 * (int)v9]) )
    v18 = -64;
  LODWORD(v9) = v18 + v9;
LABEL_37:
  if ( (int)v9 > v5 || v3 < v6[4 * (int)v9] )
    v19 = -32;
  else
    v19 = 32;
  LODWORD(v9) = v19 + v9;
LABEL_42:
  if ( (int)v9 <= v5 && v3 >= v6[4 * (int)v9] )
    v20 = 16;
  else
    v20 = -16;
  LODWORD(v9) = v20 + v9;
LABEL_46:
  if ( (int)v9 > v5 || v3 < v6[4 * (int)v9] )
    v21 = -8;
  else
    v21 = 8;
  LODWORD(v9) = v21 + v9;
LABEL_51:
  if ( (int)v9 > v5 || v3 < v6[4 * (int)v9] )
    v22 = -4;
  else
    v22 = 4;
  LODWORD(v9) = v22 + v9;
LABEL_56:
  if ( (int)v9 > v5 || v3 < v6[4 * (int)v9] )
    v23 = -2;
  else
    v23 = 2;
  LODWORD(v9) = v23 + v9;
LABEL_61:
  if ( (int)v9 > v5 || v3 < v6[4 * (int)v9] )
    v24 = -1;
  else
    v24 = 1;
  LODWORD(v9) = v24 + v9;
LABEL_66:
  if ( (int)v9 <= v5 && v3 >= v6[4 * (int)v9] )
    v10 = 0;
  LODWORD(v9) = v10 + v9;
LABEL_70:
  result = (struct GPRUN *)&v6[4 * (int)v9];
  if ( v3 - *(_DWORD *)result >= *((_DWORD *)result + 1) )
    return (struct GPRUN *)v6;
  return result;
}
