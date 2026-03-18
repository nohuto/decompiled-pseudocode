/*
 * XREFs of ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1400FA64C
 * Callers:
 *     ?vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z @ 0x1400F9A00 (-vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z.c)
 *     cjCopyFontDataW @ 0x1400F9D58 (cjCopyFontDataW.c)
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1400FF0B8 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     vIFIMetricsToLogFontW @ 0x14030385C (vIFIMetricsToLogFontW.c)
 * Callees:
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1400ECA58 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 */

__int64 __fastcall IFIOBJ::lfOrientation(IFIOBJ *this)
{
  int v1; // r9d
  int v2; // r10d
  int v3; // r8d
  double v5; // xmm0_8
  int v6; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  float v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(*(_QWORD *)this + 120LL);
  v2 = *(_DWORD *)(*(_QWORD *)this + 124LL);
  v3 = (v1 > 0) - ((unsigned int)v1 >> 31);
  if ( (((unsigned __int8)v3 ^ (unsigned __int8)((v2 > 0) - (v2 < 0))) & 1) != 0 )
    return v3 & 0x708 | ((v2 > 0) - ((unsigned int)v2 >> 31)) & 0xA8C | (((unsigned int)v2 >> 31) - (v2 > 0)) & 0x384;
  v7 = 0;
  v8 = 0.0;
  vArctan(
    _mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)v1)),
    _mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)v2)),
    &v8,
    &v7);
  *(_QWORD *)&v5 = LODWORD(v8);
  *(float *)&v5 = v8 * 10.0;
  v6 = bFToL(v5, &v7, 6u);
  return v7 & (unsigned int)-(v6 != 0);
}
