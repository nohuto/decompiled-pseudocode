/*
 * XREFs of bOutOfBounds @ 0x1400AAFC8
 * Callers:
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400AA738 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 * Callees:
 *     STROBJ_bEnum @ 0x1400ABA30 (STROBJ_bEnum.c)
 */

__int64 __fastcall bOutOfBounds(STROBJ *pstro, __int64 a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  BOOL v5; // ebp
  __int64 i; // rdx
  GLYPHBITS *pgb; // r8
  LONG v8; // ecx
  LONG v9; // r9d
  ULONG pc; // [rsp+38h] [rbp+10h] BYREF
  PGLYPHPOS ppgpos; // [rsp+40h] [rbp+18h] BYREF

  pc = 0;
  v2 = 0;
  ppgpos = 0LL;
  if ( *(float *)(*(_QWORD *)a2 + 140LL) == 0.0 && *(float *)(*(_QWORD *)a2 + 144LL) == 0.0 )
    return 0LL;
  do
  {
    v5 = STROBJ_bEnum(pstro, &pc, &ppgpos);
    if ( pc )
    {
      for ( i = 0LL; (unsigned int)i < pc; i = (unsigned int)(i + 1) )
      {
        pgb = ppgpos[i].pgdf->pgb;
        if ( pgb )
        {
          v8 = pgb->ptlOrigin.x + ppgpos[i].ptl.x;
          v9 = ppgpos[i].ptl.y + pgb->ptlOrigin.y;
          if ( v8 < pstro->rclBkGround.left
            || pgb->sizlBitmap.cx + v8 > pstro->rclBkGround.right
            || v9 < pstro->rclBkGround.top
            || v9 + pgb->sizlBitmap.cy > pstro->rclBkGround.bottom )
          {
            v2 = 1;
            break;
          }
        }
      }
    }
  }
  while ( v5 );
  pstro[1].cGlyphs = 0;
  result = v2;
  pstro[1].flAccel = 0;
  return result;
}
