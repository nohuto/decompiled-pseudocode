/*
 * XREFs of ?bSupportsClearTypeAlways@PDEVOBJ@@SA_NP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z@Z @ 0x1400AB10C
 * Callers:
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400AA738 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 * Callees:
 *     <none>
 */

bool __fastcall PDEVOBJ::bSupportsClearTypeAlways(
        __int64 (__fastcall *a1)(struct _SURFOBJ *a1, STROBJ *pstro, struct _FONTOBJ *a3, struct _CLIPOBJ *a4, struct _RECTL *a5, struct _RECTL *a6, struct _BRUSHOBJ *a7, struct _BRUSHOBJ *a8, struct _POINTL *a9, MIX mix))
{
  return a1 == SpTextOut || a1 == MulTextOut || a1 == BmpDevTextOut;
}
