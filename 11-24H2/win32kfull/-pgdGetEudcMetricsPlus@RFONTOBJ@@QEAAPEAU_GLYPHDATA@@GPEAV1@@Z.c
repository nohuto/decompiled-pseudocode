/*
 * XREFs of ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400AD4E8
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x14005C3DC (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400AF620 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 * Callees:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400ACD2C (xInsertMetricsPlusRFONTOBJ.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400AF180 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400AFDC4 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1400C1FD8 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::pgdGetEudcMetricsPlus(RFONTOBJ *this, struct RFONTOBJ *a2, struct RFONTOBJ *a3)
{
  int v4; // r14d
  __int64 v5; // rsi
  struct GPRUN *v6; // rbx
  __int64 v7; // r8
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *result; // rax
  __int64 v10; // rbp
  struct _GLYPHDATA **v11; // r15

  v4 = (unsigned __int16)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
    return 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  if ( !*(_DWORD *)v5 )
    return RFONTOBJ::pgdDefault(this);
  v6 = (struct GPRUN *)(v5 + 16);
  v7 = (unsigned int)(v4 - *(_DWORD *)(v5 + 16));
  if ( (unsigned int)v7 < *(_DWORD *)(v5 + 20) )
  {
    result = *(struct _GLYPHDATA **)(*(_QWORD *)(v5 + 24) + 8 * v7);
  }
  else
  {
    Run = RFONTOBJ::gprunFindRun(this, v4);
    v6 = Run;
    v7 = (unsigned int)(v4 - *(_DWORD *)Run);
    if ( (unsigned int)v7 >= *((_DWORD *)Run + 1) )
      return 0LL;
    result = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v7);
  }
  if ( !result )
  {
    v10 = (unsigned int)v7;
    v11 = (struct _GLYPHDATA **)(*((_QWORD *)v6 + 1) + 8 * v7);
    if ( (v5 || (unsigned int)RFONTOBJ::bAllocateCache(this, a2))
      && (unsigned int)xInsertMetricsPlusRFONTOBJ(this, v11, v4) )
    {
      return *(struct _GLYPHDATA **)(*((_QWORD *)v6 + 1) + 8 * v10);
    }
    return 0LL;
  }
  return result;
}
