/*
 * XREFs of ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1C02BE654
 * Callers:
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C02BBD10 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C02BC0D0 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bIsFreeHooked(struct DHPDEV__ *a1, struct UMPDOBJ *a2)
{
  _BOOL8 result; // rax

  result = 1LL;
  if ( !*((_DWORD *)a2 + 110) )
    return *(_QWORD *)(*(_QWORD *)a1 + 408LL) != 0LL;
  return result;
}
