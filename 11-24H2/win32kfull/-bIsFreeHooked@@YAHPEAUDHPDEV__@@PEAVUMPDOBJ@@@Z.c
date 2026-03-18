/*
 * XREFs of ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1401B3864
 * Callers:
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1401B3130 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1401B3420 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsFreeHooked(struct DHPDEV__ *a1, struct UMPDOBJ *a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( !*((_BYTE *)a2 + 456) )
    return *((unsigned __int8 *)a1 + 16);
  return result;
}
