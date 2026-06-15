/*
 * XREFs of ??4?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180060170
 * Callers:
 *     ?ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x180069020 (-ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV-$unique_struct@UtagPROPVAR.c)
 * Callees:
 *     <none>
 */

PROPVARIANT *__fastcall wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::operator=(
        PROPVARIANT *pvar,
        PROPVARIANT *a2)
{
  DWORD LastError; // ebx
  __int128 v5; // [rsp+20h] [rbp-18h]
  PROPVARIANT v6; // [rsp+40h] [rbp+8h]

  if ( pvar != a2 )
  {
    v5 = *(_OWORD *)a2;
    v6 = a2[2];
    *(_OWORD *)a2 = 0LL;
    a2[2] = 0LL;
    LastError = GetLastError();
    PropVariantClear(pvar);
    SetLastError(LastError);
    *(_OWORD *)pvar = v5;
    pvar[2] = v6;
  }
  return pvar;
}
