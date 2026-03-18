/*
 * XREFs of ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C015BD30
 * Callers:
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C02B371C (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C02B5588 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00773D8 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C00C84D4 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C010FD30 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C02B45A4 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::pgdGetEudcMetricsPlus(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct RFONTOBJ *a3,
        __int64 a4)
{
  int v5; // esi
  _DWORD *v6; // rbx
  struct _GLYPHDATA *result; // rax
  struct GPRUN *v8; // rbx
  __int64 v9; // r8
  struct GPRUN *Run; // rax
  __int64 v11; // rbp

  v5 = (unsigned __int16)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2, (__int64)a3, a4) )
    return 0LL;
  v6 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  if ( !*v6 )
    return RFONTOBJ::pgdDefault(this);
  v8 = (struct GPRUN *)(v6 + 4);
  v9 = (unsigned int)(v5 - *(_DWORD *)v8);
  if ( (unsigned int)v9 >= *((_DWORD *)v8 + 1) )
  {
    Run = RFONTOBJ::gprunFindRun(this, v5);
    v8 = Run;
    v9 = (unsigned int)(v5 - *(_DWORD *)Run);
    if ( (unsigned int)v9 < *((_DWORD *)Run + 1) )
    {
      result = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v9);
      goto LABEL_9;
    }
    return 0LL;
  }
  result = *(struct _GLYPHDATA **)(*((_QWORD *)v8 + 1) + 8 * v9);
LABEL_9:
  if ( result )
    return result;
  v11 = (unsigned int)v9;
  if ( !(unsigned int)RFONTOBJ::bInsertMetricsPlus(
                        this,
                        (struct _GLYPHDATA **)(*((_QWORD *)v8 + 1) + 8 * v9),
                        (unsigned __int16)v5,
                        a4) )
    return 0LL;
  return *(struct _GLYPHDATA **)(*((_QWORD *)v8 + 1) + 8 * v11);
}
