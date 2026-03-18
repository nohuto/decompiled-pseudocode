/*
 * XREFs of ?vSetElementsLToFx@EXFORMOBJ@@QEAAXMMMM@Z @ 0x1400C1D74
 * Callers:
 *     ??0RESETFCOBJ@@QEAA@AEAVUDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1400B1490 (--0RESETFCOBJ@@QEAA@AEAVUDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1400C17BC (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVUDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1400C19C4 (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVUDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1400C1D00 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EXFORMOBJ::vSetElementsLToFx(EXFORMOBJ *this, float a2, float a3, float a4, float a5)
{
  **(float **)this = a2;
  *(float *)(*(_QWORD *)this + 4LL) = a3;
  *(float *)(*(_QWORD *)this + 8LL) = a4;
  *(float *)(*(_QWORD *)this + 12LL) = a5;
  **(float **)this = **(float **)this * 16.0;
  *(float *)(*(_QWORD *)this + 4LL) = *(float *)(*(_QWORD *)this + 4LL) * 16.0;
  *(float *)(*(_QWORD *)this + 8LL) = *(float *)(*(_QWORD *)this + 8LL) * 16.0;
  *(float *)(*(_QWORD *)this + 12LL) = *(float *)(*(_QWORD *)this + 12LL) * 16.0;
}
