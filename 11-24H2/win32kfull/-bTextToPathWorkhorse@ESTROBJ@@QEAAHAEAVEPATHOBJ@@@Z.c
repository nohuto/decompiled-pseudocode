/*
 * XREFs of ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400AB334
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400AA4FC (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400AA6EC (-bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400AA738 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 * Callees:
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400AB9EC (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     STROBJ_bEnum @ 0x1400ABA30 (STROBJ_bEnum.c)
 */

__int64 __fastcall ESTROBJ::bTextToPathWorkhorse(STROBJ *pstro, struct EPATHOBJ *a2)
{
  unsigned int v2; // ebx
  _DWORD *p_pwszOrg; // r13
  STROBJ *v4; // r15
  PGLYPHPOS v5; // rsi
  ULONG ulCharInc; // r14d
  int v7; // r14d
  ULONG v8; // edi
  ULONG GlyphData; // r12d
  ULONG v10; // r13d
  _DWORD *v11; // r15
  FIX v12; // ecx
  FIX v13; // edx
  bool v14; // zf
  FIX x; // ecx
  FIX y; // edx
  BOOL v18; // [rsp+20h] [rbp-28h]
  struct _POINTFIX v19; // [rsp+28h] [rbp-20h] BYREF
  PGLYPHPOS ppgpos; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v21; // [rsp+38h] [rbp-10h]
  ULONG pc; // [rsp+A0h] [rbp+58h] BYREF
  ULONG v25; // [rsp+A8h] [rbp+60h]

  v2 = 0;
  p_pwszOrg = &pstro[4].pwszOrg;
  pc = 0;
  v19 = 0LL;
  v4 = pstro;
  ppgpos = 0LL;
  *(_QWORD *)&pstro[1].cGlyphs = 0LL;
  do
  {
    v21 = p_pwszOrg;
    v18 = STROBJ_bEnum(v4, &pc, &ppgpos);
    if ( !pc )
      break;
    v5 = ppgpos;
    if ( !ppgpos )
      break;
    ulCharInc = v4->ulCharInc;
    if ( ulCharInc )
    {
      v14 = (*p_pwszOrg & 0x100) == 0;
      x = ppgpos->ptl.x;
      v19.x = x;
      y = ppgpos->ptl.y;
      v19.y = y;
      if ( v14 )
      {
        v19.y = 16 * y;
        v19.x = 16 * x;
      }
      v7 = 16 * ulCharInc;
      v19.x -= v7;
    }
    else
    {
      v7 = 0;
    }
    v8 = pc;
    GlyphData = pc;
    v25 = pc;
    do
    {
      if ( (*p_pwszOrg & 2) == 0 )
      {
        GlyphData = RFONTOBJ::cGetGlyphData(*(RFONTOBJ **)&v4[1].ulCharInc, v8, v5);
        if ( !GlyphData )
          break;
      }
      v10 = 0;
      if ( GlyphData )
      {
        v11 = v21;
        do
        {
          if ( v7 )
          {
            v19.x += v7;
          }
          else
          {
            v14 = (*v11 & 0x100) == 0;
            v12 = v5->ptl.x;
            v19.x = v12;
            v13 = v5->ptl.y;
            v19.y = v13;
            if ( v14 )
            {
              v19.y = 16 * v13;
              v19.x = 16 * v12;
            }
          }
          if ( !EPATHOBJ::bAppend(a2, (const struct EPATHOBJ *)v5->pgdf->pgb, &v19) )
            break;
          ++v10;
          ++v5;
        }
        while ( v10 < GlyphData );
        v8 = v25;
        v4 = pstro;
        ppgpos = v5;
        if ( v10 < GlyphData )
        {
          p_pwszOrg = v21;
          break;
        }
      }
      p_pwszOrg = v21;
      v8 -= GlyphData;
      v25 = v8;
    }
    while ( v8 );
    v14 = v8 == 0;
    if ( v8 )
      goto LABEL_20;
  }
  while ( v18 );
  v14 = 1;
LABEL_20:
  LOBYTE(v2) = v14;
  return v2;
}
